#ifndef _ICONV_H_
#define _ICONV_H_

#include <sys/types.h>




/* Identifier for conversion method from one codeset to another*/


typedef void *iconv_t;


size_t iconv (iconv_t, char **, size_t *, char **, size_t *);
int iconv_close (iconv_t);
iconv_t iconv_open (char *, char *);
#endif
