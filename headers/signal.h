#ifndef _SIGNAL_H_
#define _SIGNAL_H_

#include <sys/time.h>
#include <stddef.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-3)
#define _SIGSET_NWORDS	(1024/(8*sizeof(unsigned long)))
#define SIGRTMAX	(__libc_current_sigrtmax ())
#define SIGRTMIN	(__libc_current_sigrtmin ())
#define SIGEV_SIGNAL	0
#define SIG_BLOCK	0
#define SIG_UNBLOCK	1
#define SIGEV_THREAD	2
#define SIG_SETMASK	2
#define NSIG	64
#define SI_MAX_SIZE	64


  typedef int sig_atomic_t;

  struct sigstack
  {
    void *ss_sp;		/* Signal stack pointer. */
    int ss_onstack;		/* Nonzero if executing on this stack. */
  }
   ;


/* System defined signals.*/
#define SIG_ERR	((__sighandler_t)-1)
#define SIG_DFL	((__sighandler_t)0)
#define SIG_IGN	((__sighandler_t)1)
#define SIGHUP	1
#if defined(__i386__)
#define SIGUSR1	10
#endif
#if defined(__ia64__)
#define SIGUSR1	10
#endif
#if defined(__powerpc__)
#define SIGUSR1	10
#endif
#define SIGSEGV	11
#if defined(__i386__)
#define SIGUSR2	12
#endif
#if defined(__ia64__)
#define SIGUSR2	12
#endif
#if defined(__powerpc__)
#define SIGUSR2	12
#endif
#define SIGPIPE	13
#define SIGALRM	14
#define SIGTERM	15
#if defined(__i386__)
#define SIGSTKFLT	16
#endif
#if defined(__ia64__)
#define SIGSTKFLT	16
#endif
#if defined(__powerpc__)
#define SIGSTKFLT	16
#endif
#if defined(__i386__)
#define SIGCHLD	17
#endif
#if defined(__ia64__)
#define SIGCHLD	17
#endif
#if defined(__powerpc__)
#define SIGCHLD	17
#endif
#if defined(__i386__)
#define SIGCONT	18
#endif
#if defined(__ia64__)
#define SIGCONT	18
#endif
#if defined(__powerpc__)
#define SIGCONT	18
#endif
#if defined(__i386__)
#define SIGSTOP	19
#endif
#if defined(__ia64__)
#define SIGSTOP	19
#endif
#if defined(__powerpc__)
#define SIGSTOP	19
#endif
#define SIGINT	2
#if defined(__i386__)
#define SIGTSTP	20
#endif
#if defined(__ia64__)
#define SIGTSTP	20
#endif
#if defined(__powerpc__)
#define SIGTSTP	20
#endif
#if defined(__i386__)
#define SIGTTIN	21
#endif
#if defined(__ia64__)
#define SIGTTIN	21
#endif
#if defined(__powerpc__)
#define SIGTTIN	21
#endif
#if defined(__i386__)
#define SIGTTOU	22
#endif
#if defined(__ia64__)
#define SIGTTOU	22
#endif
#if defined(__powerpc__)
#define SIGTTOU	22
#endif
#if defined(__i386__)
#define SIGURG	23
#endif
#if defined(__ia64__)
#define SIGURG	23
#endif
#if defined(__powerpc__)
#define SIGURG	23
#endif
#if defined(__i386__)
#define SIGXCPU	24
#endif
#if defined(__ia64__)
#define SIGXCPU	24
#endif
#if defined(__powerpc__)
#define SIGXCPU	24
#endif
#if defined(__i386__)
#define SIGXFSZ	25
#endif
#if defined(__ia64__)
#define SIGXFSZ	25
#endif
#if defined(__powerpc__)
#define SIGXFSZ	25
#endif
#if defined(__i386__)
#define SIGVTALRM	26
#endif
#if defined(__ia64__)
#define SIGVTALRM	26
#endif
#if defined(__powerpc__)
#define SIGVTALRM	26
#endif
#define SIGPROF	27
#if defined(__i386__)
#define SIGPROF	27
#endif
#if defined(__ia64__)
#define SIGPROF	27
#endif
#if defined(__powerpc__)
#define SIGPROF	27
#endif
#if defined(__i386__)
#define SIGWINCH	28
#endif
#if defined(__ia64__)
#define SIGWINCH	28
#endif
#if defined(__powerpc__)
#define SIGWINCH	28
#endif
#if defined(__i386__)
#define SIGIO	29
#endif
#if defined(__ia64__)
#define SIGIO	29
#endif
#if defined(__powerpc__)
#define SIGIO	29
#endif
#define SIGQUIT	3
#if defined(__i386__)
#define SIGPWR	30
#endif
#if defined(__ia64__)
#define SIGPWR	30
#endif
#if defined(__powerpc__)
#define SIGPWR	30
#endif
#if defined(__i386__)
#define SIGSYS	31
#endif
#if defined(__ia64__)
#define SIGSYS	31
#endif
#if defined(__powerpc__)
#define SIGSYS	31
#endif
#if defined(__i386__)
#define SIGUNUSED	31
#endif
#if defined(__ia64__)
#define SIGUNUSED	31
#endif
#if defined(__powerpc__)
#define SIGUNUSED	31
#endif
#define SIGILL	4
#define SIGTRAP	5
#define SIGABRT	6
#define SIGIOT	6
#if defined(__i386__)
#define SIGBUS	7
#endif
#if defined(__ia64__)
#define SIGBUS	7
#endif
#if defined(__powerpc__)
#define SIGBUS	7
#endif
#define SIGFPE	8
#define SIGKILL	9
#define SIGCLD	SIGCHLD
#define SIGPOLL	SIGIO



