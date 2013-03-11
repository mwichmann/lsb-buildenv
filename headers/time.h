#if (__LSB_VERSION__ >= 10 )
#ifndef _TIME_H_
#define _TIME_H_

#include <locale.h>
#include <sys/types.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define CLOCK_REALTIME	0
#define TIMER_ABSTIME	1
#define CLOCKS_PER_SEC	1000000l
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 20
#define CLK_TCK	((clock_t)sysconf(2))
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 40
#define CLOCK_MONOTONIC	1
#define CLOCK_PROCESS_CPUTIME_ID	2
#define CLOCK_THREAD_CPUTIME_ID	3
#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
#define timerclear(tvp)	((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define timerisset(tvp)	((tvp)->tv_sec || (tvp)->tv_usec)
#define timeradd(a,b,result)	\
  do { \
    (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; \
    (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; \
    if ((result)->tv_usec >= 1000000) \
      { \
        ++(result)->tv_sec; \
        (result)->tv_usec -= 1000000; \
      } \
  } while (0)
#define timersub(a,b,result)	\
  do { \
    (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; \
    (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; \
    if ((result)->tv_usec < 0) { \
      --(result)->tv_sec; \
      (result)->tv_usec += 1000000; \
    } \
  } while (0)
#define timercmp(a,b,CMP)	\
 (((a)->tv_sec == (b)->tv_sec) ? \
  ((a)->tv_usec CMP (b)->tv_usec) : \
  ((a)->tv_sec CMP (b)->tv_sec))
#endif				/* __LSB_VERSION__ >= 4.1 */






/* Returned by `time'*/
#if __LSB_VERSION__ >= 12
    struct tm {
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
	long int tm_gmtoff;
	char *tm_zone;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    struct timespec {
	time_t tv_sec;
	long int tv_nsec;
    };

#include <signal.h>
#endif				/* __LSB_VERSION__ >= 1.2 */


/* Used by other time functions.*/
#if __LSB_VERSION__ >= 12
    struct itimerspec {
	struct timespec it_interval;
	struct timespec it_value;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern char *asctime(const struct tm *__tp);
    extern clock_t clock(void);
    extern char *ctime(const time_t * __timer);
    extern int daylight;
    extern double difftime(time_t __time1, time_t __time0);
    extern struct tm *getdate(const char *__string);
    extern int getdate_err;
    extern struct tm *gmtime(const time_t * __timer);
    extern struct tm *localtime(const time_t * __timer);
    extern time_t mktime(struct tm *__tp);
    extern int nanosleep(const struct timespec *__requested_time,
			 struct timespec *__remaining);
    extern int stime(const time_t * __when);
    extern size_t strftime(char *__s, size_t __maxsize,
			   const char *__format, const struct tm *__tp);
    extern char *strptime(const char *__s, const char *__fmt,
			  struct tm *__tp);
    extern time_t time(time_t * __timer);
    extern long int timezone;
    extern char *tzname[2];
    extern void tzset(void);
#if __LSB_VERSION__ >= 11
    extern int __daylight;
    extern long int __timezone;
    extern char *__tzname[2];
    extern char *asctime_r(const struct tm *__tp, char *__buf);
    extern char *ctime_r(const time_t * __timer, char *__buf);
    extern struct tm *gmtime_r(const time_t * __timer, struct tm *__tp);
    extern struct tm *localtime_r(const time_t * __timer, struct tm *__tp);
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 30
    extern int clock_getcpuclockid(pid_t __pid, clockid_t * __clock_id);
    extern int clock_getres(clockid_t __clock_id, struct timespec *__res);
    extern int clock_gettime(clockid_t __clock_id, struct timespec *__tp);
    extern int clock_nanosleep(clockid_t __clock_id, int __flags,
			       const struct timespec *__req,
			       struct timespec *__rem);
    extern int clock_settime(clockid_t __clock_id,
			     const struct timespec *__tp);
    extern int timer_create(clockid_t __clock_id, struct sigevent *__evp,
			    timer_t * __timerid);
    extern int timer_delete(timer_t __timerid);
    extern int timer_getoverrun(timer_t __timerid);
    extern int timer_gettime(timer_t __timerid,
			     struct itimerspec *__value);
    extern int timer_settime(timer_t __timerid, int __flags,
			     const struct itimerspec *__value,
			     struct itimerspec *__ovalue);
#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 50
    extern size_t strftime_l(char *s, size_t maxsize, const char *format,
			     const struct tm *timeptr, locale_t locale);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
