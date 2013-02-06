#if (__LSB_VERSION__ >= 10 )
#ifndef _SCHED_H_
#define _SCHED_H_

#include <sys/types.h>
#include <time.h>
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
#define __CPU_ALLOC_SIZE(count)	((((count) + __NCPUBITS - 1) / __NCPUBITS) * 8)
#define __CPUELT(cpu)	((cpu) / __NCPUBITS)
#define __CPUMASK(cpu)	((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define __NCPUBITS	(8 * sizeof (__cpu_mask))
#define __CPU_SETSIZE	1024
#define __CPU_OP_S(setsize, destset, srcset1, srcset2, op) 	\
  (__extension__\
   ({ cpu_set_t *__dest = (destset); \
     cpu_set_t *__arr1 = (srcset1); \
     cpu_set_t *__arr2 = (srcset2); \
     size_t __imax = (setsize) / sizeof (__cpu_mask); \
     size_t __i; \
     for (__i = 0; __i < __imax; ++__i)\
       __dest->__bits[__i] = __arr1->__bits[__i] op __arr2->__bits[__i]; \
 __dest; }))
#define __CPU_SET_S(cpu, setsize, cpusetp)	\
  (__extension__\
   ({ size_t __cpu = (cpu); \
     __cpu < 8 * (setsize) \
     ? ((cpusetp)->__bits[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define __CPU_ISSET_S(cpu, setsize, cpusetp)	\
  (__extension__\
   ({ size_t __cpu = (cpu); \
     __cpu < 8 * (setsize)\
     ? (((cpusetp)->__bits[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 \
 : 0; }))
#define __CPU_CLR_S(cpu, setsize, cpusetp)	\
  (__extension__\
   ({ size_t __cpu = (cpu); \
     __cpu < 8 * (setsize)\
     ? ((cpusetp)->__bits[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define __CPU_ZERO_S(setsize, cpusetp)	\
  do {\
    size_t __i; \
    size_t __imax = (setsize) / sizeof (__cpu_mask); \
    cpu_set_t *__arr = (cpusetp); \
    for (__i = 0; __i < __imax; ++__i)\
       __arr->__bits[__i] = 0; \
  } while (0)
#define CPU_ALLOC_SIZE(count)	__CPU_ALLOC_SIZE (count)
#define CPU_CLR(cpu, cpusetp)	__CPU_CLR_S (cpu, sizeof (cpu_set_t), cpusetp)
#define CPU_ISSET(cpu, cpusetp)	__CPU_ISSET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define CPU_AND_S(setsize, destset, srcset1, srcset2)	__CPU_OP_S (setsize, destset, srcset1, srcset2, &)
#define CPU_XOR_S(setsize, destset, srcset1, srcset2)	__CPU_OP_S (setsize, destset, srcset1, srcset2, ^)
#define CPU_OR_S(setsize, destset, srcset1, srcset2)	__CPU_OP_S (setsize, destset, srcset1, srcset2, |)
#define CPU_AND(destset, srcset1, srcset2)	__CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, &)
#define CPU_XOR(destset, srcset1, srcset2)	__CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, ^)
#define CPU_OR(destset, srcset1, srcset2)	__CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, |)
#define CPU_SETSIZE	__CPU_SETSIZE
#define CPU_SET(cpu, cpusetp)	__CPU_SET_S (cpu, sizeof (cpu_set_t), cpusetp)
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
