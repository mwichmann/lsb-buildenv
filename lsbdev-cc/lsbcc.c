/*
 * Copyright (C) 2002-2013 Linux Foundation
 *
 * Originally written 2002/05/09 Stuart Anderson, Free Standards Group
 *
 * This file is part of lsbcc.  lsbcc is free software, covered
 * under the terms of the BSD license.
 */
/*
 * This is the lsbcc wrapper (which can also be known as lsbc++). 
 * It is used to aid in building LSB conforming applications.
 * LSB conforming applications can be built without this tool, but using
 * lsbcc make it easier to get everything right. 
 * This is a re-implementation of the original shell script.
 *
 * The basic premise is this: The LSB development environment provides
 * a set of headers and libraries found in /opt/lsb/include and 
 * /opt/lsb/lib respectively (configurable). These headers and libraries have
 * been carefully constructed so that they contain only the interfaces 
 * provided by the LSB. An LSB conforming application must also be linked 
 * with a special program intepreter, usually ld-lsb.so.3 but the name
 * is defined in each LSB architecture supplement). lsbcc arranges the
 * task of including these headers and link-editing against these libraries
 * specifying the correct program interpreter.
 *
 * There are still some parts of a development system (gcc headers, crt0.o,
 * etc) that must be used but are not provided by the LSB, so the native
 * version of these gets used. The trick is to ensure that the LSB provided
 * parts take precedence over the regular versions. This is accomplished by
 * inserting a couple of extra options in the right place before actually
 * calling gcc (or other specified native compiler).
 *
 * The approach is to recognize enough of the regular options to allow the 
 * extra options to be inserted into the right place. Fortunately,
 * the options can be grouped into a few categories, and the order in which
 * the categories are passed to gcc is not important, as long as the order of
 * items within each category is preserved. The extra options are easily 
 * inserted in between the categories.
 *
 * NOTE: the above claim turn out to be a lie; there are known
 * problems caused by reordering things from the command line the
 * user originally passed in. LSB bug 2941 describes an instance of this.
 * The solution unfortunately appears to involve yet another rewrite,
 * which has not yet been attempted.
 *
 * There are some problems that complicate this process (and this is what 
 * ended the life of the shellscript-based lsbcc). For one, some of the 
 * options have optional parameters (i.e. -W and -O) and the getopt command 
 * wasn't able to communicate this to the rest of the shell script. Another 
 * is that when strings are passed in as a define (ie -DFOO="A String Here"),
 * the quotes were getting stripped off, so what got passed to gcc was a bunch
 * of invalid options.
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
#include "linkers.h"

#include "elf_utils.h"

/*
 * These are the categories of options that we are going to be grouping
 * together.
 */
struct argvgroup *proginterp;
struct argvgroup *target;
struct argvgroup *options;
struct argvgroup *libpaths;
struct argvgroup *incpaths;
struct argvgroup *userlibs;
struct argvgroup *syslibs;
struct argvgroup *gccargs;
struct argvgroup *lsblibs;
struct argvgroup *gccstartargs;

/*
 * Find out if we are being used for C++. If so, we need to do a couple
 * of extra things.
 */
#define LSBCC		0
#define LSBCPLUS	1

int lsbccmode = LSBCC;

/*
 * Set the default names of the compiler to call and the paths
 * to LSB headers and libraries.  These can be changed through
 * environment variables.
 */
#ifndef BASE_PATH
#define BASE_PATH "/opt/lsb"
#endif

char *ccname = "cc";
char incpath[PATH_MAX];
char cxxincpath[PATH_MAX];
char libpath[PATH_MAX];
char *lsbcc_lsbversion = DEFAULT_LSB_VERSION; /* 'Normal' version name */
char *lsbversion_option;		/* Version name with dot removed */
/* Index in the lsb_libs array corresponding to the target LSB version */
int lsbversion_index = 0;
/* Debugging interface: Set LSBCC_DEBUG to a bitmask (see lsbcc_argv.h) */
int lsbcc_debug = 0;	/* Default to none. autoconf likes things quiet. */
int cpp_only = 0;	/* another flag to help autoconf */
int lsbcc_warn = 0;
int lsbcc_buildingshared = 0;

/*
 * State variables to determine if we need to add -Wl,-Bdynamic 
 * or -Wl,-Bstatic before a library
 * b_dynamic tracks the mode we're currently in, b_dynamic_req which we want
 */
int b_dynamic = 1;
int b_dynamic_req = 1;

/*
 * State variables to track adding of -Wl,whole-archive and -Wl,no-whole-archive
 */
int whole_archive_seen = 0;
int whole_archive_emitted = 0;
struct argvgroup *whole_archive_list = NULL;	/* pointer to list to add to */

/*
 * Variable to store optind value - we'll have to process command line twice.
 */
int optind_old;

/*
 * Lookup table for extra include paths for each LSB version.
 */
char *lsb30_version_include_paths[] = { NULL };
char *lsb31_version_include_paths[] = { BASE_PATH "/include/libpng12", NULL };
char *lsb32_version_include_paths[] = { BASE_PATH "/include/libpng12", NULL };
char *lsb40_version_include_paths[] = { BASE_PATH "/include/libpng12", NULL };
char *lsb41_version_include_paths[] = { BASE_PATH "/include/libpng12", NULL };
char *lsb50_version_include_paths[] = { BASE_PATH "/include/libpng15", NULL };

char **lsb_version_include_paths[] = {
  lsb30_version_include_paths,
  lsb31_version_include_paths,
  lsb32_version_include_paths,
  lsb40_version_include_paths,
  lsb41_version_include_paths,
  lsb50_version_include_paths
};

/* begin option processing routines */

/*
 * Some options require a little bit of additional processing, so we have
 * a few routines here that are used to do the special processing.
 */
int process_opt_l(char *val)
{
    char buf[32];
    int i;

    sprintf(buf, "-l%s", val);

    /*
     * If the library is in the LSB list, we make sure it's 
     * dynamically linked.  The exception is if static linking
     * has been explicitly requested, which we have to honor.
     */
    for (i = 0; i < lsblibs->numargv; i++) {
	if (strcmp(lsblibs->argv[i], val) == 0) {
	    /*
	     * A state machine here (d=b_dynamic, r=b_dynamic_req):
	     * 1. d=1,r=1: already in right mode (dyn) - do nothing 
	     * 2. d=0,r=1: in static mode, dynamic requested - flip
	     * 3. d=0,r=0: already in right mode (stat) - do nothing
	     * 4. d=1,r=0: in dynamic, static requested - flip
	     * Request comes from command-line argument.
	     * if the last thing we saw was a non-LSB lib, it leaves us
	     * in state 2 so we'll go back to dynamic here
	     */
	    if (b_dynamic_req && !b_dynamic) {
		if (lsbcc_debug & DEBUG_LIB_CHANGES)
		    fprintf(stderr, "Inserting -Wl,-Bdynamic\n");
		argvaddstring(userlibs, "-Wl,-Bdynamic");
		b_dynamic = 1;
	    }
	    if (!b_dynamic_req && b_dynamic) {
		if (lsbcc_debug & DEBUG_LIB_CHANGES)
		    fprintf(stderr, "Inserting -Wl,-Bstatic\n");
		argvaddstring(userlibs, "-Wl,-Bstatic");
		b_dynamic = 0;
	    }
	    argvaddstring(userlibs, buf);

	    /* If it's pthread, add pthread_nonshared. */
	    if (strcmp(val, "pthread") == 0) {
		if (lsbcc_debug & DEBUG_LIB_CHANGES)
		    fprintf(stderr, "Appending -lpthread_nonshared\n");
		argvaddstring(userlibs, "-lpthread_nonshared");
	    }

	    return 1;
	}
    }

    /* Not an LSB library. Check if we need to emit whole-archive flag */
    if (whole_archive_seen && !whole_archive_emitted) {
	if (lsbcc_debug & DEBUG_LIB_CHANGES)
	    fprintf(stderr, "Appending -Wl,--whole-archive\n");
	argvaddstring(userlibs, "-Wl,--whole-archive");
	whole_archive_list = userlibs;
	whole_archive_emitted = 1;
    }

    /* and force static linking */
    if (lsbcc_debug & DEBUG_LIB_CHANGES)
	fprintf(stderr, "Forcing %s to be linked statically\n", val);

    if (lsbcc_warn & WARN_LIB_CHANGES || lsbcc_buildingshared)
	fprintf(stderr, "Warning: forcing %s to be linked statically\n", val);

    if (b_dynamic) {
	if (lsbcc_debug & DEBUG_LIB_CHANGES)
	    fprintf(stderr, "Inserting -Wl,-Bstatic\n");
	argvaddstring(userlibs, "-Wl,-Bstatic");
	b_dynamic = 0;
	/*
	 * in case next lib is an LSB lib, this indicates we should flip
	 * to dynamic mode. If it's another non-LSB lib, we won't look
	 * at b_dynamic_req and so remain in static mode as we should.
	 * If the next interesting event is -Wl,-Bstatic on the command
	 * line, this flag will be turned off so there's no flip.
	 */
	b_dynamic_req = 1;
    }
    argvaddstring(userlibs, buf);

    return 0;
}

