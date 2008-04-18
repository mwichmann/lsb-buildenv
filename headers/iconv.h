#if (__LSB_VERSION__ >= 10 )
#ifndef _ICONV_H_
#define _ICONV_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Identifier for conversion method from one codeset to another*/
#if __LSB_VERSION__ >= 10
    typedef void *iconv_t;

#endif				// __LSB_VERSION__ >= 1.0


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern size_t iconv(iconv_t, char **, size_t *, char **, size_t *);
    extern int iconv_close(iconv_t);
    extern iconv_t iconv_open(const char *, const char *);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
