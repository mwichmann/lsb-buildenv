#ifndef _SYS_RESOURCE_H_
#define _SYS_RESOURCE_H_


#define RLIM_INFINITY	(~0UL)
#define RLIM_SAVED_CUR	-1
#define RLIM_SAVED_MAX	-1
#define RLIMIT_CPU	0
#define RLIMIT_FSIZE	1
#define RLIMIT_DATA	2
#define RLIMIT_STACK	3
#define RLIMIT_CORE	4
#define RLIMIT_NOFILE	7
#define RLIMIT_AS	9


struct rusage;

typedef unsigned long rlim_t;


int getpriority (,, int);
int getrlimit64 (,, struct rlimit64 *);
int setpriority (,, int, int);
int setrlimit (,, struct rlimit *);
int getrlimit (,, struct rlimit *);
int getrusage (,, struct rusage *);
#endif