void process_opt_L(char *libdir)
{
    int i;

    for (i = 0; i < libpaths->numargv; i++) {
	if ((strlen(libpaths->argv[i]) == strlen(libdir)) &&
	    strcmp(libpaths->argv[i], libdir) == 0) {
	    return;
	}
    }

    argvadd(libpaths, "L", libdir);
}

/*
 * libtool (cooperation?) hack:
 * Because libtool sometimes inserts fully qualified paths to shared libs
 * rather than adding -llib args, we have more fixups to do.  We are sure
 * that libtool has its reasons for doing this when it does, but the result
 * won't be LSB compliant, so we can't let that stand.  We however will
 * make an attempt to be as friendly about it as possible and attempt to
 * fixup the command line.
 */
int perform_libtool_fixups(const char *optarg)
{
    ElfFile *efile = NULL;
    char *libfile, *libdir, *tmp;
    int i;

    /*
     * We do a first level filter on /usr/lib
     * If the file is in /usr/lib and has '.so' in it someplace,
     * we assume that it is a shared lib.
     * This takes care of ld scripts like /usr/lib/libc.so
     */

    /* check if the file is a shared lib */
    efile = OpenElfFile(optarg);
    if (!efile && strncmp(optarg, "/usr/lib", strlen("/usr/lib")) != 0) {
	return 0;
    }
    if (efile && efile->elf_header->e_type != ET_DYN) {
	CloseElfFile(efile);
	return 0;
    }

    /*
     * If so, check to see if its a shared lib lsb includes,
     * re-write the path in terms of -L and -llib
     */
    libdir = strdup(optarg);
    libfile = basename(libdir);
    tmp = strstr(libfile, ".so");
    if (!tmp) {
	fprintf(stderr,
		"Warning: Shared library %s does not follow the libfoo.so convention\n",
		optarg);
	CloseElfFile(efile);
	return 0;
    }
    *tmp = '\0';
    if (strlen(libfile) <= strlen("lib")) {
	fprintf(stderr,
		"Warning: Shared library %s does not follow the libfoo.so convention\n",
		optarg);
	if (efile)
	    CloseElfFile(efile);
	free (libdir);
	return 0;
    }

    libfile += strlen("lib");
    if (process_opt_l(libfile) == 1) {
	CloseElfFile(efile);
	/*
	 * add an -L for non LSB libs.
	 */
	free (libdir);
	return 1;
    }

    /*
     * add a -L for this lib if we made it static
     */
    process_opt_L(dirname(libdir));
    free (libdir);

    /*
     * Now also check to see if the shared lib
     * had any DT_NEEDED tags and do the same for them.
     */
    if (efile) {
	for (i = 0; i < efile->numdynents; i++) {
	    if (efile->dyns[i].d_tag == DT_NEEDED) {
		libfile = strdup(ElfGetStringIndex(efile,
						   efile->dyns[i].d_un.
						   d_val,
						   efile->dynhdr->
						   sh_link));
		if (lsbcc_debug & DEBUG_LIB_CHANGES) {
		    printf("Adding DT_NEEDED lib %s from %s\n",
			   libfile, optarg);
		}

		tmp = strstr(libfile, ".so");
		if (!tmp) {
		    fprintf(stderr,
			    "Warning: DT_NEEDED Shared library %s from %s does not follow the libfoo.so convention\n",
			    libfile, optarg);
		    free(libfile);
		    continue;
		}
		*tmp = '\0';
		if (strlen(libfile) <= strlen("lib")) {
		    fprintf(stderr,
			    "Warning: DT_NEEDED Shared library %s from %s does not follow the libfoo.so convention\n",
			    libfile, optarg);
		    free(libfile);
		    continue;
		}
		process_opt_l(libfile + strlen("lib"));
		free(libfile);
	    }
	}
	CloseElfFile(efile);
    }
    return 1;
}

/* end option processing routines */

/* begin utility functions */

/* We need to figure out the path to the compiler base directory.
 * Unfortunately, we don't know how to do this in a compiler-independent way.
 * This would need tweaking if a non-gcc compiler didn't recognize
 * option -print-libgcc-file-name.
 */
char *gccbasedir;

void find_gcc_base_dir()
{
    FILE *cccmd;
    char cmd[PATH_MAX];
    static char buf[PATH_MAX];

    /* Set a fictitious default value */
    gccbasedir = "/usr/lib/gcc-lib/i386-linux/2.95.4";

    sprintf(cmd, "%s -print-libgcc-file-name", ccname);
    if ((cccmd = popen(cmd, "r")) == NULL) {
	fprintf(stderr, "Failed to popen \"%s\"\n", cmd);
	return;
    }

    if (fgets(buf, PATH_MAX, cccmd) == NULL) {
	fprintf(stderr, "nothing to read from \"%s\"\n", cmd);
	pclose(cccmd);
	return;
    }

    gccbasedir = dirname(buf);
    pclose(cccmd);
    return;
}

/*
 * Although the C++ ABI was supposed to be the same for gcc 3.4 and
 * 4.0, a small change was made to the ABI to fix a problem with
 * rethrowing exception objects with complex constructors.  In order
 * to use gcc 4.x for building LSB-compliant applications, we have to
 * generate code using the old ABI.
 *
 * The ABI changes have been collapsed into a static library that
 * lsbcc can add to the link path and resolve those symbols.  We
 * should link that library, therefore, to all C++ applications, but
 * only when we're using gcc 4.x.  The following function can detect
 * when we need the compatibility library.
 *
 * In any situation where there's doubt, this function will report
 * that the compatibility library is not needed.
 */

char gccversion[16] = "\0";

int need_gcc34_compat()
{
    FILE *cccmd;
    char cmd[PATH_MAX];
    size_t resultlen;

    if (gccversion[0] == '\0') {
	/* Ask gcc for its version, if we haven't already. */
	sprintf(cmd, "%s -dumpversion", ccname);

	if ((cccmd = popen(cmd, "r")) == NULL) {
	    fprintf(stderr, "Failed to popen \"%s\"\n", cmd);
	    return 0;
	}

	fgets(gccversion, 16, cccmd);
	pclose(cccmd);

	/* Strip the trailing newline. */
	resultlen = strlen(gccversion);
	if (resultlen > 0) {
	    gccversion[resultlen - 1] = '\0';
	}
    }

    /* Figure out what we need by looking at the gcc major version number */
    switch (gccversion[0]) {

    case '\0':
	/* Read error of some kind on the gcc pipe. */
	fprintf(stderr, "could not read gcc version\n");
	return 0;

    case '3':
	/* gcc 3.x */
	return 0;

    case '4':
	/* gcc 4.x */
	return 1;

    default:
	/* Some other value we don't recognize. */
	fprintf(stderr, "unrecognized gcc version: \"%s\"\n", gccversion);
	return 0;
    }
}

/*
 * Starting with gcc 4.1, gcc will emit new symbols for stack
 * protection.  This is a good thing, but for LSB 3.x, those new
 * symbols need to be suppressed.  This function attempts to figure
 * out whether this suppression is needed.  Later code will use this
 * code to add -fno-stack-protector to the command line.  As with
 * need_gcc34_compat, when in doubt, don't add the option.
 */

