#ifndef _INTTYPES_H_
#define _INTTYPES_H_

#include <stdlib.h>
#include <stddef.h>


typedef lldiv_t imaxdiv_t;

typedef long long intmax_t;

typedef unsigned long long uintmax_t;


intmax_t strtoimax (char *, char **, int);
uintmax_t strtoumax (char *, char **, int);
intmax_t wcstoimax (wchar_t *, wchar_t * *, int);
uintmax_t wcstoumax (wchar_t *, wchar_t * *, int);
intmax_t imaxabs (intmax_t);
imaxdiv_t imaxdiv (intmax_t, intmax_t);
#endif
