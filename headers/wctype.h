#ifndef _WCTYPE_H_
#define _WCTYPE_H_

#ifdef __cplusplus
extern "C"
{
#endif



  typedef unsigned long wctype_t;

  typedef unsigned int wint_t;

  typedef int wctrans_t;

  typedef struct
  {
    int count;
    wint_t value;
  }
  mbstate_t;


  extern wctrans_t wctrans (char *);
  extern int iswalnum (wint_t);
  extern wctype_t wctype (char *);
#ifdef __cplusplus
}
#endif
#endif
