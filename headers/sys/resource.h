#if (__LSB_VERSION__ >= 10 )
#ifndef _SYS_RESOURCE_H_
#define _SYS_RESOURCE_H_

#include <sys/types.h>
#include <lsb/time.h>

#ifdef __cplusplus
extern "C" {
#endif


#define RLIM_NLIMITS	11
#if __LSB_VERSION__ >= 11
#define RLIM_INFINITY	(~0UL)
#define RLIMIT_CPU	0
#define RLIMIT_FSIZE	1
#define RLIMIT_LOCKS	10
#define RLIMIT_DATA	2
#define RLIMIT_STACK	3
#define RLIMIT_CORE	4
#define RLIMIT_RSS	5
#define RLIMIT_NPROC	6
#define RLIMIT_NOFILE	7
#define RLIMIT_MEMLOCK	8
#define RLIMIT_AS	9
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#define RLIM_SAVED_CUR	-1
#define RLIM_SAVED_MAX	-1
#define RUSAGE_SELF	0
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#define RUSAGE_CHILDREN	(-1)
#if __LSB_VERSION__ < 31
#define RUSAGE_BOTH	(-2)
#endif				/* __LSB_VERSION__ < 3.1 */

#endif				/* __LSB_VERSION__ >= 2.0 */




#if __LSB_VERSION__ >= 12
    typedef unsigned long int rlim_t;

    typedef unsigned long long int rlim64_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
    typedef int __rlimit_resource_t;

#endif				/* __LSB_VERSION__ >= 2.0 */


#if __LSB_VERSION__ >= 12
    struct rlimit {
	rlim_t rlim_cur;	/* The current (soft) limit. */
	rlim_t rlim_max;	/* The hard limit. */
    };

    struct rlimit64 {
	rlim64_t rlim_cur;	/* The current (soft) limit. */
	rlim64_t rlim_max;	/* The hard limit. */
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    struct rusage {
	struct timeval ru_utime;	/* Total amount of user time used. */
	struct timeval ru_stime;	/* Total amount of system time used. */
	long int ru_maxrss;	/* Maximum resident set size (in kilobytes). */
	long int ru_ixrss;	/* Amount of sharing of text segment memory        with other p */
	long int ru_idrss;	/* Amount of data segment memory used (kilobyte-seconds). */
	long int ru_isrss;	/* Amount of stack memory used (kilobyte-seconds). */
	long int ru_minflt;	/* Number of soft page faults (i.e. those serviced by reclaimin */
	long int ru_majflt;	/* Number of hard page faults (i.e. those that required I/O). */
	long int ru_nswap;	/* Number of times a process was swapped out of physical memory */
	long int ru_inblock;	/* Number of input operations via the file system.  Note: This */
	long int ru_oublock;	/* Number of output operations via the file system. */
	long int ru_msgsnd;	/* Number of IPC messages sent. */
	long int ru_msgrcv;	/* Number of IPC messages received. */
	long int ru_nsignals;	/* Number of signals delivered. */
	long int ru_nvcsw;	/* Number of voluntary context switches, i.e. because the proce */
	long int ru_nivcsw;	/* Number of involuntary context switches, i.e. a higher priori */
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Priority limits.*/

/* The type of the WHICH argument to `getpriority' and `setpriority',
indicating what flavor of entity the WHO argument specifies.*/
#if __LSB_VERSION__ >= 20
    enum __priority_which {
	PRIO_PROCESS = 0,	/* WHO is a process ID. */
	PRIO_PGRP = 1,		/* WHO is a process group ID. */
	PRIO_USER = 2		/* WHO is a user ID. */
    };

#endif				/* __LSB_VERSION__ >= 2.0 */


#if __LSB_VERSION__ >= 13
#define PRIO_PGRP	PRIO_PGRP
#define PRIO_PROCESS	PRIO_PROCESS
#define PRIO_USER	PRIO_USER
#endif				/* __LSB_VERSION__ >= 1.3 */



#if __LSB_VERSION__ >= 20
    typedef enum __priority_which __priority_which_t;

#endif				/* __LSB_VERSION__ >= 2.0 */


/* Function prototypes */

    extern int getpriority(__priority_which_t __which, id_t __who);
    extern int getrlimit(__rlimit_resource_t __resource,
			 struct rlimit *__rlimits);
    extern int getrlimit64(__rlimit_resource_t __resource,
			   struct rlimit64 *__rlimits);
    extern int getrusage(int __who, struct rusage *__usage);
    extern int setpriority(__priority_which_t __which, id_t __who,
			   int __prio);
    extern int setrlimit(__rlimit_resource_t __resource,
			 const struct rlimit *__rlimits);
#if __LSB_VERSION__ >= 12
    extern int setrlimit64(__rlimit_resource_t __resource,
			   const struct rlimit64 *__rlimits);
#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
