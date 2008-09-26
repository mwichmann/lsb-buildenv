/*
 * Copyright (C) 2002-2007 Linux Foundation
 *
 * 2002/05/09 Stuart Anderson, Free Standards Group
 *
 */
/*
 * This is the lsbcc tool. It is used to build LSB conforming applications.
 * LSB conforming applications can be built without this tool, but using
 * lsbcc make it easier to get everything right. This is a re-implementation
 * of the original shell script.
 *
 * The basic premise is this: The LSB development environment provides
 * a set of headers and libraries nominally found in /opt/lsb/include
 * and /opt/lsb/lib respectively. These headers and libraries have
 * been carefully built so that they contain only the interfaces provided by
 * the LSB. And LSB conforming application must also use be linked with
 * a special program intepreter (usually ld-lsb.so.3 but this is described
 * in each archLSB)
 *
 * The purpose of the lsbcc tool is to cause programs to be built against
 * these headers and libraries and with the correct program interpreter.
 * There are still some parts of a development system (gcc headers, crt0.o,
 * etc) that must be used but are not provided by the LSB, so the normal
 * version of these gets used. The trick is to ensure that the LSB provided
 * parts take precedence over the regular versions. This is accomplished by
 * inserting a couple of extra options in the right place before actually
 * calling gcc.
 *
 * The approach taken here is to recognize enough of the regular options to
 * allow the extra options to be inserted into the right place. Fortunately,
 * the options can be grouped into a few catagories, and the order in which
 * the catagories are passed to gcc is not important, as long as the order of
 * items within each catagory is preserved.
 *
 * The extra options are easily inserted in between the catagories.
 *
 * A couple of things that complicate this process (and this is what ended the
 * life of the shell script based lsbcc) is that some of the options have
 * optional parameters (ie -W and -O) and the getopt command wasn't able to
 * communicate this to the rest of the shell script. Another tough one is when
 * strings are passed in as a define (ie -DFOO="A String Here"). The quotes
 * were getting stripped off, so what got passed to gcc was a buch of invalid
 * options.
 *
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
 * These are the catagories of options that we are going to be grouping
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

int lsbccmode=LSBCC;

#define DEFAULT_LSB_VERSION "40"

/*
 * Set the default names of the compiler to call and the paths
 * to LSB headers and libraries.  These can be changed through
 * environment variables.
 */
#ifndef BASE_PATH
#define BASE_PATH "/opt/lsb"
#endif

char *ccname="cc";
char incpath[PATH_MAX];
char cxxincpath[PATH_MAX];
char libpath[PATH_MAX];
/* 'Normal' version name */
char *lsbcc_lsbversion="4.0";
/* Version name with dot removed */
char *lsbversion_option;
/* Index in the lsb_libs array corresponding to the target LSB version */
int lsbversion_index = 0;

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
 * State variable to determine if we need to add -Wl,-Bdynamic before an LSB lib.
 */
int b_dynamic = 1;

/* begin option processing routines */

/*
 * Some options require a little bit of additional processing, so we have
 * a few routines here that are used to do the special processing.
 */
int
process_opt_l(char *val)
{
char	buf[32];
int	i;

sprintf(buf,"-l%s",val);

/* First check to see if it is a LSB library. If so, just pass it through */

for(i=0;i<lsblibs->numargv;i++) {
	if( strcmp(lsblibs->argv[i],val) == 0 ) {
		if (!b_dynamic) {
			argvaddstring(userlibs,"-Wl,-Bdynamic");
			b_dynamic = 1;
		}
		argvaddstring(userlibs,strdup(buf));
		return 1;
	}
}

/* So it's not an LSB library. Make sure it is getting statically linked */

if( lsbcc_debug&DEBUG_LIB_CHANGES )
	fprintf(stderr,"Forcing %s to be linked statically\n",val);

if( lsbcc_warn&WARN_LIB_CHANGES || lsbcc_buildingshared )
	fprintf(stderr,"Warning: forcing %s to be linked statically\n",val);

if (b_dynamic) {
	argvaddstring(userlibs,"-Wl,-Bstatic");
	b_dynamic = 0;
}
argvaddstring(userlibs,strdup(buf));

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
	if (efile) {
	    CloseElfFile(efile);
	}
	return 0;
    }

    libfile += strlen("lib");
    if (1 == process_opt_l(libfile)) {
	CloseElfFile(efile);
	/*
	 * add an -L for non LSB libs.
	 */
	return 1;
    }

    /*
     * add a -L for this lib if we made it static
     */
    process_opt_L(dirname(libdir));

    /* 
     * Now also check to see if the shared lib
     * had any DT_NEEDED tags and do the same for
     * them.
     */
    if (efile) {
	for (i = 0; i < efile->numdynents; i++) {
	    if (efile->dyns[i].d_tag == DT_NEEDED) {
		libfile = strdup(ElfGetStringIndex(efile,
						   efile->dyns[i].d_un.d_val,
						   efile->dynhdr->sh_link));
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
		libfile += strlen("lib");
		process_opt_l(libfile);
	    }
	}
	CloseElfFile(efile);
    }
    return 1;
}

/* end option processing routines */

/* begin utility functions */

/* We need to figure out what the path to the gcc base directory is
 * This is one place where lsbcc is be more gcc-dependent than one
 * might like.
 */
char *gccbasedir;

