/*
 * Copyright (C) 2002-2007 Linux Foundation
 *
 * 2002/05/09 Stuart Anderson, Free Standards Group
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

#include "lsbcc_argv.h"

/* begin argv ADT */
/*
 * Create an abstract data type to maintain the options that are collected
 * into groups, and then put together to pass to gcc.
 */
struct argvgroup *argvinit(void)
{
    struct argvgroup *ag;

    if ((ag = (struct argvgroup *) malloc(sizeof(struct argvgroup))) == NULL) {
	fprintf(stderr, "Unable to allocate memory for a new argvgroup\n");
	exit(2);
    }

    if ((ag->argv = (char **)malloc(sizeof(char *) * ARGVCHUNKSIZE)) == NULL) {
	fprintf(stderr, "Unable to allocate memory for a argv items\n");
	exit(2);
    }
    ag->numargv = 0;
    ag->maxargv = ARGVCHUNKSIZE;

    return ag;
}

void argvreset(struct argvgroup *ag)
{
    ag->numargv = 0;
}

/*
 * argvaddstring is used to add a string that already begins with '-' to
 * an argvgroup. It will allocate more space if the argvgroup is nearly full.
 */
void argvaddstring(struct argvgroup *ag, char *str)
{
    if (ag->numargv + 2 >= ag->maxargv) {
	/* This argvgroup is full, so get more space */
	ag->maxargv += ARGVCHUNKSIZE;
	if ((ag->argv =
	     (char **) realloc(ag->argv, sizeof(char *) * ag->maxargv))
	    == NULL) {
	    fprintf(stderr, "Unable to allocate memory for argv items\n");
	    exit(3);
	}
    }

    ag->argv[ag->numargv++] = str;
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

    if (val) {
	ag->argv[ag->numargv++] = val;
    }
}

void argvappend(struct argvgroup *to, struct argvgroup *from)
{
    int i;
    if (to->numargv + from->numargv >= to->maxargv) {
	/* This argvgroup is full, so get more space */
	to->maxargv += from->numargv;
	if ((to->argv =
	     (char **) realloc(to->argv, sizeof(char *) * to->maxargv))
	    == NULL) {
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

    for (i = 0; i < ag->numargv; i++) {
	fprintf(stderr, "%s ", ag->argv[i]);
    }
    fprintf(stderr, "\n");

}

/* end argv ADT */
