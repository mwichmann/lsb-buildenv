#ifndef _SYS_RESOURCE_H_
#define _SYS_RESOURCE_H_



int getpriority (,, int);
int getrlimit64 (,, struct rlimit64 *);
int setpriority (,, int, int);
int setrlimit (,, struct rlimit *);
int getrlimit (,, struct rlimit *);
int getrusage (,, struct rusage *);
#endif
