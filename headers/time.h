#ifndef _TIME_H_
#define _TIME_H_

#include <sys/time.h>
#include <sys/types.h>

#define CLOCK_REALTIME	0
#define TIMER_ABSTIME	1
#define CLOCKS_PER_SEC	1000000l





typedef long __clock_t;














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
int clock_getres (void);
int clock_gettime (void);
int clock_settime (void);
#endif
