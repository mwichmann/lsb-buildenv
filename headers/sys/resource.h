#ifndef _SYS_RESOURCE_H_
#define _SYS_RESOURCE_H_

#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define RUSAGE_CHILDREN	(-1)
#define RUSAGE_BOTH	(-2)
#define RLIM_INFINITY	(~0UL)
#define RLIM_SAVED_CUR	-1
#define RLIM_SAVED_MAX	-1
#define RLIMIT_CPU	0
#define RUSAGE_SELF	0
#define RLIMIT_FSIZE	1
#define RLIMIT_LOCKS	10
#define RLIM_NLIMITS	11
#define RLIMIT_DATA	2
#define RLIMIT_STACK	3
#define RLIMIT_CORE	4
#define RLIMIT_RSS	5
#define RLIMIT_NPROC	6
#define RLIMIT_NOFILE	7
#define RLIMIT_MEMLOCK	8
#define RLIMIT_AS	9





  typedef unsigned long rlim_t;

  typedef unsigned long long rlim64_t;

  typedef int __rlimit_resource_t;




  struct rlimit
  {
    rlim_t rlim_cur;		/* The current (soft) limit. */
    rlim_t rlim_max;		/* The hard limit. */
  }
   ;

  struct rlimit64
  {
    rlim64_t rlim_cur;		/* The current (soft) limit. */
    rlim64_t rlim_max;		/* The hard limit. */
  }
   ;




  struct rusage
  {
    struct timeval ru_utime;	/* Total amount of user time used. */
    struct timeval ru_stime;	/* Total amount of system time used. */
    long ru_maxrss;		/* Maximum resident set size (in kilobytes). */
    long ru_ixrss;		/* Amount of sharing of text segment memory        with other p */
    long ru_idrss;		/* Amount of data segment memory used (kilobyte-seconds). */
    long ru_isrss;		/* Amount of stack memory used (kilobyte-seconds). */
    long ru_minflt;		/* Number of soft page faults (i.e. those serviced by reclaimin */
    long ru_majflt;		/* Number of hard page faults (i.e. those that required I/O). */
    long ru_nswap;		/* Number of times a process was swapped out of physical memory */
    long ru_inblock;		/* Number of input operations via the file system.  Note: This */
    long ru_oublock;		/* Number of output operations via the file system. */
    long ru_msgsnd;		/* Number of IPC messages sent. */
    long ru_msgrcv;		/* Number of IPC messages received. */
    long ru_nsignals;		/* Number of signals delivered. */
    long ru_nvcsw;		/* Number of voluntary context switches, i.e. because the proce */
    long ru_nivcsw;		/* Number of involuntary context switches, i.e. a higher priori */
  }
   ;


/* Priority limits.*/



/* The type of the WHICH argument to `getpriority' and `setpriority',
indicating what flavor of entity the WHO argument specifies.*/


  enum __priority_which
  {
    PRIO_PROCESS = 0,		/* WHO is a process ID. */
    PRIO_PGRP = 1,		/* WHO is a process group ID. */
    PRIO_USER = 2		/* WHO is a user ID. */
  }
   ;


#define PRIO_PGRP	PRIO_PGRP
#define PRIO_PROCESS	PRIO_PROCESS
#define PRIO_USER	PRIO_USER


  typedef enum __priority_which __priority_which_t;


  extern int getpriority (__priority_which_t, id_t);
  extern int getrlimit64 (id_t, struct rlimit64 *);
  extern int setpriority (__priority_which_t, id_t, int);
  extern int setrlimit (__rlimit_resource_t, const struct rlimit *);
  extern int setrlimit64 (__rlimit_resource_t, const struct rlimit64 *);
  extern int getrlimit (__rlimit_resource_t, struct rlimit *);
  extern int getrusage (int, struct rusage *);
#ifdef __cplusplus
}
#endif
#endif
