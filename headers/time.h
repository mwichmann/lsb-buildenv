#ifndef _TIME_H_
#define _TIME_H_

#include <sys/time.h>
#include <stddef.h>
#include <sys/types.h>

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
extern char **__tzname;
char *asctime (struct tm *);
clock_t clock (void);
char *ctime (time_t *);
char *ctime_r (time_t *, char *);
double difftime (time_t, time_t);
struct tm *getdate (char *);
extern int getdate_err;
struct tm *gmtime (time_t *);
struct tm *localtime (time_t *);
time_t mktime (struct tm *);
size_t strftime (char *, size_t, char *, struct tm *);
char *strptime (char *, char *, struct tm *);
time_t time (time_t *);
int nanosleep (struct timespec *, struct timespec *);
extern int daylight;
extern long timezone;
extern char *tzname;
void tzset (void);
char *asctime_r (struct tm *, char *);
struct tm *gmtime_r (time_t *, struct tm *);
struct tm *localtime_r (time_t *, struct tm *);
int clock_getres (void);
int clock_gettime (void);
int clock_settime (void);
#endif
