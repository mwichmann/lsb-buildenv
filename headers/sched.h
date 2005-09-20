#ifndef _SCHED_H_
#define _SCHED_H_

#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C" {
#endif


#define SCHED_OTHER	0
#define SCHED_FIFO	1
#define SCHED_RR	2


    struct sched_param {
	int sched_priority;
    };


    extern int sched_get_priority_max(int);
    extern int sched_get_priority_min(int);
    extern int sched_getparam(pid_t, struct sched_param *);
    extern int sched_getscheduler(pid_t);
    extern int sched_rr_get_interval(pid_t, struct timespec *);
    extern int sched_setparam(pid_t, const struct sched_param *);
    extern int sched_setscheduler(pid_t, int, const struct sched_param *);
    extern int sched_yield(void);
#ifdef __cplusplus
}
#endif
#endif
