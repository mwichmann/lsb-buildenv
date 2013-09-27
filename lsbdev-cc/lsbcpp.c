/*
 * Copyright (C) 2002-2012 Linux Foundation
 *
 * Derived from lsbcc.c,
 * 2002/05/09 Stuart Anderson, Free Standards Group
 *
 * This file is part of lsbcc.  lsbcc is free software, covered
 * under the terms of the BSD license.
 */
/*
 * This is the lsbccp tool. It is mostly useful for situations where
 * configure scripts perform tests based solely on passing intput to
 * cpp rather than passing input to a compiler.
 *
 * Set your CPP environment variable to lsbcpp to gain effect.
 *
 * This code is a stripped down version of lsbcc.c
 * it needs to be kept in sync to some extent.
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
#include "lsbcc_libs.h"
#include "lsbcc_argv.h"

/*
 * These are the categories of options that we are going to be grouping
 * together.  This list is a lot smaller for lsbcpp.
 */
struct argvgroup *cppargs;
struct argvgroup *options;

/*
 * Set the default names of the cpp to call and the paths
 * to LSB headers and libraries.  These can be changed through
 * environment variables.
 */
#ifndef BASE_PATH
#define BASE_PATH "/opt/lsb"
#endif

char *cppname = "cpp";
char incpath[PATH_MAX];
char cxxincpath[PATH_MAX];

/* 'Normal' version name */
char *lsbcc_lsbversion = DEFAULT_LSB_VERSION;
/* Version name with dot removed */
char *lsbversion_option;

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

int lsbcc_debug = 0;	/* Default to none. autocon likes things to be quiet. */
int lsbcc_warn = 0;
int lsbcc_buildingshared = 0;

/*
 * Variable to store optind value - we'll have to process command line twice.
 */
int optind_old;
 
/* TODO XXX
 * The code to add per-LSB-version include paths that was added
 * to lsbcc.c should probably be ported over to lsbcpp.c
 */

/*
 * options we need to recognize.  some of these are for this program,
 * some are options for the compiler that need some knowledge while
 * we're still in this program.  this list is a lot shorter than in lsbcc.
 */
char *optstr = "vV:";
struct option long_options[] = {
    {"help", 0, NULL, 2},
    {"lsb-help", 0, NULL, 3},
    {"lsb-version", 0, NULL, 4},
    {"lsb-verbose", no_argument, NULL, 5},
    {"lsb-cpp", 0, NULL, 6},
    {"lsb-includepath", required_argument, NULL, 9},
    {"lsb-cxx-includepath", required_argument, NULL, 10},
    {"lsb-forcefeatures", no_argument, NULL, 12},
    {"verbose", required_argument, NULL, 14},
    {"version", required_argument, NULL, 15},
    {"lsb-target-version", required_argument, NULL, 21},
    {"lsbcc-version", no_argument, NULL, 22},
    {NULL, 0, 0, 0}
};

void usage(const char *progname)
{
    printf("Usage %s:\n"
"  --lsb-help           Display this message\n"
"  --lsb-version        Display the version of LSB this tool can build for.\n"
"  --lsbcc-version      Display the version of the tool itself.\n"
"  --lsb-verbose        Print out full commands to system compiler.\n"
"  --lsb-cpp=<path to c preprocessor>\n"
"                       Set the system c prepdocessor (overrides the LSB_CPP\n"
"                       environment setting)\n"
"  --lsb-forcefeatures  Force setting -D flags for full feature set LSB supports\n"
"  --lsb-includepath=<include_path>\n"
"                       Set the path to the lsb includes directory\n"
"                       (overrides the LSBCC_INCLUDES environment setting)\n"
"  --lsb-cxx-includepath=<include_path>\n"
"                       Set the path to the lsb c++ include directory\n"
"                       (overrides the LSBCXX_INCLUDES environment setting)\n "
"  --lsb-target-version=<target_lsb_version>\n"
"                       Target LSB version.\n"
"\n"
"All other options are passed to the preprocessor more or less unmodified.\n"
"  --lsb options should appear before system cpp options.\n"
"\n", progname);
}

/*
 * We need to set some defines to correctly describe the assumed environment.
 */
char *featuresettings[] = {
    "-D_ISOC99_SOURCE=1",
    "-D_XOPEN_SOURCE=600",
    "-D_XOPEN_SOURCE_EXTENDED=1",
    "-D_LARGEFILE_SOURCE=1",
    "-D_LARGEFILE64_SOURCE=1",
    "-D_BSD_SOURCE=1",
    "-D_SVID_SOURCE=1",
    "-D_GNU_SOURCE=1"
};

int numfeaturesettings = (sizeof(featuresettings) / sizeof(char *));

/*
 * modify, in place, a string to strip 'chr' characters from it
 * current use is to transform versions, like "5.0" -> "50"
 */