/* Type of a signal handling function.*/


  typedef void (*__sighandler_t) (void);


/* POSIX 1003.1b sigval*/
#define SV_ONSTACK	(1<<0)
#define SV_INTERRUPT	(1<<1)
#define SV_RESETHAND	(1<<2)


  typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  }
  sigval_t;


/* POSIX 1003.1b sigevent*/
#define SIGEV_NONE	1


  typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;
    union
    {
      int _pad[SI_PAD_SIZE];
      struct
      {
	void (*sigev_thread_func) (void);
	void *_attribute;
      }
      _sigev_thread;
    }
    _sigev_un;
  }
  sigevent_t;


/* POSIX 1003.1b siginfo*/
#define SI_QUEUE	-1
#define SI_TIMER	-2
#define SI_MESGQ	-3
#define SI_ASYNCIO	-4
#define SI_USER	0
#define si_pid	_sifields._kill._pid
#define si_uid	_sifields._kill._uid
#define si_value	_sifields._rt._sigval
#define si_int	_sifields._rt._sigval.sival_int
#define si_ptr	_sifields._rt._sigval.sival_ptr
#define si_status	_sifields._sigchld._status
#define si_stime	_sifields._sigchld._stime
#define si_utime	_sifields._sigchld._utime
#define si_addr	_sifields._sigfault._addr
#define si_band	_sifields._sigpoll._band
#define si_fd	_sifields._sigpoll._fd
#define si_timer1	_sifields._timer._timer1


  typedef struct siginfo
  {
    int si_signo;		/* Signal number. */
    int si_errno;
    int si_code;		/* Signal code. */
    union
    {
      int _pad[SI_PAD_SIZE];
      struct
      {
	pid_t _pid;
	uid_t _uid;
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


/* sigset_t*/


  typedef struct
  {
    unsigned long sig[_SIGSET_NWORDS];
  }
  sigset_t;


/* sigaction*/
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
#define sa_handler	__sigaction_handler._sa_handler
#define sa_sigaction	__sigaction_handler._sa_sigaction


  struct sigaction
  {
    union
    {
      __sighandler_t _sa_handler;
      void (*_sa_sigaction) (void);
    }
    __sigaction_handler;
    unsigned long sa_flags;
    void (*sa_restorer) (void);
    sigset_t sa_mask;
  }
   ;


/* Structure used in sigaltstack call.*/


  typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  }
  stack_t;




#if defined(__i386__)
/* IA32 */
  struct _fpreg
  {
    unsigned short significand[4];
    unsigned short exponent;
  }
   ;

#endif
#if defined(__i386__)
/* IA32 */
  struct _fpxreg
  {
    unsigned short significand[4];
    unsigned short exponent;
    unsigned short padding[3];
  }
   ;

#endif
#if defined(__i386__)
/* IA32 */
  struct _xmmreg
  {
    unsigned long element[4];
  }
   ;

#endif

/* FPU state information*/


#if defined(__i386__)
/* IA32 */
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
    unsigned long padding[56];
  }
   ;

#endif

/* Process context when signal delivered*/


#if defined(__i386__)
/* IA32 */
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

#endif
#if defined(__ia64__)
/* IA64 */
  struct sigcontext;

#endif
#if defined(__powerpc__)
/* PPC32 */
  struct sigcontext;

#endif

  extern __sighandler_t __sysv_signal (void);
  extern char **_sys_siglist;
  extern int killpg (pid_t, int);
  extern void psignal (void);
  extern int raise (int);
  extern int sigaddset (sigset_t *, int);
  extern int sigdelset (sigset_t *, int);
  extern int sigemptyset (sigset_t *);
  extern int sigfillset (sigset_t *);
  extern int siggetmask (void);
  extern int sighold (void);
  extern int sigignore (void);
  extern int siginterrupt (void);
  extern int sigismember (void);
  extern int sigpending (sigset_t *);
  extern int sigrelse (void);
  extern __sighandler_t sigset (void);
  extern int sigstack (void);
  extern int pthread_sigmask (int, const sigset_t *, sigset_t *);
  extern int sigaction (int, struct sigaction *, struct sigaction *);
  extern int sigwait (const sigset_t *, int *);
  extern int kill (pid_t, int);
  extern int sigaltstack (struct sigaltstack *, struct sigaltstack *);
  extern int sigblock (void);
  extern __sighandler_t signal (int, __sighandler_t);
  extern int sigpause (void);
  extern int sigprocmask (int, sigset_t *, sigset_t *);
  extern int sigreturn (void);
  extern int sigsuspend (sigset_t *);
  extern int sigqueue (void);
  extern int sigwaitinfo (void);
  extern int sigtimedwait (sigset_t *, siginfo_t *, struct timespec *);
  extern __sighandler_t bsd_signal (void);
#ifdef __cplusplus
}
#endif
#endif
