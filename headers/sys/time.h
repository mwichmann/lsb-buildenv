#ifndef _SYS_TIME_H_
#define _SYS_TIME_H_

#include <sys/types.h>

#define ITIMER_REAL	0
#define ITIMER_VIRTUAL	1
#define ITIMER_PROF	2


struct timezone
{
  int tz_minuteswest;
  int tz_dsttime;
}
 ;





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


/* Type of the second argument to `getitimer' and
the second and third arguments `setitimer'.*/


struct itimerval
{
  struct timeval it_interval;
  struct timeval it_value;
}
 ;

struct itimerspec
{
  struct timespec it_interval;
  struct timespec it_value;
}
 ;


int getitimer (int, struct itimerval *);
int setitimer (int, struct itimerval *, struct itimerval *);
int adjtime (struct timeval *, struct timeval *);
int gettimeofday (struct timeval *, struct timezone *);
int timer_create (void);
int timer_delete (void);
int timer_getoverrun (void);
int timer_gettime (void);
int timer_settime (void);
#endif
