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
 * a set of headers and libraries nominaly found in /opt/lsbdeb-base/includes
 * and /opt/lsbdev-base/libs respectively. These headers and libraries have
 * been carefully built so that they contain only the interfaces provided by
 * the LSB. And LSB conforming application must also use be linked with
 * a special program intepreter (usually ld-lsb.so.1 but this is described
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

/* begin lsbcc.h */

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

char *ccname="cc";
char *cxxname="c++";
char *libpath="/opt/lsbdev-base/lib";
char *incpath="/opt/lsbdev-base/include";


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

int lsbcc_debug=0; /* Default to none. ./configure likes things to be quiet. */


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
argvaddstring(struct argvgroup *ag, char *str)
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

if( (dashopt=(char *)malloc(strlen(opt)+1)) == NULL ) {
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

char *default_lsblibs[] = {
	"c",
	"m",
	"pthread",
	"pam",
	"util",
	"dl",
	"crypt",
	"ncurses",
	"z",
	"X11",
	"Xt",
	"Xext",
	"SM",
	"ICE",
	"GL",
	0
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
		argvaddstring(userlibs,strdup(buf));
		return;
	}
}

/* So it's not an LSB library. Make sure it is getting statically linked */

if( lsbcc_debug&DEBUG_LIB_CHANGES )
	fprintf(stderr,"Forcing %s to be linked statically\n",val);

argvaddstring(userlibs,"-Wl,-Bstatic");
argvaddstring(userlibs,strdup(buf));
argvaddstring(userlibs,"-Wl,-Bdynamic");

}

/* end option processing routines */

/* begin utility functions */

/* We need to figure out what the path to the gcc base directory is */
char *gccbasedir;

void
find_gcc_base_dir()
{
FILE	*cccmd;
char	cmd[BUFSIZ];
char	buf[BUFSIZ];

/* Set a default value */
gccbasedir="/usr/lib/gcc-lib/i386-linux/2.95.4";

sprintf(cmd, "%s -print-libgcc-file-name", ccname );
if( (cccmd=popen(cmd,"r")) == NULL ) {
	fprintf(stderr,"Failed to popen \"%s\"\n", cmd );
	return;
	}

if( fgets(buf,BUFSIZ,cccmd) == NULL ) {
	fprintf(stderr,"nothing to read from \"%s\"\n", cmd );
	return;
	}

gccbasedir=dirname(buf);

return;
}
/* end utility functions */

/*
 * These are the otpions we need to recognize.
 */
char *optstr="cL:l:o:EI:W::s";

/*
 * gcc has a lot of options that are more than one character long. We'll treat
 * them as long options, but use the "_only" form of getopt so that they will
 * be recognized even though they all are indicated by a single '-'.
 */

struct option long_options[] = {
/*
	{"pedantic",no_argument,0,0},
*/
	{"shared",no_argument,0,0},
	{NULL,0,0,0}
	};


/*
 * The program intepreter isn't the same everywhere, so set it here,
 * and just use it below.
 */
char *proginterpreter =
#if defined(__i386__)
	"/lib/ld-lsb.so.1";
#elif defined(__powerpc__)
	"/lib/ld-lsb-ppc32.so.1";
#elif defined(__ia64__)
	"/lib/ld-lsb-ia64.so.1";
#else
	"Unknown_program_interpreter";
#endif

/*
 * We need to set some defines to correctly describe the assumed environment.
 */

char *featuresettings[] = {
	"-D_ISOC99_SOURCE",
	"-D_XOPEN_SOURCE=500",
	"-D_XOPEN_SOURCE_EXTENDED",
	"-D_LARGEFILE_SOURCE",
	"-D_LARGEFILE64_SOURCE",
	"-D_BSD_SOURCE",
	"-D_SVID_SOURCE",
	"-D_GNU_SOURCE"
	};

int numfeaturesettings=(sizeof(featuresettings)/sizeof(char *));


main(int argc, char *argv[])
{
int	c,i;
int	option_index;
char	progintbuf[256];
char	tmpbuf[256];
char	*ptr;

/*
 * Check for some environment variable, and adjust things if they are found.
 */

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
	libpath=ptr;
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
		fprintf(stderr,"library prefix set to %s\n", libpath );
	}

if( (ptr=getenv("LSBCC_INCLUDES")) != NULL ) {
	incpath=ptr;
	if( lsbcc_debug&DEBUG_ENV_OVERRIDES )
		fprintf(stderr,"include prefix set to %s\n", incpath );
	}

/*
 * Build the argvgroup for the "known" library names here
 * Then add to it if the environment variable is set
 */
lsblibs=argvinit();
for(i=0;default_lsblibs[i];i++)
	argvaddstring(lsblibs,strdup(default_lsblibs[i]));

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

if( lsbcc_debug&DEBUG_ARGUMENTS )
	for(i=0;i<argc;i++)
		fprintf(stderr,"%3.3d: %s\n", i, argv[i] );
	
/* Determine if we are being called for C or C++ */
if(strcmp(basename(argv[0]),"lsbcc") == 0 ) {
	/* We are compiling C - nothing special to do */
	;
} else if( strcmp(basename(argv[0]), "lsbc++") == 0 ) {
	/* We are compiling C++ - set a flag to affect some things later on */
	/*
	fprintf(stderr,"Using C++ mode\n");
	*/
	lsbccmode=LSBCPLUS;
}

/*
 * Determine where the GCC specific file are located.
 */
find_gcc_base_dir();

