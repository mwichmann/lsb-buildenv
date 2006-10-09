/*
 * (C) Copyright 2002 The Free Standards Group Inc
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

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <libgen.h>
#include <string.h>
#include <getopt.h>
#include <limits.h>
#include <assert.h>

/* begin lsbcc.h */

static char lsbcc_lsb_version [] = "LSB version 3.1";

/*
 * Logically, this would go into a header, but there is no need for a seperate
 * header, so it's just here, near the top of this file.
 */

struct argvgroup {
	int	numargv;
	int	maxargv;
	char	**argv;
	};

#define ARGVCHUNKSIZE	100

/* end lsbcc.h */

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

/*
 * Set the default names of the compiler to call and the paths
 * to LSB headers and libraries.  These can be changed through
 * environment variables.
 */
#ifndef BASE_PATH
#define BASE_PATH "/opt/lsb"
#endif

char *ccname="cc";
char *cxxname="c++";
char incpath[PATH_MAX];
char cxxincpath[PATH_MAX];
char libpath[PATH_MAX];

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

/* begin argv ADT */
/*
 * Create an abstract data type to maintain the options that are collected
 * into groups, and then put together to pass to gcc.
 */
struct argvgroup *
argvinit(void)
{
struct argvgroup *ag;

if( (ag=(struct argvgroup *)malloc(sizeof(struct argvgroup))) == NULL ) {
	fprintf(stderr,"Unable to allocate memory for a new argvgroup\n");
	exit(2);
	}

if( (ag->argv=(char **)malloc(sizeof(char *)*ARGVCHUNKSIZE)) == NULL ) {
	fprintf(stderr,"Unable to allocate memory for a argv items\n");
	exit(2);
	}
ag->numargv=0;
ag->maxargv=ARGVCHUNKSIZE;

return ag;
}

void
argvreset(struct argvgroup *ag)
{
ag->numargv=0;
}

/*
 * argvaddstring is used to add a string that already begins with '-' to
 * an argvgroup. It will allocate more space if the argvgroup is nearly full.
 */
void
argvaddstring(struct argvgroup *ag,char *str)
{
if( ag->numargv+2 >= ag->maxargv ) {
	/* This argvgroup is full, so get more space */
	ag->maxargv+=ARGVCHUNKSIZE;
	if( (ag->argv=
	    (char **)realloc(ag->argv,sizeof(char *)*ag->maxargv)) == NULL ) {
		fprintf(stderr,"Unable to allocate memory for argv items\n");
		exit(3);
		}
	}

ag->argv[ag->numargv++]=str;
}

/*
 * argvadd is used to rebuild the option string so that it starts with a '-',
 * and then add it and possibly an argument to the argvgroup.
 */
void
argvadd(struct argvgroup *ag, const char *opt, char *val)
{
char *dashopt;

if( (dashopt=(char *)malloc(strlen(opt)+2)) == NULL ) {
	fprintf(stderr,"Unable to allocate memory for an option string\n");
	exit(4);
	}

strcpy(dashopt,"-");
strcat(dashopt,opt);
argvaddstring(ag, dashopt);

if( val ) {
	ag->argv[ag->numargv++]=val;
	}
}

void
argvappend(struct argvgroup *to, struct argvgroup *from)
{
int i;
if( to->numargv+from->numargv >= to->maxargv ) {
	/* This argvgroup is full, so get more space */
	to->maxargv+=from->numargv;
	if( (to->argv=
	    (char **)realloc(to->argv,sizeof(char *)*to->maxargv)) == NULL ) {
		fprintf(stderr,"Unable to allocate memory for argv items\n");
		exit(3);
		}
	}
for(i=0;i<from->numargv;i++) {
	to->argv[to->numargv++]=from->argv[i];
/*
	printf("appending %s\n", from->argv[i]);
*/
	}
}

void
argvdump(struct argvgroup *ag)
{
int i;

for(i=0;i<ag->numargv;i++)
	fprintf(stderr,"%3.3d: %s\n",i,ag->argv[i]);
}
/* end argv ADT */

/* begin option processing routines */

/*
 * Some options require a little bit of additional processing, so we have
 * a few routines here that are used to do the special processing.
 */

