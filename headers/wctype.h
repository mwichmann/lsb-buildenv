#ifndef _WCTYPE_H_
#define _WCTYPE_H_

#include <sys/types.h>

typedef unsigned long wctype_t;

typedef __int32_t *wctrans_t;


wctrans_t wctrans (char *);
wctype_t wctype (char *);
#endif
