#ifndef _ICONV_H_
#define _ICONV_H_

#include <stddef.h>
#include <sys/types.h>






typedef void *iconv_t;


size_t iconv (iconv_t, char **, size_t *, char **, size_t *);
int iconv_close (iconv_t);
iconv_t iconv_open (char *, char *);
#endif
