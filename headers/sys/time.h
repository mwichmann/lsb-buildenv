#ifndef _SYS_TIME_H_
#define _SYS_TIME_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define ITIMER_REAL	0
#define ITIMER_VIRTUAL	1
#define ITIMER_PROF	2


  struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  }
   ;




#if __ia64__
/* IA64 */
  typedef int32_t __time32_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef int32_t __time32_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef int32_t __time32_t;

#endif

/* Values for the first argument to `getitimer' and `setitimer'.*/





  struct timespec
  {
    time_t tv_sec;
    long tv_nsec;
  }
   ;







  struct timeval
  {
    time_t tv_sec;
    suseconds_t tv_usec;
  }
   ;

#if __ia64__
/* IA64 */
  struct timeval32
  {
    __time32_t tv_sec;
    __suseconds32_t tv_usec;
  }
   ;

#endif
#if __powerpc64__
/* PPC64 */
  struct timeval32
  {
    __time32_t tv_sec;
    __suseconds32_t tv_usec;
  }
   ;

#endif

/* Type of the second argument to `getitimer' and
the second and third arguments `setitimer'.*/


  struct itimerval
  {
    struct timeval it_interval;
    struct timeval it_value;
  }
   ;

#if __x86_64__
/* x86-64 */
  struct timeval32
  {
    __time32_t tv_sec;
    __suseconds32_t tv_usec;
  }
   ;

#endif

  extern int getitimer (int, struct itimerval *);
  extern int setitimer (int, struct itimerval *, struct itimerval *);
  extern int adjtime (struct timeval *, struct timeval *);
  extern int gettimeofday (struct timeval *, struct timezone *);
  extern int utimes (char *, struct timeval *);
#ifdef __cplusplus
}
#endif
#endif
