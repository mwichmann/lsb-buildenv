#if (__LSB_VERSION__ >= 10 )
#ifndef _INTTYPES_H_
#define _INTTYPES_H_

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Basic Integral Types*/
    typedef lldiv_t imaxdiv_t;


#define __PDP_ENDIAN	3412
#define PDP_ENDIAN	__PDP_ENDIAN




/* Function prototypes */

    extern intmax_t imaxabs(intmax_t __n);
    extern imaxdiv_t imaxdiv(intmax_t __numer, intmax_t __denom);
    extern intmax_t strtoimax(const char *__nptr, char **__endptr,
			      int __base);
    extern uintmax_t strtoumax(const char *__nptr, char **__endptr,
			       int __base);
    extern intmax_t wcstoimax(const wchar_t * __nptr, wchar_t * *__endptr,
			      int __base);
    extern uintmax_t wcstoumax(const wchar_t * __nptr, wchar_t * *__endptr,
			       int __base);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
