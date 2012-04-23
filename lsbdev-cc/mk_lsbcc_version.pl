#!/usr/bin/perl
#
# generate version file for lsbcc
#  
# Copyright (C) 2006-2012 Linux Foundation
#
# This file is part of lsbcc.  lsbcc is free software, covered
# under the terms of the BSD license.

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

/* LSBCC_VERSION should be overridden by packaging, which knows the version */

#ifdef SKIP_DEVEL_VERSIONS

#define DEFAULT_LSB_VERSION "$default"
#ifndef LSBCC_VERSION
#define LSBCC_VERSION "$default.unreleased"
#endif

static char lsbcc_lsb_version [] = "LSB version $version";

#else

#define DEFAULT_LSB_VERSION "$devdefault"
#ifndef LSBCC_VERSION
#define LSBCC_VERSION "$default.development (for $devdefault)"
#endif

static char lsbcc_lsb_version [] = "LSB version $devversion";

#endif /* SKIP_DEVEL_VERSIONS */

#endif
HEADER
