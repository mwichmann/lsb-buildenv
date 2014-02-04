#ifndef LSBCC_ARGV_H
#define LSBCC_ARGV_H

/*
 * Copyright (C) 2002-2012 Linux Foundation
 *
 * Originally written 2002/05/09 Stuart Anderson, Free Standards Group
 *
 * This file is part of lsbcc.  lsbcc is free software, covered
 * under the terms of the BSD license.
 */

struct argvgroup {
    int numargv;
    int maxargv;
    char **argv;
    char *groupname;	/* for debugging */
};

#define ARGVCHUNKSIZE	100

struct argvgroup *argvinit(const char *name);

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

/*
 * Debugging interface: Set the environment variable LSBCC_DEBUG to a value
 * that corresponds to the bits defined below.
 * These flags are shared between lsbcc and lsbcpp so moved here
 */
#define DEBUG_ENV_OVERRIDES	0x0001
#define DEBUG_ARGUMENTS		0x0002
#define DEBUG_RECOGNIZED_ARGS	0x0004
#define DEBUG_UNRECOGNIZED_ARGS	0x0008
#define DEBUG_INCLUDE_CHANGES	0x0010
#define DEBUG_LIB_CHANGES	0x0020
#define DEBUG_MODIFIED_ARGS	0x0040
#define DEBUG_LISTADDS		0x0080

#define WARN_LIB_CHANGES	0x0001

extern int lsbcc_debug;
#endif
