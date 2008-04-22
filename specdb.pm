package specdb;

require Exporter;
@specdb::ISA = qw(Exporter);

push @libtodb::EXPORT, qw(
    $dbh $trace
);

push @libtodb::EXPORT, qw(
    &displayconstant &getBaseTypeID &getBaseTypeRecord
    &getArchitectureId &getHeaderId
    &getReturnTypes &getParameterTypes
    &isArchSpecificTypePresent
    &printLsbVersionBounds
);

#==== Global variables ==================================================

our $dbh;
our $trace;

#==== Common functions ==================================================

sub displayconstant($)
{
	local ($const) = @_;

	$selectConditions = "SELECT CAvalue FROM ConstantAttribute WHERE CAcid=".$const->{'Cid'}." AND CAtype='Condition'";
	$scth = $dbh->prepare($selectConditions) or die "Couldn't prepare $selectConditions query: ".DBI->errstr;
	$scth->execute or die "Couldn't execute $selectConditions query: ".DBI->errstr;
	for(1..$scth->rows) {
		$scentry = $scth->fetchrow_hashref;
		print $scentry->{'CAvalue'}."\n";
	}

	print "#define ";
	print $const->{'Cname'};
	print "\t";
	if( $const->{'Ctype'} eq 'string' ) {
		print "\"".$const->{'ACvalue'}."\"";
	} else {
		print $const->{'ACvalue'};
	}
	if( $const->{'Cdescription'} ) {
		print "\t/* ".$const->{'Cdescription'}." */";
	}
	print "\n";

	for(1..$scth->rows) {
		print "#endif\n";
	}
	$scth->finish;
}

sub getBaseTypeRecord($$)
{
 	local ($Aid,$basetype) = @_;
	$select = "SELECT * FROM Type ";
	$select.= "LEFT JOIN ArchType ON ATtid=Tid ";
	$select.= "WHERE Tid=".$basetype;
	$select.= " AND ATaid IN (1,$Aid,0)"; # Note that even if there are two records here only the first one will be processed
	$sth = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
	$sth->execute or die "Couldn't execute $select query: ".DBI->errstr;
	if( !$sth->rows ) {
		$sth->finish;
		# Hmm... Failed to get basetype on the current or generic architecture -
		#  let's try to get basetype on any architecture (not a good practice, but it's a usual situation
		#  in the current db)
		$select = "SELECT * FROM Type ";
		$select.= "LEFT JOIN ArchType ON ATtid=Tid ";
		$select.= "WHERE Tid=".$basetype;
# 		$select.= " GROUP BY ATtid ";
		$sth = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
		$sth->execute or die "Couldn't execute $select query: ".DBI->errstr;
	}
	return $sth;
}

##############################################
# Get identifiers for elements by their names
##############################################

sub getBaseTypeID($)
{
	local ($param) = @_;
	if( $$param{'ATbasetype'} != '' ) {
		$basetype = $$param{'ATbasetype'};
	}
	else {
		$selectBase = "SELECT ATbasetype FROM ArchType ";
		$selectBase.= "WHERE ATtid=".$$param{'Tid'}." ";
		$selectBase.= "GROUP BY ATbasetype";
		$sthBase = $dbh->prepare($selectBase) or die "Couldn't prepare $selectBase query: ".DBI->errstr;
		$sthBase->execute or die "Couldn't execute $selectBase query: ".DBI->errstr;
		if($sthBase->rows != 1) {
			die "Couldn't determine basetype for type ".$$param{'Tid'}." on $Aid architecture";
		}

		$base = $sthBase->fetchrow_hashref;
		$basetype = $base->{'ATbasetype'};
		$sthBase->finish;
	}

	return $basetype;
}

sub getArchitectureId($)
{
 	local ($archname) = @_;
	$select = "SELECT Aid FROM Architecture WHERE Aname='$archname'";
	print $select,"\n" if $trace;
	$sth = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
	$sth->execute or die "Couldn't execute $select query: ".DBI->errstr;

	if( !$sth->rows ) { $sth->finish; $dbh->disconnect; return 0; }
	$entry = $sth->fetchrow_hashref;
	$sth->finish;
	return $entry->{'Aid'};
}

sub getHeaderId($)
{
 	local ($headname) = @_;
	$select = "SELECT Hid, Hsrcerror FROM Header WHERE Hname='$headname'";
	print $select,"\n" if $trace;
	$sth = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
	$sth->execute or die "Couldn't execute $select query: ".DBI->errstr;

	if( !$sth->rows ) { $sth->finish; $dbh->disconnect; return 0; }
	$entry = $sth->fetchrow_hashref;
	$sth->finish;
	return ($entry->{'Hid'}, $entry->{'Hsrcerror'} );
}

####################################################
# Get different elements assigned to a given header
####################################################

