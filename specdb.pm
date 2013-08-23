package specdb;

require Exporter;
@specdb::ISA = qw(Exporter);

push @libtodb::EXPORT, qw(
    $dbh $trace $header_appin
);

push @libtodb::EXPORT, qw(
    &displayconstant &getBaseTypeID &getBaseTypeRecord
    &getArchitectureId &getHeaderId
    &getReturnTypes &getParameterTypes
    &isArchSpecificTypePresent
    &printLsbVersionBounds
    &displayType &displaytyperef &display_interface
);

#==== Global variables ==================================================

our $dbh;
our $trace;
our $header_appin;
our $TMaid, $ArchId, $HGid;
our $typefuncptr, $funcPtrName;
our %processed_typedefs;
our $datadef; # flag indicating if we should work in mkheader or mkdatadef style
our %roottypes = ();

our %RootBases = (
    "Intrinsic" => 1,
    "Enum" => 1,
    "Struct" => 1,
    "FuncPtr" => 1,
    "Union" => 1,
    "Class" => 1,
    "TemplateInstance" => 1,
    "Typedef" => 1
);

our ($type_Q, $basetype_Q, $baserecord_Q, $baserecord_allarch_Q);

# $dbh must be set before this function is called!
sub prepareQueries()
{
    $type_Q = $dbh->prepare('
        SELECT Type.*, ATbasetype, ATsize FROM Type
        LEFT JOIN ArchType ON ATtid=Tid
        WHERE Tid = ? ') or die "Cannot prepare type_Q query";

    $basetype_Q = $dbh->prepare('
        SELECT DISTINCT ATbasetype FROM ArchType
        WHERE ATtid = ?') or die "Cannot prepare basetype_Q query";

    $baserecord_Q = $dbh->prepare('
        SELECT * FROM Type
        LEFT JOIN ArchType ON ATtid=Tid
        WHERE Tid = ?
        AND ATaid IN (1,?)') or die "Cannot prepare baserecord_Q query";

    $baserecord_allarch_Q = $dbh->prepare('
        SELECT * FROM Type
        LEFT JOIN ArchType ON ATtid=Tid
        WHERE Tid = ?') or die "Cannot prepare baserecord_allarch_Q query";
}

sub finishQueries()
{
    $type_Q->finish;
    $basetype_Q->finish;
    $baserecord_Q->finish;
    $baserecord_allarch_Q->finish;
}


#==== Common functions ==================================================

sub getBaseTypeRecord($$)
{
    local ($Aid,$basetype) = @_;
    if( !$basetype ) {
        $basetype=0;
    }

    if( $trace ) {
        $select = "SELECT * FROM Type ";
        $select.= "LEFT JOIN ArchType ON ATtid=Tid ";
        $select.= "WHERE Tid=".$basetype;
        $select.= " AND ATaid IN (1,$Aid)"; # Note that even if there are two records here only the first one will be processed
        print $select."\n" if $trace;
    }
    #~ $sth = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
    #~ $sth->execute or die "Couldn't execute $select query: ".DBI->errstr;
    $baserecord_Q->execute($basetype,$Aid) or die "Couldn't execute baserecord_Q query for Tid=$basetype, Aid=$Aid: ".DBI->errstr;;
    $sth = $baserecord_Q;

    if( !$baserecord_Q->rows ) {
        #~ $sth->finish;
        # Hmm... Failed to get basetype on the current or generic architecture -
        #  let's try to get basetype on any architecture (not a good practice and should be caught
        # by consistency checkers; but let's use such an approach, just not to break
        # headers generation; finally, it's very likely that we'll obtain correct header).
        if( $trace ) {
            $select = "SELECT * FROM Type ";
            $select.= "LEFT JOIN ArchType ON ATtid=Tid ";
            $select.= "WHERE Tid=".$basetype;
            print $select."\n" if $trace;
        }
        #~ $sth = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
        #~ $sth->execute or die "Couldn't execute $select query: ".DBI->errstr;
        $baserecord_allarch_Q->execute($basetype) or die "Couldn't execute baserecord_Q query for Tid=$basetype: ".DBI->errstr;;
        $sth = $baserecord_allarch_Q;
    }
    return $sth;
}

# For series of inheritance (e.g. pointer to pointer to typedef to struct)
# we need to know the root of the chain
sub calculateInitialBaseType($$)
{
    local ($Aid,$basetype) = @_;
    local $newTid = 0;
    local $NewSth;
    local $entry;

    if( $roottypes{($Aid,$basetype)} ) {
        return $roottypes{($Aid,$basetype)};
    }

    $sth = getBaseTypeRecord($Aid,$basetype);
    $entry = $sth->fetchrow_hashref;
    $sth->finish;

    if( $RootBases{$entry->{'Ttype'}} ) {
        return $entry->{'Ttype'};
    }

    $NewSth = getBaseTypeRecord($Aid,$entry->{'Tid'});
    $NewEntry = $NewSth->fetchrow_hashref;
    $NewSth->finish;

    $NewTid = getBaseTypeID($NewEntry);
    if( !$NewTid ) {
        # Quite bad, such inconcistencies should be checked in some other place
        return 'None';
    }

    $roottypes{($Aid,$basetype)} = calculateInitialBaseType($Aid, $NewTid);

    return $roottypes{($Aid,$basetype)};
}

##############################################
# Get identifiers for elements by their names
##############################################

sub getBaseTypeID($)
{
    local ($param) = @_;
    local ($Tid);
    if( $$param{'ATbasetype'} != '' ) {
        return $$param{'ATbasetype'};
    }

    $Tid = $$param{'Tid'} ? $$param{'Tid'} : 0;
    if( $trace ) {
        $selectBase = "SELECT DISTINCT ATbasetype FROM ArchType ";
        $selectBase.= "WHERE ATtid=".$$param{'Tid'}; #$Tid ";
        print $selectBase."\n" if $trace;
    }

    #~ $sthBase = $dbh->prepare($selectBase) or die "Couldn't prepare $selectBase query: ".DBI->errstr;
    #~ $sthBase->execute or die "Couldn't execute $selectBase query: ".DBI->errstr;

    $basetype_Q->execute($$param{'Tid'}) or die "Couldn't execute basetype_Q query for ATtid=".$$param{'Tid'}.": ".DBI->errstr;

    if( $basetype_Q->rows != 1 ) {
        die "Couldn't determine basetype for type $Tid ($ArchId architecture)";
    }

    $base = $basetype_Q->fetchrow_hashref;
    $basetype = $base->{'ATbasetype'};
    #~ $sthBase->finish;

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

sub getHeaderId($$)
{
    local ($headname, $lsbversion) = ($_[0],$_[1]);
    $select = "SELECT Hid, Hsrcerror FROM Header WHERE Hname='$headname'";
    if( $lsbversion ) {
        $select.= "AND Happearedin > '' AND Happearedin <= '$lsbversion' ";
        $select.= "AND (Hwithdrawnin IS NULL OR Hwithdrawnin > '$lsbversion') ";
    }
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
    $select = "SELECT DISTINCT AIreturn FROM Interface ";
    $select.= "LEFT JOIN ArchInt AS ArchIntMain ON Iid=AIint ";
    $select.= "WHERE Iheader=$Hid AND Isrcbin<>'BinOnly' ";
    if( $lsbversion eq "All" ) {
        $select.= "AND AIappearedin > '' ";
    }
    else {
        $select.= "AND AIappearedin <= '$lsbversion' AND AIappearedin > '' ";
        $select.= "AND (AIwithdrawnin IS NULL OR AIwithdrawnin >'$lsbversion') ";
    }
    $select.= "AND AIarch=$Aid ";
    if( $Aid!=1 ) {
        $select.= "AND Iid NOT IN ";
        $select.= "(SELECT AIint FROM ArchInt AS ArchIntSupporting ";
        $select.= " WHERE AIarch=1 AND ArchIntMain.AIint=ArchIntSupporting.AIint ";
        if( $lsbversion eq "All" ) {
            $select.= "AND AIappearedin > '' ";
        }
        else {
            $select.= "AND AIappearedin <= '$lsbversion' AND AIappearedin > '' ";
            $select.= "AND (AIwithdrawnin IS NULL OR AIwithdrawnin >'$lsbversion') ) ";
        }
    }

    print $select,"\n" if $trace;
    $sth = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
    $sth->execute or die "Couldn't execute $select query: ".DBI->errstr;
    for(1..$sth->rows) {
        $entry = $sth->fetchrow_hashref;
        if ($entry->{'AIreturn'}) {
            $type{$entry->{'AIreturn'}}=1;
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
    $select.= "LEFT JOIN ArchInt AS ArchIntMain ON Iid=AIint ";
    $select.= "WHERE Iheader=$Hid ";
    $select.= "AND Pint=Iid ";
    if( $lsbversion eq "All" ) {
        $select.= "AND AIappearedin > '' ";
    }
    else {
        $select.= "AND AIappearedin <= '$lsbversion' AND AIappearedin > '' ";
        $select.= "AND (AIwithdrawnin IS NULL OR AIwithdrawnin >'$lsbversion') ";
    }
    $select.= "AND AIarch=$Aid AND Isrcbin <>'BinOnly' ";
    if( $Aid!=1 ) {
        $select.= "AND Iid NOT IN ";
        $select.= "(SELECT Iid FROM Interface";
        $select.= " LEFT JOIN ArchInt AS ArchIntSupporting ON Iid=AIint";
        $select.= " WHERE AIarch=1 AND ArchIntMain.AIint=ArchIntSupporting.AIint ";
        if( $lsbversion eq "All" ) {
            $select.= "AND AIappearedin<>'' ";
        }
        else {
            $select.= "AND AIappearedin <= '$lsbversion' AND AIappearedin > '' ";
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
        $selectArchSpec.= "AND ( ATappearedin > '' ";
    }
    else {
        $selectArchSpec.= "AND ( ( ATappearedin <= '$lsbversion' AND ATappearedin > '' ";
        $selectArchSpec.= "AND (ATwithdrawnin IS NULL OR ATwithdrawnin >'$lsbversion') ) ";
    }
    $selectArchSpec.= "OR Tsrconly = 'Yes' OR Tconly = 'Yes' ) LIMIT 1";
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

    if( $appearedin gt $oldVersionAppeared and $appearedin gt $header_appin ) {
        if( $oldVersionWithdrawn ) {
            print "#endif /* __LSB_VERSION__ < $oldVersionWithdrawn */\n\n";
        }

        if( $oldVersionAppeared and $oldVersionAppeared gt $header_appin ) {
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

##########################################################
# Function to display declarations of different entities
##########################################################
#
# Display constant declaration
#
sub displayconstant($)
{
    local ($const) = @_;

    # If we have 'Declaration' attribute, then the value of this attribute should be printed instead
    # of 'normal' constant declaration using '#define <ACvalue>'
    $selectDeclarations = "SELECT CAvalue FROM ConstantAttribute WHERE CAcid=".$const->{'Cid'}." AND CAtype='Declaration'";
    $scth = $dbh->prepare($selectDeclarations) or die "Couldn't prepare $selectDeclarations query: ".DBI->errstr;
    $scth->execute or die "Couldn't execute $selectDeclarations query: ".DBI->errstr;
    if($scth->rows) {
        $scentry = $scth->fetchrow_hashref;
        print $scentry->{'CAvalue'}."\n";
        $scth->finish;
        return;
    }
    $scth->finish;

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

#
# Display type declaration
#
sub displaytype($$$$$)
{
    # $typeAppeared and $typeWithdrawn are spec version bounds where the type is included
    # $lsbversion specifies particular LSB version for which information should be dumped.
    #   If empty, declarations will be dumped for all versions.
    local ($type,$nameonly,$typeAppeared,$typeWithdrawn,$lsbversion) = @_;
    local (*entry,*tentry,*tmentry,*dtentry);
    local($th);
    local($tmh, $dth, $dsth);
    local($RootBase);

    # handle opaque types better ...
    if( $$type{'Ttype'} eq "" and ($nameonly or $datadef) ) {
        print $$type{'Tname'};
        return;
    }

    if( $$type{'Ttype'} eq "Intrinsic" or $$type{'Ttype'} eq "Literal" ) {
        print $$type{'Tname'}."\t";
        return;
    }

    if( $$type{'Ttype'} eq "Volatile" ) {
        $basetype = getBaseTypeID($type);
        $sth = getBaseTypeRecord($ArchId,$basetype);
        $entry = $sth->fetchrow_hashref;
        $sth->finish;
        if( $entry->{'Ttype'} eq "Pointer" || $entry->{'Ttype'} eq "Array" ) {
            displaytype($entry,$nameonly,$typeAppeared,$typeWithdrawn,$lsbversion);
            print "volatile ";
        } else {
            print "volatile ";
            displaytype($entry,$nameonly,$typeAppeared,$typeWithdrawn,$lsbversion);
        }
        return;
    }

    if( $$type{'Ttype'} eq "Const" ) {
        $basetype = getBaseTypeID($type);
        $sth = getBaseTypeRecord($ArchId,$basetype);
        $entry = $sth->fetchrow_hashref;
        $sth->finish;
        if( $entry->{'Ttype'} eq "Pointer" || $entry->{'Ttype'} eq "Array" ) {
            displaytype($entry,$nameonly,$typeAppeared,$typeWithdrawn,$lsbversion);
            print "const ";
        } else {
            print "const ";
            displaytype($entry,$nameonly,$typeAppeared,$typeWithdrawn,$lsbversion);
        }
        return;
    }

    if( $$type{'Ttype'} eq "Typedef" ) {
        if (!$nameonly) {
            print "typedef ";
            $typefuncptr=0;
        }
        $basetype = getBaseTypeID($type);
        $sth = getBaseTypeRecord($ArchId,$basetype);
        $entry = $sth->fetchrow_hashref;
        $sth->finish;

        local $RootBase = calculateInitialBaseType($ArchId,$basetype);

        if( $RootBase eq 'FuncPtr' && !$nameonly ) {
            $typefuncptr=1;
            $deriviation.= " ".$$type{'Tname'};
            if( $entry->{'Ttype'} eq 'Array' ) {
                $deriviation.= "[".$entry->{'ATsize'}."]";
            }
        }

        # Something about anon or not & wether to set nameonly
        if (!$nameonly) {
            if( ( $entry->{'Ttype'} eq 'Typedef' || $entry->{'Ttype'} eq 'FuncPtr' ||
                    $entry->{'Ttype'} eq 'Function' ) || $entry->{'Theadgroup'} != $HGid ) {
                if($entry->{'Ttype'} eq 'FuncPtr' || $entry->{'Ttype'} eq 'Function') {
                    $funcPtrName = '';
                }
                displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);
            } elsif( ($entry->{'Ttype'} eq 'Struct' || $entry->{'Ttype'} eq 'Union') && $entry->{'Theadgroup'} == $HGid  ) {
                # In case of datadef, we don't bother about types dependencies,
                # so let's simply dump unions/structs declarations inside typedef declaration.
                if( $entry->{'Tname'} !~ "anon" and !$datadef ) {
                    displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);
                } else {
                    displaytype($entry,0,$typeAppeared,$typeWithdrawn,$lsbversion);
                }
            } else {
                if( $entry->{'Theadgroup'} == $HGid or $entry->{'Tname'} =~ "anon" ) {
                    # If we are here, we either have anon type or enum from the same header.
                    # Enum declaration can be safely dumped inside typedef declaration, since it doesn't
                    # have any dependencies on other types.
                    displaytype($entry,0,$typeAppeared,$typeWithdrawn,$lsbversion);
                }
                else {
                    displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);
                }
            }
        }

        if( ($entry->{'Ttype'} ne 'Function' and $entry->{'Ttype'} ne 'FuncPtr' and $RootBase ne 'FuncPtr') || $nameonly ) {
            $typedef_name = $$type{'Tunmangled'} ? $$type{'Tunmangled'} : $$type{'Tname'};
            print $typedef_name."\t";
        }

        if( $entry->{'Ttype'} eq 'Array' && $nameonly==0 && $RootBase ne 'FuncPtr') {
            print "[".$entry->{'ATsize'}."]";
        }
        if( !$nameonly && $$type{'ATattribute'} ) {
            print "__attribute__ (".$$type{'ATattribute'}.")";
        }
        if (!$nameonly) {
            if( $$type{'Tdescription'} ) {
                print "/* ".$$type{'Tdescription'}." */";
            }
            print "\n";
        }

        # We can have different typedefs on the same anonymous enums and structs;
        # let's print declarations of all such enums in one place,
        # without redeclaring enum members
        if( ($entry->{'Ttype'} eq 'Enum' or $entry->{'Ttype'} eq 'Struct') and !$entry->{'Tname'} ) {
            $DervidedTypes = $entry->{'Tid'};
            $deriviations{$entry->{'Tid'}} = "";
            $cur_deriviation = "";

            $lastType = $entry->{'Tid'};
            while( $lastType ) {
                $calcDerivedTypes = "SELECT Tid FROM Type ";
                $calcDerivedTypes.= "JOIN ArchType ON ATtid=Tid ";
                $calcDerivedTypes.= "WHERE Ttype = 'Pointer' ";
                $calcDerivedTypes.= "AND ATbasetype = $lastType ";
                print $calcDerivedTypes."\n" if($trace);
                $dth = $dbh->prepare($calcDerivedTypes) or die "Couldn't prepare $calcDerivedTypes query: ".DBI->errstr;
                $dth->execute or die "Couldn't execute $calcDerivedTypes query: ".DBI->errstr;
                if( $dth->rows ) {
                    $dtentry = $dth->fetchrow_hashref;
                    $DervidedTypes.= ", ".$dtentry->{'Tid'};
                    $lastType = $dtentry->{'Tid'};
                    $cur_deriviation.= '*';
                    $deriviations{$lastType} = $cur_deriviation;
                }
                else {
                    $lastType = 0;
                }
                $dth->finish;
            }

            #~ $select = "SELECT * FROM Type ";
            $select = "SELECT DISTINCT Tid, Tname, ATbasetype FROM Type ";
            $select.= "LEFT JOIN ArchType ON ATtid=Tid ";
            $select.= "WHERE Theadgroup = $HGid ";
            $select.= "AND Tid != ".$$type{'Tid'}." ";
            $select.= "AND Ttype = 'Typedef' ";
            $select.= "AND ATappearedin > '' ";
            $select.= "AND ATbasetype IN ($DervidedTypes) ";
            print $select."\n" if ($trace);
            $dsth = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
            $dsth->execute or die "Couldn't execute $select query: ".DBI->errstr;

            for( 1..$dsth->rows ) {
                $dtentry = $dsth->fetchrow_hashref;
                print ", ";
                print $deriviations{$dtentry->{'ATbasetype'}};
                print $dtentry->{'Tname'};
                $processed_typedefs{$dtentry->{'Tid'}} = 1;
            }
            $dsth->finish;
        }

        return;
    }

    if( $$type{'Ttype'} eq "Pointer" or $$type{'Ttype'} eq "Ref" ) {
        $symbol = $$type{'Ttype'} eq "Ref" ? '&' : '*';
        $basetype = getBaseTypeID($type);
        $RootBase = calculateInitialBaseType($ArchId,$basetype);

        if( $RootBase eq 'FuncPtr' ) {
            $deriviation = $symbol.$deriviation;
        }

        $tth = getBaseTypeRecord($ArchId,$basetype);
        $entry = $tth->fetchrow_hashref;
        $tth->finish;
        if (!$nameonly) {
            if( $entry->{'Ttype'} eq 'Typedef' or $entry->{'Ttype'} eq 'FuncPtr' ) {
                displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);
            } else {
                if( ($entry->{'Ttype'} eq 'Struct' or $entry->{'Ttype'} eq 'Union') ) {
                    displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);
                } else {
                    displaytype($entry,0,$typeAppeared,$typeWithdrawn,$lsbversion);
                }
            }
        } else {
            displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);
        }

        if( $RootBase ne 'FuncPtr' ) {
            print $symbol." ";
        }
        return;
    }

    if( $$type{'Ttype'} eq "Struct" ) {
        if( $$type{'Tname'} =~ "anon" ) {
            $$type{'Tname'} ="";
            $nameonly = 0;
        }
        $struct_name = $$type{'Tunmangled'} ? $$type{'Tunmangled'} : $$type{'Tname'};

        print "struct ".$struct_name."\t";
        if( $nameonly ) { return; }

        $Tid=$$type{'Tid'};
        $tmselect = "SELECT DISTINCT TypeMember.*,TMEdeclaration FROM TypeMember ";
        $tmselect.= "LEFT JOIN TypeMemberExtras ON TMEtmid=TMid ";
        $tmselect.= "WHERE TMmemberof=$Tid AND (TMaid=1 OR TMaid=$TMaid) ";
        $tmselect.= "AND TMappearedin > '' ";
        if( $lsbversion ) {
            $tmselect.= "AND TMappearedin <= '$lsbversion' ";
            $tmselect.= "AND (TMwithdrawnin IS NULL OR TMwithdrawnin > '$lsbversion') "
        }
        $tmselect.= "ORDER BY TMposition";
        $tmh = $dbh->prepare($tmselect) or die "Couldn't prepare $tmselect query: ".DBI->errstr;
        $tmh->execute or die "Couldn't execute $tmselect query: ".DBI->errstr;
        if ($tmh->rows ) {
            print "{\n";
        }
        for(1..$tmh->rows) {
            $tmentry = $tmh->fetchrow_hashref;

            if( $typeAppeared and $tmentry->{'TMappearedin'} gt $typeAppeared ) {
                $appearedin = $tmentry->{'TMappearedin'};
                $appearedin =~ s/\.//g;
                print "#if __LSB_VERSION__ >= $appearedin\n";
            }
            if( $tmentry->{'TMwithdrawnin'}
        	    and ($tmentry->{'TMwithdrawnin'} lt $typeWithdrawn or !$typeWithdrawn and !$lsbversion) ) {
                $withdrawnin = $tmentry->{'TMwithdrawnin'};
                $withdrawnin =~ s/\.//g;
                print "#if __LSB_VERSION__ < $withdrawnin\n";
            }

            if( $tmentry->{'TMEdeclaration'} ) {
                print $tmentry->{'TMEdeclaration'}."\n";
                if( $typeAppeared and $tmentry->{'TMappearedin'} gt $typeAppeared ) {
                    print "#endif /* __LSB_VERSION__ >= $appearedin */\n";
                }
                if( $tmentry->{'TMwithdrawnin'}
            		and ($tmentry->{'TMwithdrawnin'} lt $typeWithdrawn or !$typeWithdrawn and !$lsbversion) ) {
                    print "#endif /* __LSB_VERSION__ < $withdrawnin */\n";
                }
                next;
            }
            $tmentry->{'Tid'} = $tmentry->{'TMtypeid'};

            $TMtypeid=$tmentry->{'TMtypeid'};
            if( $trace ) {
                $tselect = "SELECT Type.*, ATbasetype, ATsize FROM Type ";
                $tselect.= "LEFT JOIN ArchType ON ATtid=Tid ";
                $tselect.= "WHERE Tid=$TMtypeid ";
        #       $tselect.= "AND ATaid=$ArchId";
                print $tselect."\n", if $trace;
            }
            $type_Q->execute($TMtypeid) or die "Can't execute type_Q query for Tid=$TMtypeid".DBI->errstr;
            #~ $th = $dbh->prepare($tselect) or die "Couldn't prepare $tselect query: ".DBI->errstr;
            #~ $th->execute or die "Couldn't execute $tselect query: ".DBI->errstr;
            #~ $entry = $th->fetchrow_hashref;
            #~ $th->finish;
            $entry = $type_Q->fetchrow_hashref;

            $bentry->{'Ttype'} = $entry->{'Ttype'};

            if( $entry->{'Ttype'} eq 'Array' ) {
                # check the basetype of this array
                #~ $baseselect ="SELECT Ttype, ATsize FROM Type ";
                #~ $baseselect.="LEFT JOIN ArchType ON ATtid=Tid ";
                #~ $baseselect.="WHERE Tid=$entry->{'ATbasetype'} ";
                #~ $bth = $dbh->prepare($baseselect) or die "Couldn't prepare $baseselect query: ".DBI->errstr;
                #~ $bth->execute or die "Couldn't execute $baseselect query: ".DBI->errstr;
                $bth = getBaseTypeRecord( $ArchId, $entry->{'ATbasetype'} );
                $bentry = $bth->fetchrow_hashref;
                $bth->finish;
                if ($bentry->{'Ttype'} eq 'Array') {
                    $suffix = "[".$bentry->{'ATsize'}."]"."[".$entry->{'ATsize'}."]";
                } elsif( $entry->{'ATsize'} and $entry->{'ATsize'} ne '0' ) {
                    $suffix = "[".$entry->{'ATsize'}."]";
                } else {
                    $suffix = "[]";
                }
            } elsif( $entry->{'Ttype'} eq 'Pointer' ) {
                $baseselect ="SELECT DISTINCT Ttype, ATbasetype, ATsize FROM Type ";
                $baseselect.="JOIN ArchType ON ATtid=Tid ";
                $baseselect.="WHERE Tid=$entry->{'ATbasetype'} ";
                $bth = $dbh->prepare($baseselect) or die "Couldn't prepare $baseselect query: ".DBI->errstr;
                $bth->execute or die "Couldn't execute $baseselect query: ".DBI->errstr;
                $bentry = $bth->fetchrow_hashref;
                $bth->finish;
            } else {
                $suffix = "";
            }

            $funcPtrName = $tmentry->{'TMname'}.$suffix;

            if( !$tmentry->{'TMname'} ) {
                $struct_anon_member=1;
            }
            displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);
            $struct_anon_member=0;

            if( $entry->{'Ttype'} ne 'FuncPtr' and $bentry->{'Ttype'} ne 'FuncPtr' ) {
                print $tmentry->{'TMname'};
                # Adding code to support both values from TMarray and ATsize for Array bounds.
                # TMarray condition should be removed once we deprecate it.
                if( $entry->{'Ttype'} eq 'Array' ) {
                    if($tmentry->{'TMarray'}) {
                        print "[".$tmentry->{'TMarray'}."]";
                    } else {
                        # check the basetype of this array
                        #~ $tselect ="SELECT Ttype, ATsize FROM Type ";
                        #~ $tselect.="LEFT JOIN ArchType ON ATtid=Tid ";
                        #~ $tselect.="WHERE Tid=$entry->{'ATbasetype'} ";
                        #~ $tth = $dbh->prepare($tselect) or die "Couldn't prepare $tselect query: ".DBI->errstr;
                        #~ $tth->execute or die "Couldn't execute $tselect query: ".DBI->errstr;
                        $tth = getBaseTypeRecord( $ArchId, $entry->{'ATbasetype'} );
                        $bentry = $tth->fetchrow_hashref;
                        $tth->finish;
                        if ($bentry->{'Ttype'} eq 'Array') {
                            print "[".$bentry->{'ATsize'}."]"."[".$entry->{'ATsize'}."]";
                        } elsif( $entry->{'ATsize'} and $entry->{'ATsize'} ne '0' ) {
                            print "[".$entry->{'ATsize'}."]";
                        } else {
                            print "[]";
                        }
                    }
                }
                elsif( $bentry->{'Ttype'} eq 'Array' ) {
                    $tth = getBaseTypeRecord( $ArchId, $bentry->{'ATbasetype'} );
                    $bentry2 = $tth->fetchrow_hashref;
                    $tth->finish;
                    if ($bentry2->{'Ttype'} eq 'Array') {
                        print "[".$bentry2->{'ATsize'}."]"."[".$bentry->{'ATsize'}."]";
                    } elsif( $bentry->{'ATsize'} and $bentry->{'ATsize'} ne '0' ) {
                        print "[".$bentry->{'ATsize'}."]";
                    } else {
                        print "[]";
                    }
                }
                if( $tmentry->{'TMbitfield'} != 0 ) {
                    print ":".$tmentry->{'TMbitfield'};
                }
            }
            print ";\t";
            if( $tmentry->{'TMdescription'} ) {
                print "/* ".$tmentry->{'TMdescription'}." */";
            }
            print "\n";

            if( $typeAppeared and $tmentry->{'TMappearedin'} gt $typeAppeared ) {
                print "#endif /* __LSB_VERSION__ >= $appearedin */\n";
            }
            if( $tmentry->{'TMwithdrawnin'}
        	    and ($tmentry->{'TMwithdrawnin'} lt $typeWithdrawn or !$typeWithdrawn and !$lsbversion) ) {
                print "#endif /* __LSB_VERSION__ < $withdrawnin */\n";
            }
        }
        if ($tmh->rows ) { print "}\n"; }
        if( $$type{'ATattribute'} ) {
            print "__attribute__ (".$$type{'ATattribute'}.")";
        }
        $tmh->finish;
        return;
    }

    if( $$type{'Ttype'} eq "Union" ) {
        if( $$type{'Tname'} =~ "anon" ) {
            $$type{'Tname'} ="";
            $nameonly = 0;
        }

        if( $struct_anon_member and !$union_name ) {
            print "__extension__ ";
        }
        print "union ".$$type{'Tname'}."\t";

        if( $nameonly ) { return; }

        $Tid=$$type{'Tid'};
        $tmselect = "SELECT DISTINCT TypeMember.*, TMEdeclaration FROM TypeMember ";
        $tmselect.= "LEFT JOIN TypeMemberExtras ON TMEtmid=TMid ";
        $tmselect.= "WHERE TMmemberof=$Tid AND TMaid IN(1,$TMaid) ";
        $tmselect.= "AND TMappearedin > '' ";
        if( $lsbversion ) {
            $tmselect.= "AND TMappearedin <= '$lsbversion' ";
            $tmselect.= "AND (TMwithdrawnin IS NULL OR TMwithdrawnin > '$lsbversion') "
        }
        $tmselect.= "ORDER BY TMposition";
        $tmh = $dbh->prepare($tmselect) or die "Couldn't prepare $tmselect query: ".DBI->errstr;
        $tmh->execute or die "Couldn't execute $tmselect query: ".DBI->errstr;
        if ($tmh->rows ) {
            print "{\n";
        }
        for(1..$tmh->rows) {
            $tmentry = $tmh->fetchrow_hashref;
            if( $typeAppeared and $tmentry->{'TMappearedin'} gt $typeAppeared ) {
                $appearedin = $tmentry->{'TMappearedin'};
                $appearedin =~ s/\.//g;
                print "#if __LSB_VERSION__ >= $appearedin\n";
            }
            if( $tmentry->{'TMwithdrawnin'}
        	    and ($tmentry->{'TMwithdrawnin'} lt $typeWithdrawn or !$typeWithdrawn and !$lsbversion) ) {
                $withdrawnin = $tmentry->{'TMwithdrawnin'};
                $withdrawnin =~ s/\.//g;
                print "#if __LSB_VERSION__ < $withdrawnin\n";
            }

            if( $tmentry->{'TMEdeclaration'} ) {
                print $tmentry->{'TMEdeclaration'}."\n";
                if( $typeAppeared and $tmentry->{'TMappearedin'} gt $typeAppeared ) {
                    print "#endif /* __LSB_VERSION__ >= $appearedin */\n";
                }
                if( $tmentry->{'TMwithdrawnin'}
            		and ($tmentry->{'TMwithdrawnin'} lt $typeWithdrawn or !$typeWithdrawn and !$lsbversion) ) {
                    print "#endif /* __LSB_VERSION__ < $withdrawnin */\n";
                }
                next;
            }

            $TMtypeid=$tmentry->{'TMtypeid'};
            $funcPtrName = $tmentry->{'TMname'};

            if( $trace ) {
                $tselect ="SELECT Type.*, ATbasetype, ATsize FROM Type ";
                $tselect.="LEFT JOIN ArchType ON ATtid=Tid ";
                $tselect.="WHERE Tid=$TMtypeid ";
                print $tselect."\n";
            }
            #~ $th = $dbh->prepare($tselect) or die "Couldn't prepare $tselect query: ".DBI->errstr;
            #~ $th->execute or die "Couldn't execute $tselect query: ".DBI->errstr;
            #~ $entry = $th->fetchrow_hashref;
            #~ $th->finish;
            $type_Q->execute($TMtypeid) or die "Couldn't execute type_Q query for Tid=$TMtypeid query: ".DBI->errstr;
            $entry = $type_Q->fetchrow_hashref;

            displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);
            if( $entry->{'Ttype'} ne 'FuncPtr' ) {
                print $tmentry->{'TMname'};
            }
            if( $entry->{'Ttype'} eq 'Array' ) {
                if($tmentry->{'TMarray'}){
                    print "[".$tmentry->{'TMarray'}."]";
                } else {
                    # check the basetype of this array
                    $basetype = getBaseTypeID($type);
                    $tth = getBaseTypeRecord($ArchId,$basetype);
                    $bentry = $tth->fetchrow_hashref;
                    $tth->finish;
                    if ($bentry->{'Ttype'} eq 'Array') {
                        print "[".$bentry->{'ATsize'}."]"."[".$entry->{'ATsize'}."]";
                    } else {
                        print "[".$entry->{'ATsize'}."]";
                    }
                }
            }
            print ";\t";
            if( $tmentry->{'TMdescription'} ) {
                print "/* ".$tmentry->{'TMdescription'}." */";
            }
            print "\n";

            if( $typeAppeared and $tmentry->{'TMappearedin'} gt $typeAppeared ) {
                print "#endif /* __LSB_VERSION__ >= $appearedin */\n";
            }
            if( $tmentry->{'TMwithdrawnin'}
        	    and ($tmentry->{'TMwithdrawnin'} lt $typeWithdrawn or !$typeWithdrawn and !$lsbversion) ) {
                print "#endif /* __LSB_VERSION__ < $withdrawnin */\n";
            }
        }
        if ($tmh->rows ) { print "}\n"; }
        $tmh->finish;
        return;
    }

    if( $$type{'Ttype'} eq "Enum" ) {
        print "enum ";
        if( $$type{'Tname'} =~ "anon" ) {
            $$type{'Tname'} ="";
        }

        print $$type{'Tname'}."\t";

        if( $nameonly and $$type{'Tname'} ) { return; }
        if( $$type{'Tdescription'} and !$nameonly ) {
            print "/* ".$$type{'Tdescription'}." */";
        }
        print "\n";

        $Tid=$$type{'Tid'};
        $tmselect = "SELECT TMdescription, TMname, TMaid, TMvalue, TMappearedin, TMwithdrawnin FROM TypeMember ";
        $tmselect.= "WHERE TMmemberof=$Tid AND TMaid IN (1,$TMaid) ";
        $tmselect.= "AND TMappearedin > '' ";
        if( $lsbversion ) {
            $tmselect.= "AND TMappearedin <= '$lsbversion' ";
            $tmselect.= "AND (TMwithdrawnin IS NULL OR TMwithdrawnin > '$lsbversion') "
        }
        $tmselect.= "ORDER BY TMposition";
        $tmh = $dbh->prepare($tmselect) or die "Couldn't prepare $tmselect query: ".DBI->errstr;
        $tmh->execute or die "Couldn't execute $tmselect query: ".DBI->errstr;

        # Is it enum with arch specific contents?
        if (!$tmh->rows ) {
            $tmh->finish;
            $tmselect = "SELECT TMdescription, TMname, TMaid, TMvalue, TMappearedin, TMwithdrawnin, Aname, Asymbol FROM TypeMember ";
            $tmselect.= "LEFT JOIN Architecture ON Aid=TMaid ";
            $tmselect.= "WHERE TMmemberof=$Tid ";
            $tmselect.= "AND TMappearedin > '' ";
            if( $lsbversion ) {
                $tmselect.= "AND TMappearedin <= '$lsbversion' ";
                $tmselect.= "AND (TMwithdrawnin IS NULL OR TMwithdrawnin > '$lsbversion') "
            }
            $tmselect.= "ORDER BY TMaid,TMposition ";
            $tmh = $dbh->prepare($tmselect) or die "Couldn't prepare $tmselect query: ".DBI->errstr;
            $tmh->execute or die "Couldn't execute $tmselect query: ".DBI->errstr;
        }

        if ($tmh->rows ) { print "{\n"; }
        $prevArch=0;

        for(1..$tmh->rows) {
            $tmentry = $tmh->fetchrow_hashref;

            if( $typeAppeared and $tmentry->{'TMappearedin'} gt $typeAppeared ) {
                $appearedin = $tmentry->{'TMappearedin'};
                $appearedin =~ s/\.//g;
                print "#if __LSB_VERSION__ >= $appearedin\n";
            }
            if( $tmentry->{'TMwithdrawnin'}
        	    and ($tmentry->{'TMwithdrawnin'} lt $typeWithdrawn or !$typeWithdrawn and !$lsbversion) ) {
                $withdrawnin = $tmentry->{'TMwithdrawnin'};
                $withdrawnin =~ s/\.//g;
                print "#if __LSB_VERSION__ < $withdrawnin\n";
            }

            if( ($TMaid == 1) and ($tmentry->{'TMaid'} != 1) ) {
                if( $prevArch != $tmentry->{'TMaid'} ) {
                    if( $prevArch != 0 ) {
                        print "#endif\n";
                    }
                    print "#if ".$tmentry->{'Asymbol'}."\n";
                    print "/* ".$tmentry->{'Aname'}." */\n";
                    $prevArch = $tmentry->{'TMaid'};
                }
            }

            # It's an enum, don't print out the types, just the names
            print $tmentry->{'TMname'};
            if( $tmentry->{'TMvalue'} ne '' ) {
                print " = ".$tmentry->{'TMvalue'};
            }
            if( $_ != $tmh->rows ) {
                print ",\t";
            }
            if( $tmentry->{'TMdescription'} ) {
                print "/* ".$tmentry->{'TMdescription'}."*/";
            }
            print "\n";

            if( $typeAppeared and $tmentry->{'TMappearedin'} gt $typeAppeared ) {
                print "#endif /* __LSB_VERSION__ >= $appearedin */\n";
            }
            if( $tmentry->{'TMwithdrawnin'}
        	    and ($tmentry->{'TMwithdrawnin'} lt $typeWithdrawn or !$typeWithdrawn and !$lsbversion) ) {
                print "#endif /* __LSB_VERSION__ < $withdrawnin */\n";
            }
        }
        if( $prevArch != 0 ) {
            print "#endif\n";
        }
        if ($tmh->rows ) { print "}\n"; }
        $tmh->finish;
        return;
    }

    if( $$type{'Ttype'} eq "FuncPtr" or $$type{'Ttype'} eq "Function" ) {
        $basetype = getBaseTypeID($type);
        $sth = getBaseTypeRecord($ArchId,$basetype);
        $entry = $sth->fetchrow_hashref;
        $sth->finish;
        displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);

        print "(*$deriviation" if ($$type{'Ttype'} eq "FuncPtr");
        $deriviation = "";
        $Tid=$$type{'Tid'};
        print $funcPtrName;
        print ") " if( $$type{'Ttype'} eq "FuncPtr" );
        if( $$type{'Tdescription'} ) {
            print "/* ".$$type{'Tdescription'}." */";
        }
        print "(";

        $tmselect = "SELECT * FROM TypeMember WHERE TMmemberof=$Tid AND (TMaid = 1 OR TMaid = $TMaid) ";
        $tmselect.= "AND TMappearedin > '' ";
        $tmselect.= "ORDER BY TMposition";
        print $tmselect."\n" if $trace;
        $tmh = $dbh->prepare($tmselect) or die "Couldn't prepare $tmselect query: ".DBI->errstr;
        $tmh->execute or die "Couldn't execute $tmselect query: ".DBI->errstr;
        if($tmh->rows == 0) {
            print "void";
        }
        for(1..$tmh->rows) {
            $tmentry = $tmh->fetchrow_hashref;

            $TMtypeid=$tmentry->{'TMtypeid'};
            if( $trace ) {
                $tselect ="SELECT Type.*, ATbasetype, ATsize FROM Type ";
                $tselect.="LEFT JOIN ArchType ON ATtid=Tid ";
                $tselect.="WHERE Tid=$TMtypeid ";
                print $tselect."\n" if $trace;
            }
            #~ $th = $dbh->prepare($tselect) or die "Couldn't prepare $tselect query: ".DBI->errstr;
            #~ $th->execute or die "Couldn't execute $tselect query: ".DBI->errstr;
            #~ $entry = $th->fetchrow_hashref;
            #~ $th->finish;
            $type_Q->execute($TMtypeid) or die "Couldn't execute type_Q query for Tid=$TMtypeid query: ".DBI->errstr;
            $entry = $type_Q->fetchrow_hashref;

            displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);
            print $tmentry->{'TMname'};
            if( $tmentry->{'Ttype'} eq 'Array' ) {
                if( $tmentry->{'TMarray'} ) {
                    print "[".$tmentry->{'TMarray'}."]";
                } elsif( $entry->{'ATsize'} ) {
                    # check the basetype of this array
                    #~ $basetype = getBaseTypeID($type);
                    #~ $tth = getBaseTypeRecord($ArchId,$basetype);
                    $tth = getBaseTypeRecord($ArchId,$entry->{'ATbasetype'});
                    $bentry = $tth->fetchrow_hashref;
                    $tth->finish;
                    if ($bentry->{'Ttype'} eq 'Array') {
                        print "[".$bentry->{'ATsize'}."]"."[".$entry->{'ATsize'}."]";
                    } else {
                        print "[".$entry->{'ATsize'}."]";
                    }
                }
            }
            if( $_ != $tmh->rows ) {
                print ",";
            }
        }
        print ") " if( $$type{'Ttype'} eq "FuncPtr" && $$type{'Itype'} eq "Function" );
        print ")";
        $tmh->finish;
        return;
    }

    if( $$type{'Ttype'} eq "Array" ) {
        $basetype = getBaseTypeID($type);
        $sth = getBaseTypeRecord($ArchId,$basetype);
        $entry = $sth->fetchrow_hashref;
        $sth->finish;
        displaytype($entry,1,$typeAppeared,$typeWithdrawn,$lsbversion);
        return;
    }

    # structures in cpp can also have methods; such structures are stored as types, not like usual classes
    if( ($$type{'Ttype'} eq "Struct" and $$type{'Tunmangled'}) or $$type{'Ttype'} eq "Class" ) {
        $name = $$type{'Tunmangled'} ? $$type{'Tunmangled'} : $$type{'Tname'};
        print "class ".$name;
        return;
    }

    print STDERR "Unknown Type: \"$$type{'Ttype'}\" for Tid $$type{'Tid'}\n";
    $dbh->disconnect;
    exit 2;
}

# 'Light' version of the function above
# used to print interface signatures
#
# Note: Unlike displaytype, this function doesn't print declarations directly,
#  but collects them to a variable that is returned at the end.
sub displaytyperef($$)
{
    local ($param,$nameonly) = @_;
    local(%select,$sth,$type);
    my $retval = "";

    if( $$param{'Ttype'} eq "" or $$param{'Ttype'} eq "Intrinsic" or $$param{'Ttype'} eq "Literal" ) {
        $retval.= $$param{'Tname'};
        return $retval;
    }

    if( $$param{'Ttype'} eq "Volatile" ) {
        $basetype = getBaseTypeID($param);
        $sth = getBaseTypeRecord($ArchId,$basetype);
        $type = $sth->fetchrow_hashref;
        $sth->finish;
        if( $type->{'Ttype'} eq "Pointer" || $type->{'Ttype'} eq "Array") {
            $retval.= displaytyperef($type,$nameonly);
            $retval.= " volatile ";
        } else {
            $retval.= " volatile ";
            $retval.= displaytyperef($type,$nameonly);
        }
        return $retval;
    }

    if( $$param{'Ttype'} eq "Const" ) {
        $basetype = getBaseTypeID($param);
        $sth = getBaseTypeRecord($ArchId,$basetype);
        $type = $sth->fetchrow_hashref;
        $sth->finish;
        if( $type->{'Ttype'} eq "Pointer" || $type->{'Ttype'} eq "Array") {
            $retval.= displaytyperef($type,$nameonly);
            $retval.= " const ";
        } else {
            $retval.= "const ";
            $retval.= displaytyperef($type,$nameonly);
        }
        return $retval;
    }

    if( $$param{'Ttype'} eq "Pointer" or $$param{'Ttype'} eq "Ref" ) {
        $basetype = getBaseTypeID($param);
        $sth = getBaseTypeRecord($ArchId,$basetype);
        $type = $sth->fetchrow_hashref;
        $sth->finish;
        $retval.= displaytyperef($type,$nameonly);
        if( $$param{'Ttype'} eq "Ref" ) {
            $retval.= " &";
        }
        else {
            $retval.= " *";
        }
        return $retval;
    }

    if( $$param{'Ttype'} eq "Struct" ) {
        $struct_name = $$param{'Tunmangled'} ? $$param{'Tunmangled'} : $$param{'Tname'};
        $retval.= "struct ".$struct_name;
        return $retval;
    }

    if( $$param{'Ttype'} eq "Typedef" ) {
        $retval.= $$param{'Tname'};
        return $retval;
    }

    if( $$param{'Ttype'} eq "Union" ) {
        $retval.= "union ".$$param{'Tname'};
        return $retval;
    }

    if( $$param{'Ttype'} eq "Enum" ) {
        $retval.= "enum ".$$param{'Tname'};
        return $retval;
    }

    if( $$param{'Ttype'} eq "Array" ) {
        $basetype = getBaseTypeID($param);
        $sth = getBaseTypeRecord($ArchId,$basetype);
        $type = $sth->fetchrow_hashref;
        $sth->finish;
        $retval.= displaytyperef($type,1);
        return $retval;
    }

    if( $$param{'Ttype'} eq "FuncPtr" ) {
        $basetype = getBaseTypeID($param);
        $sth = getBaseTypeRecord($ArchId,$basetype);
        $type = $sth->fetchrow_hashref;
        $sth->finish;
        $Tid=$$param{'Tid'};
        $retval.= displaytyperef($type,$nameonly);
        $retval.= "(*$funcPtrName";
        # $$param{'Tname'} is not printed/commented
        if( $nameonly ) {
            return $retval;
        }
        $retval.= ")(";

        $tmselect = "SELECT * FROM TypeMember WHERE TMmemberof=$Tid AND TMaid IN (1,$TMaid) ";
        $tmselect.= "AND TMappearedin > '' ";
        $tmselect.= "ORDER BY TMposition";
        $tmh = $dbh->prepare($tmselect) or die "Couldn't prepare $tmselect query: ".DBI->errstr;
        $tmh->execute or die "Couldn't execute $tmselect query: ".DBI->errstr;
        if($tmh->rows == 0) {
            $retval.= "void";
        }
        for(1..$tmh->rows) {
            $tmentry = $tmh->fetchrow_hashref;
            $TMtypeid=$tmentry->{'TMtypeid'};
            $tselect="SELECT * FROM Type ";
            $tselect.="LEFT JOIN ArchType ON ATtid=Tid ";
            $tselect.="WHERE Tid=$TMtypeid ";
            $tselect.="AND ATaid IN($ArchId,1) ";
            $tselect.="LIMIT 1";
            $th = $dbh->prepare($tselect) or die "Couldn't prepare $tselect query: ".DBI->errstr;
            $th->execute or die "Couldn't execute $tselect query: ".DBI->errstr;
            $entry = $th->fetchrow_hashref;
            $th->finish;
            $retval.= displaytyperef($entry,1); # check if this works ok
            if($entry->{'Ttype'} eq 'Array') {
                if( $tmentry->{'TMarray'} ) {
                    $retval.= "[".$tmentry->{'TMarray'}."]";
                } else {
                    $retval.= "[".$entry->{'ATsize'}."]";
                }
            }
            if( $_ != $tmh->rows ) {
                $retval.= ",";
            }
        }

        $retval.= ")";
        $tmh->finish;
        return $retval;
    }

    if( $$param{'Ttype'} eq "Class" ) {
        $name = $$param{'Tunmangled'} ? $$param{'Tunmangled'} : $$param{'Tname'};
        $retval.= $name;
        return $retval;
    }

    return $$param{'Ttype'};
}

sub display_interface($ )
{
    local ($entry) = @_;

    if( $entry->{'Itype'} eq "Function" ) {
        $TMaid = $ArchId;

        if( !$datadef ) {
            # Dump a comment for deprecated interfaces, if any
            if( $entry->{'AIdeprecatedsince'} and $entry->{'AIdeprecatedsince'} ne 'Unknown' ) {
                $selectComment = "SELECT IAvalue FROM InterfaceAttribute ";
                $selectComment.= "WHERE IAiname='".$entry->{'Iname'}."' ";
                $selectComment.= "AND IAlibrary='".$entry->{'Ilibrary'}."' ";
                $selectComment.= "LIMIT 1";
                print $selectComment,"\n" if $trace;
                ($Comment) = $dbh->selectrow_array($selectComment);
                if( $Comment ) {
                    # Remove URLs to other interfaces/constants
                    $Comment =~ s/<\/int>//g;
                    $Comment =~ s/<\/const>//g;
                    $Comment =~ s/<int ((\w|-|\.)+);(\w+)>//g;
                    $Comment =~ s/<const ((\w|-|\.)+)>//g;
                    print "    /* $Comment */\n";
                }
            }
        }

        printf "extern ";
        $funcPtrName = '';

        $nameonly = 0;
        if( $entry->{'Ttype'} eq 'FuncPtr' ) {
            $funcPtrName = $entry->{'Iname'};
            $nameonly = 1;
        }
        $Iid = $entry->{'Iid'};
        $Ttype = $entry->{'Ttype'};
        $Iname = $entry->{'Iname'};
        $Tid = $entry->{'AIreturn'};

        $typedecl = displaytyperef($entry,$nameonly);
        print $typedecl;
        if ($Ttype eq "FuncPtr") {
            print "(\n";
        } else {
            print " $Iname(";
        }
        $funcPtrName='';

        $select = "SELECT Tid,Tname,Ttype,ATbasetype,Parsize,Pname FROM Parameter,Type ";
        $select.= "LEFT JOIN ArchType ON ATtid=Tid ";
        $select.= "WHERE Pint=".$Iid." AND Ptype=Tid ";
        $select.= "GROUP BY Ppos ORDER BY Ppos";
        print $select,"\n" if $trace;
        $sth2 = $dbh->prepare($select) or die "Couldn't prepare $select query: ".DBI->errstr;
        $sth2->execute or die "Couldn't execute $select query: ".DBI->errstr;
        $moreargs = 0;
        if( $sth2->rows ) {
            for(1..$sth2->rows) {
                $entry2=$sth2->fetchrow_hashref;
                printf ", " if ($moreargs++);

                if( $entry2->{'Ttype'} eq 'FuncPtr' and $entry2->{'Pname'} ) {
                    $funcPtrName=$entry2->{'Pname'};
                }

                $typedecl = displaytyperef($entry2,0);
                print $typedecl;
                $funcPtrName='';

#                if( !$datadef ) {
                    if( $entry2->{'Pname'} and $entry2->{'Ttype'} ne 'FuncPtr' ) {
                        print " ".$entry2->{'Pname'};
                    }
#                }

                if( $entry2->{'Ttype'} eq "Array" ) {
                    print "[";
                    if( $entry2->{'Parsize'} != 0 ) {
                        print $entry2->{'Parsize'};
                    }
                    print "]";
                }
            }
        } else {
            print "void";
        }
        $sth2->finish;
        print ")";

        if( $Ttype eq "FuncPtr" ) {
            print ")(";
            $tmselect = "SELECT * FROM TypeMember WHERE TMmemberof=$Tid AND (TMaid=1 OR TMaid=$TMaid) ";
            $tmselect.= "AND TMappearedin > '' ";
            $tmselect.= "ORDER BY TMposition";
            $tmh = $dbh->prepare($tmselect) or die "Couldn't prepare $tmselect query: ".DBI->errstr;
            $tmh->execute or die "Couldn't execute $tmselect query: ".DBI->errstr;
            if($tmh->rows == 0) {
                print "void";
            }
            for(1..$tmh->rows) {
                $tmentry = $tmh->fetchrow_hashref;
                $TMtypeid=$tmentry->{'TMtypeid'};
                $tselect="SELECT * FROM Type ";
                $tselect.="LEFT JOIN ArchType ON ATtid=Tid ";
                $tselect.="WHERE Tid=$TMtypeid ";
                $tselect.="AND (ATaid=$ArchId OR ATaid=1) ";
                $tselect.="LIMIT 1";
                $th = $dbh->prepare($tselect) or die "Couldn't prepare $tselect query: ".DBI->errstr;
                $th->execute or die "Couldn't execute $tselect query: ".DBI->errstr;
                $entry = $th->fetchrow_hashref;
                $th->finish;
                displaytype($entry,1,'','',$lsbversion); # no need to pass typeAppearedin and typeWithdrawnin,
                                             # since we are not going to dump type members
                if( $_ != $tmh->rows ) {
                    print ",";
                }
            }

            print ")\n";
            $tmh->finish;
        }
        $sth2->finish;

        if( !$datadef ) {
            # Dump LSB_DECL_DEPRECATED for deprecated symbols
            # Enclose with conditions on __LSB_VERSION__, if necessary
            if( $entry->{'AIdeprecatedsince'}
                    and $entry->{'AIdeprecatedsince'} ne 'Unknown'
                    and (!$entry->{'AIwithdrawnin'} or $entry->{'AIwithdrawnin'} gt $entry->{'AIdeprecatedsince'}) ) {

                if( $entry->{'AIappearedin'} lt $entry->{'AIdeprecatedsince'} ) {
                    $depr_ver = $entry->{'AIdeprecatedsince'};
                    $depr_ver =~ s/\.//g;
                    print "\n #if __LSB_VERSION__ >= ".$depr_ver."\n";
                }
                print " LSB_DECL_DEPRECATED";
                if( $entry->{'AIappearedin'} lt $entry->{'AIdeprecatedsince'} ) {
                    print "\n#endif /* __LSB_VERSION__ >= ".$depr_ver." */\n";
                }
            }
        }
        else {
            print ";\n";
        }
    }

    if( $entry->{'Itype'} eq "Data" ) {
        printf "extern ";
        $typedecl = displaytyperef($entry,0);
        print $typedecl;
        printf " %s",$entry->{'Iname'};
        if( $entry->{'Ttype'} eq "Array" ) {
            print "[";
            if( $entry->{'ATsize'} != 0 ) {
                print $entry->{'ATsize'};
            }
            print "]";
        }
        if( $entry->{'Ttype'} eq "Const" || $entry->{'Ttype'} eq "Volatile") {
            if( $entry->{'ATbasetype'} != '' ) {
                $basetype = $entry->{'ATbasetype'};
            }
            else {
                $basetype = getBaseTypeID($entry);
            }

            $stm = getBaseTypeRecord($ArchId,$basetype);
            my $btype = $stm->fetchrow_hashref;
            $stm->finish;

            if( $btype->{'Ttype'} eq "Array" ) {
                print "[";
                if( $btype->{'ATsize'} != 0 ) {
                    print $btype->{'ATsize'};
                }
                print "]";
            }
        }
        printf " ;\n" if( $datadef );
    }
    if( $entry->{'Itype'} eq "Alias" ) {
        printf "extern ";
        $typedecl = displaytyperef($entry,0);
        print $typedecl;
        printf " %s",$entry->{'Iname'};
        if( $entry->{'Ttype'} eq "Array" ) {
            print "[";
            if( $entry->{'ATsize'} != 0 ) {
                print $entry->{'ATsize'};
            }
            print "]";
        }
        printf " ;\n" if( $datadef );
    }
    if( $entry->{'Itype'} eq "Common" ) {
        printf "extern ";
        $typedecl = displaytyperef($entry,0);
        print $typedecl;
        printf " %s",$entry->{'Iname'};
        if( $entry->{'Ttype'} eq "Array" ) {
            print "[";
            if( $entry->{'ATsize'} != 0 ) {
                print $entry->{'ATsize'};
            }
            print "]";
        }
        printf " ;\n" if( $datadef );
    }
}

# Return 1 to avoid compilation error
1;
