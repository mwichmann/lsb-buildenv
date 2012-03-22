#!/usr/bin/perl

# Simple script to collapse automatically generated
# neighboring ifdefs with the same conditions
#
# Author: Denis Silakov, ROSA

use strict;

my $condition = "";
my $endif_condition = "";
my $endif = 0;
my $ifdef = 0;

while(<STDIN>) {
	chomp;
	my $line = $_;

	if( /^#if(def)?(.+)/ ) {
		my $new_condition = $2;
		if( !$endif ) {
			print $line."\n";
		}
		if( $endif and $new_condition ne $condition ) {
			print "#endif$endif_condition\n";
			print $line."\n";
		}
		$endif = 0;
		$ifdef = 1;
		$condition = $new_condition;
		next;
	}

	if( /^#endif(.*)/ and $ifdef ) {
		if( $endif ) {
			print "#endif$endif_condition\n";
		}
		$endif = 1;
		$endif_condition = $1;
		next;
	}

	if( $endif ) {
		print "#endif$endif_condition\n";
		$endif = 0;
		$condition = "";
	}

	# if we meet smth like '#else' or '#elif', then
	# stop analyzing ifdef conditions and just dump the strings as is.
	if( /^#\s*el/ ) {
		if( $endif ) {
			print "#endif$endif_condition\n";
		}
		$ifdef = 0;
	}

	print $line."\n";
}

if( $endif ) {
	print "#endif$endif_condition\n";
}