# set hash for types used as return types of interfaces from the header
sub getReturnTypes($$$)
{
	my %type;
	undef %type;

	$Hid = $_[0];
	$Aid = $_[1];
	$lsbversion = $_[2];
	$select = "SELECT DISTINCT Ireturn FROM Interface ";
	$select.= "LEFT JOIN ArchInt ON Iid=AIint ";
	$select.= "WHERE Iheader=$Hid AND Isrcbin<>'BinOnly' ";
	if( $lsbversion eq "All" ) {
		$select.= "AND AIappearedin<>'' ";
	}
	else {
		$select.= "AND AIappearedin <= '$lsbversion' AND AIappearedin<>'' ";
		$select.= "AND (AIwithdrawnin IS NULL OR AIwithdrawnin >'$lsbversion') ";
	}
	$select.= "AND AIarch=$Aid ";
	if( $Aid!=1 ) {
		$select.= "AND Iid NOT IN ";
		$select.= "(SELECT AIint FROM ArchInt";
		$select.= " WHERE AIarch=1 ";
		if( $lsbversion eq "All" ) {
			$select.= "AND AIappearedin<>'' ";
		}
		else {
			$select.= "AND (AIappearedin <= '$lsbversion' and AIappearedin<>'') ";
			$select.= "AND (AIwithdrawnin IS NULL OR AIwithdrawnin >'$lsbversion') ) ";
		}
	}

	print $select,"\n" if $trace;
	$sth = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
	$sth->execute or die "Couldn't execute $select query: ".DBI->errstr;
	for(1..$sth->rows) {
		$entry = $sth->fetchrow_hashref;
		if ($entry->{'Ireturn'}) {
			$type{$entry->{'Ireturn'}}=1;
		}
	}
	$sth->finish;

	return %type;
}

sub getParameterTypes($$$)
{
	my %type;
	undef %type;

	$Hid = $_[0];
	$Aid = $_[1];
	$lsbversion = $_[2];
	$select = "SELECT DISTINCT Ptype FROM Parameter, Interface ";
	$select.= "LEFT JOIN ArchInt ON Iid=AIint ";
	$select.= "WHERE Iheader=$Hid ";
	$select.= "AND Pint=Iid ";
	if( $lsbversion eq "All" ) {
		$select.= "AND AIappearedin<>'' ";
	}
	else {
		$select.= "AND AIappearedin <= '$lsbversion' and AIappearedin<>'' ";
		$select.= "AND (AIwithdrawnin IS NULL OR AIwithdrawnin >'$lsbversion') ";
	}
	$select.= "AND AIarch=$Aid AND Isrcbin <>'BinOnly' ";
	if( $Aid!=1 ) {
		$select.= "AND Iid NOT IN ";
		$select.= "(SELECT Iid FROM Interface";
		$select.= " LEFT JOIN ArchInt ON Iid=AIint";
		$select.= " WHERE AIarch=1 ";
		if( $lsbversion eq "All" ) {
			$select.= "AND AIappearedin<>'' ";
		}
		else {
			$select.= "AND (AIappearedin <= '$lsbversion' and AIappearedin<>'') ";
			$select.= "AND (AIwithdrawnin IS NULL OR AIwithdrawnin >'$lsbversion') ) ";
		}
	}

	print $select,"\n" if $trace;
	$sth = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
	$sth->execute or die "Couldn't execute $select query: ".DBI->errstr;
	for(1..$sth->rows) {
		$entry = $sth->fetchrow_hashref;
		if ($entry->{'Ptype'}) {
			$type{$entry->{'Ptype'}}=1;
		}
	}
	$sth->finish;

	return %type;
}

####################################################
# Common checks for db data
####################################################

sub isGenericTypePresent($$)
{
	$Tid = $_[0];
	$lsbversion = $_[1];
	$found = 0;

	$selectArchSpec = "SELECT Tid FROM Type ";
	$selectArchSpec.= "LEFT JOIN ArchType ON ATtid=Tid ";
	$selectArchSpec.= "WHERE Tid = $Tid ";
	$selectArchSpec.= " AND ATaid = 1 ";
	if( $lsbversion eq "All" ) {
		$selectArchSpec.= "AND ( ATappearedin<>'' ";
	}
	else {
		$selectArchSpec.= "AND ( ( (ATappearedin <= '$lsbversion' and ATappearedin<>'') ";
		$selectArchSpec.= "AND (ATwithdrawnin IS NULL OR ATwithdrawnin >'$lsbversion') ) ";
	}
	$selectArchSpec.= "OR Tsrconly = 'Yes' OR Tconly = 'Yes'  ) ";
	print $selectArchSpec,"\n" if $trace;
	$thArchSpec = $dbh->prepare($selectArchSpec) or die "Couldn't prepare $selectArchSpec query: ".DBI->errstr;
	$thArchSpec->execute or die "Couldn't execute $selectArchSpec query: ".DBI->errstr;
	if( $thArchSpec->rows ) {
		# Generic records present - skip arch specific
		$found = 1;
	}
	$thArchSpec->finish;

	return $found
}

####################################################
# Routines to work with __LSB_VERSION__ constant
####################################################

sub printLsbVersionBounds($$$$)
{
	($oldVersionAppeared, $oldVersionWithdrawn, $appearedin, $withdrawnin) = ($_[0],$_[1],$_[2],$_[3]);

	if( $appearedin ne $oldVersionAppeared ) {
		if( $oldVersionWithdrawn ) {
			print "#endif /* __LSB_VERSION__ < $oldVersionWithdrawn */\n\n";
		}

		if( $oldVersionAppeared ) {
			print "#endif /* __LSB_VERSION__ >= $oldVersionAppeared */\n\n";
		}

		$appearedin =~ s/\.//g;
		print "#if __LSB_VERSION__ >= ".$appearedin."\n";

		$oldVersionWithdrawn = '';
	}

	if( $withdrawnin and ( $withdrawnin ne $oldVersionWithdrawn ) ) {
		if( $oldVersionWithdrawn ) {
			print "#endif /* __LSB_VERSION__ < $oldVersionWithdrawn */\n\n";
		}

		$withdrawnin =~ s/\.//g;
		print "#if __LSB_VERSION__ < ".$withdrawnin."\n";
	}
}

# Return 1 to avoid compilation error
1;
