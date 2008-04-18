#if (__LSB_VERSION__ >= 10 )
#ifndef _SCHED_H_
#define _SCHED_H_

#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define SCHED_OTHER	0
#define SCHED_FIFO	1
#define SCHED_RR	2
#endif				// __LSB_VERSION__ >= 1.2



#if __LSB_VERSION__ >= 12
    struct sched_param {
	int sched_priority;
    };

#endif				// __LSB_VERSION__ >= 1.2


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int sched_get_priority_max(int);
    extern int sched_get_priority_min(int);
    extern int sched_getparam(pid_t, struct sched_param *);
    extern int sched_getscheduler(pid_t);
    extern int sched_rr_get_interval(pid_t, struct timespec *);
    extern int sched_setparam(pid_t, const struct sched_param *);
    extern int sched_setscheduler(pid_t, int, const struct sched_param *);
    extern int sched_yield(void);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