int need_stack_prot_suppression()
{
    /* 
     * If we don't need the gcc 3.4 workaround, we don't need this.
     * This also conveniently loads the gcc version for us.
     */
    if (!need_gcc34_compat())
	return 0;

    /* 
     * If we're here, we know we're running a gcc 4.x version.
     * Check the minor version number in this case.
     */
    switch (gccversion[2]) {

    case '0':
	/* Don't need it for gcc 4.0. */
	return 0;

    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
	/* 
         * pretty much need it for all newer versions of 4.x, though here
	 * we hedge our bets and only test for known gcc versions.
	 * There's usually some other issue anyway (usually c++)
	 */
	return 1;

    default:
	/*
	 * Some other value we don't recognize.  
	 * Following the previous pattern, assume we need it here.
	 *
	 * Bug 3816 comment #4 notes that it breaks autoconf scripts if 
	 * "lsbcc -E" writes to stderr.  Since we're trying to let untested 
	 * new versions still work, avoid doing this in the preprocessor case.
	 */
	if (! cpp_only)
	    fprintf(stderr, "unrecognized gcc version: \"%s\"\n", gccversion);
	return 1;
    }
}

/*
 * Recent binutils generates a new hash in the ELF object which speeds
 * up dynamic library loading, but freaks out older dynamic linkers.
 * Reports indicate that binutils does not always generate
 * backward-compatible executables.  So, we check if ld recognizes the
 * --hash-style argument, in which case we probably need to override
 * the default hash.
 */

int need_sysv_hash()
{
    char buf[80];
    FILE *ldhelp;
    int result = 0;

    ldhelp = popen("/usr/bin/ld --help", "r");
    if (ldhelp == NULL) {
	fprintf(stderr, "warning: could not find ld\n");
	return 0;
    }

    while (fgets(buf, 80, ldhelp)) {
	if (strstr(buf, "--hash-style") != NULL) {
	    result = 1;
	    break;
	}
    }

    pclose(ldhelp);
    return result;
}

/*
 * Several architectures have changed the default length of a long
 * double, necessitating us to override the default on LSB 3.x.  This
 * function determines whether this is necessary.
 */

int need_long_double_64()
{
#if defined __powerpc__ || defined __s390__
    /* Since LSB 4.0, we don't need this. */
    if (strcmp(lsbcc_lsbversion, "4.0") >= 0)
	return 0;

    /* 
     * If we don't need the gcc 3.4 workaround, we don't need this.
     * This also conveniently loads the gcc version for us.
     */
    if (!need_gcc34_compat())
	return 0;

    /* This option became available on gcc 4.1. */
    switch (gccversion[2]) {

    case '0':
	/* Don't need it for gcc 4.0. */
	return 0;

    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
	/* 
         * pretty much need it for all newer versions of 4.x, though here
	 * we hedge our bets and only test for known gcc versions.
	 * There's usually some other issue anyway (usually c++)
	 */
	return 1;

    default:
	/*
	 * Some other value we don't recognize.  
	 * Following the previous pattern, assume we need it here.
	 */
	fprintf(stderr, "unrecognized gcc version: \"%s\"\n", gccversion);
	return 1;
    }
#else
    /* Don't need this except on PPC and S390 systems (32- or 64-bit). */
    return 0;
#endif
}

/*
 * Tools which force gcc to include system headers are some of the
 * most troublesome causes of build issues with the LSB.  As part of
 * the fix to this problem, we now check include paths against a list
 * of "dangerous" paths.  The function's return value determines
 * whether the include path is "bad" or not.
 */

char *bad_includes[] = {
    "/usr/include",
    NULL
};

int check_include_path(const char *include_path)
{
    int is_bad = 0;
    int result, index;

    for (index = 0; bad_includes[index] != NULL; index++) {
	result = strncmp(bad_includes[index], include_path,
			 strlen(bad_includes[index]));
	if (result == 0) {
	    is_bad = 1;
	    break;
	}
    }

    return is_bad;
}

/* end utility functions */

/*
 * lsbcc takes some command-line options of its own, but must also recognize
 * some compiler options for appropriate handling. Since gcc has a lot
 * of options that are more than one character long, and these start
 * with only a single dash for historical reasons, we'll use the
 * getopt_long_only routine for parsing.
 *
 * WARNING: a long option that's not in 'long_options', and has the
 * same first letter as a short option in 'optstr', will be recognized
 * as the short option.  This is documented in the getopt_long_only
 * manpage. This means where there is such an overlap, the long option
 * needs to go into 'long_options', even if there was no other reason
 * to list it for "special handling".  Only do this for long options
 * that are really used...
 */
char *optstr = "-cL:l:o:EI:W::u:vV:";
struct option long_options[] = {
    {"include", required_argument, 0, 0},
    {"pthread", no_argument, 0, 0},
    {"rpath", required_argument, 0, 0},
    {"rpath-link", required_argument, 0, 0},
    {"shared", no_argument, 0, 0},
    {"help", no_argument, NULL, 2},
    {"lsb-help", no_argument, NULL, 3},
    {"lsb-version", no_argument, NULL, 4},
    {"lsb-verbose", no_argument, NULL, 5},
    {"lsb-cc", required_argument, NULL, 6},
    {"lsb-cxx", required_argument, NULL, 7},
    {"lsb-libpath", required_argument, NULL, 8},
    {"lsb-includepath", required_argument, NULL, 9},
    {"lsb-cxx-includepath", required_argument, NULL, 10},
    {"lsb-shared-libs", required_argument, NULL, 11},
    {"lsb-forcefeatures", no_argument, NULL, 12},
    {"lsb-modules", required_argument, NULL, 13},
    {"verbose", no_argument, NULL, 14},
    {"version", no_argument, NULL, 15},
    {"lsb-shared-libpath", required_argument, NULL, 16},
    {"static", no_argument, NULL, 17},
    {"lsb-use-default-linker", no_argument, NULL, 18},
    {"lsb-libtool-fixups", no_argument, NULL, 19},
    {"lsb-besteffort", no_argument, NULL, 20},
    {"lsb-target-version", required_argument, NULL, 21},
    {"lsbcc-version", no_argument, NULL, 22},
#define COPY_ARG_START 100
#define COPY_ARG_END 201
    /*
     * The options with numbers between 100 and 200 are of special kind.
     * They expect another argument right after them.  Therefore, after
     * option processing, this argument should remain succeeding these
     * options. However, such options may be encountere in other places
     * (for example, in short-options-array).
     * Here's the full list of them (gcc 4.3.3 man):
     -x  language
     -aux-info  filename
     --param  name=value
     -idirafter  dir
     -include  file
     -Xpreprocessor  option
     -Xassembler  option
     -Xlinker  option
     -u  symbol
     -V  version
     -b  machine
     -G  num
     */
    {"Xlinker", no_argument, NULL, 100},
    {"x", no_argument, NULL, 101},
    {"aux-info", no_argument, NULL, 102},
    {"param", no_argument, NULL, 103},
    {"idirafter", no_argument, NULL, 104},
    /* {"include", no_argument, NULL, 105}, */ /* already listed above */
    {"Xpreprocessor", no_argument, NULL, 106},
    {"Xassembler", no_argument, NULL, 107},
    {"b", no_argument, NULL, 108},
    {"G", no_argument, NULL, 109},
    {NULL, 0, 0, 0}
};

/*
 * return string of available optional/trial-use module names for 
 * the target LSB version, or "None"
 * Used only for the usage message at the moment
 * Side effect: memory is allocated for the string
 */
char *get_modules_strings(void)
{
    int i = 0;
    char *modules = NULL;

    for (; i < lsb_num_modules[lsbversion_index]; i++) {
	lsb_lib_modules_t *lsb_module = &lsb_modules[lsbversion_index][i];
	if (lsb_module->lib_names == NULL)
	    continue;
	modules = realloc(modules, (modules ? strlen(modules) : 0) +
			            strlen(lsb_module->module_name) + 2);
	strcat(modules, lsb_module->module_name);
    }
    if (!modules)
        modules = strdup("None");
    return modules;
}