/*
 * FIXME - generate these from the DB at compile time for the toolchain
 */
char *lsb_corelibs[] = {
	"c",		/* core module */
	"crypt",
	"dl",
	"gcc_s",
	"m",
	"ncurses",
	"pam",
	"pthread",
	"rt",
	"util",
	"z",
	"GL",		/* graphics module */
	"ICE",
	"SM",
	"X11",
	"Xext",
	"Xi",
	"Xt",
	NULL
};

char *lsb_cpluslibs[] = {
	"stdc++",
	NULL
};

char *lsb_desktoplibs[] = {
	"glib-2.0",
	"gthread-2.0",
	"gobject-2.0",
	"gmodule-2.0",
	"atk-1.0",
	"pango-1.0",
	"pangoxft-1.0",
	"pangoft2-1.0",
	"gdk-x11-2.0",
	"gdk_pixbuf_xlib-2.0",
	"gdk_pixbuf-2.0",
	"gtk-x11-2.0",
	"xml2",
	"jpeg",
	"png12",
	"png",
	"fontconfig",
        "qt-mt",
	NULL
};

char *lsb_desktoplibs_qt4[] = {
	"QtCore",
	"QtGui",
	"QtNetwork",
	"QtXml",
	"QtOpenGL",
	"QtSql",
	"QtSvg",
	NULL
};

void
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
		return;
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
char *optstr="cL:l:o:ESI:W::su:vV:";
struct option long_options[] = {
	{"include",required_argument,0,0},
	{"pthread",no_argument,0,0},
	{"rpath",required_argument,0,0},
	{"rpath-link",required_argument,0,0},
	{"shared",no_argument,0,0},
	{"help",no_argument,NULL,1},
	{"lsb-help",no_argument,NULL,2},
	{"lsb-version",no_argument,NULL,3},
	{"lsb-verbose",no_argument,NULL,4},
	{"lsb-cc",required_argument,NULL,5},
	{"lsb-cxx",required_argument,NULL,6},
	{"lsb-libpath",required_argument,NULL,7},
	{"lsb-includepath",required_argument,NULL,8},
	{"lsb-cxx-includepath",required_argument,NULL,9},
	{"lsb-shared-libs",required_argument,NULL,10},
	{"lsb-forcefeatures",no_argument,NULL,11},
	{"lsb-modules",required_argument,NULL,12},
	{"verbose",required_argument,NULL,13},
	{"version",required_argument,NULL,14},
	{NULL,0,0,0}
	};


void
usage(const char *progname) {
	printf("Usage %s:\n"
		"\t--lsb-help         Display this message\n"	
		"\t--lsb-version      Display the version of LSB this tool can build for.\n"	
		"\t--lsb-verbose      Print out full commands to system compiler.\n"	
		"\t--lsb-cc=<path to c compiler>\n"
		"\t                   Set the system c compiler (overrides LSBCC\n"
		"\t                    envionment setting)\n"
		"\t--lsb-cxx=<path to c++ compiler>\n"
		"\t                   Set the system c++ compiler (overrides LSBCXX\n"
		"\t                    envionment setting)\n"
		"\t--lsb-forcefeatures\n"
		"\t                   Force seting -D flags for full feature set LSB\n"
		"\t                    supports\n"
		"\t--lsb-libpath=<lsb_lib_path>\n"
		"\t                   Set the path to the lsb libs directory\n"
		"\t                    (overrides the LSBCC_LIBS envionment setting)\n"
		"\t--lsb-includepath=<include_path>\n"
		"\t                   Set the path to the lsb includes directory\n"
		"\t                    (overrides the LSBCC_INCLUDES envionment setting)\n"
		"\t--lsb-cxx-includepath=<include_path>\n"
		"\t                   Set the path to the lsb c++ include directory\n"
		"\t                    (overrides the LSBCXX_INCLUDES envionment\n "
		"\t                    setting)\n"
		"\t--lsb-shared-libs=<shared_lib:...>\n"
		"\t                   Add libs to the list of non-lsb libs to link as\n"
		"\t                    shared libs (product internal shared libs),\n"
		"\t                    these libs will be in addition to any libs added\n"
		"\t                    through the LSBCC_SHAREDLIBS environment setting.\n"
		"\t                    shared libs must be added before any -l options\n"
		"\t                    to have effect.\n"
		"\t--lsb-modules=<module,..>\n"
		"\t                   Enable support for the optional LSB modules listed.\n"
		"\t                    See release documentation for list of supported\n"
		"\t                    optional modules.  Modules will added in addition\n"
		"\t                    to any added from the LSBCC_MODULES environment\n"
		"\t                    setting.\n"
	
		"All other options are passed to the compiler more or\n"
		"less unmodified, --lsb options should appear before system\n"
		"compiler options.\n"
		,progname);
}

