#ifndef _SYS_TIMEX_H_
#define _SYS_TIMEX_H_

#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C"
{
#endif




  struct timex
  {
    unsigned int modes;
    long offset;
    long freq;
    long maxerror;
    long esterror;
    int status;
    long constant;
    long precision;
    long tolerance;
    struct timeval time;
    long tick;
    long ppsfreq;
    long jitter;
    int shift;
    long stabil;
    long jitcnt;
    long calcnt;
    long errcnt;
    long stbcnt;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
  }
   ;


  extern int adjtimex (struct timex *);
#ifdef __cplusplus
}
#endif
#endif
