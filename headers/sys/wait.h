#ifndef _SYS_WAIT_H_
#define _SYS_WAIT_H_

#include <sys/types.h>
#include <signal.h>

typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
}
idtype_t;


int waitid (idtype_t, __id_t, siginfo_t *, int);
__pid_t wait (int *);
__pid_t waitpid (__pid_t, int *, int);
__pid_t wait3 (int *, int, struct rusage *);
#endif
