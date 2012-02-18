/*
 * Copyright (C) 2002-2007 Linux Foundation
 *
 * Derived from lsbcc.c,
 * 2002/05/09 Stuart Anderson, Free Standards Group
 *
 */
/*
 * This is the lsbccp tool. It is mostly useful for situations where
 * configure scripts perform tests based solely on passing intput to
 * cpp rather than passing input to a compiler. 
 * 
 * Set your CPP environment variable to lsbcpp to gain effect.
 *
 * This code is a stripped down version of lsbcc.c
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <libgen.h>
#include <string.h>
#include <getopt.h>
#include <limits.h>
#include <assert.h>
#include <dirent.h>
#include <errno.h>

#include "lsbcc_version.h"
#include "lsbcc_argv.h"

/*
 * These are the catagories of options that we are going to be grouping
 * together.
 */

struct argvgroup *cppargs;
struct argvgroup *args;

/*
 * Set the default names of the cpp to call and the paths
 * to LSB headers and libraries.  These can be changed through
 * environment variables.
 */
#ifndef BASE_PATH
#define BASE_PATH "/opt/lsb"
#endif

char *cppname="cpp";
char incpath[PATH_MAX];
char cxxincpath[PATH_MAX];

/*
 * Debugging interface: Set the environment variable LSBCC_DEBUG to a value
 * that corresponds to the bits defined below.
 */

#define DEBUG_ENV_OVERRIDES	0x0001
#define DEBUG_ARGUMENTS		0x0002
#define DEBUG_RECOGNIZED_ARGS	0x0004
#define DEBUG_UNRECOGNIZED_ARGS	0x0008
#define DEBUG_INCLUDE_CHANGES	0x0010
#define DEBUG_LIB_CHANGES	0x0020
#define DEBUG_MODIFIED_ARGS	0x0040

#define WARN_LIB_CHANGES	0x0001

int lsbcc_debug=0; /* Default to none. ./configure likes things to be quiet. */
int lsbcc_warn=0; 
int lsbcc_buildingshared=0; 

/*
 */
char *optstr="-";
struct option long_options[] = {
	{"help",0, NULL,2},
	{"lsb-help",0, NULL,3},
	{"lsb-version",0, NULL,4},
	{"lsb-cpp",0,NULL,6}, 
	{"lsb-includepath",required_argument,NULL,9},
	{"lsb-cxx-includepath",required_argument,NULL,10},
	{"verbose",required_argument,NULL,14},
	{"version",required_argument,NULL,15},
	{"lsbcc-version",no_argument,NULL,22},
	{NULL,0,0,0}
	};

void
usage(const char *progname) {
	printf("Usage %s:\n"
		"\t--lsb-help         Display this message\n"	
		"\t--lsb-version      Display the version of LSB this tool can build for.\n"	
                "\t--lsbcc-version    Display the version of the tool itself.\n"
		"\t--lsb-verbose      Print out full commands to system compiler.\n"	
		"\t--lsb-cpp=<cpp>    Set an alternate cpp to use\n" 
		"\t--lsb-includepath=<include_path>\n"
		"\t                   Set the path to the lsb includes directory\n"
		"\t                    (overrides the LSBCC_INCLUDES environment setting)\n"
		"\t--lsb-cxx-includepath=<include_path>\n"
		"\t                   Set the path to the lsb c++ include directory\n"
		"\t                    (overrides the LSBCXX_INCLUDES environment\n "
		"\t                    setting)\n"
	
		"All other options are passed to the cpp more or\n"
		"less unmodified, --lsb options should appear before system\n"
		"cpp options.\n"
		,progname);
}

int main(int argc, char *argv[])
{
int	c,i;
int	option_index;
int	display_cmd = 0;
char	*ptr;

/*
 * Initialize various argv groups.
 */
cppargs=argvinit();
args=argvinit();

/*
 * Set up the paths we will need
 */
snprintf(incpath, PATH_MAX-1, "%s/%s", BASE_PATH, "include");
snprintf(cxxincpath, PATH_MAX-1, "%s/%s", BASE_PATH, "include/c++");

/*
 * Check for some environment variable, and adjust things if they are found.
 */

if( (ptr=getenv("LSBCC_WARN")) != NULL ) {
	lsbcc_warn=strtod(ptr,NULL);
}

if( (ptr=getenv("LSBCC_DEBUG")) != NULL ) {
	lsbcc_debug=strtod(ptr,NULL);
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES ) {
		fprintf(stderr,"lsbcc debug set to 0x%x\n", lsbcc_debug );
	}
}

