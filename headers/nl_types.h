#ifndef _NL_TYPES_H_
#define _NL_TYPES_H_



typedef void *nl_catd;


typedef int nl_item;


int catclose (nl_catd);
char *catgets (nl_catd, int, int, char *);
nl_catd catopen (char *, int);
#endif
