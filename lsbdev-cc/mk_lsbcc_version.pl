#!/usr/bin/perl
#
# generate version file for lsbcc
#  
# Copyright (C) 2006, 2007 Linux Foundation

open(my $lsbfile, "lsb_versions");
@lsbversions = <$lsbfile>;
close $lsbfile;
chomp @lsbversions;

open(my $lsbdevfile, "lsb_devel_versions");
@lsbdevversions = <$lsbdevfile>;
close $lsbdevfile;
chomp @lsbdevversions;

$version = join(",", @lsbversions);
$devversion = join(",", @lsbversions, @lsbdevversions);
$default = $lsbversions[$#lsbversions];
$devdefault = $lsbdevversions[0];

print <<HEADER;
#ifndef LSBCC_VERSION_H
#define LSBCC_VERSION_H

/* This is a generated file, do not edit */

#ifdef SKIP_DEVEL_VERSIONS

#define DEFAULT_LSB_VERSION "$default"

static char lsbcc_lsb_version [] = "LSB version $version";

#else

#define DEFAULT_LSB_VERSION "$devdefault"

static char lsbcc_lsb_version [] = "LSB version $devversion";

#endif /* SKIP_DEVEL_VERSIONS */

#endif
HEADER
