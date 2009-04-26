#if (__LSB_VERSION__ >= 10 )
#ifndef _SCHED_H_
#define _SCHED_H_

#include <sys/types.h>
#include <sys/time.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define SCHED_OTHER	0
#define SCHED_FIFO	1
#define SCHED_RR	2
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
#define __CPUELT(cpu)	((cpu) / __NCPUBITS)
#define __CPUMASK(cpu)	((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define __NCPUBITS	(8 * sizeof (__cpu_mask))
#define __CPU_SETSIZE	1024
#define CPU_ALLOC(count)	__CPU_ALLOC (count)
#define CPU_ALLOC_SIZE(count)	__CPU_ALLOC_SIZE (count)
#define CPU_COUNT(cpusetp)	__CPU_COUNT_S (sizeof (cpu_set_t), cpusetp)
#define CPU_FREE(cpuset)	__CPU_FREE (cpuset)
#define CPU_SETSIZE	__CPU_SETSIZE
#define CPU_ZERO(cpusetp)	__CPU_ZERO_S (sizeof (cpu_set_t), cpusetp)
#endif				/* __LSB_VERSION__ >= 4.0 */



#if __LSB_VERSION__ >= 40
    typedef unsigned long int __cpu_mask;

    typedef struct {
	__cpu_mask __bits[__CPU_SETSIZE / __NCPUBITS];
    } cpu_set_t;

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 12
    struct sched_param {
	int sched_priority;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern int sched_get_priority_max(int __algorithm);
    extern int sched_get_priority_min(int __algorithm);
    extern int sched_getparam(pid_t __pid, struct sched_param *__param);
    extern int sched_getscheduler(pid_t __pid);
    extern int sched_rr_get_interval(pid_t __pid, struct timespec *__t);
    extern int sched_setparam(pid_t __pid,
			      const struct sched_param *__param);
    extern int sched_setscheduler(pid_t __pid, int __policy,
				  const struct sched_param *__param);
    extern int sched_yield(void);
#if __LSB_VERSION__ >= 40
    extern int sched_getaffinity(pid_t __pid, size_t __cpusetsize,
				 cpu_set_t * __cpuset);
    extern int sched_setaffinity(pid_t __pid, size_t __cpusetsize,
				 const cpu_set_t * __cpuset);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
