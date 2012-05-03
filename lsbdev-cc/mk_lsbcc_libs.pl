#!/usr/bin/perl
#
# Copyright 2009-2012 Linux Foundation
#
# This file is part of lsbcc.  lsbcc is free software, covered
# under the terms of the BSD license.

use DBI;

use Env qw(LSBUSER LSBDBPASSWD LSBDB LSBDBHOST);

open(my $lsbfile, "lsb_versions");
@lsbversions = <$lsbfile>;
close $lsbfile;
chomp @lsbversions;

open(my $lsbdevfile, "lsb_devel_versions");
@lsbdevversions = <$lsbdevfile>;
close $lsbdevfile;
chomp @lsbdevversions;

$dbh = DBI->connect('DBI:mysql:database='.$LSBDB.';host='.$LSBDBHOST, $LSBUSER, $LSBDBPASSWD)
    or die "Couldn't connect to database: ".DBI->errstr;

print <<HEADER;
#ifndef LSBCC_LIBS_H
#define LSBCC_LIBS_H

/* This is a generated file, do not edit */

typedef struct {
    char    module_name[64];
    char    **lib_names;
} lsb_lib_modules_t;

HEADER

foreach $version (@lsbversions, @lsbdevversions) {
    $vername = $version;
    $vername =~ s/\.//;
    print "char *lsb_libs_".$vername."[] = {\n";
    $select  = "SELECT DISTINCT * FROM Library ";
    $select .= "LEFT JOIN SModLib ON SMLlid=Lid ";
    $select .= "LEFT JOIN SubModule ON SMid=SMLsmid ";
    $select .= "WHERE SMmandatorysince <= '$version' ";
    $select .= "AND SMmandatorysince <> '' ";
    $select .= "AND SMLappearedin <= '$version' ";
    $select .= "AND (SMLwithdrawnin IS NULL OR SMLwithdrawnin > '$version') ";
    $select .= "ORDER BY Lname";

    $th = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
    $th->execute or die "Couldn't execute $select query: ".DBI->errstr;
    for(1..$th->rows) {
        $entry = $th->fetchrow_hashref;
        $libentry = $entry->{'Lname'};
        if ($libentry =~ m/^lib(.+)$/) {
            if ($1 ne "stdcxx6" && $1 ne "stdcxx") {
                print "\t\"$1\",\n";
                # special-case png12: add png as recognized
                if ($1 eq "png12") {
                    print "\t\"png\",\n";
                }
            }
        }
    }
    $th->finish;
    print "NULL\n};\n"
}

print "char **lsb_libs[] = {\n";
foreach $version (@lsbversions, @lsbdevversions) {
    $vername = $version;
    $vername =~ s/\.//;
    print "\tlsb_libs_$vername,\n";
}
print "\tNULL\n};\n\n";

