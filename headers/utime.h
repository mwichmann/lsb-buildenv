#ifndef _UTIME_H_
#define _UTIME_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <sys/types.h>



  struct utimbuf
  {
    time_t actime;
    time_t modtime;
  }
   ;


  extern int utime (char *, struct utimbuf *);
#ifdef __cplusplus
}
#endif
#endif
