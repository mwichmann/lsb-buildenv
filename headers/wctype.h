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
  mbstate_t;


  extern wctrans_t wctrans (const char *);
  extern wctype_t wctype (const char *);
#ifdef __cplusplus
}
#endif
#endif
