#if (__LSB_VERSION__ >= 10 )
#ifndef _SIGNAL_H_
#define _SIGNAL_H_

#include <pthread.h>
#include <sys/types.h>
#include <sys/time.h>
#include <stddef.h>
#include <stdint.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define sigpause __xpg_sigpause

#endif				/* __LSB_VERSION__ >= 3.2 */


#if __LSB_VERSION__ >= 11
#define SIGRTMAX	(__libc_current_sigrtmax ())
#define SIGRTMIN	(__libc_current_sigrtmin ())
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#define NSIG	65
#define SIG_BLOCK	0	/* Block signals. */
#define SIG_UNBLOCK	1	/* Unblock signals. */
#define SIG_SETMASK	2	/* Set the set of blocked signals. */
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#if defined __s390__ && !defined __s390x__
#define __NUM_ACRS	16
#endif
#if defined __s390x__
#define __NUM_ACRS	16
#endif
#if defined __s390__ && !defined __s390x__
#define __NUM_FPRS	16
#endif
#if defined __s390x__
#define __NUM_FPRS	16
#endif
#if defined __s390__ && !defined __s390x__
#define __NUM_GPRS	16
#endif
#if defined __s390x__
#define __NUM_GPRS	16
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 21
#define _SIGSET_NWORDS	(1024/(8*sizeof(unsigned long)))
#endif				/* __LSB_VERSION__ >= 2.1 */



#if __LSB_VERSION__ >= 12
    typedef int sig_atomic_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#if defined __s390x__
/* S390X */
    typedef struct {
	unsigned long int mask;
	unsigned long int addr;
    } __attribute__ ((aligned(8))) _psw_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	unsigned long int mask;
	unsigned long int addr;
    } __attribute__ ((aligned(8))) _psw_t;

