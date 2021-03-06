#if (__LSB_VERSION__ >= 11 )
#ifndef _SYS_TIME_H_
#define _SYS_TIME_H_

#include <sys/types.h>
#include <sys/select.h>
#include <stdint.h>
#include <lsb/time.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ITIMER_REAL	0
#define ITIMER_VIRTUAL	1
#define ITIMER_PROF	2


#if __LSB_VERSION__ >= 12
    struct timezone {
	int tz_minuteswest;
	int tz_dsttime;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */



/* Values for the first argument to `getitimer' and `setitimer'.*/
#if __LSB_VERSION__ >= 20
    typedef int __itimer_which_t;

#endif				/* __LSB_VERSION__ >= 2.0 */


/* POSIX.1b structure for a time value.*/



/* Type of the second argument to `getitimer' and
the second and third arguments `setitimer'.*/
    struct itimerval {
	struct timeval it_interval;
	struct timeval it_value;
    };


/* Function prototypes */

    extern int adjtime(const struct timeval *__delta,
		       struct timeval *__olddelta);
    extern int getitimer(__itimer_which_t __which,
			 struct itimerval *__value);
    extern int gettimeofday(struct timeval *__tv, struct timezone *__tz);
    extern int setitimer(__itimer_which_t __which,
			 const struct itimerval *__new,
			 struct itimerval *__old);
    extern int utimes(const char *__file, const struct timeval *__tvp);
#if __LSB_VERSION__ >= 50
    extern int futimes(int fd, const struct timeval tv[2]);
    extern int lutimes(const char *filename, const struct timeval tv[2]);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
