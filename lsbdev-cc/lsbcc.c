/*
 * (C) Copyright 2002 The Free Standards Group Inc
 *
 * 2002/03/19 Chris Yeoh, IBM
 *
 */
/*
 * This is the lsbcc tool. It is used to build LSB conforming applications.
 * LSB conforming applications can be built without this tool, but using
 * lsbcc make it easier to get everything right. This is a re-implementation
 * of the original shell script.
 * 
 * The basic premise is this: The LSB development environment provides
 * a set of headers and libraries nominaly found in /usr/lsb/includes and
 * /usr/lsb/libs respectively. These headers and libraries have been carefully
 * built so that they contain only the interfaces provided by the LSB. One
 * item to note is that an LSB conforming application must use ld-lsb.so.1
 * as the program intepreter.   
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
 * were getting stripped off, os what got passed to gcc was a buch on invalid
 * options.
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
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
argvadd(struct argvgroup *ag, char *opt, char *val)
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
	fprintf(stdout,"%3.3d: %s\n",i,ag->argv[i]);
}
/* end argv ADT */

/* begin option processing routines */

/*
 * Some options require a little bit of additional processing, so we have
 * a few routines here that are used to to the special processing.
 */

void
process_opt_D(char *opt, char *val)
{
}

void
process_opt_L(char *opt, char *val)
{
}

void
process_opt_W(char *opt, char *val)
{
}

/* end option processing routines */

/* begin utility functions */

/* We need to figure out what the path to the gcc base directory is */
char *gccbasedir;
void
find_gcc_base_dir()
{
/* XXXSTU
 * Hard code this for now, but make it dynamic by using 
 * popen("gcc -print-libgcc-file-name");
 */
gccbasedir="/usr/lib/gcc-lib/i386-linux/2.95.4";
}
/* end utility functions */

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

/*
 * These are the otpions we need to recognize.
 */
char *optstr="cl:o:EI:";

/*
 * gcc has a lot of options that are more than one character long. We'll treat
 * them as long options, but use the "_only" form of getopt so that they will
 * be recognized even though that all are indicated by a single '-'.
 */

struct option long_options[] = {
/*
	{"pedantic",no_argument,0,0},
	{"shared",no_argument,0,0},
*/
	{NULL,0,0,0}
	};

main(int argc, char *argv[])
{
int	c;
int	option_index;

find_gcc_base_dir();

/* Initialize the argv groups */
proginterp=argvinit();
argvaddstring(proginterp,"-Wl,--dynamic-linker=/lib/ld-lsb.so.1");

target=argvinit();
options=argvinit();

incpaths=argvinit();

libpaths=argvinit();
argvaddstring(libpaths,"-nodefaultlibs");
argvadd(libpaths,"L",gccbasedir);
argvaddstring(libpaths,"-L/usr/lsb/lib");
argvaddstring(libpaths,"-L/lib");
argvaddstring(libpaths,"-L/usr/lib");

userlibs=argvinit();

syslibs=argvinit();
argvaddstring(syslibs,"-lc");
argvaddstring(syslibs,"/usr/lib/libc.a");
argvaddstring(syslibs,"/usr/lib/libc_nonshared.a");

gccargs=argvinit();
argvaddstring(gccargs,"cc");

/* Process the options passed in */
opterr=0;

while((c=getopt_long_only(argc,argv,optstr,long_options, &option_index))>=0 ) {
	switch(c) {
	case 0:
		printf("option %s",long_options[option_index].name);
		if( optarg ) {
			printf (" with arg %s", optarg);
			}
		printf("\n");
		argvadd(options,long_options[option_index].name,optarg);
		break;
	case 'E':
	case 'c':
		argvreset(proginterp);
		argvreset(syslibs);
		argvaddstring(options,argv[optind-1]);
		break;
	case 'o':
		argvadd(target,"o",optarg);
		break;
	case 'I':
		argvadd(incpaths,"I",optarg);
		break;
	case '?':
		/*
		 * This is an attempt to catch things that we don't
		 * explicitely recognize, and just pass it through to gcc.
		 */
/*
		printf("adding option %s", argv[optind-1] );
*/
		argvaddstring(options,argv[optind-1]);
/*
		if( optarg )
			printf (" with arg %s", optarg);
		printf("\n");
*/
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
/*
	printf ("non-option ARGV-elements: ");
*/
	while (optind < argc) {
/*
		printf ("%s ", argv[optind]);
*/
		argvaddstring(options,argv[optind++]);
		}
	printf ("\n");
	}


/* Assemble all of the groups into one to pass to gcc */

argvappend(gccargs,target);

/*
 * The lsb/include directory needs to come after application supplied paths,
 * but before the default /usr/include path.
 * This does make the assumption that application builds are well behaved
 * and don't pass in -I/usr/include themselves.
 */
argvaddstring(incpaths,"-I/usr/lsb/include");
argvappend(gccargs,incpaths);

argvappend(gccargs,libpaths);
argvappend(gccargs,options);
argvappend(gccargs,proginterp);
argvappend(gccargs,syslibs);
/*
argvdump(gccargs);
*/

/* exec to gcc */

execvp("cc",gccargs->argv);
}
