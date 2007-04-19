#!/usr/bin/perl

$version = $ARGV[0];
if ($version eq '') {
	printf("$ARGV[-1] <lsb version>\n");
	exit(-1);
}

print <<HEADER;
#ifndef LSBCC_VERSION_H
#define LSBCC_VERSION_H

static char lsbcc_lsb_version [] = "LSB version $version";

#endif
HEADER
