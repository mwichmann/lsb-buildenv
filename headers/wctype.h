#ifndef _WCTYPE_H_
#define _WCTYPE_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C"
{
#endif




  typedef unsigned long wctype_t;

  typedef unsigned int wint_t;

  typedef const int32_t *wctrans_t;

  typedef struct
  {
    int count;
    wint_t value;
  }
  __mbstate_t;


/* This really belongs in wchar.h, but it's presense creates a circular dependency with stdio.h, so put it here to break the circle.*/


  typedef __mbstate_t mbstate_t;


  extern wctrans_t wctrans (const char *);
  extern wctype_t wctype (const char *);
#ifdef __cplusplus
}
#endif
#endif