/* Initialize the argv groups */
proginterp=argvinit();
sprintf(progintbuf,"-Wl,--dynamic-linker=%s",proginterpreter);
argvaddstring(proginterp,progintbuf);

target=argvinit();
options=argvinit();

for(i=0;i<numfeaturesettings;i++) {
	argvaddstring(options,featuresettings[i]);
	}

incpaths=argvinit();

libpaths=argvinit();
if( lsbcc_debug&DEBUG_LIB_CHANGES )
	fprintf(stderr,"Turning off default libraries with -nodefaultlibs\n");
argvaddstring(libpaths,"-nodefaultlibs");
if( lsbcc_debug&DEBUG_LIB_CHANGES )
	fprintf(stderr,"Prepending %s to be linker path\n", libpath);
sprintf(tmpbuf, "-L%s", libpath);
argvaddstring(libpaths,strdup(tmpbuf));
if( lsbcc_debug&DEBUG_LIB_CHANGES )
	fprintf(stderr,"Prepending %s to the linker path\n",gccbasedir);
argvadd(libpaths,"L",gccbasedir);

userlibs=argvinit();

syslibs=argvinit();
/* these need to go after user-specified library paths */
#if defined(__powerpc64__)
	argvaddstring(syslibs,"-L/opt/cross/powerpc64-linux/lib");
#else
	argvaddstring(syslibs,"-L/lib");
	argvaddstring(syslibs,"-L/usr/lib");
#endif

if( lsbccmode == LSBCPLUS ) {
	if( lsbcc_debug&DEBUG_LIB_CHANGES )
		fprintf(stderr,"Appending -lstdc++ -lm -lgcc_s to the library list\n");
	argvaddstring(syslibs,"-Wl,-Bstatic");
	argvaddstring(syslibs,"-lstdc++");
	argvaddstring(syslibs,"-Wl,-Bdynamic");
	argvaddstring(syslibs,"-lgcc_s");
}
argvaddstring(syslibs,"-lgcc");
if( lsbcc_debug&DEBUG_LIB_CHANGES )
	fprintf(stderr,"Appending -lgcc -lc -lc_nonshared -lgcc to the library list\n");
argvaddstring(syslibs,"-lm");
argvaddstring(syslibs,"-lc");
argvaddstring(syslibs,"-lc_nonshared");
if( lsbccmode == LSBCPLUS ) {
	argvaddstring(syslibs,"-lgcc_s");
}
argvaddstring(syslibs,"-lgcc");

gccargs=argvinit();
if( lsbccmode == LSBCPLUS ) {
	argvaddstring(gccargs,cxxname);
} else {
	argvaddstring(gccargs,ccname);
}

/* Process the options passed in */
opterr=0;

while((c=getopt_long_only(argc,argv,optstr,long_options, &option_index))>=0 ) {
	switch(c) {
	case 0:
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS ) {
			fprintf(stderr,"option: -%s",
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
			}
		break;
	case 'E':
	case 'c':
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -%c\n", c);
		argvreset(proginterp);
		argvreset(syslibs);
		argvaddstring(options,argv[optind-1]);
		break;
	case 'o':
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -o %s\n", optarg );
		argvadd(target,"o",optarg);
		break;
	case 'I':
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -I %s\n", optarg );
		argvadd(incpaths,"I",optarg);
		break;
	case 'l':
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: - %s\n", optarg );
		process_opt_l(optarg);
		break;
	case 'L':
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -L %s\n", optarg );
		argvadd(libpaths,"L",optarg);
		break;
	case 'W':
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: -W %s\n", optarg );
		argvaddstring(userlibs,argv[optind-1]);
		break;
	case 's':
		/*
		 * We must explicitly recognize '-s' to distinguish it
		 * from '-shared'. We just fall through and treat it like
		 * any other option.
		 */
	case '?':
		/*
		 * This is an attempt to catch things that we don't
		 * explicitely recognize, and just pass it through to gcc.
		 */
		if( lsbcc_debug&DEBUG_RECOGNIZED_ARGS )
			fprintf(stderr,"option: %s\n", argv[optind-1] );
		argvaddstring(options,argv[optind-1]);
		break;
	default:
		/* We shouldn't get here */
		printf("unhandled option %c", c );
		if( optarg )
			printf (" with arg %s", optarg);
		printf("\n");
	}
}
/* Gather together the non-options arguments */
if (optind < argc) {
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


/* Assemble all of the groups into one to pass to gcc */

argvappend(gccargs,target);

/*
 * The lsb/include directory needs to come after application supplied paths,
 * but before the default /usr/include path.
 * This does make the assumption that application builds are well behaved
 * and don't pass in -I/usr/include themselves.
 */
if( lsbcc_debug&DEBUG_INCLUDE_CHANGES )
	fprintf(stderr,"Prepending %s to include path\n", incpath);
sprintf(tmpbuf, "-I%s", incpath);
argvaddstring(incpaths,strdup(tmpbuf));
argvappend(gccargs,incpaths);

argvappend(gccargs,options);
argvappend(gccargs,libpaths);
argvappend(gccargs,userlibs);
argvappend(gccargs,proginterp);
argvappend(gccargs,syslibs);

/* ensure argument list is null terminated */
gccargs->argv[gccargs->numargv] = NULL;

if( lsbcc_debug&DEBUG_MODIFIED_ARGS )
	argvdump(gccargs);

/* exec to gcc */

if( lsbccmode == LSBCPLUS ) {
	execvp(cxxname,gccargs->argv);
} else {
	execvp(ccname,gccargs->argv);
}
}
