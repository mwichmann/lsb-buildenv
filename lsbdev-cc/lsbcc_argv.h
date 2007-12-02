#ifndef LSBCC_ARGV_H
#define LSBCC_ARGV_H

/*
 * Copyright (C) 2002-2007 Linux Foundation
 *
 * 2002/05/09 Stuart Anderson, Free Standards Group
 *
 */

struct argvgroup {
    int numargv;
    int maxargv;
    char **argv;
};

#define ARGVCHUNKSIZE	100

struct argvgroup *argvinit(void);

void argvreset(struct argvgroup *ag);

/*
 * argvaddstring is used to add a string that already begins with '-' to
 * an argvgroup. It will allocate more space if the argvgroup is nearly full.
 */
void argvaddstring(struct argvgroup *ag, char *str);

/*
 * argvadd is used to rebuild the option string so that it starts with a '-',
 * and then add it and possibly an argument to the argvgroup.
 */
void argvadd(struct argvgroup *ag, const char *opt, char *val);

void argvappend(struct argvgroup *to, struct argvgroup *from);

void argvdump(struct argvgroup *ag);

void argvprint(struct argvgroup *ag);

/* end lsbcc.h */
#endif
