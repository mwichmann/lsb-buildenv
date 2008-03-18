#!/usr/bin/perl
#
# generate version file for lsbcc
#  
# Copyright (C) 2006, 2007 Linux Foundation

$version = $ARGV[0];
if ( $version eq '' ) {
    printf("$ARGV[-1] <lsb version>\n");
    exit(-1);
}

print <<HEADER;
#ifndef LSBCC_VERSION_H
#define LSBCC_VERSION_H

/* This is a generated file, do not edit */

static char lsbcc_lsb_version [] = "LSB version $version";

#endif
HEADER
