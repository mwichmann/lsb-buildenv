#ifndef _TIME_H_
#define _TIME_H_

#include <sys/time.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define CLOCK_REALTIME	0
#define TIMER_ABSTIME	1
#define CLOCKS_PER_SEC	1000000l


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

  struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  }
   ;





/* Returned by clock()*/



/* Returned by `time'*/



/* POSIX.1b structure for a time value.*/



/* Used by other time functions.*/



  extern int __daylight;
  extern long __timezone;
  extern char *__tzname[2];
  extern char *asctime (const struct tm *);
  extern clock_t clock (void);
  extern char *ctime (time_t *);
  extern char *ctime_r (time_t *, char *);
  extern double difftime (time_t, time_t);
  extern struct tm *getdate (char *);
  extern int getdate_err;
  extern struct tm *gmtime (const time_t *);
  extern struct tm *localtime (const time_t *);
  extern time_t mktime (struct tm *);
  extern int stime (void);
  extern size_t strftime (char *, size_t, const char *, const struct tm *);
  extern char *strptime (char *, char *, struct tm *);
  extern time_t time (time_t *);
  extern int nanosleep (struct timespec *, struct timespec *);
  extern int daylight;
  extern long timezone;
  extern char *tzname[2];
  extern void tzset (void);
  extern char *asctime_r (const struct tm *, char *);
  extern struct tm *gmtime_r (const time_t *, struct tm *);
  extern struct tm *localtime_r (const time_t *, struct tm *);
#ifdef __cplusplus
}
#endif
#endif
