#!/usr/bin/perl

use DBI;

use Env qw(LSBUSER LSBDBPASSWD LSBDB LSBDBHOST);

$version = $ARGV[0];
if ($version eq '') {
	printf("$ARGV[-1] <lsb version>\n");
	exit(-1);
}

$dbh = DBI->connect('DBI:mysql:database='.$LSBDB.';host='.$LSBDBHOST, $LSBUSER, $LSBDBPASSWD)
    or die "Couldn't connect to database: ".DBI->errstr;

$select  = "SELECT DISTINCT * FROM Library ";
$select .="LEFT JOIN ModLib ON MLlid=Lid ";
$select .="LEFT JOIN SubModule ON SMid=MLmid ";
$select .="WHERE SMmandatorysince <= '$version' ";
$select .="AND SMmandatorysince <> '' ";
$select .="AND MLappearedin <= '$version' ";

print <<HEADER;
#ifndef LSBCC_LIBS_H
#define LSBCC_LIBS_H

/* This is a generated file, do not edit */

typedef struct {
	char	module_name[64];
	char	**lib_names;
} lsb_lib_modules_t;

char *lsb_libs[] = {
HEADER

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

printf "\tNULL\n};\n\n";


$select  = "SELECT SMid, SMname FROM SubModule";
$th = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
$th->execute or die "Couldn't execute $select query: ".DBI->errstr;
for(1..$th->rows) {
	$entry = $th->fetchrow_hashref;

	$module_name = $entry->{'SMname'};
	$module_name =~ s/^LSB_//;

	$select  = "SELECT DISTINCT * FROM Library ";
	$select .="LEFT JOIN ModLib ON MLlid=Lid ";
	$select .="LEFT JOIN SubModule ON SMid=MLmid ";
	$select .="WHERE (SMmandatorysince > '$version' ";
	$select .="OR SMmandatorysince = '') ";
	$select .="AND MLappearedin <= '$version' ";
	$select .="AND SMid = $entry->{'SMid'} ";
	$th2 = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
	$th2->execute or die "Couldn't execute $select query: ".DBI->errstr;
	if ($th2->rows) {
		push(@modules, $module_name);
		printf "char *lsb_" . $module_name . "_libs[] = {\n";
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

printf "int	lsb_num_modules = " . ($#modules + 1) . ";\n\n";

printf "lsb_lib_modules_t lsb_modules[] = {\n";
foreach $module (@modules) {
	print "\t{\"$module\", lsb_" . $module . "_libs },\n";
}
printf "};\n";

print <<HEADER;

char *lsb_cplus_libs[] = {
	"stdc++",
	NULL
};

#endif
HEADER

$dbh->disconnect;
