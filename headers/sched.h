#ifndef _SCHED_H_
#define _SCHED_H_

#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

struct sched_param
{
  int sched_priority;
}
 ;


int sched_get_priority_max (int);
int sched_get_priority_min (int);
int sched_getparam (pid_t, struct sched_param *);
int sched_getscheduler (pid_t);
int sched_rr_get_interval (pid_t, struct timespec *);
int sched_setparam (pid_t, struct sched_param *);
int sched_setscheduler (pid_t, int, struct sched_param *);
int sched_yield (void);
#endif
