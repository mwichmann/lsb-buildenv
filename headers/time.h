

typedef __clock_t clock_t;

typedef long __clock_t;


typedef __time_t time_t;


struct timespec
{
  long tv_sec;
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
  long __tm_gmtoff;
  char *__tm_zone;
}
 ;

char *asctime (struct tm *);
clock_t clock (void);
char *ctime (time_t *);
double difftime (time_t, time_t);
struct tm *getdate (char *);
int getdate_err;
struct tm *gmtime (time_t *);
struct tm *localtime (time_t *);
time_t mktime (struct tm *);
size_t strftime (char *, size_t, char *, struct tm *);
char *strptime (char *, char *, struct tm *);
time_t time (time_t *);
int nanosleep (struct timespec *, struct timespec *);
long timezone;
void tzset (void);
