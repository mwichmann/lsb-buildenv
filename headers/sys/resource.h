#ifndef _SYS_RESOURCE_H_
#define _SYS_RESOURCE_H_

#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define RLIM_INFINITY	(~0UL)
#define RLIM_SAVED_CUR	-1
#define RLIM_SAVED_MAX	-1
#define PRIO_PROCESS	0
#define RLIMIT_CPU	0
#define RUSAGE_SELF	0
#define PRIO_PGRP	1
#define RLIMIT_FSIZE	1
#define RLIM_NLIMITS	11
#define PRIO_USER	2
#define RLIMIT_DATA	2
#define RLIMIT_STACK	3
#define RLIMIT_CORE	4
#define RLIMIT_NOFILE	7
#define RLIMIT_AS	9





  typedef unsigned long rlim_t;

  typedef unsigned long long rlim64_t;




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


  extern int getpriority (int, int);
  extern int getrlimit64 (int, struct rlimit64 *);
  extern int setpriority (int, int, int);
  extern int setrlimit (int, struct rlimit *);
  extern int setrlimit64 (int, struct rlimit64 *);
  extern int getrlimit (int, struct rlimit *);
  extern int getrusage (int, struct rusage *);
#ifdef __cplusplus
}
#endif
#endif
