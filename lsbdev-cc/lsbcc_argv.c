/*
 * Copyright (C) 2002-2012 Linux Foundation
 *
 * Originally written 2002/05/09 Stuart Anderson, Free Standards Group
 *
 * This file is part of lsbcc.  lsbcc is free software, covered
 * under the terms of the BSD license.
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

#include "lsbcc_argv.h"

/* begin argv ADT */
/*
 * The work of lsbcc is to collect arguments from the command line
 * and transform those (with additions, changes, etc.) into one appropriate
 * for passing to the backend cc (gcc or other) to produce an LSB build.
 * This is more complicated than it looks, as a later option may affect
 * what to do with an option seen earlier.
 *
 * So arguments are collected into a number of different argument vectors, 
 * fiddled with, and eventually they're all reassembled into one argument 
 * vector. These vectors have a handle in the form of a pointer to an 
 * argvgroup, which is set up by the argvinit function.
 *
 * Note these are never deallocated, which does not indicate a memory leak:
 * the various argument strings are going to be the argument to the exec,
 * or in the case of an error, the next thing that happens is an exit.
 * So there is no argvfree() function, although one could perhaps argue
 * that once the final argv vector has been assembled, the allocated
 * argvgroup structures could be freed (TODO?)
 *
 * Longer-term note: we know the argument list has to be processed twice,
 * but a better approach might be to collect arguments into a linked list
 * where each entry can have some flags hinting at disposition, remembering
 * cases globally, then loop through again making the final vector.
 * The current approach of sorting into buckets, then concatenating them
 * back together, risks changing the order in ways that may not be correct.
 * While lots of care is taken not to do that, the approach means there
 * are lots of special cases and built-in knowledge and there are in fact
 * still known cases where we are getting it wrong (see bug 2941)
 */

/*
 * allocate an argvgroup and some space to hold pointers to arg strings.
 * the pointer space can later be expanded.
 */
struct argvgroup *argvinit(const char *name)
{
    struct argvgroup *ag;

    if ((ag = (struct argvgroup *) malloc(sizeof(struct argvgroup))) == NULL) {
	fprintf(stderr, "Unable to allocate memory for a new argvgroup\n");
	exit(2);
    }

    if ((ag->argv = (char **) malloc(sizeof(char *) * ARGVCHUNKSIZE)) == NULL) {
	fprintf(stderr, "Unable to allocate memory for argv items\n");
	exit(2);
    }
    ag->numargv = 0;
    ag->maxargv = ARGVCHUNKSIZE;
    ag->groupname = strdup(name);

    return ag;
}

void argvreset(struct argvgroup *ag)
{
    ag->numargv = 0;
}

/*
 * argvaddstring is used to add a string that needs no further processing
 * to an argvgroup.  More space is allocated if the argvgroup is nearly full.
 */
void argvaddstring(struct argvgroup *ag, char *str)
{
    if (ag->numargv + 2 >= ag->maxargv) {
	/* This argvgroup is full, so get more space */
	ag->maxargv += ARGVCHUNKSIZE;
	if ((ag->argv =
	     (char **)realloc(ag->argv, sizeof(char *) *ag->maxargv)) == NULL) {
	    fprintf(stderr, "Unable to allocate memory for argv items\n");
	    exit(3);
	}
    }

    if (lsbcc_debug & DEBUG_LISTADDS)
	fprintf(stderr, "%s += %s\n", ag->groupname, str);
    /* don't know the persistence of the passed string, so make a copy */
    if ((ag->argv[ag->numargv++] = strdup(str)) == NULL) {
	fprintf(stderr, "Unable to allocate memory for arg string\n");
	exit(3);
    }
}

/*
 * argvadd is used to rebuild the option string so that it starts with a '-',
 * and then add it and possibly an argument to the argvgroup.
 */
void argvadd(struct argvgroup *ag, const char *opt, char *val)
{
    char *dashopt;

    if ((dashopt = (char *) malloc(strlen(opt) + 2)) == NULL) {
	fprintf(stderr, "Unable to allocate memory for an option string\n");
	exit(4);
    }

    strcpy(dashopt, "-");
    strcat(dashopt, opt);
    argvaddstring(ag, dashopt);
    free(dashopt);

    if (val)
        argvaddstring(ag, val);
}

/*
 * argvappend adds one argvgroup to end of another
 */
void argvappend(struct argvgroup *to, struct argvgroup *from)
{
    int i;

    if (to->numargv + from->numargv >= to->maxargv) {
	/* This argvgroup is full, so get more space */
	to->maxargv += from->numargv;
	if ((to->argv =
	     (char **)realloc(to->argv, sizeof(char *) *to->maxargv)) == NULL) {
	    fprintf(stderr, "Unable to allocate memory for argv items\n");
	    exit(3);
	}
    }
    for (i = 0; i < from->numargv; i++) {
	to->argv[to->numargv++] = from->argv[i];
	/* printf("appending %s\n", from->argv[i]); */
    }
}

void argvdump(struct argvgroup *ag)
{
    int i;

    for (i = 0; i < ag->numargv; i++)
	fprintf(stderr, "%3.3d: %s\n", i, ag->argv[i]);
}

void argvprint(struct argvgroup *ag)
{
    int i;

    for (i = 0; i < ag->numargv; i++)
	fprintf(stderr, "%s ", ag->argv[i]);
    fprintf(stderr, "\n");

}

/* end argv ADT */
