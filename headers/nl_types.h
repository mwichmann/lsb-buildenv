#ifndef _NL_TYPES_H_
#define _NL_TYPES_H_


#define NL_SETD	1
#define NL_CAT_LOCALE	1



/* Message catalog descriptor type*/


typedef void *nl_catd;


/* Type used by `nl_langinfo'*/


typedef int nl_item;


extern int catclose (nl_catd);
extern char *catgets (nl_catd, int, int, char *);
extern nl_catd catopen (char *, int);
#endif
