#ifndef _TIME_H_
#define _TIME_H_

#include <sys/time.h>
#include <sys/types.h>


typedef long __clock_t;


typedef __clock_t clock_t;





char *asctime (struct tm *);
clock_t clock (void);
char *ctime (time_t *);
double difftime (time_t, time_t);
struct tm *getdate (char *);
int getdate_err;
time_t mktime (struct tm *);
size_t strftime (char *, size_t, char *, struct tm *);
char *strptime (char *, char *, struct tm *);
time_t time (time_t *);
int nanosleep (struct timespec *, struct timespec *);
long timezone;
void tzset (void);
#endif
