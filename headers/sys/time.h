#ifndef _SYS_TIME_H_
#define _SYS_TIME_H_

#include <sys/types.h>

struct timezone
{
  int tz_minuteswest;
  int tz_dsttime;
}
 ;

#define ITIMER_REAL	0
#define ITIMER_VIRTUAL	1
#define ITIMER_PROF	2


enum __itimer_which;

typedef int __itimer_which_t;


struct timespec
{
  time_t tv_sec;
  long tv_nsec;
}
 ;


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long tm_gmtoff;
  char *tm_zone;
}
 ;


struct timeval
{
  time_t tv_sec;
  suseconds_t tv_usec;
}
 ;


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


struct tm *gmtime (time_t *);
struct tm *localtime (time_t *);
int getitimer (int, struct itimerval *);
int setitimer (int, struct itimerval *, struct itimerval *);
int adjtime (struct timeval *, struct timeval *);
int gettimeofday (struct timeval *, struct timezone *);
struct tm *gmtime_r (time_t *, struct tm *);
struct tm *localtime_r (time_t *, struct tm *);
int timer_create (void);
int timer_delete (void);
int timer_getoverrun (void);
int timer_gettime (void);
#endif