if( (ptr=getenv("LSBCC_INCLUDES")) != NULL ) {
	memset(incpath, 0, strlen(incpath));
	strcpy(incpath, ptr);
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES ) {
		fprintf(stderr,"include prefix set to %s\n", incpath );
	}
}

if( (ptr=getenv("LSBCC_VERBOSE")) != NULL ) {
	display_cmd = 1;
}

if( (ptr=getenv("LSB_CPP")) != NULL ) {
	cppname=ptr;
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES ) {
       		fprintf(stderr,"cpp name set to %s\n", cppname );
	}
}


if( lsbcc_debug&DEBUG_ARGUMENTS ) {
	for(i=0;i<argc;i++) {
		fprintf(stderr,"%3.3d: %s\n", i, argv[i] );
	}
}
	

/* Process the options passed in */
opterr = 0;

while((c=getopt_long_only(argc,argv,optstr,long_options, &option_index))>=0 ) {
	switch(c) {
	case 0:
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS ) {
			fprintf(stderr,"option0: -%s", 
				long_options[option_index].name);
			if( optarg ) {
				fprintf(stderr, " with arg %s", optarg);
			}
			fprintf(stderr,"\n");
		}
		argvadd(args,long_options[option_index].name,optarg);
		break;
	case 1: /* all args not prefixed by - */
		argvaddstring(args,strdup(optarg));
		break;
	case 2: /* --help intended for cpp, we'll add our 2cents however */
		argvaddstring(args, strdup("--help"));
	case 3: /* --lsb-help */
		usage(argv[0]);
		if (c == 3) {
			exit(0);
		}
		break;
	case 4: /* --lsb-version */
		printf("%s\n", lsbcc_lsb_version);
		exit(0);
		break;
	case 5: /* --lsb-verbose */
		display_cmd = 1;
		break;
	case 6: /* --lsb-cpp=<cpp> */
		cppname=strdup(optarg);
		break;
	case 9: /* --lsb-includepath=<path> */
		memset(incpath, 0, strlen(incpath));
		strcpy(incpath, optarg);
		break;
	case 10: /* --lsb-cxx-includepath=<path> */
		memset(cxxincpath, 0, strlen(cxxincpath));
		strcpy(cxxincpath, optarg);
		break;
	case 22: /* --lsbcc-version */
		printf("%s\n", LSBCC_VERSION);
		exit(0);
		break;
	case '?':
		if (strncmp(argv[optind-1], "--lsb-",6) == 0) {
			/*
			 * We simply refuse to pass --lsb- prefixed
			 * options along to cpp, since they are likely
			 * just typos of legit --lsb- options..
			 */
			usage(argv[0]);
			exit(EXIT_FAILURE);
			
		}
		/*
		 * This is an attempt to catch things that we don't
		 * explicitly recognize, and just pass it through to cpp.
		 */
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS ) {
			fprintf(stderr,"option?: %s optopt %x %c\n",
					argv[optind-1], optopt, optopt );
		}
		if( (optopt && (optopt != '?')) || (argv[optind-1][0] == '-') ) {
			argvaddstring(args,argv[optind-1]);
		} else {
			fprintf(stderr,"ERROR: Dropping argument %s\n",
							argv[optind-1] );
		}
		break;
	default:
		/* We shouldn't get here */
		printf("unhandled option %c", c );
		if( optarg )
			printf (" with arg %s", optarg);
		printf("\n");
	}
}

/*
 * determine if the cppname is actually lsbcc - this might
 * just be somebody messing with us, but it might also be
 * an innocent freudian typo.
 */
if (strcmp(basename(cppname), "lsbcpp") == 0) {
	printf("You can not use %s as your cpp!\n", argv[0]);
	exit(-1);
}

/*
 * set the compiler
 */
argvaddstring(cppargs,cppname);

argvaddstring(cppargs,"-nostdinc");
argvadd(cppargs,"I",incpath);
argvadd(cppargs,"I",cxxincpath);
argvappend(cppargs,args);


/* ensure argument list is null terminated */
cppargs->argv[cppargs->numargv] = NULL;

if( lsbcc_debug&DEBUG_MODIFIED_ARGS) {
	argvdump(cppargs);
}

/*
 * pretty-print the pending command line
 */
if (display_cmd) {
	argvprint(cppargs);
}

assert(cppargs->numargv > 0);
/* exec to cpp */
execvp(cppargs->argv[0], cppargs->argv);

exit (EXIT_FAILURE); /* exec must have failed! */
}
