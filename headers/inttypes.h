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






    extern intmax_t strtoimax(const char *, char **, int);
    extern uintmax_t strtoumax(const char *, char **, int);
    extern intmax_t wcstoimax(const wchar_t *, wchar_t * *, int);
    extern uintmax_t wcstoumax(const wchar_t *, wchar_t * *, int);
    extern intmax_t imaxabs(intmax_t);
    extern imaxdiv_t imaxdiv(intmax_t, intmax_t);
#ifdef __cplusplus
}
#endif
#endif