void cleanvers(char *s, char chr)
{
    int i, j;

    for ( i = 0, j = 0; s[i] != '\0'; i++ ) {
	if ( s[i] != chr )
	    s[j++] = s[i];
    }
    s[j] = '\0'; /* re-null-terminate */
}

int main(int argc, char *argv[])
{
    int c, i;
    int option_index;
    int display_cmd = 0;
    int feature_settings = 0;
    char *ptr;

    /*
     * Initialize various argv groups.
     */
    cppargs = argvinit();
    options = argvinit();

    /*
     * Set up the paths we will need
     */
    snprintf(incpath, PATH_MAX - 1, "%s/%s", BASE_PATH, "include");
    snprintf(cxxincpath, PATH_MAX - 1, "%s/%s", BASE_PATH, "include/c++");

    /*
     * figure out if the user has requested a change to the target LSB vers.
     * In lsbcc, this has to happen first because it may affect other 
     * constructions like library paths.  In lsbcpp this should not be a 
     * problem, but it seems easier to keep the order in sync between the two.
     */
    if ((ptr = getenv("LSBCC_LSBVERSION")) != NULL) {
	if (get_version_index(ptr) >= 0) {
	    lsbcc_lsbversion = strdup(ptr);
	    if (lsbcc_debug & DEBUG_ENV_OVERRIDES) {
		fprintf(stderr, "lsb version value set to %s\n",
			lsbcc_lsbversion);
	    }
	} else {
	    fprintf(stderr,
		    "LSBCC_LSBVERSION contains unrecognized value %s, ignored\n",
		    ptr);
	}
    }

    /*
     * Do we have '--lsb-target-version' option?
     * Override other settings, if this option provides a valid value
     */
    optind_old = optind;
    opterr = 0;
    while ((c =
	    getopt_long_only(argc, argv, optstr, long_options,
			     &option_index)) >= 0) {
	if (c == 21) {		/* --lsb-target-version=<LSB_version> */
	    if (get_version_index(optarg) >= 0) {
		lsbcc_lsbversion = strdup(optarg);
	    } else {
		fprintf(stderr,
			"--lsb-target-version contains unrecognized value %s, ignored\n",
			optarg);
	    }
	}
    }

    /* Restore optind - we'll process all other options later */
    optind = optind_old;

    /* Set up __LSB_VERSION__ define */
    lsbversion_option =
	(char *) malloc(sizeof(char) *
			(strlen("-D__LSB_VERSION__=") +
			 strlen(lsbcc_lsbversion) + 1));
    if (lsbversion_option == NULL) {
	/*XXX FIXME no error message? */
	exit(EXIT_FAILURE);
    }
    strcpy(lsbversion_option, "-D__LSB_VERSION__=");

    /*
     * LSB_VERSION values contain dots, we need a non-dotted version to
     * append for the -D.  Make a copy first since string will be modified
     */
    ptr = strdup(lsbcc_lsbversion);
    cleanvers(ptr, '.');
    strcat(lsbversion_option, ptr);
    free (ptr);

    /*
     * Check for more environment variables, and adjust things if found.
     */
    if ((ptr = getenv("LSBCC_WARN")) != NULL) {
	lsbcc_warn = strtod(ptr, NULL);
    }

    if ((ptr = getenv("LSBCC_DEBUG")) != NULL) {
	lsbcc_debug = strtod(ptr, NULL);
	if (lsbcc_debug & DEBUG_ENV_OVERRIDES) {
	    fprintf(stderr, "lsbcc debug set to 0x%x\n", lsbcc_debug);
	}
    }

    if ((ptr = getenv("LSBCXX_INCLUDES")) != NULL) {
	strncpy(cxxincpath, ptr, sizeof(cxxincpath)-1);
	cxxincpath[sizeof(cxxincpath)-1] = '\0';
	if (lsbcc_debug & DEBUG_ENV_OVERRIDES) {
	    fprintf(stderr, "c++ include prefix set to %s\n", cxxincpath);
	}
    }

    if ((ptr = getenv("LSBCC_INCLUDES")) != NULL) {
	strncpy(incpath, ptr, sizeof(incpath)-1);
	incpath[sizeof(incpath)-1] = '\0';
	if (lsbcc_debug & DEBUG_ENV_OVERRIDES) {
	    fprintf(stderr, "include prefix set to %s\n", incpath);
	}
    }

    if (getenv("LSBCC_VERBOSE") != NULL) {
	display_cmd = 1;
    }

    if ((ptr = getenv("LSBCPP")) != NULL) {
	cppname = strdup(ptr);
	if (lsbcc_debug & DEBUG_ENV_OVERRIDES) {
	    fprintf(stderr, "cpp name set to %s\n", cppname);
	}
    }

    if (getenv("LSBCC_FORCEFEATURES") != NULL) {
	feature_settings = 1;
    }

    if (lsbcc_debug & DEBUG_ARGUMENTS) {
	for (i = 0; i < argc; i++) {
	    fprintf(stderr, "%3.3d: %s\n", i, argv[i]);
	}
    }

    /* Process the options passed in */
    opterr = 0;

    while ((c =
	    getopt_long_only(argc, argv, optstr, long_options,
			     &option_index)) >= 0) {
	switch (c) {
	case 0:
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS) {
		fprintf(stderr, "option0: -%s",
			long_options[option_index].name);
		if (optarg) {
		    fprintf(stderr, " with arg %s", optarg);
		}
		fprintf(stderr, "\n");
	    }
	    argvadd(options, long_options[option_index].name, optarg);
	    break;
	case 1:		/* all args not prefixed by - */
	    argvaddstring(options, strdup(optarg));
	    break;
	case 2:		
	    /* --help intended for cpp, we'll add our 2cents however */
	    /*gccstartargs*/
	    argvaddstring(options, strdup("--help"));
	    /* fallthrough */
	case 3:		/* --lsb-help */
	    usage(argv[0]);
	    if (c == 3) {
		exit(EXIT_SUCCESS);
	    }
	    break;
	case 4:		/* --lsb-version */
	    printf("%s\n", lsbcc_lsb_version);
	    exit(EXIT_SUCCESS);
	    break;
	case 5:		/* --lsb-verbose */
	    display_cmd = 1;
	    break;
	case 6:		/* --lsb-cpp=<cpp> */
	    cppname = strdup(optarg);
	    break;
	case 9:		/* --lsb-includepath=<path> */
	    strncpy(incpath, optarg, sizeof(incpath)-1);
	    incpath[sizeof(incpath)-1] = '\0';
	    break;
	case 10:		/* --lsb-cxx-includepath=<path> */
	    strncpy(cxxincpath, optarg, sizeof(cxxincpath)-1);
	    incpath[sizeof(cxxincpath)-1] = '\0';
	    break;
	case 12:		/* --lsb-forcefeatures */
	    feature_settings = 1;
	    break;
	case 'V':
	case 14:		/* --verbose */
	case 15:		/* --version */
	case 'v':
	    argvaddstring(options, argv[optind - 1]);
	    /* fallthrough to add this program's version */
	case 22:		/* --lsbcc-version */
	    printf("%s (lsbcc) %s\n", argv[0], LSBCC_VERSION);
	    if (c == 22) {
		exit(EXIT_SUCCESS);
	    }
	    break;
	case 21:		/* --lsb-target-version */
	    /* We have already processed this option */
	    break;
	case '?':
	    if (strncmp(argv[optind - 1], "--lsb-", 6) == 0) {
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
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS) {
		fprintf(stderr, "option?: %s optopt %x %c\n",
			argv[optind - 1], optopt, optopt);
	    }
	    if ((optopt && (optopt != '?'))
		|| (argv[optind - 1][0] == '-')) {
		argvaddstring(options, argv[optind - 1]);
	    } else {
		fprintf(stderr, "ERROR: Dropping argument %s\n",
			argv[optind - 1]);
	    }
	    break;
	default:
	    /* We shouldn't get here */
	    printf("unhandled option %c", c);
	    if (optarg)
		printf(" with arg %s", optarg);
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
	exit(EXIT_FAILURE);
    }

/*
 * Only force feature settings if LSBCC_FORCEFEATURES is defined
 * Otherwise assume the app developer knew what they where doing
 * with feature define flags.
 */
    if (feature_settings) {
	for (i = 0; i < numfeaturesettings; i++) {
	    argvaddstring(options, featuresettings[i]);
	}
    }
    argvaddstring(options, lsbversion_option);

    /*
     * set the compiler
     */
    argvaddstring(cppargs, cppname);

    /* Gather together the non-options arguments */
    if (optind < argc) {
	if (lsbcc_debug & DEBUG_UNRECOGNIZED_ARGS) {
	    fprintf(stderr, "non-option ARGV-elements: ");
	}
	while (optind < argc) {
	    if (lsbcc_debug & DEBUG_UNRECOGNIZED_ARGS) {
		fprintf(stderr, "%s ", argv[optind]);
	    }
	    argvaddstring(options, argv[optind++]);
	}
	if (lsbcc_debug & DEBUG_UNRECOGNIZED_ARGS) {
	    fprintf(stderr, "\n");
	}
    }

    /* XXX this doesn't seem to be done in lsbcc any longer
     * removed for now per bug 3714
    argvaddstring(cppargs, "-nostdinc");
     */

    argvadd(cppargs, "I", incpath);
    argvadd(cppargs, "I", cxxincpath);
    argvappend(cppargs, options);

    /* ensure argument list is null terminated */
    cppargs->argv[cppargs->numargv] = NULL;

    if (lsbcc_debug & DEBUG_MODIFIED_ARGS) {
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

    exit(EXIT_FAILURE);		/* exec must have failed! */
}
