#ifndef _WCTYPE_H_
#define _WCTYPE_H_




typedef unsigned long wctype_t;

typedef unsigned int wint_t;

typedef int wctrans_t;


extern wctrans_t wctrans (char *);
extern int iswalnum (wint_t);
extern wctype_t wctype (char *);
#endif
