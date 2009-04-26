#if (__LSB_VERSION__ >= 10 )
#ifndef _ICONV_H_
#define _ICONV_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Identifier for conversion method from one codeset to another*/
    typedef void *iconv_t;


/* Function prototypes */

    extern size_t iconv(iconv_t __cd, char **__inbuf,
			size_t * __inbytesleft, char **__outbuf,
			size_t * __outbytesleft);
    extern int iconv_close(iconv_t __cd);
    extern iconv_t iconv_open(const char *__tocode,
			      const char *__fromcode);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