void
find_gcc_base_dir()
{
FILE	*cccmd;
char	cmd[PATH_MAX];
static char	buf[PATH_MAX];

/* Set a fictitious default value */
gccbasedir="/usr/lib/gcc-lib/i386-linux/2.95.4";

sprintf(cmd, "%s -print-libgcc-file-name", ccname );
if( (cccmd=popen(cmd,"r")) == NULL ) {
	fprintf(stderr,"Failed to popen \"%s\"\n", cmd );
	return;
	}

if( fgets(buf,PATH_MAX,cccmd) == NULL ) {
	fprintf(stderr,"nothing to read from \"%s\"\n", cmd );
	return;
	}

gccbasedir=dirname(buf);

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

int
need_gcc34_compat()
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

  /* Figure out what we need by looking at the gcc major version
     number. */
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

int
need_stack_prot_suppression()
{
  /* If we don't need the gcc 3.4 workaround, we don't need this.  This
     also conveniently loads the gcc version for us. */
  if (!need_gcc34_compat())
    return 0;

  /* If we're here, we know we're running a gcc 4.x version.  Check
     the minor version number in this case. */
  switch (gccversion[2]) {

  case '0':
    /* Don't need it for gcc 4.0. */
    return 0;

  case '1':
  case '2':
  case '3':
    /* We pretty much need it for newer versions of 4.x, though here
       we hedge our bets and only test for known gcc versions. */
    return 1;

  default:
    /* Some other value we don't recognize. */
    fprintf(stderr, "unrecognized gcc version: \"%s\"\n", gccversion);
    return 0;
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

int
need_sysv_hash()
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

int
need_long_double_64()
{
#if defined __powerpc__ || defined __s390__
  /* Since LSB 4.0, we don't need this. */
  if (strcmp(lsbcc_lsbversion, "4.0") >= 0)
    return 0;

  /* If we don't need the gcc 3.4 workaround, we don't need this.  This also
     conveniently loads the gcc version for us. */
  if (!need_gcc34_compat())
    return 0;

  /* This option became available on gcc 4.1. */
  switch (gccversion[2]) {

  case '0':
    /* Don't need it for gcc 4.0. */
    return 0;

  case '1':
  case '2':
    /* We pretty much need it for newer versions of 4.x, though here
       we hedge our bets and only test for known gcc versions. */
    return 1;

  default:
    /* Some other value we don't recognize. */
    fprintf(stderr, "unrecognized gcc version: \"%s\"\n", gccversion);
    return 0;
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

int
check_include_path(const char *include_path)
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
char *optstr="-cL:l:o:ESI:W::su:vV:";
struct option long_options[] = {
	{"include",required_argument,0,0},
	{"pthread",no_argument,0,0},
	{"rpath",required_argument,0,0},
	{"rpath-link",required_argument,0,0},
	{"shared",no_argument,0,0},
	{"help",no_argument,NULL,2},
	{"lsb-help",no_argument,NULL,3},
	{"lsb-version",no_argument,NULL,4},
	{"lsb-verbose",no_argument,NULL,5},
	{"lsb-cc",required_argument,NULL,6},
	{"lsb-cxx",required_argument,NULL,7},
	{"lsb-libpath",required_argument,NULL,8},
	{"lsb-includepath",required_argument,NULL,9},
	{"lsb-cxx-includepath",required_argument,NULL,10},
	{"lsb-shared-libs",required_argument,NULL,11},
	{"lsb-forcefeatures",no_argument,NULL,12},
	{"lsb-modules",required_argument,NULL,13},
	{"verbose",no_argument,NULL,14},
	{"version",no_argument,NULL,15},
	{"lsb-shared-libpath",required_argument,NULL,16},
	{"static",no_argument,NULL,17},
	{"lsb-use-default-linker",no_argument,NULL,18},
	{"lsb-libtool-fixups",no_argument,NULL,19},
	{"lsb-besteffort",no_argument,NULL,20},
	{NULL,0,0,0}
};

char *get_modules_strings(void)
{
    int	i = 0;
    char	*modules = NULL;
    char	*tmp = NULL;

    for(;i < lsb_num_modules[lsbversion_index]; i++) {
        lsb_lib_modules_t *lsb_module = &lsb_modules[lsbversion_index][i];

	if (lsb_module->lib_names == NULL) {
	    continue;
	}

	tmp = modules;
	modules = malloc((tmp ? strlen(tmp) : 0) + 
                         strlen(lsb_module->module_name) + 2);
	memset(modules, 0, (tmp ? strlen(tmp) : 0) + 
                           strlen(lsb_module->module_name) + 2);
	if (tmp) {
	    strcpy(modules, tmp);
	    strcat(modules, ",");
	}
	strcat(modules, lsb_module->module_name);
	if (tmp) {
	    free(tmp);
	}
    }
    return modules;
}

void
usage(const char *progname) {
	printf("Usage %s:\n"
		"\t--lsb-help         Display this message\n"
		"\t--lsb-version      Display the version of LSB this tool can build for.\n"
		"\t--lsb-verbose      Print out full commands to system compiler.\n"
		"\t--lsb-cc=<path to c compiler>\n"
		"\t                   Set the system c compiler (overrides LSBCC\n"
		"\t                    environment setting)\n"
		"\t--lsb-cxx=<path to c++ compiler>\n"
		"\t                   Set the system c++ compiler (overrides LSBCXX\n"
		"\t                    environment setting)\n"
		"\t--lsb-forcefeatures\n"
		"\t                   Force seting -D flags for full feature set LSB\n"
		"\t                    supports\n"
		"\t--lsb-libpath=<lsb_lib_path>\n"
		"\t                   Set the path to the lsb libs directory\n"
		"\t                    (overrides the LSBCC_LIBS environment setting)\n"
		"\t--lsb-includepath=<include_path>\n"
		"\t                   Set the path to the lsb includes directory\n"
		"\t                    (overrides the LSBCC_INCLUDES environment setting)\n"
		"\t--lsb-cxx-includepath=<include_path>\n"
		"\t                   Set the path to the lsb c++ include directory\n"
		"\t                    (overrides the LSBCXX_INCLUDES environment\n "
		"\t                    setting)\n"
		"\t--lsb-shared-libs=<shared_lib:...>\n"
		"\t                   Add libs to the list of non-lsb libs to link\n"
		"\t                    as shared libs (product internal shared libs),\n"
		"\t                    these libs will be in addition to any libs\n"
		"\t                    added through the LSBCC_SHAREDLIBS environment\n"
		"\t                    setting.  Shared libs must be added before any\n"
		"\t                    -l options to have effect.\n"
		"\t--lsb-shared-libpath=<path:...>\n"
		"\t                   Add path to the list of non-lsb lib paths to link\n"
		"\t                    as shared libs (product internal shared libs),\n"
		"\t                    these paths will be in addition to any paths\n"
		"\t                    added through the LSB_SHAREDLIBPATH environment\n"
		"\t                    setting.  Shared lib paths must be added before any\n"
		"\t                    -l options to have effect.\n"
		"\t--lsb-modules=<module,..>\n"
		"\t                   Enable support for the optional LSB modules listed.\n"
		"\t                    Modules will added in addition to any added from \n"
		"\t                    the LSB_MODULES environment setting.\n"
		"\t                    known modules: %s\n"
		"\t--lsb-use-default-linker\n"
		"\t                   Do not set dynamic linker to the LSB one.\n"
		"\t--lsb-besteffort\n"
		"\t                   Use best-effort code to choose the dynamic linker\n"
		"\t                    at runtime.\n"
		"\t--lsb-libtool-fixups\n"
		"\t                   Enable support for command line analysis and fixups that\n"
		"\t                    help when using lsbcc in conjunction with libtoo.  See the\n"
		"\t                    man page for details.\n"
		"\n"
		"All other options are passed to the compiler more or\n"
		"less unmodified, --lsb options should appear before system\n"
		"compiler options.\n"
		,progname,
        (lsb_num_modules[lsbversion_index] ? get_modules_strings() : "none"));
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

int numfeaturesettings=(sizeof(featuresettings)/sizeof(char *));


/*
 * scandir filter to determine if a file is at least
 * superficially a .so, we'll leave the details to
 * linker.
 */
int
is_file_so(const struct dirent *ent)
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
 * FIXME: If LSB ever gets around to including scandir get rid of
 * this code.
 */
int lsbcc_scandir(
	char *libpath,
	struct dirent ***dirents,
	int(*filter)(const struct dirent *))
{
	DIR 		*dir;
	struct dirent	*tmpent;
	int		num_ents = 0;
	int		ents_available = 0;

	*dirents = NULL;

	dir = opendir(libpath);
	if (!dir) {
		return -1;
	}
	while((tmpent = readdir(dir)) != NULL) {
		if (filter(tmpent)) {
			/*
			 * grow the return array buffer in 1k chunks
			 */
			if (num_ents == ents_available) {
				if (*dirents != NULL) {
					struct dirent **tmpdirents = *dirents;
					*dirents = malloc(ents_available + 1024);
					memcpy(*dirents, tmpdirents, ents_available);
					free(tmpdirents);
				} else {
					*dirents = malloc(1024);
				}
				ents_available+= 1024;
			}
			(*dirents)[num_ents] = malloc(sizeof(struct dirent));
			if (!(*dirents)[num_ents]) {
				while(num_ents-- > 0) {
					free((*dirents)[num_ents]);
				}
				free(*dirents);
				errno = ENOMEM;
				return -1;
			}
			memcpy((*dirents)[num_ents], tmpent, sizeof(struct dirent));
			num_ents++;
		}
	}
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
void
process_shared_lib_path(char *libarg)
{
	char *libpath;
	libpath = strtok(libarg, ":");
	while (libpath) {
		struct dirent	**dirents = NULL;
		int		num_libs;

		if( lsbcc_debug&DEBUG_ENV_OVERRIDES ) {
			fprintf(stderr,"adding shared libraries found in %s to allowed dsos\n", libpath);
		}
		num_libs = lsbcc_scandir(libpath, &dirents, is_file_so);
		if (num_libs > 0) {
			while(num_libs--) {
				/*
 				 * NOTE: If the implementation of is_file_so changes,
				 * this code very likey will need to change as well
				 * since the following is only safe because we know
				 * that all dirents start with lib and have a .so in
				 * them someplace!!!
 				 */
				char *libstr = strdup((dirents[num_libs]->d_name) + strlen("lib"));
				*(strstr(libstr,".so")) = '\0';
				argvaddstring(lsblibs,libstr);
				free(dirents[num_libs]);
			}
			free(dirents);
		} else {
			if (num_libs < 0) {
				fprintf(stderr,"Could not open %s: %s\n", libpath, strerror(errno));
				exit(-1);
			} else {
				if( lsbcc_debug&DEBUG_ENV_OVERRIDES ) {
					fprintf(stderr,"Did not find any shared libs in %s\n", libpath);
				}
			}
		}
		libpath = strtok(NULL, ":");
	}
}

int main(int argc, char *argv[])
{
int	c,i;
int	option_index;
int 	auto_pthread = 1;
int	force_static = 0;
int	feature_settings = 0;
int	best_effort = 0;
int	display_cmd = 0;
int	found_gcc_arg = 0;
int	found_gcc_standalone = 0;
int	found_l_opt = 0;
int	found_file = 0;
int	no_link = 0;
int	no_as_needed = 1;
int	cc_is_icc = 0;
int	libtool_fixups = 0;
int	default_linker = 0;
char	progintbuf[256];
char	tmpbuf[256];
char	*ptr;
struct stat st_buf;

/*
 * Initialize various argv groups.
 */
gccstartargs=argvinit();
lsblibs=argvinit();
proginterp=argvinit();
target=argvinit();
options=argvinit();
incpaths=argvinit();
libpaths=argvinit();
userlibs=argvinit();
syslibs=argvinit();
gccargs=argvinit();

/* Determine if we are being called for C or C++ */
if( strcmp(basename(argv[0]), "lsbc++") == 0 ) {
	/* We are compiling C++ - set a flag to affect some things
	 * later on
	 */
	lsbccmode=LSBCPLUS;
	ccname=strdup("c++");
}

/*
 * Set up the paths we will need
 */
snprintf(incpath, PATH_MAX-1, "%s/%s", BASE_PATH, "include");
snprintf(cxxincpath, PATH_MAX-1, "%s/%s", BASE_PATH, "include/c++");
lsbversion_index=get_version_index(lsbcc_lsbversion);

/*
 * Check for LSBCC_LSBVERSION environment variable -
 * we need to know it (if any) before setting libpath.
 */
if( (ptr=getenv("LSBCC_LSBVERSION")) != NULL ) {
    lsbcc_lsbversion = strdup(ptr);
    if ((lsbversion_index = get_version_index(lsbcc_lsbversion)) < 0) {
        fprintf(stderr,"unrecognized lsb version value %s\n", lsbcc_lsbversion);
        exit(3);
    }

    if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
        fprintf(stderr,"lsb version value set to %s\n", lsbcc_lsbversion );
}
/* set up __LSB_VERSION__ define */
lsbversion_option=(char*)malloc(sizeof(char)* (strlen("-D__LSB_VERSION__=") + 
		                               strlen(lsbcc_lsbversion) + 1));
if(lsbversion_option == NULL) {
    exit(3);
}
strcpy(lsbversion_option, "-D__LSB_VERSION__=");
/*
 * Normally, LSB_VERSION values contain dot - copy without the dot
 * this method would destroy lsbcc_lsbversion, so make a dup first
 */
ptr = strdup(lsbcc_lsbversion);
strcat(lsbversion_option, strsep(&ptr,"."));
if(&ptr)
    strcat(lsbversion_option, strsep(&ptr,"."));

#if __powerpc64__ || __s390x__ || __x86_64__
snprintf(libpath, PATH_MAX-1, "%s/%s%s", BASE_PATH, "lib64-", lsbcc_lsbversion);
#else
snprintf(libpath, PATH_MAX-1, "%s/%s%s", BASE_PATH, "lib-", lsbcc_lsbversion);
#endif

/*
 * Check for some other environment variables,
 * and adjust things if they are found.
 */

if( (ptr=getenv("LSBCC_WARN")) != NULL ) {
	lsbcc_warn=strtod(ptr,NULL);
	}

if( (ptr=getenv("LSBCC_DEBUG")) != NULL ) {
	lsbcc_debug=strtod(ptr,NULL);
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
		fprintf(stderr,"lsbcc debug set to 0x%x\n", lsbcc_debug );
	}

if(LSBCPLUS != lsbccmode) {
	if( (ptr=getenv("LSBCC")) != NULL ) {
		ccname=ptr;
		if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
			fprintf(stderr,"cc name set to %s\n", ccname );
	}
} else {

	if( (ptr=getenv("LSBCXX")) != NULL ) {
		ccname=ptr;
		if( lsbcc_debug&DEBUG_ENV_OVERRIDES ) {
			fprintf(stderr,"c++ name set to %s\n", ccname );
		}
	}
	if( (ptr=getenv("LSBCXX_INCLUDES")) != NULL ) {
		memset(cxxincpath, 0, strlen(cxxincpath));
		strcpy(cxxincpath, ptr);
		if( lsbcc_debug&DEBUG_ENV_OVERRIDES ) {
			fprintf(stderr,"c++ include prefix set to %s\n", cxxincpath );
		}
	}
}

if( (ptr=getenv("LSBCC_LIBS")) != NULL ) {
	memset(libpath, 0, strlen(libpath));
	strcpy(libpath, ptr);
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
		fprintf(stderr,"library prefix set to %s\n", libpath );
	}

if( (ptr=getenv("LSBCC_INCLUDES")) != NULL ) {
	memset(incpath, 0, strlen(incpath));
	strcpy(incpath, ptr);
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
		fprintf(stderr,"include prefix set to %s\n", incpath );
	}

if( (ptr=getenv("LSBCC_FORCEFEATURES")) != NULL ) {
	feature_settings = 1;
}

if( (ptr=getenv("LSBCC_BESTEFFORT")) != NULL ) {
	best_effort = 1;
}

if( (ptr=getenv("LSBCC_USE_DEFAULT_LINKER")) != NULL ) {
	default_linker = 1;
}

if( (ptr=getenv("LSBCC_LIBTOOLFIXUPS")) != NULL ) {
	libtool_fixups = 1;
}

if( (ptr=getenv("LSBCC_VERBOSE")) != NULL ) {
	display_cmd = 1;
}

if( lsbcc_debug&DEBUG_ARGUMENTS ) {
	for(i=0;i<argc;i++)
		fprintf(stderr,"%3.3d: %s\n", i, argv[i] );
}

/*
 * Build the argvgroup for the "known" library names here
 * Then add to it if the environment variable is set
 */
if( lsbversion_index == -1 ) {
    fprintf(stderr,"Incorrect LSB version: %s\n", lsbcc_lsbversion);
    exit(-1);
}
for(i=0;lsb_libs[lsbversion_index][i]; i++) {
	argvaddstring(lsblibs, strdup(lsb_libs[lsbversion_index][i]));
}

if(LSBCPLUS == lsbccmode) {
	for(i=0;lsb_cplus_libs[i]; i++) {
		argvaddstring(lsblibs, strdup(lsb_cplus_libs[i]));
	}
}

/*
 * check if we should pull in optional LSB modules.
 */
if((ptr = getenv("LSB_MODULES")) != NULL) {
	char *modulearg, *module;
	modulearg = strdup(ptr);
	module = strtok(modulearg, ",");
	while (module) {
		int	found = 0;
        for (i = 0; i < lsb_num_modules[lsbversion_index]; i++) {
			int	j = 0;
            lsb_lib_modules_t *lsb_module = &lsb_modules[lsbversion_index][i];

            if(strcasecmp(module, lsb_modules[lsbversion_index][i].module_name) == 0) {
				if (lsb_module->lib_names != NULL) {
        				for(;lsb_module->lib_names[j] != NULL;j++) {
               					argvaddstring(lsblibs, strdup(lsb_module->lib_names[j]));
					}
				}
				found = 1;
				break;
			}
		}

		/*
		 * XXX temporary hack: accept names of deprecated
		 * modules - no need to do anything with them
		 * this is just for the Qt3 scripts, really;
		 * until a better answer is developed
		 */
        for (i = 0; i < lsb_num_deprecated_modules[lsbversion_index]; i++) {
            if(strcasecmp(module, lsb_deprecated_modules[lsbversion_index][i].module_name) == 0) {
				found = 1;
				break;
			}
		}

		if (!found) {
			fprintf(stderr,"unknown module in LSB_MODULES: %s\n", module);
			exit(EXIT_FAILURE);
		}
		module = strtok(NULL, ",");
	}
}

if( (ptr=getenv("LSB_SHAREDLIBPATH")) != NULL ) {
	process_shared_lib_path(strdup(ptr));
}

/*
 * Add in user specified libs.
 */
if( (ptr=getenv("LSBCC_SHAREDLIBS")) != NULL ) {
	char *libarg, *lib;
	libarg = strdup(ptr);
		lib = strtok(libarg, ":");
		while (lib) {
			if( lsbcc_debug&DEBUG_ENV_OVERRIDES ) {
				fprintf(stderr,"added %s to allowed dsos\n", lib);
			}
			argvaddstring(lsblibs,strdup(lib));
			lib = strtok(NULL, ":");
		}
	}

/* Process the options passed in */
opterr = 0;

while((c=getopt_long_only(argc,argv,optstr,long_options, &option_index))>=0 ) {
	switch(c) {
	case 0:
		found_gcc_arg = 1;
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS ) {
			fprintf(stderr,"option0: -%s",
				long_options[option_index].name);
			if( optarg ) {
				fprintf(stderr, " with arg %s", optarg);
			}
			fprintf(stderr,"\n");
		}
		argvadd(options,long_options[option_index].name,optarg);
		/*
		 * If we are building a shared library, then we need to
		 * not specify the program interpreter and system libraries.
		 */
		if(strcmp( long_options[option_index].name, "shared" ) == 0) {
			lsbcc_buildingshared=1;
		}
		break;
	case 1: /* all args not prefixed by - */
		if (stat(optarg, &st_buf) == 0) {
		    if (S_ISREG(st_buf.st_mode) || S_ISLNK(st_buf.st_mode)) {
			found_file = 1;
				
			if (libtool_fixups && perform_libtool_fixups(optarg)) {
			    break;
			}
		    }
		}
		argvaddstring(options,strdup(optarg));
		found_gcc_arg = 1;
		/* special case: file fed to stdin */
		if(strcmp( optarg, "-" ) == 0) {
			if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS ) {
				fprintf(stderr,"option1: %s, process stdin\n", optarg);
			}
			found_file = 1;
		}
		break;
	case 2: /* --help intended for gcc, we'll add our 2cents however */
		found_gcc_standalone = 1;
		argvaddstring(gccstartargs, strdup("--help"));
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
	case 6: /* --lsb-cc=<cc> */
		ccname=strdup(optarg);
		break;
	case 7: /* --lsb-cxx=<cxx> */
		ccname=strdup(optarg);
		break;
	case 8: /* --lsb-libpath=<path> */
		memset(libpath, 0, strlen(libpath));
		strcpy(libpath, optarg);
		break;
	case 9: /* --lsb-includepath=<path> */
		memset(incpath, 0, strlen(incpath));
		strcpy(incpath, optarg);
		break;
	case 10: /* --lsb-cxx-includepath=<path> */
		memset(cxxincpath, 0, strlen(cxxincpath));
		strcpy(cxxincpath, optarg);
		break;
	case 16: /* --lsb-shared-libpath=<path:...> */
		process_shared_lib_path(strdup(optarg));
		break;
	case 11: /* --lsb-shared-libs=<lib:...> */
		{
		char *libarg, *lib;
		libarg = strdup(optarg);
		lib = strtok(libarg, ":");
		while (lib) {
			if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
				fprintf(stderr,"added %s to allowed dsos\n", lib);
			argvaddstring(lsblibs,strdup(lib));
			lib = strtok(NULL, ":");
		}
		}
		break;
	case 12:/* --lsb-forcefeatures */
		feature_settings = 1;
		break;
	case 13:/* --lsb-modules=<module,...> */
		{
		char *modulearg, *module;
		modulearg = strdup(optarg);
		module = strtok(modulearg, ",");
		while (module) {
			int	found = 0;
			int	j = 0;
            for (i = 0; i < lsb_num_modules[lsbversion_index]; i++) {
                lsb_lib_modules_t *lsb_module = &lsb_modules[lsbversion_index][i];

                if(strcasecmp(module, lsb_modules[lsbversion_index][i].module_name) == 0) {
					if (lsb_module->lib_names != NULL) {
        					for(j=0;lsb_module->lib_names[j] != NULL;j++) {
               						argvaddstring(lsblibs, strdup(lsb_module->lib_names[j]));
						}
					}
					found = 1;
					break;
				}
			}
			if (!found) {
				fprintf(stderr,"unknown module: %s\n", module);
				usage(argv[0]);
				exit(EXIT_FAILURE);
			}
			module = strtok(NULL, ",");
		}
		}
		break;
	case 'E':
	case 'S':
	case 'c':
		found_gcc_arg = 1;
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -%c\n", c);
		no_link = 1;
		argvaddstring(options,argv[optind-1]);
		auto_pthread = 0;	/* too noisy if not linking */
		break;
	case 'o':
		found_gcc_arg = 1;
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -o %s\n", optarg );
		argvadd(target,"o",optarg);
		break;
	case 'u':
		found_gcc_arg = 1;
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -u %s\n", optarg );
		argvadd(target,"u",optarg);
		break;
	case 'I':
		found_gcc_arg = 1;
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -I %s\n", optarg );

		if (check_include_path(optarg)) {
		  /* For now, just print warnings for bad include
		     paths. */
		  fprintf(stderr, "warning: dangerous include path %s\n",
			  optarg);
		}

		argvadd(incpaths,"I",optarg);
		break;
	case 'l':
		found_gcc_arg = 1;
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: - %s\n", optarg );
		found_l_opt = 1;
		process_opt_l(optarg);
		break;
	case 'L':
		found_gcc_arg = 1;
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -L %s\n", optarg );
		process_opt_L(optarg);
		break;
	case 'W':
		if ((strstr(argv[optind-1], "no-whole-archive") != NULL) ||
			(strstr(argv[optind-1], "whole-archive") != NULL)) {
			/*
			 * .a files affected will look like unrecognized
			 * options, and have to stay with these flags.
			 * stuff it onto the unrecognized list, although
			 * of course we did recognize this
			 */
			argvaddstring(options,argv[optind-1]);
			break;
		}

		found_gcc_arg = 1;

		if (strstr(argv[optind-1], "Bdynamic") != NULL) {
			b_dynamic = 1;
		}

		if (strstr(argv[optind-1], "Bstatic") != NULL) {
			b_dynamic = 0;
		}

		if ((strstr(argv[optind-1], "no-as-needed") != NULL) ||
			(strstr(argv[optind-1], "as-needed") != NULL)) {
			/*
			 * If any of the as-needed flags is supplied, we won't
			 * monkey with adding this flag on our own volition.
			 */
			no_as_needed = 1;
		}
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -W %s\n", optarg );
		argvaddstring(userlibs,argv[optind-1]);
		break;
	case 'V':
	case 14:
	case 15:
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
		argvaddstring(gccstartargs,argv[optind-1]);
		break;
	case 17:
		/* -static
		 * no -Wl,Bdynamic, add -Wl,--start-group, add -lgcc_eh */
		found_gcc_arg = 1;
		b_dynamic = 0;
		force_static = 1;
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -%s\n", long_options[option_index].name );
		argvaddstring(gccstartargs,"-static");
		argvaddstring(syslibs,"-Wl,--start-group");
		argvaddstring(syslibs,"-lgcc_eh");
		break;
	case 18:/* --lsb-use-default-linker */
		default_linker=1;
		break;
	case 19: /* --lsb-libtool-fixups */
		libtool_fixups = 1;
		break;
	case 20:/* --lsb-besteffort */
		best_effort=1;
		break;
	case 's':
		/*
		 * We must explicitly recognize '-s' to distinguish it
		 * from '-shared'. We just fall through and treat it like
		 * any other option.
		 */
	case '?':
		if (strncmp(argv[optind-1], "--lsb-",6) == 0) {
			/*
			 * We simply refuse to pass --lsb- prefixed
			 * options along to gcc, since they are likely
			 * just typos of legit --lsb- options..
			 */
			usage(argv[0]);
			exit(EXIT_FAILURE);

		}
		found_gcc_arg = 1;
		/*
		 * This is an attempt to catch things that we don't
		 * explicitly recognize, and just pass it through to gcc.
		 */
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS ) {
			fprintf(stderr,"option?: %s optopt %x %c\n",
					argv[optind-1], optopt, optopt );
		}
		if( (optopt && (optopt != '?')) || (argv[optind-1][0] == '-') ) {
			argvaddstring(options,argv[optind-1]);
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
 * determine if the ccname is actually lsbcc - this might
 * just be somebody messing with us, but it might also be
 * an innocent freudian typo.
 */
if ((strcmp(basename(ccname), "lsbcc") == 0) ||
	(strcmp(basename(ccname), "lsbc++") == 0)) {
	printf("You can not use %s as your compiler!\n", argv[0]);
	exit(-1);
}

/*
 * Determine where the GCC specific file are located.
 */
find_gcc_base_dir();

/*
 * determine if the ccname is either icc or i++
 */
if ((strcmp(basename(ccname), "icc") == 0) ||
	(strcmp(basename(ccname), "i++") == 0)) {
	if( lsbcc_debug&DEBUG_LIB_CHANGES ) {
		fprintf(stderr,"Compiler is intel icc adding -i-static\n");
	}
	cc_is_icc = 1;
}

/*
 * set the compiler
 */
argvaddstring(gccargs,ccname);

/*
 * Only force feature settings if LSBCC_FORCEFEATURES is defined
 * Otherwise assume the app developer knew what they where doing
 * with feature define flags.
 */
if (feature_settings) {
	for(i=0;i<numfeaturesettings;i++) {
		argvaddstring(options,featuresettings[i]);
	}
}

argvaddstring(options,lsbversion_option);

/* Gather together the non-options arguments */
if (optind < argc) {
	found_gcc_arg = 1;
	if( lsbcc_debug&DEBUG_UNRECOGNIZED_ARGS ) {
		fprintf(stderr, "non-option ARGV-elements: ");
	}
	while (optind < argc) {
		if( lsbcc_debug&DEBUG_UNRECOGNIZED_ARGS ) {
			fprintf(stderr,"%s ", argv[optind]);
		}
		argvaddstring(options,argv[optind++]);
	}
	if( lsbcc_debug&DEBUG_UNRECOGNIZED_ARGS ) {
		fprintf(stderr,"\n");
	}
}

/* fugly hack for issue with compiled apps on some plats not
 * running on others (SLES10 compiled segfaults on Debian4 ppc)
 * provide our own crti.o to work around the issue
*/
#if __powerpc__ && !__powerpc64__
argvaddstring(gccargs, "-B/opt/lsb/lib");
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

/*
 * If we didn't find a file to work against, we don't need
 * to link either.
 */
if (!found_file) {
	no_link = 1;
}

if (!no_link) {
	if( lsbcc_debug&DEBUG_LIB_CHANGES ) {
		fprintf(stderr,"Prepending %s to the linker path\n",gccbasedir);
	}
	argvadd(syslibs,"L",gccbasedir);

	/* these need to go after user-specified library paths */
#if __powerpc64__ || __s390x__ || __x86_64__
	argvaddstring(syslibs,"-L/lib64");
	argvaddstring(syslibs,"-L/usr/lib64");
#else
	argvaddstring(syslibs,"-L/lib");
	argvaddstring(syslibs,"-L/usr/lib");
#endif

	if( !cc_is_icc && need_sysv_hash() ) {
		if( lsbcc_debug&DEBUG_MODIFIED_ARGS ) {
			fprintf(stderr, "Adding -Wl,--hash-style=sysv to args\n");
		}
		argvaddstring(syslibs, "-Wl,--hash-style=sysv");
	}

	if( lsbccmode == LSBCPLUS ) {
		if ( need_gcc34_compat() ) {
			if( lsbcc_debug&DEBUG_LIB_CHANGES ) {
				fprintf(stderr,"Appending -lgcc34compat -ldl to the library list\n");
			}
			argvaddstring(syslibs, "-lgcc34compat");
			argvaddstring(syslibs, "-ldl");
		}

		if( lsbcc_debug&DEBUG_LIB_CHANGES ) {
			fprintf(stderr,"Appending -lstdc++ -lgcc_s to the library list\n");
		}
		argvaddstring(syslibs,"-lstdc++");
		argvaddstring(syslibs,"-lgcc_s");
	}

	/* Best-effort dynamic linking. */
	if( best_effort ) {
		sprintf(tmpbuf, "%s/besteffort.o", libpath);
		argvaddstring(syslibs, strdup(tmpbuf));
		default_linker = 1;
	}

	if( lsbcc_debug&DEBUG_LIB_CHANGES ) {
		fprintf(stderr,"Appending -lgcc\n");
	}
	argvaddstring(syslibs,"-lgcc");
	if( lsbcc_debug&DEBUG_LIB_CHANGES ) {
		fprintf(stderr,"Appending -lm -lc -lc_nonshared -lgcc to the library list\n");
	}
	argvaddstring(syslibs,"-lm");
	argvaddstring(syslibs,"-lc");
	argvaddstring(syslibs,"-lc_nonshared");

	/* to be pedantic, we do gcc_s and gcc again */
	if( lsbccmode == LSBCPLUS ) {
		argvaddstring(syslibs,"-lgcc_s");
	}
	argvaddstring(syslibs,"-lgcc");
	if (force_static) {
		argvaddstring(syslibs, "-Wl,--end-group");
	}

	/* Initialize the argv groups */

	if (!lsbcc_buildingshared && !default_linker) {
		if (cc_is_icc) {
			sprintf(progintbuf,"-dynamic-linker=%s",proginterpreter);
		} else {
			sprintf(progintbuf,"-Wl,--dynamic-linker=%s",proginterpreter);
		}
		argvaddstring(proginterp,progintbuf);
	}
}

/*
 * Check if any parameters/options are passed.
 * If not print an error similar to running "gcc"
 * without any parameters/options
 */
if(!found_gcc_arg && !found_gcc_standalone) {
    fprintf(stderr, "%s: no input files\n", basename(argv[0]));
    exit(EXIT_FAILURE);
}

#ifdef LSBCC_EXTRAFLAGS_HACK
/* Gather options passed through environment variable */
    if ((ptr=getenv("LSBCC_EXTRAFLAGS")) != NULL) {
	char *flagarg, *flag;
	flagarg = strdup(ptr);
	flag = strtok(flagarg, ":");
	while (flag) {
	    if (lsbcc_debug&DEBUG_UNRECOGNIZED_ARGS)
		fprintf(stderr, "added %s to options\n", flag);
	    argvaddstring(options, strdup(flag));
	    flag = strtok(NULL, ":");
	}
    }
#endif

argvappend(gccargs,gccstartargs);

/* Assemble all of the groups into one to pass to gcc */
if (found_gcc_arg) {
	argvappend(gccargs,target);

	/*
 	* The lsb/include directory needs to come after application supplied paths,
 	* but before the default /usr/include path.
 	* This does make the assumption that application builds are well behaved
 	* and don't pass in -I/usr/include themselves.
 	*/
	argvappend(gccargs,incpaths);
	if( lsbcc_debug&DEBUG_INCLUDE_CHANGES )
		fprintf(stderr,"Prepending %s to include path\n", incpath);
	argvadd(gccargs,"I",incpath);

	if( lsbccmode == LSBCPLUS ) {
		if( lsbcc_debug&DEBUG_INCLUDE_CHANGES )
			fprintf(stderr,"Prepending %s to include path\n", cxxincpath);
		argvadd(gccargs,"I",cxxincpath);
		/* this is grotty: looks like we also need -Icxxincpath/backward */
		sprintf(tmpbuf, "-I%s/backward", cxxincpath);
		argvaddstring(incpaths,strdup(tmpbuf));
		argvappend(gccargs,incpaths);
	}

	argvappend(gccargs,options);

	if( lsbcc_debug&DEBUG_LIB_CHANGES ) {
		fprintf(stderr,"Turning off default libraries with -nodefaultlibs\n");
	}

	if (!no_link) {
		/*
		 * link intel libs statically
		 */
		if (cc_is_icc) {
			argvaddstring(gccargs,"-i-static");
			argvappend(gccargs,proginterp);
		}

		argvaddstring(gccargs,"-nodefaultlibs");
		if( lsbcc_debug&DEBUG_LIB_CHANGES ) {
			fprintf(stderr,"Prepending %s to the linker path\n", libpath);
		}
		argvadd(gccargs,"L",libpath);
		argvappend(gccargs,libpaths);

		if (found_l_opt && !no_as_needed) {
			argvaddstring(gccargs,strdup("-Wl,--as-needed"));
		}
	}

	argvappend(gccargs,userlibs);

	/*
	 * force libirc for icc here, icc does a bunch of ld fixups
	 * like lsbcc does, but they don't always get along without
	 * this.
	 */
	if (cc_is_icc && !no_link) {
		if (b_dynamic) {
			argvaddstring(gccargs,"-Wl,-Bstatic");
			b_dynamic = 0;
		}
		argvaddstring(gccargs,"-lirc");
	}

	/* force pthread always */
	if (auto_pthread) {
		if (lsbcc_debug&DEBUG_LIB_CHANGES) {
			fprintf(stderr,"Appending -lpthread -lpthread_nonshared to the library list\n");
		}
		if (!b_dynamic && !force_static) {
			argvaddstring(gccargs,"-Wl,-Bdynamic");
			b_dynamic = 1;
		}
		argvaddstring(gccargs,"-lpthread");
		argvaddstring(gccargs,"-lpthread_nonshared");
	}
	if (!cc_is_icc) {
		argvappend(gccargs,proginterp);
	}
	argvappend(gccargs,syslibs);
}


/* ensure argument list is null terminated */
gccargs->argv[gccargs->numargv] = NULL;

if( lsbcc_debug&DEBUG_MODIFIED_ARGS) {
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

exit (EXIT_FAILURE); /* exec must have failed! */
}

