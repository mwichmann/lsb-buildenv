#ifndef _SIGNAL_H_
#define _SIGNAL_H_

#include <sys/time.h>
#include <sys/types.h>

#define SIGRTMAX	(__libc_current_sigrtmax ())
#define SIGRTMIN	(__libc_current_sigrtmin ())
#define SIGEV_SIGNAL	0
#define SIG_BLOCK	0
#define SIGEV_THREAD	0
#define SIG_UNBLOCK	1
#define SIG_SETMASK	2


typedef __sig_atomic_t sig_atomic_t;

struct sigstack
{
  void *ss_sp;			/* Signal stack pointer. */
  int ss_onstack;		/* Nonzero if executing on this stack. */
}
 ;

struct sigcontext
{
  unsigned short gs;
  unsigned short __gsh;
  unsigned short fs;
  unsigned short __fsh;
  unsigned short es;
  unsigned short __esh;
  unsigned short ds;
  unsigned short __dsh;
  unsigned long edi;
  unsigned long esi;
  unsigned long ebp;
  unsigned long esp;
  unsigned long ebx;
  unsigned long edx;
  unsigned long ecx;
  unsigned long eax;
  unsigned long trapno;
  unsigned long err;
  unsigned long eip;
  unsigned short cs;
  unsigned short __csh;
  unsigned long eflags;
  unsigned long esp_at_signal;
  unsigned short ss;
  unsigned short __ssh;
  struct _fpstate fpstate;
  unsigned long oldmask;
  unsigned long cr2;
}
 ;


#define SIG_ERR	((__sighandler_t)-1)
#define SIG_DFL	((__sighandler_t)0)
#define SIG_IGN	((__sighandler_t)1)
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
#define SIGURG	23
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
#define SIGILL	4
#define SIGTRAP	5
#define SIGABRT	6
#define SIGIOT	6
#define SIGBUS	7
#define SIGFPE	8
#define SIGKILL	9
#define SIGCLD	SIGCHLD
#define SIGPOLL	SIGIO





typedef void (*__sighandler_t) ();


#define SV_ONSTACK	(1<<0)
#define SV_INTERRUPT	(1<<1)
#define SV_RESETHAND	(1<<2)


typedef union sigval
{
  int sival_int;
  void *sival_ptr;
}
sigval_t;


#define SIGEV_NONE	1


union _sigev_un
{
  int _pad[SI_PAD_SIZE];
  struct
  {
    void (*sigev_thread_func) ();
    void *_attribute;
  }
  _sigev_thread;
}
 ;

typedef struct sigevent
{
  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;
  union _sigev_un _sigev_un;
}
sigevent_t;

struct
{
  void (*sigev_thread_func) ();
  void *_attribute;
}
 ;


#define SI_QUEUE	-1
#define SI_TIMER	-2
#define SI_MESGQ	-3
#define SI_ASYNCIO	-4
#define SI_USER	0


typedef struct siginfo
{
  int si_signo;			/* Signal number. */
  int si_errno;
  int si_code;			/* Signal code. */
  union
  {
    int _pad[__SI_PAD_SIZE];
    struct
    {
      pid_t si_pid;
      uid_t si_uid;
    }
    _kill;
    struct
    {
      unsigned int _timer1;
      unsigned int _timer2;
    }
    _timer;
    struct
    {
      pid_t _pid;
      uid_t _uid;
      sigval_t _sigval;
    }
    _rt;
    struct
    {
      pid_t _pid;
      uid_t _uid;
      int _status;
      clock_t _utime;
      clock_t _stime;
    }
    _sigchld;
    struct
    {
      void *_addr;
    }
    _sigfault;
    struct
    {
      int _band;
      int _fd;
    }
    _sigpoll;
  }
  _sifields;
}
siginfo_t;


#define _NSIG_WORDS	((_NSIG/sizeof(long))>>3)
#define _NSIG	64


typedef struct
{
  unsigned long sig[_NSIG_WORDS];
}
sigset_t;


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


struct sigaction
{
  union
  {
    __sighandler_t _sa_handler;
    void (*_sa_sigaction) ();
  }
  __sigaction_handler;
  unsigned long sa_flags;
  void (*sa_restorer) ();
  sigset_t sa_mask;
}
 ;

union
{
  int _pad[__SI_PAD_SIZE];
  struct
  {
    pid_t si_pid;
    uid_t si_uid;
  }
  _kill;
  struct
  {
    unsigned int _timer1;
    unsigned int _timer2;
  }
  _timer;
  struct
  {
    pid_t _pid;
    uid_t _uid;
    sigval_t _sigval;
  }
  _rt;
  struct
  {
    pid_t _pid;
    uid_t _uid;
    int _status;
    clock_t _utime;
    clock_t _stime;
  }
  _sigchld;
  struct
  {
    void *_addr;
  }
  _sigfault;
  struct
  {
    int _band;
    int _fd;
  }
  _sigpoll;
}
 ;




typedef struct sigaltstack
{
  void *ss_sp;
  int ss_flags;
  size_t ss_size;
}
stack_t;




struct _fpstate
{
  unsigned long cw;
  unsigned long sw;
  unsigned long tag;
  unsigned long ipoff;
  unsigned long cssel;
  unsigned long dataoff;
  unsigned long datasel;
  struct _fpreg _st[8];
  unsigned short status;
  unsigned short magic;
  unsigned long _fxsr_env[6];
  unsigned long mxcsr;
  unsigned long reserved;
  struct _fpxreg _fxsr_st[8];
  struct _xmmreg _xmm[8];
  unsigned long padding[];
}
 ;

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
}
 ;


extern char **_sys_siglist;
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
