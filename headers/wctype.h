#ifndef _WCTYPE_H_
#define _WCTYPE_H_

#include <stddef.h>



typedef unsigned long wctype_t;

typedef int wctrans_t;


wctrans_t wctrans (char *);
int iswalnum (wint_t);
wctype_t wctype (char *);
#endif