void usage(const char *progname)
{
    char *mp = get_modules_strings();

    printf("Usage %s:\n"
"  --lsb-help               Display this message\n"
"  --lsb-version            Display the version of LSB this tool can build for.\n"
"  --lsbcc-version          Display the version of the tool itself.\n"
"  --lsb-verbose            Print out full commands to system compiler.\n"
"  --lsb-cc=<path to c compiler>\n"
"                           Set the system c compiler (overrides the LSBCC\n"
"                           environment setting)\n"
"  --lsb-cxx=<path to c++ compiler>\n"
"                           Set the system c++ compiler (overrides the LSBCXX\n"
"                           environment setting)\n"
"  --lsb-forcefeatures      Force setting -D flags for full feature set LSB\n"
"                           supports\n"
"  --lsb-libpath=<lsb_lib_path>\n"
"                           Set the path to the lsb libs directory\n"
"                           (overrides the LSBCC_LIBS environment setting)\n"
"  --lsb-includepath=<include_path>\n"
"                           Set the path to the lsb includes directory\n"
"                           (overrides the LSBCC_INCLUDES environment setting)\n"
"  --lsb-cxx-includepath=<include_path>\n"
"                           Set the path to the lsb c++ include directory\n"
"                           (overrides the LSBCXX_INCLUDES environment\n "
"                           setting)\n"
"  --lsb-shared-libs=<shared_lib:...>\n"
"                           Add libs to the list of non-lsb libs to link\n"
"                           as shared libs (product internal shared libs),\n"
"                           these libs will be appended to the list\n"
"                           specified through the LSBCC_SHAREDLIBS environment\n"
"                           setting. Library names should be colon-separated\n"
"                           Shared libs must be added before any\n"
"                           -l options to have effect.\n"
"  --lsb-shared-libpath=<path:...>\n"
"                           Add path to the list of non-lsb lib paths to link\n"
"                           as shared libs (product internal shared libs),\n"
"                           these paths will be appended to the list\n"
"                           specified through the LSB_SHAREDLIBPATH environment\n"
"                           setting.  Shared lib paths must be added before any\n"
"                           -l options to have effect.\n"
"  --lsb-modules=<module,..>\n"
"                           Enable support for the optional/trial-use LSB\n"
"                           modules listed.  Module names will be appended to\n"
"                           the list specified through the LSB_MODULES\n"
"                           environment setting.\n"
"                           Known modules for LSB %s: %s\n"
"                           (use --lsb-target-version with --help to list\n"
"                           modules recognized in other LSB versions)\n"
"  --lsb-use-default-linker\n"
"                           Do not set dynamic linker to the LSB one.\n"
"  --lsb-besteffort         Use best-effort code to choose the dynamic linker\n"
"                           at runtime.\n"
"  --lsb-target-version=<target_lsb_version>\n"
"                           Target LSB version.\n"
"  --lsb-libtool-fixups     Enable support for command line analysis and\n"
"                           fixups that help when using lsbcc in conjunction\n"
"                           with libtool.  See the man page for details.\n"
"\n"
"All other options are passed to the compiler more or less unmodified.\n"
"  --lsb options should appear before system compiler options.\n"
    "\n", progname, lsbcc_lsbversion, mp);
    free (mp);
}

/*
 * The program intepreter isn't the same everywhere, so set it here,
 * and just use it below.
 */
char *proginterpreter = LSB_LINKER;

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
 * scandir filter to determine if a file is at least
 * superficially a .so, we'll leave the details to
 * linker.
 */
int is_file_so(const struct dirent *ent)
{
    /*
     * ensure the filename is at least long enough to hold a
     * one-letter library name, like 'c'
     */
    if (strlen(ent->d_name) < strlen("libc.so")) {
	return 0;
    }
    /*
     * ensure the filename starts with 'lib'
     */
    if (0 != strncmp(ent->d_name, "lib", strlen("lib"))) {
	return 0;
    }
    /*
     * ensure the filename has a '.so' in it someplace
     */
    if (NULL == strstr(ent->d_name, ".so")) {
	return 0;
    }
    /*
     * well guess its a .so
     */
    return 1;
}

/*
 * Scan a directory for entries selected by a filter function
 * Returns the number of directory entries selected or -1 if an error occurs
 *
 * FIXME: If LSB adds scandir, drop this code.
 * UPDATE: as described in bug 1997, scandir was added @LSB 4.0, but LSB 
 * builds lsbcc "pessimistically" (targeting oldest possible LSB version), 
 * so this needs to remain.
 */
int lsbcc_scandir(const char *dir,
		  struct dirent ***namelist,
		  int (*sel)(const struct dirent *),
		  int (*compar)(const struct dirent **, const struct dirent **))
{
    DIR *dirp;
    struct dirent *tmpent;
    int num_ents = 0;
    int ents_available = 0;

    *namelist = NULL;

    if ((dirp = opendir(dir)) == NULL)
	return -1;
    while ((tmpent = readdir(dirp)) != NULL) {
	if (!sel(tmpent)) 
	    continue;
	if (num_ents == ents_available) {
	    /* grow the return array buffer in 1k chunks as needed */
	    *namelist = realloc(*namelist, 1024 + 
				    ents_available * sizeof(struct dirent*));
	    ents_available += 1024 / sizeof(struct dirent*);
	}

	if (((*namelist)[num_ents] = malloc(sizeof(struct dirent))) == NULL) {
	    while (num_ents-- > 0) {
		free((*namelist)[num_ents]);
	    }
	    free(*namelist);
	    closedir(dirp);
	    errno = ENOMEM;
	    return -1;
	}
	memcpy((*namelist)[num_ents], tmpent, sizeof(struct dirent));
	num_ents++;
    }
    closedir(dirp);
    return num_ents;
}

/*
 * Resolves bug #1477
 *
 * This function parses a series of ':' separated paths
 * and scans each path for shared libraries and adds them
 * to the list of allowed shared libs and libpaths as
 * they are found.
 */
