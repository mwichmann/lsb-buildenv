#!/usr/bin/perl
#
# generate list of libraries for lsbcc
#  
# Copyright (C) 2006, 2007 Linux Foundation
# 

use Mysql;

use Env qw(LSBUSER LSBDBPASSWD LSBDB LSBDBHOST);

$version = $ARGV[0];
if ( $version eq '' ) {
    printf("$ARGV[-1] <lsb version>\n");
    exit(-1);
}

$Dbh = Mysql->connect( $LSBDBHOST, $LSBDB, $LSBUSER, $LSBDBPASSWD )
  || die $Mysql::db_errstr;

$select  = "SELECT DISTINCT * FROM Library ";
$select .= "LEFT JOIN ModLib ON MLlid=Lid ";
$select .= "LEFT JOIN Module ON Mid=MLmid ";
$select .= "WHERE Mmandatorysince <= '$version' ";
$select .= "AND Mmandatorysince <> '' ";
$select .= "AND MLappearedin <= '$version' ";
$select .= "AND MLappearedin <> '' ";

print <<HEADER;
/* Generated file */

#ifndef LSBCC_LIBS_H
#define LSBCC_LIBS_H

typedef struct {
    char module_name[64];
    char **lib_names;
} lsb_lib_modules_t;

char *lsb_libs[] = {
HEADER

$th = $Dbh->query($select) || die $Dbh->errmsg();
for ( 1 .. $th->numrows ) {
    %entry    = $th->fetchhash;
    $libentry = $entry{'Lname'};
    if ( $libentry =~ m/^lib(.+)$/ ) {
        if ( $1 ne "stdcxx6" && $1 ne "stdcxx" ) {
            print "    \"$1\",\n";
        }
        # special-case png12: add png entry as well
        if ( $1 eq "png12" ) {
            print "    \"png\",\n";
        }
    }
}

printf "    NULL\n};\n\n";

$select = "SELECT Mid, Mname FROM Module;";
$th = $Dbh->query($select) || die $Dbh->errmsg();
for ( 1 .. $th->numrows ) {
    %entry = $th->fetchhash;

    $module_name = $entry{'Mname'};
    $module_name =~ s/^LSB_//;

    $select  = "SELECT DISTINCT * FROM Library ";
    $select .= "LEFT JOIN ModLib ON MLlid=Lid ";
    $select .= "LEFT JOIN Module ON Mid=MLmid ";
    $select .= "WHERE (Mmandatorysince > '$version' ";
    $select .= "OR Mmandatorysince = '') ";
    $select .= "AND MLappearedin <= '$version' ";
    $select .= "AND MLappearedin <> '' ";
    $select .= "AND Mid=$entry{'Mid'} ";
    $th2 = $Dbh->query($select) || die $Dbh->errmsg();

    if ( $th2->numrows ) {
        push( @modules, $module_name );
        printf "char *lsb_" . $module_name . "_libs[] = {\n";
    }
    for ( 1 .. $th2->numrows ) {
        %entry2   = $th2->fetchhash;
        $libentry = $entry2{'Lname'};
        if ( $libentry =~ m/^lib(.+)$/ ) {
            if ( $1 ne "stdcxx6" && $1 ne "stdcxx" ) {
                print "    \"$1\",\n";
            }
            # special-case png12: add a line for png as well
            if ( $1 eq "png12" ) {
                print "    \"png\",        /* Added for compat */\n";
            }
        }
    }
    if ( $th2->numrows ) {
        printf "    NULL\n};\n\n";
    }
}

printf "int lsb_num_modules = " . ( $#modules + 1 ) . ";\n\n";

printf "lsb_lib_modules_t lsb_modules[] = {\n";
foreach $module (@modules) {
    print "    {\"$module\", lsb_" . $module . "_libs},\n";
}
printf "};\n";

print <<HEADER;

char *lsb_cplus_libs[] = {
    "stdc++",
    NULL
};

#endif
HEADER
