#ifndef _ICONV_H_
#define _ICONV_H_

#include <stddef.h>




/* Identifier for conversion method from one codeset to another*/


typedef void *iconv_t;


extern size_t iconv (iconv_t, char **, size_t *, char **, size_t *);
extern int iconv_close (iconv_t);
extern iconv_t iconv_open (char *, char *);
#endif