void process_shared_lib_path(char *libarg)
{
    char *libpath;
    libpath = strtok(libarg, ":");
    while (libpath) {
	struct dirent **dirents = NULL;
	int num_libs;

	if (lsbcc_debug & DEBUG_ENV_OVERRIDES) {
	    fprintf(stderr,
		    "adding shared libraries found in %s to allowed dsos\n",
		    libpath);
	}
	num_libs = lsbcc_scandir(libpath, &dirents, is_file_so, NULL);
	if (num_libs > 0) {
	    while (num_libs--) {
		/*
		 * The filter is_file_so() selects only names which match
		 * a pattern which includes starting with "lib" and 
		 * containing a ".so" somewhere after that (e.g.
		 * libfoo.so.1.37 is a match, as is libfoo.so).
		 * Unfortunately, this is too complex for external scanning 
		 * tools, so for example Coverity flags this as a 
		 * high-priority defect, due to dereferencing null pointer 
		 * if the strstr returns NULL - which we know can't happen 
		 * because of is_file_so.
		 */
		char *libstr =
		    strdup((dirents[num_libs]->d_name) + strlen("lib"));
		*(strstr(libstr, ".so")) = '\0';
		argvaddstring(lsblibs, libstr);
		free(libstr);
	    }
	    free(dirents);
	} else {
	    if (num_libs < 0) {
		fprintf(stderr, "Could not open %s: %s\n", libpath,
			strerror(errno));
		exit(EXIT_FAILURE);
	    } else {
		if (lsbcc_debug & DEBUG_ENV_OVERRIDES) {
		    fprintf(stderr, "Did not find any shared libs in %s\n",
			    libpath);
		}
	    }
	}
	libpath = strtok(NULL, ":");
    }
}

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
    int auto_pthread = 1;
    int force_static = 0;
    int feature_settings = 0;
    int best_effort = 0;
    int display_cmd = 0;
    int found_gcc_arg = 0;
    int found_gcc_standalone = 0;
    int found_l_opt = 0;
    int found_file = 0;
    int no_link = 0;
    int no_as_needed = 1;
    int cc_is_icc = 0;
    int libtool_fixups = 0;
    int default_linker = 0;
    char progintbuf[256];
    char tmpbuf[256];
    char *ptr;
    struct stat st_buf;

    /*
     * Initialize the argv groups.
     */
    gccstartargs = argvinit("gccstartargs");
    lsblibs = argvinit("lsblibs");
    proginterp = argvinit("proginterp");
    target = argvinit("target");
    options = argvinit("options");
    incpaths = argvinit("incpaths");
    libpaths = argvinit("libpaths");
    userlibs = argvinit("userlibs");
    syslibs = argvinit("syslibs");
    gccargs = argvinit("gccargs");

    /* Determine if we are being called for C or C++ */
    if (strcmp(basename(argv[0]), "lsbc++") == 0) {
	/* We are compiling C++ - set a flag to affect some things later on */
	lsbccmode = LSBCPLUS;
	ccname = strdup("c++");
    }

    /*
     * Set up the paths we will need
     */
    snprintf(incpath, PATH_MAX - 1, "%s/%s", BASE_PATH, "include");
    snprintf(cxxincpath, PATH_MAX - 1, "%s/%s", BASE_PATH, "include/c++");
    lsbversion_index = get_version_index(lsbcc_lsbversion);

    /*
     * Check for LSBCC_LSBVERSION environment variable -
     * we need to know it (if any) before setting libpath.
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

    /* Index in the lsb_*_modules arrays corresponding to target LSB version */
    lsbversion_index = get_version_index(lsbcc_lsbversion);

    /* Set up __LSB_VERSION__ define */
    lsbversion_option =
	(char *) malloc(sizeof(char) *
			(strlen("-D__LSB_VERSION__=") +
			 strlen(lsbcc_lsbversion) + 1));
    if (lsbversion_option == NULL) {
	/* FIXME no error message? */
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

#if __powerpc64__ || __s390x__ || __x86_64__
    snprintf(libpath, PATH_MAX - 1, "%s/%s%s", BASE_PATH, "lib64-",
	     lsbcc_lsbversion);
#else
    snprintf(libpath, PATH_MAX - 1, "%s/%s%s", BASE_PATH, "lib-",
	     lsbcc_lsbversion);
#endif

    /*
     * Check for more environment variables, and adjust things if found.
     */
    if ((ptr = getenv("LSBCC_WARN")) != NULL) {
	lsbcc_warn = strtod(ptr, NULL);
    }

    if ((ptr = getenv("LSBCC_DEBUG")) != NULL) {
	lsbcc_debug = strtod(ptr, NULL);
	if (lsbcc_debug & DEBUG_ENV_OVERRIDES)
	    fprintf(stderr, "lsbcc debug set to 0x%x\n", lsbcc_debug);
    }

    if (LSBCPLUS != lsbccmode) {
	if ((ptr = getenv("LSBCC")) != NULL) {
	    ccname = strdup(ptr);
	    if (lsbcc_debug & DEBUG_ENV_OVERRIDES)
		fprintf(stderr, "cc name set to %s\n", ccname);
	}
    } else {

	if ((ptr = getenv("LSBCXX")) != NULL) {
	    ccname = strdup(ptr);
	    if (lsbcc_debug & DEBUG_ENV_OVERRIDES) {
		fprintf(stderr, "c++ name set to %s\n", ccname);
	    }
	}
	if ((ptr = getenv("LSBCXX_INCLUDES")) != NULL) {
	    strncpy(cxxincpath, ptr, sizeof(cxxincpath)-1);
	    incpath[sizeof(cxxincpath)-1] = '\0';
	    if (lsbcc_debug & DEBUG_ENV_OVERRIDES) {
		fprintf(stderr, "c++ include prefix set to %s\n", cxxincpath);
	    }
	}
    }

    if ((ptr = getenv("LSBCC_LIBS")) != NULL) {
	strncpy(libpath, ptr, sizeof(libpath)-1);
	libpath[sizeof(libpath)-1] = '\0';
	if (lsbcc_debug & DEBUG_ENV_OVERRIDES)
	    fprintf(stderr, "library prefix set to %s\n", libpath);
    }

    if ((ptr = getenv("LSBCC_INCLUDES")) != NULL) {
	strncpy(incpath, ptr, sizeof(incpath)-1);
	incpath[sizeof(incpath)-1] = '\0';
	if (lsbcc_debug & DEBUG_ENV_OVERRIDES)
	    fprintf(stderr, "include prefix set to %s\n", incpath);
    }

    if (getenv("LSBCC_FORCEFEATURES") != NULL) {
	feature_settings = 1;
    }

    if (getenv("LSBCC_BESTEFFORT") != NULL) {
	best_effort = 1;
    }

    if (getenv("LSBCC_USE_DEFAULT_LINKER") != NULL) {
	default_linker = 1;
    }

    if (getenv("LSBCC_LIBTOOLFIXUPS") != NULL) {
	libtool_fixups = 1;
    }

    if (getenv("LSBCC_VERBOSE") != NULL) {
	display_cmd = 1;
    }

    if (lsbcc_debug & DEBUG_ARGUMENTS) {
	for (i = 0; i < argc; i++)
	    fprintf(stderr, "%3.3d: %s\n", i, argv[i]);
    }

    /*
     * Build the argvgroup for the "known" library names here
     * Then add to it if the environment variable is set
     */
    if (lsbversion_index == -1) {
	fprintf(stderr, "Incorrect LSB version: %s\n", lsbcc_lsbversion);
	exit(EXIT_FAILURE);
    }
    for (i = 0; lsb_libs[lsbversion_index][i]; i++) {
	argvaddstring(lsblibs, lsb_libs[lsbversion_index][i]);
    }

    if (LSBCPLUS == lsbccmode) {
	for (i = 0; lsb_cplus_libs[i]; i++) {
	    argvaddstring(lsblibs, lsb_cplus_libs[i]);
	}
    }

    /*
     * check if we should pull in optional LSB modules.
     */
    if ((ptr = getenv("LSB_MODULES")) != NULL) {
	char *modulearg, *module;
	modulearg = strdup(ptr);
	module = strtok(modulearg, ",");
	while (module) {
	    int found = 0;
	    int j;
	    for (i = 0; i < lsb_num_modules[lsbversion_index]; i++) {
		j = 0;
		lsb_lib_modules_t *lsb_module =
		    &lsb_modules[lsbversion_index][i];

		if (strcasecmp(module,
			       lsb_modules[lsbversion_index][i].
			       module_name) == 0) {
		    if (lsb_module->lib_names != NULL) {
			for (; lsb_module->lib_names[j] != NULL; j++) {
			    argvaddstring(lsblibs, lsb_module-> lib_names[j]);
			}
		    }
		    found = 1;
		    break;
		}
	    }

	    /*
	     * FIXME temporary hack: just accept names of deprecated modules - 
	     * no need to do anything with them. This is just for the Qt3 
	     * scripts until a better answer is developed
	     */
	    for (i = 0; i < lsb_num_deprecated_modules[lsbversion_index];
		 i++) {
		if (strcasecmp
		    (module,
		     lsb_deprecated_modules[lsbversion_index][i].
		     module_name) == 0) {
		    found = 1;
		    break;
		}
	    }

	    /*
	     * If the module has just been withdrawn, 
	     * print a warning instead of an error.
	     */
	    if (!found) {
		for (i = 0; lsb_modules[i] != NULL; i++) {
		    for (j = 0; j < lsb_num_modules[i]; j++) {
			if (strcasecmp
			    (module, lsb_modules[i][j].module_name) == 0) {
			    fprintf(stderr,
				    "warning: module %s not in LSB %s\n",
				    module, lsbcc_lsbversion);
			    found = 1;
			    break;
			}
		    }
		    if (found)
			break;
		}
	    }

	    if (!found) {
		fprintf(stderr, "unrecognized module: %s\n", module);
		exit(EXIT_FAILURE);
	    }

	    module = strtok(NULL, ",");
	}
    }

    if ((ptr = getenv("LSB_SHAREDLIBPATH")) != NULL) {
	process_shared_lib_path(strdup(ptr));
    }

    /*
     * Add in user specified libs.
     */
    if ((ptr = getenv("LSBCC_SHAREDLIBS")) != NULL) {
	char *libarg, *lib;
	libarg = strdup(ptr);
	lib = strtok(libarg, ":");
	while (lib) {
	    if (lsbcc_debug & DEBUG_ENV_OVERRIDES) {
		fprintf(stderr, "added %s to allowed dsos\n", lib);
	    }
	    argvaddstring(lsblibs, lib);
	    lib = strtok(NULL, ":");
	}
    }

    /* Process the options passed in */
    opterr = 0;

    while ((c =
	    getopt_long_only(argc, argv, optstr, long_options,
			     &option_index)) >= 0) {
	switch (c) {
	case 0:
	    found_gcc_arg = 1;
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS) {
		fprintf(stderr, "option0: -%s",long_options[option_index].name);
		if (optarg) {
		    fprintf(stderr, " with arg %s", optarg);
		}
		fprintf(stderr, "\n");
	    }
	    argvadd(options, long_options[option_index].name, optarg);
	    /*
	     * If we are building a shared library, then we need to
	     * NOT specify the program interpreter and system libraries.
	     */
	    if (strcmp(long_options[option_index].name, "shared") == 0) {
		lsbcc_buildingshared = 1;
	    }
	    break;
	case 1:		/* all args not prefixed by - */
	    if (stat(optarg, &st_buf) == 0) {
		if (S_ISREG(st_buf.st_mode) || S_ISLNK(st_buf.st_mode)) {
		    found_file = 1;
		    if (libtool_fixups && perform_libtool_fixups(optarg)) {
			break;
		    }
		}
	    }

	    /* Check if we need to emit whole-archive flag */
	    if (whole_archive_seen && !whole_archive_emitted) {
		if (lsbcc_debug & DEBUG_LIB_CHANGES)
		    fprintf(stderr, "Appending -Wl,--whole-archive\n");
		argvaddstring(options, "-Wl,--whole-archive");
		whole_archive_list = options;
		whole_archive_emitted = 1;
	    }

	    argvaddstring(options, optarg);
	    found_gcc_arg = 1;

	    /* special case: file fed to stdin */
	    if (strcmp(optarg, "-") == 0) {
		if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS) {
		    fprintf(stderr, "option1: %s, process stdin\n", optarg);
		}
		found_file = 1;
	    }
	    break;
	case 2:		
	    /* --help intended for gcc, we'll add our 2cents however */
	    found_gcc_standalone = 1;
	    argvaddstring(gccstartargs, "--help");
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
	case 6:		/* --lsb-cc=<cc> */
	    ccname = strdup(optarg);
	    break;
	case 7:		/* --lsb-cxx=<cxx> */
	    ccname = strdup(optarg);
	    break;
	case 8:		/* --lsb-libpath=<path> */
	    strncpy(libpath, optarg, sizeof(libpath)-1);
	    libpath[sizeof(libpath)-1] = '\0';
	    break;
	case 9:		/* --lsb-includepath=<path> */
	    strncpy(incpath, optarg, sizeof(incpath)-1);
	    incpath[sizeof(incpath)-1] = '\0';
	    break;
	case 10:		/* --lsb-cxx-includepath=<path> */
	    strncpy(cxxincpath, optarg, sizeof(cxxincpath)-1);
	    cxxincpath[sizeof(cxxincpath)-1] = '\0';
	    break;
	case 16:		/* --lsb-shared-libpath=<path:...> */
	    process_shared_lib_path(strdup(optarg));
	    break;
	case 11:		/* --lsb-shared-libs=<lib:...> */
	    {
		char *libarg, *lib;
		libarg = strdup(optarg);
		lib = strtok(libarg, ":");
		while (lib) {
		    if (lsbcc_debug & DEBUG_ENV_OVERRIDES)
			fprintf(stderr, "added %s to allowed dsos\n", lib);
		    argvaddstring(lsblibs, lib);
		    lib = strtok(NULL, ":");
		}
	    }
	    break;
	case 12:		/* --lsb-forcefeatures */
	    feature_settings = 1;
	    break;
	case 13:		/* --lsb-modules=<module,...> */
	    {
		char *modulearg, *module;
		modulearg = strdup(optarg);
		module = strtok(modulearg, ",");
		while (module) {
		    int found = 0;
		    int j = 0;
		    for (i = 0; i < lsb_num_modules[lsbversion_index]; i++) {
			lsb_lib_modules_t *lsb_module =
			    &lsb_modules[lsbversion_index][i];

			if (strcasecmp
			    (module,
			     lsb_modules[lsbversion_index][i].
			     module_name) == 0) {
			    if (lsb_module->lib_names != NULL) {
				for (j = 0;
				     lsb_module->lib_names[j] != NULL;
				     j++) {
				    argvaddstring(lsblibs,
						  lsb_module->lib_names[j]);
				}
			    }
			    found = 1;
			    break;
			}
		    }
		    if (!found) {
			fprintf(stderr, "unknown module: %s\n", module);
			usage(argv[0]);
			exit(EXIT_FAILURE);
		    }
		    module = strtok(NULL, ",");
		}
	    }
	    break;
	case 'E':
	    cpp_only = 1;
	    /* fallthrough */
	case 'S':
	case 'c':
	    found_gcc_arg = 1;
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS)
		fprintf(stderr, "option: -%c\n", c);
	    no_link = 1;
	    argvaddstring(options, argv[optind - 1]);
	    auto_pthread = 0;	/* too noisy if not linking */
	    break;
	case 'o':
	    found_gcc_arg = 1;
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS)
		fprintf(stderr, "option: -o %s\n", optarg);
	    argvadd(target, "o", optarg);
	    break;
	case 'u':
	    found_gcc_arg = 1;
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS)
		fprintf(stderr, "option: -u %s\n", optarg);
	    argvadd(target, "u", optarg);
	    break;
	case 'I':
	    found_gcc_arg = 1;
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS)
		fprintf(stderr, "option: -I %s\n", optarg);

	    if (check_include_path(optarg)) {
		/* For now, just print warnings for bad include paths. */
		fprintf(stderr, "warning: dangerous include path %s\n", optarg);
	    }

	    argvadd(incpaths, "I", optarg);
	    break;
	case 'l':
	    found_gcc_arg = 1;
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS)
		fprintf(stderr, "option: -l %s\n", optarg);
	    found_l_opt = 1;
	    process_opt_l(optarg);
	    break;
	case 'L':
	    found_gcc_arg = 1;
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS)
		fprintf(stderr, "option: -L %s\n", optarg);
	    process_opt_L(optarg);
	    break;
	case 'W':
	    if ((strstr(argv[optind - 1], "no-whole-archive") != NULL) ||
		(strstr(argv[optind - 1], "whole-archive") != NULL)) {
		/*
		 * Tricky case.  If an archive is being specified by name
		 * as libname.a, it is "unrecognized" and will go on the 
		 * "options" list.  It if it being specified by way of 
		 * -lname, then is will be recognized as a library and go 
		 * on the "userlibs" list.  The problem is, whole-archive 
		 * has to stay together with the archive it applies to,
		 * but we haven't gotten to the library argument(s) yet, 
		 * so we don't know where to put this. We have to solve
		 * this by deferring processing.
		 */
	        if (strstr(argv[optind - 1], "whole-archive") != NULL) {
		    whole_archive_seen = 1;
		    whole_archive_emitted = 0;
		}
	        if (strstr(argv[optind - 1], "no-whole-archive") != NULL) {
		    if (whole_archive_list) {
		        if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS)
		            fprintf(stderr, "option: %s\n", argv[optind - 1]);
			argvaddstring(whole_archive_list, argv[optind - 1]);
			whole_archive_list = NULL;
		    }
		    whole_archive_seen = 0;
		}
		break;
	    }

	    found_gcc_arg = 1;
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS)
		fprintf(stderr, "option: -W %s\n", optarg);

	    /*
	     * A bit like the above, we wait to emit the dyamic/static
	     * flags until we see a library argument
	     */
	    if (strstr(argv[optind - 1], "Bdynamic") != NULL) {
		if (!b_dynamic)
		    /* 
		     * If not in dynamic mode, ask for it
		     * b_dynamic will be set when the arg is emitted
		     */
		    b_dynamic_req = 1;
		break;
	    }

	    if (strstr(argv[optind - 1], "Bstatic") != NULL) {
		if (b_dynamic || b_dynamic_req)
		    /* 
		     * If not in static mode, ask for it
		     * b_dynamic will be cleared when the arg is emitted
		     * If there's a pending dynamic mode request, clear it
		     * this is if the last thing was a non-LSB lib, it
		     * will have left b_dynamic_req set
		     */
		    b_dynamic_req = 0;
		break;
	    }

	    if ((strstr(argv[optind - 1], "no-as-needed") != NULL) ||
		(strstr(argv[optind - 1], "as-needed") != NULL)) {
		/*
		 * If any of the as-needed flags is supplied, we won't
		 * monkey with adding this flag on our own volition.
		 */
		no_as_needed = 1;
	    }
	    argvaddstring(userlibs, argv[optind - 1]);
	    break;
	case 'V':
	case 14:		/* --verbose */
	case 15:		/* --version */
	case 'v':
	    /* Handle a standalone --version, --verbose, '-v', and '-V'
	     * argument specially to make sure it only
	     * calls the compiler with the standalone option and doesn't
	     * try to send all the other arguments to avoid the need
	     * of having the compiler call the linker.  Unless of course
	     * we need to call the linker, which will happen whenever
	     * found_gcc_arg gets set.
	     */
	    found_gcc_standalone = 1;
	    argvaddstring(gccstartargs, argv[optind - 1]);
	    /* fallthrough to add this program's version. */
	case 22:		/* --lsbcc-version */
	    printf("%s (lsbcc) %s\n", argv[0], LSBCC_VERSION);
	    if (c == 22) {
		exit(EXIT_SUCCESS);
	    }
	    break;
	case 17:		/* -static */
	    /* no -Wl,Bdynamic, add -Wl,--start-group, add -lgcc_eh */
	    found_gcc_arg = 1;
	    b_dynamic = 0;
	   
	    force_static = 1;
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS)
		fprintf(stderr, "option: -%s\n",
			long_options[option_index].name);
	    argvaddstring(gccstartargs, "-static");
	    argvaddstring(syslibs, "-Wl,--start-group");
	    argvaddstring(syslibs, "-lgcc_eh");
	    break;
	case 18:		/* --lsb-use-default-linker */
	    default_linker = 1;
	    break;
	case 19:		/* --lsb-libtool-fixups */
	    libtool_fixups = 1;
	    break;
	case 20:		/* --lsb-besteffort */
	    best_effort = 1;
	    break;
	case 21:		/* --lsb-target-version */
	    /* We have already processed this option */
	    break;
	case '?':
	    if (strncmp(argv[optind_old], "--lsb-", 6) == 0) {
		/*
		 * Refuse to pass unrecognized --lsb- prefixed options 
		 * along to the real compiler. Likely just typos of 
		 * legitmate --lsb- options.
		 * No chance compiler would recognize anyway.
		 */
		usage(argv[0]);
		exit(EXIT_FAILURE);

	    }
	    found_gcc_arg = 1;
	    /*
	     * This is an attempt to catch things that we don't
	     * explicitly recognize, and just pass it through to gcc.
	     */
	    if (lsbcc_debug & DEBUG_RECOGNIZED_ARGS) {
		fprintf(stderr, "option?: %s optopt %x %c\n",
			argv[optind_old], optopt, optopt);
	    }
	    if ((optopt && (optopt != '?'))
		|| (argv[optind_old][0] == '-')) {
		argvaddstring(options, argv[optind_old]);
	    } else {
		fprintf(stderr, "Warning: Dropping argument '%s'\n",
			argv[optind_old]);
	    }
	    break;
	default:
	    /* the option from 100-200 range, copy argument after it */
	    if (c >= COPY_ARG_START && c < COPY_ARG_END) {
		/* 
		 * In this case the next argument from command line is
		 * immediately appended to the option list.
		 */
		argvaddstring(options, argv[optind_old]);
		if (optind_old + 1 < argc) {
		    argvaddstring(options, argv[optind_old + 1]);
		    optind++;
		} else {
		    /* find option's name to print error message */
		    struct option *opt;
		    for (opt = long_options; opt->name; opt++) {
			if (opt->val == c)
			    break;
		    }
		    assert(opt->name);	/* How come we didn't find it??? */
		    fprintf(stderr, "%s: argument to '%s' is missing\n",
			    basename(argv[0]), opt->name);
		    exit(EXIT_FAILURE);
		}
		break;
	    }
	    /* We shouldn't get here */
	    printf("unhandled option %c", c);
	    if (optarg)
		printf(" with arg %s", optarg);
	    printf("\n");
	}

	/*
	 * Save optind value to catch cases of options like '-std'
	 * that are treated as two separate options without shifting optind
	 */
	optind_old = optind;
    }

    /*
     * determine if the ccname is actually lsbcc - this might
     * just be somebody messing with us, but it might also be
     * an innocent freudian typo.
     */
    if ((strcmp(basename(ccname), "lsbcc") == 0) ||
	(strcmp(basename(ccname), "lsbc++") == 0)) {
	printf("You can not use %s as your compiler!\n", argv[0]);
	exit(EXIT_FAILURE);
    }

    /* Determine where the GCC specific file are located.  */
    find_gcc_base_dir();

    /* determine if the ccname is either icc or i++ */
    if ((strcmp(basename(ccname), "icc") == 0) ||
	(strcmp(basename(ccname), "i++") == 0)) {
	if (lsbcc_debug & DEBUG_LIB_CHANGES) {
	    fprintf(stderr, "Compiler is intel icc adding -i-static\n");
	}
	cc_is_icc = 1;
    }

    /* set the compiler */
    argvaddstring(gccargs, ccname);

    /*
     * Set up per-LSB-version include paths.
     */
    for (i = 0; lsb_version_include_paths[lsbversion_index][i] != NULL; i++) {
      if (lsbcc_debug & DEBUG_INCLUDE_CHANGES)
        fprintf(stderr, "Prepending %s to system include path\n", 
                        lsb_version_include_paths[lsbversion_index][i]);
      argvadd(incpaths, "I", lsb_version_include_paths[lsbversion_index][i]);
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

    /* Gather together the non-options arguments */
    if (optind < argc) {
	found_gcc_arg = 1;
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
#if __powerpc__ && !__powerpc64__
    /*
     * new defaults in gcc no longer produce the ppc32 cpu instructions
     * specified by the LSB ABI.  Force this.  Bug 3253.
     */
    argvaddstring(gccargs, "-mcpu=603");
#endif

    /* Check if we need to specify the length of long double. */
    if (!cc_is_icc && need_long_double_64()) {
	if (lsbcc_debug & DEBUG_MODIFIED_ARGS) {
	    fprintf(stderr, "Adding -mlong-double-64 to args\n");
	}
	argvaddstring(gccargs, "-mlong-double-64");
    }

    /* Check if we need to suppress stack protection. */
    if (!cc_is_icc && need_stack_prot_suppression()) {
	if (lsbcc_debug & DEBUG_MODIFIED_ARGS) {
	    fprintf(stderr, "Adding -fno-stack-protector to args\n");
	}
	argvaddstring(syslibs, "-fno-stack-protector");
    }

    /* If we didn't find a file to work against, we don't need to link */
    if (!found_file) {
	no_link = 1;
    }
    /* except if we are building a shared lib and saw a -lfoo */
    if (lsbcc_buildingshared && found_l_opt) {
	no_link = 0;
    }

    if (!no_link) {
	if (lsbcc_debug & DEBUG_LIB_CHANGES) {
	    fprintf(stderr, "Prepending %s to the linker path\n", gccbasedir);
	}
	argvadd(syslibs, "L", gccbasedir);

	/*
	 * this is for the case where a library on the command line has
	 * dependencies (bug 1475).  From the ld manpage:
	 *
	 *  When the linker encounters such a dependency when doing a non-
	 *  shared, non-relocatable link, it will automatically try to locate
	 *  the required shared library and include it in the link, if it is
	 *  not included explicitly.  In such a case, the -rpath-link option
	 *  specifies the first set of directories to search.  The -rpath-link
	 *  option may specify a sequence of directory names either by
	 *  specifying a list of names separated by colons, or by appearing
	 *   multiple times.
	 */
	sprintf(tmpbuf, "-Wl,-rpath-link,%s", libpath);
	argvaddstring(syslibs, tmpbuf);
	if (lsbcc_debug & DEBUG_MODIFIED_ARGS) {
	    fprintf(stderr, "Adding %s to args\n", tmpbuf);
	}

	/* these need to go after user-specified library paths */
#if __powerpc64__ || __s390x__ || __x86_64__
	argvaddstring(syslibs, "-L/lib64");
	argvaddstring(syslibs, "-L/usr/lib64");
#else
	argvaddstring(syslibs, "-L/lib");
	argvaddstring(syslibs, "-L/usr/lib");
#endif

	if (!cc_is_icc && need_sysv_hash()) {
	    if (lsbcc_debug & DEBUG_MODIFIED_ARGS) {
		fprintf(stderr, "Adding -Wl,--hash-style=sysv to args\n");
	    }
	    argvaddstring(syslibs, "-Wl,--hash-style=sysv");
	}

	if (lsbccmode == LSBCPLUS) {
	    if (need_gcc34_compat()) {
		if (lsbcc_debug & DEBUG_LIB_CHANGES) {
		    fprintf(stderr,
			    "Appending -lgcc34compat -ldl to the library list\n");
		}
		argvaddstring(syslibs, "-lgcc34compat");
		argvaddstring(syslibs, "-ldl");
	    }

	    if (lsbcc_debug & DEBUG_LIB_CHANGES) {
		fprintf(stderr,
			"Appending -lstdc++ -lgcc_s to the library list\n");
	    }
	    argvaddstring(syslibs, "-lstdc++");
	    argvaddstring(syslibs, "-lgcc_s");
	}

	/* Best-effort dynamic linking. */
	if (best_effort && !lsbcc_buildingshared) {
	    sprintf(tmpbuf, "%s/besteffort.o", libpath);
	    argvaddstring(syslibs, tmpbuf);
	    default_linker = 1;
	}

	if (lsbcc_debug & DEBUG_LIB_CHANGES) {
	    fprintf(stderr, "Appending -lgcc\n");
	}
	argvaddstring(syslibs, "-lgcc");
	if (lsbcc_debug & DEBUG_LIB_CHANGES) {
	    fprintf(stderr,
		    "Appending -lm -lc -lc_nonshared -lgcc to the library list\n");
	}
	argvaddstring(syslibs, "-lm");
	argvaddstring(syslibs, "-lc");
	argvaddstring(syslibs, "-lc_nonshared");

	/* to be pedantic, we do gcc_s and gcc again */
	if (lsbccmode == LSBCPLUS) {
	    argvaddstring(syslibs, "-lgcc_s");
	}
	argvaddstring(syslibs, "-lgcc");
	if (force_static) {
	    argvaddstring(syslibs, "-Wl,--end-group");
	}

	/* Initialize the argv groups */

	if (!lsbcc_buildingshared && !default_linker) {
	    if (cc_is_icc) {
		sprintf(progintbuf, "-dynamic-linker=%s", proginterpreter);
	    } else {
		sprintf(progintbuf, "-Wl,--dynamic-linker=%s",
			proginterpreter);
	    }
	    argvaddstring(proginterp, progintbuf);
	}
    }

    /*
     * Check if any parameters/options are passed.
     * If not print an error similar to running "gcc"
     * without any parameters/options
     */
    if (!found_gcc_arg && !found_gcc_standalone) {
	fprintf(stderr, "%s: no input files\n", basename(argv[0]));
	exit(EXIT_FAILURE);
    }
#ifdef LSBCC_EXTRAFLAGS_HACK
    /* Gather options passed through environment variable */
    if ((ptr = getenv("LSBCC_EXTRAFLAGS")) != NULL) {
	char *flagarg, *flag;
	flagarg = strdup(ptr);
	flag = strtok(flagarg, ":");
	while (flag) {
	    if (lsbcc_debug & DEBUG_UNRECOGNIZED_ARGS)
		fprintf(stderr, "added %s to options\n", flag);
	    argvaddstring(options, flag);
	    flag = strtok(NULL, ":");
	}
    }
#endif

    argvappend(gccargs, gccstartargs);

    /* Assemble all of the groups into one to pass to gcc */
    if (found_gcc_arg) {
	argvappend(gccargs, target);

	/*
	 * The lsb/include directory needs to come after application supplied
	 * paths, but before the default /usr/include path.
	 * Such behaviour is achieved with the use of the -isystem option,
	 * the positions of this option among -I includes does not matter.
	 * This does make the assumption that application builds are well
	 * behaved and don't pass in -I/usr/include themselves.
	 */
	argvappend(gccargs, incpaths);
	if (lsbcc_debug & DEBUG_INCLUDE_CHANGES)
	    fprintf(stderr, "Prepending %s to system include path\n", incpath);
	argvadd(gccargs, "isystem", incpath);

	if (lsbccmode == LSBCPLUS) {
	    if (lsbcc_debug & DEBUG_INCLUDE_CHANGES)
		fprintf(stderr,"Prepending %s to system include path\n",cxxincpath);
	    argvadd(gccargs, "isystem", cxxincpath);
	    /* also need to add $cxxincpath/backward */
	    sprintf(tmpbuf, "%s/backward", cxxincpath);
	    if (lsbcc_debug & DEBUG_INCLUDE_CHANGES)
		fprintf(stderr,"Prepending %s to system include path\n",tmpbuf);
	    argvadd(gccargs, "isystem", tmpbuf);
	}

	argvappend(gccargs, options);

	if (lsbcc_debug & DEBUG_LIB_CHANGES) {
	    fprintf(stderr,
		    "Turning off default libraries with -nodefaultlibs\n");
	}

	if (!no_link) {
	    /*
	     * if icc, link intel libs statically
	     */
	    if (cc_is_icc) {
		argvaddstring(gccargs, "-i-static");
		argvappend(gccargs, proginterp);
	    }

	    argvaddstring(gccargs, "-nodefaultlibs");
	    if (lsbcc_debug & DEBUG_LIB_CHANGES) {
		fprintf(stderr, "Prepending %s to the linker path\n",
			libpath);
	    }
	    argvadd(gccargs, "L", libpath);
	    argvappend(gccargs, libpaths);

	    if (found_l_opt && !no_as_needed) {
		argvaddstring(gccargs, "-Wl,--as-needed");
	    }
	}

	argvappend(gccargs, userlibs);

	/*
	 * force libirc for icc here, icc does a bunch of ld fixups
	 * like lsbcc does, but they don't always get along without
	 * this.
	 */
	if (cc_is_icc && !no_link) {
	    if (b_dynamic) {
		argvaddstring(gccargs, "-Wl,-Bstatic");
		b_dynamic = 0;
	    }
	    argvaddstring(gccargs, "-lirc");
	}

	/* force pthread always */
	if (auto_pthread) {
	    if (lsbcc_debug & DEBUG_LIB_CHANGES) {
		fprintf(stderr,
			"Appending -lpthread -lpthread_nonshared to the library list due to auto_pthread\n");
	    }
	    if (!b_dynamic && !force_static) {
		argvaddstring(gccargs, "-Wl,-Bdynamic");
		b_dynamic = 1;
	    }
	    argvaddstring(gccargs, "-lpthread");
	    argvaddstring(gccargs, "-lpthread_nonshared");
	}
	if (!cc_is_icc) {
	    argvappend(gccargs, proginterp);
	}
	argvappend(gccargs, syslibs);
    }


    /* ensure argument list is null terminated */
    gccargs->argv[gccargs->numargv] = NULL;

    if (lsbcc_debug & DEBUG_MODIFIED_ARGS) {
	argvdump(gccargs);
    }

    /*
     * pretty-print the pending command line
     */
    if (display_cmd) {
	argvprint(gccargs);
    }

    assert(gccargs->numargv > 0);
    /* exec to gcc */
    execvp(gccargs->argv[0], gccargs->argv);

    exit(EXIT_FAILURE);		/* exec must have failed! */
}
