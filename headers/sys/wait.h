#ifndef _SYS_WAIT_H_
#define _SYS_WAIT_H_

#include <sys/types.h>
#include <signal.h>
#include <sys/resource.h>
#include <sys/time.h>

#define WIFSIGNALED(status)	(!WIFSTOPPED(status) && !WIFEXITED(status))
#define WIFSTOPPED(status)	(((status) & 0xff) == 0x7f)
#define WEXITSTATUS(status)	(((status) & 0xff00) >> 8)
#define WTERMSIG(status)	((status) & 0x7f)
#define WCOREDUMP(status)	((status) & 0x80)
#define WIFEXITED(status)	(WTERMSIG(status) == 0)
#define WNOHANG	0x00000001
#define WUNTRACED	0x00000002
#define WCOREFLAG	0x80
#define WSTOPSIG(status)	WEXITSTATUS(status)


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
