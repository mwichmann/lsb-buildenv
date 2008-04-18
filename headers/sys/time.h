#if (__LSB_VERSION__ >= 11 )
#ifndef _SYS_TIME_H_
#define _SYS_TIME_H_

#include <sys/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define ITIMER_REAL	0
#define ITIMER_VIRTUAL	1
#define ITIMER_PROF	2
#endif				// __LSB_VERSION__ >= 1.1



#if __LSB_VERSION__ >= 12
    struct timezone {
	int tz_minuteswest;
	int tz_dsttime;
    };

#endif				// __LSB_VERSION__ >= 1.2



/* Values for the first argument to `getitimer' and `setitimer'.*/
#if __LSB_VERSION__ >= 20
    typedef int __itimer_which_t;

#endif				// __LSB_VERSION__ >= 2.0


#if __LSB_VERSION__ >= 12
    struct timespec {
	time_t tv_sec;
	long int tv_nsec;
    };

#endif				// __LSB_VERSION__ >= 1.2



#if __LSB_VERSION__ >= 12
    struct timeval {
	time_t tv_sec;
	suseconds_t tv_usec;
    };

#endif				// __LSB_VERSION__ >= 1.2


/* Type of the second argument to `getitimer' and
the second and third arguments `setitimer'.*/
#if __LSB_VERSION__ >= 11
    struct itimerval {
	struct timeval it_interval;
	struct timeval it_value;
    };

#endif				// __LSB_VERSION__ >= 1.1


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int adjtime(const struct timeval *, struct timeval *);
    extern int getitimer(__itimer_which_t, struct itimerval *);
    extern int gettimeofday(struct timeval *, struct timezone *);
    extern int setitimer(__itimer_which_t, const struct itimerval *,
			 struct itimerval *);
    extern int utimes(const char *, const struct timeval *);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