# optional/trial-use modules
foreach $version (@lsbversions, @lsbdevversions) {
    $vername = $version;
    $vername =~ s/\.//;
    @modules = ();
    $select  = "SELECT SMid, SMname FROM SubModule";
    $th = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
    $th->execute or die "Couldn't execute $select query: ".DBI->errstr;
    for(1..$th->rows) {
    $entry = $th->fetchrow_hashref;

    $module_name = $entry->{'SMname'};
    $module_name =~ s/^LSB_//;

    $select  = "SELECT DISTINCT * FROM Library ";
    $select .= "LEFT JOIN SModLib ON SMLlid=Lid ";
    $select .= "LEFT JOIN SubModule ON SMid=SMLsmid ";
    $select .= "WHERE (SMmandatorysince > '$version' ";
    $select .= "OR SMmandatorysince = '') ";
    $select .= "AND SMLappearedin <= '$version' ";
    $select .= "AND (SMLwithdrawnin IS NULL ";
    $select .= "OR SMLwithdrawnin > '$version') ";
    $select .= "AND SMid = $entry->{'SMid'} ";
    $select .= "ORDER BY Lname";
    $th2 = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
    $th2->execute or die "Couldn't execute $select query: ".DBI->errstr;
    if ($th2->rows) {
        push(@modules, $module_name);
            printf "char *lsb_" . $module_name . "_libs_".$vername."[] = {\n";
    }
    for(1..$th2->rows) {
        $entry2 = $th2->fetchrow_hashref;
        $libentry = $entry2->{'Lname'};
        if ($libentry =~ m/^lib(.+)$/) {
            if ($1 ne "stdcxx6" && $1 ne "stdcxx") {
                print "\t\"$1\",\n";
                # special-case png12: add png as recognized
                if ($1 eq "png12") {
                    print "\t\"png\",\n";
                }
            }
        }
    }
    if ($th2->rows) {
        printf "\tNULL\n};\n\n";
    }
    $th2->finish;
    }
    $th->finish;

    printf "#define lsb_num_modules_$vername " . ($#modules + 1) . "\n\n";

    printf "lsb_lib_modules_t lsb_modules_".$vername."[] = {\n";
    foreach $module (@modules) {
        print "\t{\"$module\", lsb_" . $module . "_libs_".$vername." },\n";
    }
    printf "};\n\n";
}

print "lsb_lib_modules_t *lsb_modules[] = {\n";
foreach $version (@lsbversions, @lsbdevversions) {
    $vername = $version;
    $vername =~ s/\.//;
    print "\tlsb_modules_$vername,\n";
}
print "\tNULL\n};\n\n";

print "int lsb_num_modules[] = {\n";
foreach $version (@lsbversions, @lsbdevversions) {
    $vername = $version;
    $vername =~ s/\.//;
    print "\tlsb_num_modules_$vername,\n";
}
print "\t0\n};\n\n";

# deprecated modules
foreach $version (@lsbversions, @lsbdevversions) {
    $vername = $version;
    $vername =~ s/\.//;
    @modules = ();
    $select  = "SELECT SMid, SMname FROM SubModule";
    $xh = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
    $xh->execute or die "Couldn't execute $select query: ".DBI->errstr;
    for(1..$xh->rows) {
    $entry = $xh->fetchrow_hashref;

    $module_name = $entry->{'SMname'};
    $module_name =~ s/^LSB_//;

    $select  = "SELECT DISTINCT * FROM Library ";
    $select .= "LEFT JOIN SModLib ON SMLlid=Lid ";
    $select .= "LEFT JOIN SubModule ON SMid=SMLsmid ";
    $select .= "WHERE SMid = $entry->{'SMid'} ";
    $select .= "AND (SMdeprecatedsince IS NOT NULL ";
    $select .= "AND SMdeprecatedsince <= '$version') ";
    $select .= "AND (SMmandatorysince <> '' ";
    $select .= "AND SMmandatorysince <= '$version') ";
    $select .= "AND SMLappearedin <= '$version' ";
    $select .= "AND (SMLwithdrawnin IS NULL ";
    $select .= "OR SMLwithdrawnin > '$version') ";
    $select .= "ORDER BY Lname";

    $xh2 = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
    $xh2->execute or die "Couldn't execute $select query: ".DBI->errstr;
    if ($xh2->rows) {
        push(@modules, $module_name);
            printf "char *lsb_" . $module_name . "_libs_".$vername."[] = {\n";
    }
    for(1..$xh2->rows) {
        $entry2 = $xh2->fetchrow_hashref;
        $libentry = $entry2->{'Lname'};
        if ($libentry =~ m/^lib(.+)$/) {
            if ($1 ne "stdcxx6" && $1 ne "stdcxx") {
                print "\t\"$1\",\n";
                # special-case png12: add png as recognized
                if ($1 eq "png12") {
                    print "\t\"png\",\n";
                }
            }
        }
    }
    if ($xh2->rows) {
        printf "\tNULL\n};\n\n";
    }
    $xh2->finish;
    }
    $xh->finish;

    printf "#define lsb_num_deprecated_modules_".$vername." " . ($#modules + 1) . "\n\n";

    printf "lsb_lib_modules_t lsb_deprecated_modules_".$vername."[] = {\n";
    foreach $module (@modules) {
        print "\t{\"$module\", lsb_" . $module . "_libs_".$vername." },\n";
    }
    printf "};\n\n";
}

print "lsb_lib_modules_t *lsb_deprecated_modules[] = {\n";
foreach $version (@lsbversions, @lsbdevversions) {
    $vername = $version;
    $vername =~ s/\.//;
    print "\tlsb_deprecated_modules_$vername,\n";
}
print "\tNULL\n};\n\n";

print "int lsb_num_deprecated_modules[] = {\n";
foreach $version (@lsbversions, @lsbdevversions) {
    $vername = $version;
    $vername =~ s/\.//;
    print "\tlsb_num_deprecated_modules_$vername,\n";
}
print "\t0\n};\n\n";

print "inline int get_version_index( char* vername ) {\n";
$index = 0;
foreach $version (@lsbversions) {
    print "\tif( strcmp(vername, \"$version\") == 0 ) {\n";
    print "\t\t return $index;\n";
    print "\t}\n";
    $index++;
}
print "#ifndef SKIP_DEVEL_VERSIONS\n";
foreach $version (@lsbdevversions) {
    print "\tif( strcmp(vername, \"$version\") == 0 ) {\n";
    print "\t\t return $index;\n";
    print "\t}\n";
    $index++;
}
print "#endif /* SKIP_DEVEL_VERSIONS */\n";
print "\telse {\n";
print "\t\treturn -1;\n";
print "\t}\n";
print "}\n";

print <<HEADER;

char *lsb_cplus_libs[] = {
    "stdc++",
    NULL
};

#endif
HEADER

$dbh->disconnect;
