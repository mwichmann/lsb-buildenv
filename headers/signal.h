#ifndef _SIGNAL_H_
#define _SIGNAL_H_

#include <sys/time.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>

struct sigstack;

struct sigcontext;


#define SIGHUP	1
#define SIGUSR1	10
#define SIGSEGV	11
#define SIGUSR2	12
#define SIGPIPE	13
#define SIGALRM	14
#define SIGTERM	15
#define SIGSTKFLT	16
#define SIGCHLD	17
#define SIGCONT	18
#define SIGSTOP	19
#define SIGINT	2
#define SIGTSTP	20
#define SIGTTIN	21
#define SIGTTOU	22
#define SIGXCPU	24
#define SIGXFSZ	25
#define SIGVTALRM	26
#define SIGPROF	27
#define SIGWINCH	28
#define SIGIO	29
#define SIGQUIT	3
#define SIGPWR	30
#define SIGUNUSED	31
#define SIGSYS	31
#define SIGRTMIN	32
#define SIGILL	4
#define SIGTRAP	5
#define SIGIOT	6
#define SIGABRT	6
#define SIGBUS	7
#define SIGFPE	8
#define SIGKILL	9
#define SIGCLD	SIGCHLD
#define SIGPOLL	SIGIO

typedef void (*__sighandler_t) ();

#define SIG_ERR	((__sighandler_t)-1)
#define SIG_DFL	((__sighandler_t)0)
#define SIG_IGN	((__sighandler_t)1)

typedef union sigval
{
  int sival_int;
  void *sival_ptr;
}
sigval_t;

#define SV_ONSTACK	(1<<0)
#define SV_INTERRUPT	(1<<1)
#define SV_RESETHAND	(1<<2)


typedef struct siginfo
{
  int si_signo;
  int si_errno;
  int si_code;
  union _sifields;
}
siginfo_t;


typedef struct
{
  unsigned long sig[1];
}
sigset_t;


struct sigaction
{
  union _u;
  unsigned long sa_flags;
  void (*sa_restorer) ();
  sigset_t sa_mask;
}
 ;

#define SA_NOCLDSTOP	0x00000001
#define SA_NOCLDWAIT	0x00000002
#define SA_SIGINFO	0x00000004
#define SA_ONSTACK	0x08000000
#define SA_RESTART	0x10000000
#define SA_INTERRUPT	0x20000000
#define SA_NODEFER	0x40000000
#define SA_RESETHAND	0x80000000
#define SA_NOMASK	SA_NODEFER
#define SA_ONESHOT	SA_RESETHAND

typedef struct sigaltstack
{
  void *ss_sp;
  int ss_flags;
  size_t ss_size;
}
stack_t;


int raise (int);
int sigaddset (sigset_t *, int);
int sigdelset (sigset_t *, int);
int sigemptyset (sigset_t *);
int sigfillset (sigset_t *);
int sigpending (sigset_t *);
int sigaction (int, struct sigaction *, struct sigaction *);
int kill (pid_t, int);
int sigaltstack (struct sigaltstack *, struct sigaltstack *);
__sighandler_t signal (int, __sighandler_t);
int sigprocmask (int, sigset_t *, sigset_t *);
int sigsuspend (sigset_t *);
int sigtimedwait (sigset_t *, siginfo_t *, struct timespec *);
#endif
