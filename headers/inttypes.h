#ifndef _INTTYPES_H_
#define _INTTYPES_H_

#include <stdlib.h>
#include <stddef.h>




/* Basic Integral Types*/


typedef lldiv_t imaxdiv_t;

typedef long long intmax_t;

typedef unsigned long long uintmax_t;

typedef unsigned int u_int;

typedef unsigned int *uintptr_t;

typedef long long uint64_t;


extern intmax_t strtoimax (char *, char **, int);
extern uintmax_t strtoumax (char *, char **, int);
extern intmax_t wcstoimax (wchar_t *, wchar_t * *, int);
extern uintmax_t wcstoumax (wchar_t *, wchar_t * *, int);
extern intmax_t imaxabs (intmax_t);
extern imaxdiv_t imaxdiv (intmax_t, intmax_t);
#endif
