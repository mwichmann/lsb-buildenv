#ifndef _UTIME_H_
#define _UTIME_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C"
{
#endif




  struct utimbuf
  {
    time_t actime;
    time_t modtime;
  }
   ;


  extern int utime (const char *, struct utimbuf *const);
#ifdef __cplusplus
}
#endif
#endif