/* S390 */
    typedef struct {
	_psw_t psw;
	unsigned long int gprs[__NUM_GPRS];
	unsigned int acrs[__NUM_ACRS];
    } _s390_regs_common;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	_psw_t psw;
	unsigned long int gprs[16];
	unsigned int acrs[16];
    } _s390_regs_common;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 20
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct pt_regs {
	unsigned long int gpr[32];
	unsigned long int nip;
	unsigned long int msr;
	unsigned long int orig_gpr3;	/* Used for restarting system calls */
	unsigned long int ctr;
	unsigned long int link;
	unsigned long int xer;
	unsigned long int ccr;
	unsigned long int mq;	/* 601 only (not used at present). Used on APUS to hold IPL val */
	unsigned long int trap;	/* Reason for being here */
	unsigned long int dar;	/* Fault registers */
	unsigned long int dsisr;
	unsigned long int result;	/* Result of a system call */
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct pt_regs {
	unsigned long int gpr[32];
	unsigned long int nip;
	unsigned long int msr;
	unsigned long int orig_gpr3;
	unsigned long int ctr;
	unsigned long int link;
	unsigned long int xer;
	unsigned long int ccr;
	unsigned long int softe;
	unsigned long int trap;
	unsigned long int dar;
	unsigned long int dsisr;
	unsigned long int result;
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* PPC64 stuff that doesn't belong here, but it has to be here to avoid nasty cyclic dependencies*/


/* PPC32 stuff that doesn't belong here, but it has to be here to avoid nasty cyclic dependencies*/


/* Type of a signal handling function.*/
#if __LSB_VERSION__ >= 20
    typedef void (*sighandler_t) (int);

#endif				/* __LSB_VERSION__ >= 2.0 */


/* Special Signal values*/
#if __LSB_VERSION__ >= 11
#define SIG_DFL	((sighandler_t)0)	/* Request for default signal handling. */
#define SIG_IGN	((sighandler_t)1)	/* Request that signal be ignored. */
#define SIG_ERR	((sighandler_t)-1)	/* Return value from signal() in case of error. */
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 20
#define SIG_HOLD	((sighandler_t) 2)	/* Request that signal be held. */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* System defined signals.*/
#if __LSB_VERSION__ >= 11
#define SIGHUP	1		/* Hangup. */
#define SIGINT	2		/* Terminal interrupt signal. */
#define SIGQUIT	3		/* Terminal quit signal. */
#define SIGILL	4		/* Illegal instruction. */
#define SIGTRAP	5		/* Trace/breakpoint trap. */
#define SIGABRT	6		/* Process abort signal. */
#define SIGIOT	6		/* IOT trap */
#define SIGBUS	7		/* Access to an undefined portion of a memory object. */
#define SIGFPE	8		/* Erroneous arithmetic operation. */
#define SIGKILL	9		/* Kill (cannot be caught or ignored). */
#define SIGUSR1	10		/* User-defined signal 1. */
#define SIGSEGV	11		/* Invalid memory reference. */
#define SIGUSR2	12		/* User-defined signal 2. */
#define SIGPIPE	13		/* Write  on a pipe with no one to read it. */
#define SIGALRM	14		/* Alarm clock. */
#define SIGTERM	15		/* Termination signal. */
#define SIGSTKFLT	16	/* Stack fault. */
#define SIGCHLD	17		/* Child process terminated, stopped, or continued. */
#define SIGCLD	SIGCHLD		/* Same as SIGCHLD */
#define SIGCONT	18		/* Continue executing, if stopped. */
#define SIGSTOP	19		/* Stop executing (cannot be caught or ignored). */
#define SIGTSTP	20		/* Terminal stop signal. */
#define SIGTTIN	21		/* Background process attempting read. */
#define SIGTTOU	22		/* Background process attempting write. */
#define SIGXCPU	24		/* CPU time limit exceeded. */
#define SIGXFSZ	25		/* File size limit exceeded. */
#define SIGVTALRM	26	/* Virtual timer expired. */
#define SIGPROF	27		/* Profiling timer expired. */
#define SIGWINCH	28	/* Window size change. */
#define SIGIO	29		/* I/O now possible. */
#define SIGPOLL	SIGIO		/* Pollable event. */
#define SIGPWR	30		/* Power failure restart */
#define SIGSYS	31		/* Bad system call. */
#define SIGUNUSED	31
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#define SIGURG	23		/* High bandwidth data is available at a socket. */
#endif				/* __LSB_VERSION__ >= 1.2 */




/* POSIX 1003.1b sigval*/
#if __LSB_VERSION__ >= 11
#define SV_ONSTACK	(1<<0)	/* Take the signal on the signal stack. */
#define SV_INTERRUPT	(1<<1)	/* Do not restart system calls. */
#define SV_RESETHAND	(1<<2)	/* Reset handler to SIG_DFL on receipt. */
#endif				/* __LSB_VERSION__ >= 1.1 */



#if __LSB_VERSION__ >= 12
    typedef union sigval sigval_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    union sigval {
	int sival_int;
	void *sival_ptr;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* POSIX 1003.1b sigevent*/
#if __LSB_VERSION__ >= 12
#define SIGEV_SIGNAL	0	/* Notify via signal. */
#define SIGEV_NONE	1	/* Other notification: meaningless. */
#define SIGEV_THREAD	2	/* Deliver via thread creation. */
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 21
#if defined __i386__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-3)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-3)
#endif
#if defined __s390__ && !defined __s390x__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-3)
#endif
#if defined __ia64__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-4)
#endif
#if defined __powerpc64__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-4)
#endif
#if defined __x86_64__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-4)
#endif
#if defined __s390x__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-4)
#endif
#define SIGEV_MAX_SIZE	64
#endif				/* __LSB_VERSION__ >= 2.1 */



#if __LSB_VERSION__ >= 12
    typedef struct sigevent sigevent_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct sigevent {
	sigval_t sigev_value;
	int sigev_signo;
	int sigev_notify;
	union {
	    int _pad[SIGEV_PAD_SIZE];
	    struct {
		void (*_function) (sigval_t);
		void *_attribute;
	    } _sigev_thread;
	} _sigev_un;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* POSIX 1003.1b siginfo*/
#if __LSB_VERSION__ >= 12
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
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#define si_timer2	_sifields._timer._timer2
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 21
#if defined __i386__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-3)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-3)
#endif
#if defined __s390__ && !defined __s390x__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-3)
#endif
#if defined __ia64__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-4)
#endif
#if defined __powerpc64__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-4)
#endif
#if defined __x86_64__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-4)
#endif
#if defined __s390x__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-4)
#endif
#define SI_MAX_SIZE	128
#endif				/* __LSB_VERSION__ >= 2.1 */



#if __LSB_VERSION__ >= 12
    typedef struct siginfo siginfo_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct siginfo {
	int si_signo;		/* Signal number. */
	int si_errno;
	int si_code;		/* Signal code. */
	union {
	    int _pad[SI_PAD_SIZE];
	    struct {
		pid_t _pid;
		uid_t _uid;
	    } _kill;
	    struct {
		unsigned int _timer1;
		unsigned int _timer2;
	    } _timer;
	    struct {
		pid_t _pid;
		uid_t _uid;
		sigval_t _sigval;
	    } _rt;
	    struct {
		pid_t _pid;
		uid_t _uid;
		int _status;
		clock_t _utime;
		clock_t _stime;
	    } _sigchld;
	    struct {
		void *_addr;
	    } _sigfault;
	    struct {
		int _band;
		int _fd;
	    } _sigpoll;
	} _sifields;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Values for `si_code'.  Positive values are reserved for kernel-generated
   signals.*/
#if __LSB_VERSION__ >= 12
#define SI_QUEUE	-1	/* Sent by sigqueue. */
#define SI_TIMER	-2	/* Sent by timer expiration. */
#define SI_MESGQ	-3	/* Sent by real time mesq state change. */
#define SI_ASYNCIO	-4	/* Sent by AIO completion. */
#define SI_USER	0		/* Sent by kill, sigsend, raise. */
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#define SI_SIGIO	-5	/* Sent by queued SIGIO. */
#define SI_TKILL	-6	/* Sent by tkill. */
#define SI_ASYNCNL	-60	/* Sent by asynch name lookup completion. */
#define SI_KERNEL	0x80	/* Sent by kernel. */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* `si_code' values for SIGILL signal.*/
#if __LSB_VERSION__ >= 20
#define ILL_ILLOPC	1	/* Illegal opcode. */
#define ILL_ILLOPN	2	/* Illegal operand. */
#define ILL_ILLADR	3	/* Illegal addressing mode. */
#define ILL_ILLTRP	4	/* Illegal trap. */
#define ILL_PRVOPC	5	/* Privileged opcode. */
#define ILL_PRVREG	6	/* Privileged register. */
#define ILL_COPROC	7	/* Coprocessor error. */
#define ILL_BADSTK	8	/* Internal stack error. */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* `si_code' values for SIGFPE signal.*/
#if __LSB_VERSION__ >= 20
#define FPE_INTDIV	1	/* Integer divide by zero. */
#define FPE_INTOVF	2	/* Integer overflow. */
#define FPE_FLTDIV	3	/*  Floating-point divide by zero. */
#define FPE_FLTOVF	4	/* Floating-point overflow. */
#define FPE_FLTUND	5	/*  Floating-point underflow. */
#define FPE_FLTRES	6	/*  Floating-point inexact result. */
#define FPE_FLTINV	7	/* Invalid floating-point operation. */
#define FPE_FLTSUB	8	/* Subscript out of range. */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* `si_code' values for SIGSEGV signal.*/
#if __LSB_VERSION__ >= 20
#define SEGV_MAPERR	1	/* Address not mapped to object. */
#define SEGV_ACCERR	2	/*  Invalid permissions for mapped object. */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* `si_code' values for SIGBUS signal.*/
#if __LSB_VERSION__ >= 20
#define BUS_ADRALN	1	/*  Invalid address alignment. */
#define BUS_ADRERR	2	/*  Nonexistent physical address. */
#define BUS_OBJERR	3	/*  Object-specific hardware error. */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* `si_code' values for SIGTRAP signal.*/
#if __LSB_VERSION__ >= 20
#define TRAP_BRKPT	1	/*  Process breakpoint. */
#define TRAP_TRACE	2	/*  Process trace trap. */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* `si_code' values for SIGCHLD signal.*/
#if __LSB_VERSION__ >= 20
#define CLD_EXITED	1	/* Child has exited. */
#define CLD_KILLED	2	/* Child has terminated abnormally and did not create a core fi */
#define CLD_DUMPED	3	/* Child has terminated abnormally and created a core file. */
#define CLD_TRAPPED	4	/*  Traced child has trapped. */
#define CLD_STOPPED	5	/* Child has stopped. */
#define CLD_CONTINUED	6	/* Stopped child has continued. */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* `si_code' values for SIGPOLL signal.*/
#if __LSB_VERSION__ >= 20
#define POLL_IN	1		/*  Data input available. */
#define POLL_OUT	2	/*  Output buffers available. */
#define POLL_MSG	3	/*  Input message available. */
#define POLL_ERR	4	/*  I/O error. */
#define POLL_PRI	5	/* High priority input available. */
#define POLL_HUP	6	/*  Device disconnected. */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* sigset_t*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	unsigned long int sig[_SIGSET_NWORDS];
    } sigset_t;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* sigaction*/
#define sa_handler	__sigaction_handler._sa_handler
#define sa_sigaction	__sigaction_handler._sa_sigaction
#if __LSB_VERSION__ >= 11
#define SA_INTERRUPT	0x20000000
#define SA_ONSTACK	0x08000000	/* Use signal stack by using `sa_restorer`. */
#define SA_RESETHAND	0x80000000	/* Reset to SIG_DFL on entry to handler. */
#define SA_NOCLDSTOP	0x00000001	/* Don't send SIGCHLD when children stop. */
#define SA_SIGINFO	0x00000004	/* Invoke signal-catching function with three arguments instead of one. */
#define SA_NODEFER	0x40000000	/* Don't automatically block the signal when its handler is being executed. */
#define SA_RESTART	0x10000000	/* Restart syscall on signal return. */
#define SA_NOCLDWAIT	0x00000002	/* Don't create zombie on child death. */
#define SA_NOMASK	SA_NODEFER
#define SA_ONESHOT	SA_RESETHAND
#endif				/* __LSB_VERSION__ >= 1.1 */



#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    struct sigaction {
	union {
	    sighandler_t _sa_handler;
	    void (*_sa_sigaction) (int, siginfo_t *, void *);
	} __sigaction_handler;
	sigset_t sa_mask;
	unsigned long int sa_flags;
	void (*sa_restorer) (void);
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct sigaction {
	union {
	    sighandler_t _sa_handler;
	    void (*_sa_sigaction) (int, siginfo_t *, void *);
	} __sigaction_handler;
	sigset_t sa_mask;
	unsigned long int sa_flags;
	void (*sa_restorer) (void);
    };

#endif
#if defined __ia64__
/* IA64 */
    struct sigaction {
	union {
	    sighandler_t _sa_handler;
	    void (*_sa_sigaction) (int, siginfo_t *, void *);
	} __sigaction_handler;
	unsigned long int sa_flags;
	sigset_t sa_mask;	/* mask last for extensibility */
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct sigaction {
	union {
	    sighandler_t _sa_handler;
	    void (*_sa_sigaction) (int, siginfo_t *, void *);
	} __sigaction_handler;
	sigset_t sa_mask;
	unsigned long int sa_flags;
	void (*sa_restorer) (void);
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct sigaction {
	union {
	    sighandler_t _sa_handler;
	    void (*_sa_sigaction) (int, siginfo_t *, void *);
	} __sigaction_handler;
	sigset_t sa_mask;
	int sa_flags;
	void (*sa_restorer) (void);
    };

#endif
#if defined __s390x__
/* S390X */
    struct sigaction {
	union {
	    sighandler_t _sa_handler;
	    void (*_sa_sigaction) (int, siginfo_t *, void *);
	} __sigaction_handler;
	unsigned long int sa_flags;
	void (*sa_restorer) (void);
	sigset_t sa_mask;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct sigaction {
	union {
	    sighandler_t _sa_handler;
	    void (*_sa_sigaction) (int, siginfo_t *, void *);
	} __sigaction_handler;
	sigset_t sa_mask;
	int sa_flags;
	void (*sa_restorer) (void);
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* Structure used in sigaltstack call.*/
#if __LSB_VERSION__ >= 20
#if defined __ia64__
#define MINSIGSTKSZ	131027	/* Minimum stack size for a signal handler. */
#endif
#if defined __i386__
#define MINSIGSTKSZ	2048	/* Minimum stack size for a signal handler. */
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define MINSIGSTKSZ	2048	/* Minimum stack size for a signal handler. */
#endif
#if defined __powerpc64__
#define MINSIGSTKSZ	2048	/* Minimum stack size for a signal handler. */
#endif
#if defined __s390__ && !defined __s390x__
#define MINSIGSTKSZ	2048	/* Minimum stack size for a signal handler. */
#endif
#if defined __x86_64__
#define MINSIGSTKSZ	2048	/* Minimum stack size for a signal handler. */
#endif
#if defined __s390x__
#define MINSIGSTKSZ	2048	/* Minimum stack size for a signal handler. */
#endif
#if defined __ia64__
#define SIGSTKSZ	262144	/* System default stack size. */
#endif
#if defined __i386__
#define SIGSTKSZ	8192	/* System default stack size. */
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define SIGSTKSZ	8192	/* System default stack size. */
#endif
#if defined __powerpc64__
#define SIGSTKSZ	8192	/* System default stack size. */
#endif
#if defined __s390__ && !defined __s390x__
#define SIGSTKSZ	8192	/* System default stack size. */
#endif
#if defined __x86_64__
#define SIGSTKSZ	8192	/* System default stack size. */
#endif
#if defined __s390x__
#define SIGSTKSZ	8192	/* System default stack size. */
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */



#if __LSB_VERSION__ >= 12
    typedef struct sigaltstack stack_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct sigaltstack {
	void *ss_sp;
	int ss_flags;
	size_t ss_size;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Possible values for `ss_flags.'.*/
#if __LSB_VERSION__ >= 20
#define SS_ONSTACK	1
#define SS_DISABLE	2
#endif				/* __LSB_VERSION__ >= 2.0 */




/* FP registers*/
#if __LSB_VERSION__ >= 20
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	unsigned int fpc;
	double fprs[__NUM_FPRS];
    } _s390_fp_regs;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	unsigned int fpc;
	double fprs[__NUM_FPRS];
    } _s390_fp_regs;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	_s390_regs_common regs;
	_s390_fp_regs fpregs;
    } _sigregs;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	_s390_regs_common regs;
	_s390_fp_regs fpregs;
    } _sigregs;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 12
#if defined __i386__
/* IA32 */
    struct _fpreg {
	unsigned short significand[4];
	unsigned short exponent;
    };

#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
/* IA64 */
    struct ia64_fpreg {
	union {
	    unsigned long int bits[2];
	    long double __dummy;	/* force 16-byte alignment */
	} u;
    };

#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    struct _fpxreg {
	unsigned short significand[4];
	unsigned short exponent;
	unsigned short padding[3];
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct _fpxreg {
	unsigned short significand[4];
	unsigned short exponent;
	unsigned short padding[3];
    };

#endif
#if defined __i386__
/* IA32 */
    struct _xmmreg {
	unsigned long int element[4];
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct _xmmreg {
	uint32_t element[4];
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* FPU state information*/
#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    struct _fpstate {
	unsigned long int cw;
	unsigned long int sw;
	unsigned long int tag;
	unsigned long int ipoff;
	unsigned long int cssel;
	unsigned long int dataoff;
	unsigned long int datasel;
	struct _fpreg _st[8];
	unsigned short status;
	unsigned short magic;
	unsigned long int _fxsr_env[6];
	unsigned long int mxcsr;
	unsigned long int reserved;
	struct _fpxreg _fxsr_st[8];
	struct _xmmreg _xmm[8];
#if __LSB_VERSION__ < 50
	unsigned long int padding[56];
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	unsigned long int padding1[44];
	__extension__ union {
#if __LSB_VERSION__ >= 50
	    unsigned long int padding2[12];
	    struct _fpx_sw_bytes sw_reserved;
#endif				/* __LSB_VERSION__ >= 50 */
	};
#endif				/* __LSB_VERSION__ >= 50 */
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct _fpstate {
	uint16_t cwd;
	uint16_t swd;
	uint16_t ftw;
	uint16_t fop;
	uint64_t rip;
	uint64_t rdp;
	uint32_t mxcsr;
	uint32_t mxcr_mask;
	struct _fpxreg _st[8];
	struct _xmmreg _xmm[16];
	uint32_t padding[24];
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 50
#if defined __i386__
/* IA32 */
    struct _fpx_sw_bytes {
	unsigned int magic1;
	unsigned int extended_size;
	unsigned long long int xstate_bv;
	unsigned int xstate_size;
	unsigned long int padding[7];
    };

#endif
#endif				/* __LSB_VERSION__ >= 5.0 */


/* Process context when signal delivered*/
#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    struct sigcontext {
	unsigned short gs;
	unsigned short __gsh;
	unsigned short fs;
	unsigned short __fsh;
	unsigned short es;
	unsigned short __esh;
	unsigned short ds;
	unsigned short __dsh;
	unsigned long int edi;
	unsigned long int esi;
	unsigned long int ebp;
	unsigned long int esp;
	unsigned long int ebx;
	unsigned long int edx;
	unsigned long int ecx;
	unsigned long int eax;
	unsigned long int trapno;
	unsigned long int err;
	unsigned long int eip;
	unsigned short cs;
	unsigned short __csh;
	unsigned long int eflags;
	unsigned long int esp_at_signal;
	unsigned short ss;
	unsigned short __ssh;
	struct _fpstate *fpstate;
	unsigned long int oldmask;
	unsigned long int cr2;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct sigcontext {
	long int _unused[4];
	int signal;
	unsigned long int handler;
	unsigned long int oldmask;
	struct pt_regs *regs;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct sigcontext {
	unsigned long int sc_flags;
	unsigned long int sc_nat;
	stack_t sc_stack;
	unsigned long int sc_ip;
	unsigned long int sc_cfm;
	unsigned long int sc_um;
	unsigned long int sc_ar_rsc;
	unsigned long int sc_ar_bsp;
	unsigned long int sc_ar_rnat;
	unsigned long int sc_ar_ccv;
	unsigned long int sc_ar_unat;
	unsigned long int sc_ar_fpsr;
	unsigned long int sc_ar_pfs;
	unsigned long int sc_ar_lc;
	unsigned long int sc_pr;
	unsigned long int sc_br[8];
	unsigned long int sc_gr[32];
	struct ia64_fpreg sc_fr[128];
	unsigned long int sc_rbs_base;	/* NULL or new base of sighandler's rbs */
	unsigned long int sc_loadrs;	/* see description above */
	unsigned long int sc_ar25;	/* cmp8xchg16 uses this */
	unsigned long int sc_ar26;	/*  rsvd for scratch use */
	unsigned long int sc_rsvd[12];
	unsigned long int sc_mask;	/* really sigset_t, but unsigned long for convenience at the us */
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct sigcontext {
	unsigned long int r8;
	unsigned long int r9;
	unsigned long int r10;
	unsigned long int r11;
	unsigned long int r12;
	unsigned long int r13;
	unsigned long int r14;
	unsigned long int r15;
	unsigned long int rdi;
	unsigned long int rsi;
	unsigned long int rbp;
	unsigned long int rbx;
	unsigned long int rdx;
	unsigned long int rax;
	unsigned long int rcx;
	unsigned long int rsp;
	unsigned long int rip;
	unsigned long int eflags;
	unsigned short cs;
	unsigned short gs;
	unsigned short fs;
	unsigned short __pad0;
	unsigned long int err;
	unsigned long int trapno;
	unsigned long int oldmask;
	unsigned long int cr2;
	struct _fpstate *fpstate;
	unsigned long int __reserved1[8];
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct sigcontext {
	unsigned long int oldmask[2];
	_sigregs *sregs;
    };

#endif
#if defined __s390x__
/* S390X */
    struct sigcontext {
	unsigned long int oldmask;
	_sigregs *sregs;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct sigcontext {
	unsigned long int _unused[4];
	int signal;
	unsigned long int handler;
	unsigned long int oldmask;
	struct pt_regs *regs;
	unsigned long int gp_regs[48];
	double fp_regs[33];
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* Function prototypes */

    extern int __libc_current_sigrtmax(void);
    extern int __libc_current_sigrtmin(void);
    extern sighandler_t __sysv_signal(int __sig, sighandler_t __handler);
    extern char *const _sys_siglist[64];
    extern sighandler_t bsd_signal(int __sig, sighandler_t __handler);
    extern int kill(pid_t __pid, int __sig);
    extern int killpg(pid_t __pgrp, int __sig);
    extern void psignal(int __sig, const char *__s);
    extern int pthread_kill(pthread_t, int);
    extern int pthread_sigmask(int, const sigset_t *, sigset_t *);
    extern int raise(int __sig);
    extern int sigaction(int __sig, const struct sigaction *__act,
			 struct sigaction *__oact);
    extern int sigaddset(sigset_t * __set, int __signo);
    extern int sigaltstack(const struct sigaltstack *__ss,
			   struct sigaltstack *__oss);
    extern int sigandset(sigset_t * __set, const sigset_t * __left,
			 const sigset_t * __right);
    extern int sigdelset(sigset_t * __set, int __signo);
    extern int sigemptyset(sigset_t * __set);
    extern int sigfillset(sigset_t * __set);
    extern int sighold(int __sig);
    extern int sigignore(int __sig);
    extern int siginterrupt(int __sig, int __interrupt);
    extern int sigisemptyset(const sigset_t * __set);
    extern int sigismember(const sigset_t * __set, int __signo);
    extern sighandler_t signal(int __sig, sighandler_t __handler);
    extern int sigorset(sigset_t * __set, const sigset_t * __left,
			const sigset_t * __right);
#if __LSB_VERSION__ < 32
    /* Binary sigpause symbol does not implement POSIX-conforming behavior, ___xpg_sigpause should be used instead. Consider building the application in LSB mode. */
    extern int sigpause(int __sig);
#endif				/* __LSB_VERSION__ < 3.2 */

    extern int sigpending(sigset_t * __set);
    extern int sigprocmask(int __how, const sigset_t * __set,
			   sigset_t * __oset);
    extern int sigqueue(pid_t __pid, int __sig, const union sigval __val);
    extern int sigrelse(int __sig);
    extern int sigreturn(struct sigcontext *__scp);
    extern sighandler_t sigset(int __sig, sighandler_t __disp);
    extern int sigsuspend(const sigset_t * __set);
    extern int sigtimedwait(const sigset_t * __set, siginfo_t * __info,
			    const struct timespec *__timeout);
    extern int sigwait(const sigset_t * __set, int *__sig);
    extern int sigwaitinfo(const sigset_t * __set, siginfo_t * __info);
#if __LSB_VERSION__ >= 32
    extern int __xpg_sigpause(int);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