/*
 * The program intepreter isn't the same everywhere, so set it here,
 * and just use it below.
 */
char *proginterpreter =
#if   __i386__
	"/lib/ld-lsb.so.3";
#elif __powerpc__ && !__powerpc64__
	"/lib/ld-lsb-ppc32.so.3";
#elif __powerpc64__
	"/lib64/ld-lsb-ppc64.so.3";
#elif __ia64__
	"/lib/ld-lsb-ia64.so.3";
#elif __s390__ && !__s390x__
	"/lib/ld-lsb-s390.so.3";
#elif __s390x__
	"/lib64/ld-lsb-s390x.so.3";
#elif __x86_64__
	"/lib64/ld-lsb-x86-64.so.3";
#else
	"Unknown_program_interpreter";
#endif

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


int main(int argc, char *argv[])
{
int	c,i;
int	option_index;
int 	auto_pthread = 1; 
int	desktop_qt4_product = 0;
int	feature_settings = 0;
int	display_cmd = 0;
int	found_gcc_arg = 0;
int	found_gcc_standalone = 0;
int	found_l_opt = 0;
int	no_as_needed = 1;
char	progintbuf[256];
char	tmpbuf[256];
char	*ptr;

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


/*
 * Set up the paths we will need
 */
snprintf(incpath, PATH_MAX-1, "%s/%s", BASE_PATH, "include");
snprintf(cxxincpath, PATH_MAX-1, "%s/%s", BASE_PATH, "include/c++");

/*
 * Set up the library path according to arch using lib64 where necessary
 */
#if __powerpc64__ || __s390x__ || __x86_64__
	snprintf(libpath, PATH_MAX-1, "%s/%s", BASE_PATH, "lib64");
#else
	snprintf(libpath, PATH_MAX-1, "%s/%s", BASE_PATH, "lib");
#endif

/*
 * Check for some environment variable, and adjust things if they are found.
 */

if( (ptr=getenv("LSBCC_WARN")) != NULL ) {
	lsbcc_warn=strtod(ptr,NULL);
	}

if( (ptr=getenv("LSBCC_DEBUG")) != NULL ) {
	lsbcc_debug=strtod(ptr,NULL);
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
		fprintf(stderr,"lsbcc debug set to 0x%x\n", lsbcc_debug );
	}

if( (ptr=getenv("LSBCC")) != NULL ) {
	ccname=ptr;
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
		fprintf(stderr,"cc name set to %s\n", ccname );
	}
	
if( (ptr=getenv("LSBCXX")) != NULL ) {
	cxxname=ptr;
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
		fprintf(stderr,"c++ name set to %s\n", cxxname );
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

if( (ptr=getenv("LSBCXX_INCLUDES")) != NULL ) {
	memset(cxxincpath, 0, strlen(cxxincpath));
	strcpy(cxxincpath, ptr);
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
		fprintf(stderr,"c++ include prefix set to %s\n", cxxincpath );
	}

if( (ptr=getenv("LSBCC_FORCEFEATURES")) != NULL ) {
	feature_settings = 1;
}

if( (ptr=getenv("LSBCC_VERBOSE")) != NULL ) {
	display_cmd = 1;
}

if( lsbcc_debug&DEBUG_ARGUMENTS ) {
	for(i=0;i<argc;i++)
		fprintf(stderr,"%3.3d: %s\n", i, argv[i] );
}
	
/* Determine if we are being called for C or C++ */
if( strcmp(basename(argv[0]), "lsbc++") == 0 ) {
	/* We are compiling C++ - set a flag to affect some things later on */
	/*
	fprintf(stderr,"Using C++ mode\n");
	*/
	lsbccmode=LSBCPLUS;
}


/*
 * Build the argvgroup for the "known" library names here
 * Then add to it if the environment variable is set
 */
for(i=0;lsb_corelibs[i]; i++)
	argvaddstring(lsblibs, strdup(lsb_corelibs[i]));

if(LSBCPLUS == lsbccmode) {
	for(i=0;lsb_cpluslibs[i]; i++)
		argvaddstring(lsblibs, strdup(lsb_cpluslibs[i]));
}

for(i=0;lsb_desktoplibs[i];i++) {
	argvaddstring(lsblibs, strdup(lsb_desktoplibs[i]));
}

/*
 * check if we should pull in optional LSB modules.
 */
if((ptr = getenv("LSB_MODULES")) != NULL) {
	if(strcasecmp(ptr, "qt4") == 0) {
		desktop_qt4_product = 1;
        	for(i=0;lsb_desktoplibs_qt4[i];i++) {
               		argvaddstring(lsblibs, strdup(lsb_desktoplibs_qt4[i]));
		}
	}
}

/*
 * Add in user specified libs.
 */
if( (ptr=getenv("LSBCC_SHAREDLIBS")) != NULL ) {
	char *libarg, *lib;
	libarg = strdup(ptr);
		lib = strtok(libarg, ":");
		while (lib) {
			if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
				fprintf(stderr,"added %s to allowed dsos\n", lib);
			argvaddstring(lsblibs,strdup(lib));
			lib = strtok(NULL, ":");
		}
	}

/*
 * Determine where the GCC specific file are located.
 */
find_gcc_base_dir();

/* Initialize the argv groups */
sprintf(progintbuf,"-Wl,--dynamic-linker=%s",proginterpreter);
argvaddstring(proginterp,progintbuf);

if( lsbcc_debug&DEBUG_LIB_CHANGES )
	fprintf(stderr,"Prepending %s to the linker path\n",gccbasedir);
argvadd(syslibs,"L",gccbasedir);

/* these need to go after user-specified library paths */
#if __powerpc64__ || __s390x__ || __x86_64__
	argvaddstring(syslibs,"-L/lib64");
	argvaddstring(syslibs,"-L/usr/lib64");
#else
	argvaddstring(syslibs,"-L/lib");
	argvaddstring(syslibs,"-L/usr/lib");
#endif

if( lsbccmode == LSBCPLUS ) {
	if ( need_gcc34_compat() ) {
		if( lsbcc_debug&DEBUG_LIB_CHANGES )
			fprintf(stderr,"Appending -lgcc34compat -ldl to the library list\n");
		argvaddstring(syslibs, "-lgcc34compat");
		argvaddstring(syslibs, "-ldl");
	}

	if( lsbcc_debug&DEBUG_LIB_CHANGES )
		fprintf(stderr,"Appending -lstdc++ -lgcc_s to the library list\n");
	argvaddstring(syslibs,"-lstdc++");
	argvaddstring(syslibs,"-lgcc_s");
}

if( lsbcc_debug&DEBUG_LIB_CHANGES )
	fprintf(stderr,"Appending -lgcc -lm -lc -lc_nonshared -lgcc to the library list\n");
argvaddstring(syslibs,"-lgcc");
argvaddstring(syslibs,"-lm");
argvaddstring(syslibs,"-lc");
argvaddstring(syslibs,"-lc_nonshared");
/* to be pedantic, we do gcc_s and gcc again */
if( lsbccmode == LSBCPLUS ) {
	argvaddstring(syslibs,"-lgcc_s");
}
argvaddstring(syslibs,"-lgcc");

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
			argvreset(proginterp);
			lsbcc_buildingshared=1;
		}
		break;
	case 1: /* --help intended for gcc, we'll add our 2cents however */
		found_gcc_standalone = 1;
		argvaddstring(gccstartargs, strdup("--help"));
	case 2: /* --lsb-help */
		usage(argv[0]);
		if (c == 2) {
			exit(0);
		}
		break;
	case 3: /* --lsb-version */
		printf("%s\n", lsbcc_lsb_version);
		exit(0);
		break;
	case 4: /* --lsb-verbose */
		display_cmd = 1;
		break;
	case 5: /* --lsb-cc=<cc> */
		ccname=strdup(optarg);
		break;
	case 6: /* --lsb-cxx=<cxx> */
		cxxname=strdup(optarg);
		break;
	case 7: /* --lsb-libpath=<path> */
		memset(libpath, 0, strlen(libpath));
		strcpy(libpath, optarg);
		break;
	case 8: /* --lsb-includepath=<path> */
		memset(incpath, 0, strlen(incpath));
		strcpy(incpath, optarg);
		break;
	case 9: /* --lsb-cxx-includepath=<path> */
		memset(cxxincpath, 0, strlen(cxxincpath));
		strcpy(cxxincpath, optarg);
		break;
	case 10: /* --lsb-shared-libs=<lib:...> */
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
	case 11:/* --lsb-forcefeatures */
		feature_settings = 1;
		break;
	case 12:/* --lsb-modules=<module,...> */
		{
		char *modulearg, *module;
		modulearg = strdup(optarg);
		module = strtok(modulearg, ",");
		while (module) {
			if(strcasecmp(module, "qt4") == 0) {
				if (!desktop_qt4_product) {
        				for(i=0;lsb_desktoplibs_qt4[i];i++) {
               					 argvaddstring(lsblibs, strdup(lsb_desktoplibs_qt4[i]));
					}
				}
			} else {
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
		argvreset(proginterp);
		argvreset(syslibs);
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
		argvadd(libpaths,"L",optarg);
		break;
	case 'W':
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
	case 13:
	case 14:
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
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option?: %s optopt %x %c\n",
					argv[optind-1], optopt, optopt );
		if( (optopt && (optopt != '?')) || (argv[optind-1][0] == '-') )
			argvaddstring(options,argv[optind-1]);
		else
			fprintf(stderr,"ERROR: Dropping argument %s\n",
							argv[optind-1] );
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
 * set the compiler
 */
if( lsbccmode == LSBCPLUS ) {
	argvaddstring(gccargs,cxxname);
} else {
	argvaddstring(gccargs,ccname);
}

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

/* force pthread always */
if (auto_pthread) {
	if (lsbcc_debug&DEBUG_LIB_CHANGES) {
		fprintf(stderr,"Appending -lpthread -lpthread_nonshared to the library list\n");
	}
	if (!b_dynamic) {
		argvaddstring(userlibs,"-Wl,-Bdynamic");
		b_dynamic = 1;
	}
	argvaddstring(userlibs,"-lpthread");
	argvaddstring(userlibs,"-lpthread_nonshared");
}

/* Gather together the non-options arguments */
if (optind < argc) {
	found_gcc_arg = 1;
	if( lsbcc_debug&DEBUG_UNRECOGNIZED_ARGS )
		fprintf(stderr, "non-option ARGV-elements: ");
	while (optind < argc) {
		if( lsbcc_debug&DEBUG_UNRECOGNIZED_ARGS )
			fprintf(stderr,"%s ", argv[optind]);
		argvaddstring(options,argv[optind++]);
		}
	if( lsbcc_debug&DEBUG_UNRECOGNIZED_ARGS )
		fprintf(stderr,"\n");
} else {
	/* There are no input file, so don't try to link anything */
	argvreset(proginterp);
	argvreset(syslibs);
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
	argvaddstring(gccargs,"-nodefaultlibs");
	if( lsbcc_debug&DEBUG_LIB_CHANGES ) {
		fprintf(stderr,"Prepending %s to the linker path\n", libpath);
	}
	argvadd(gccargs,"L",libpath);
	argvappend(gccargs,libpaths);

	if (found_l_opt && !no_as_needed) {
		argvaddstring(gccargs,strdup("-Wl,--as-needed"));
	}
	argvappend(gccargs,userlibs);
	argvappend(gccargs,proginterp);
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
	int i;

	for(i=0;i<gccargs->numargv;i++) {
		fprintf(stderr, " %s",gccargs->argv[i]);
	}
	fprintf(stderr, "\n");
}

assert(gccargs->numargv > 0);
/* exec to gcc */
execvp(gccargs->argv[0], gccargs->argv);

exit (EXIT_FAILURE); /* exec must have failed! */
}
