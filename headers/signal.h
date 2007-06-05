#ifndef _SIGNAL_H_
#define _SIGNAL_H_

#include <inttypes.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/time.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _SIGSET_NWORDS	(1024/(8*sizeof(unsigned long)))
#define SIGRTMAX	(__libc_current_sigrtmax ())
#define SIGRTMIN	(__libc_current_sigrtmin ())
#define SIG_BLOCK	0
#define SIG_UNBLOCK	1
#if __s390__ && !__s390x__
#define __NUM_ACRS	16
#endif
#if __s390x__
#define __NUM_ACRS	16
#endif
#if __s390__ && !__s390x__
#define __NUM_FPRS	16
#endif
#if __s390x__
#define __NUM_FPRS	16
#endif
#if __s390__ && !__s390x__
#define __NUM_GPRS	16
#endif
#if __s390x__
#define __NUM_GPRS	16
#endif
#define SIG_SETMASK	2
#define NSIG	65


    typedef int sig_atomic_t;

#if __s390x__
/* S390X */
    typedef struct {
	unsigned long int mask;
	unsigned long int addr;
    } __attribute__ ((aligned(8))) _psw_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
    typedef struct {
	unsigned long int mask;
	unsigned long int addr;
    } __attribute__ ((aligned(8))) _psw_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
    typedef struct {
	_psw_t psw;
	unsigned long int gprs[__NUM_GPRS];
	unsigned int acrs[__NUM_ACRS];
    } _s390_regs_common;

#endif
#if __s390x__
/* S390X */
    typedef struct {
	_psw_t psw;
	unsigned long int gprs[16];
	unsigned int acrs[16];
    } _s390_regs_common;

#endif
#if __powerpc__ && !__powerpc64__
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
#if __powerpc64__
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

/* PPC64 stuff that doesn't belong here, but it has to be here to avoid nasty cyclic dependencies*/






/* PPC32 stuff that doesn't belong here, but it has to be here to avoid nasty cyclic dependencies*/






/* Type of a signal handling function.*/


    typedef void (*sighandler_t) (int);


/* Special Signal values*/
#define SIG_HOLD	((sighandler_t) 2)
#define SIG_ERR	((sighandler_t)-1)
#define SIG_DFL	((sighandler_t)0)
#define SIG_IGN	((sighandler_t)1)



/* System defined signals.*/
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
#define SIGSYS	31
#define SIGUNUSED	31
#define SIGILL	4
#define SIGTRAP	5
#define SIGABRT	6
#define SIGIOT	6
#define SIGBUS	7
#define SIGFPE	8
#define SIGKILL	9
#define SIGCLD	SIGCHLD
#define SIGPOLL	SIGIO



/* POSIX 1003.1b sigval*/
#define SV_ONSTACK	(1<<0)
#define SV_INTERRUPT	(1<<1)
#define SV_RESETHAND	(1<<2)


    typedef union sigval sigval_t;

    union sigval {
	int sival_int;
	void *sival_ptr;
    };


/* POSIX 1003.1b sigevent*/
#if __i386__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-3)
#endif
#if __powerpc__ && !__powerpc64__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-3)
#endif
#if __s390__ && !__s390x__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-3)
#endif
#if __ia64__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-4)
#endif
#if __powerpc64__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-4)
#endif
#if __x86_64__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-4)
#endif
#if __s390x__
#define SIGEV_PAD_SIZE	((SIGEV_MAX_SIZE/sizeof(int))-4)
#endif
#define SIGEV_SIGNAL	0
#define SIGEV_NONE	1
#define SIGEV_THREAD	2
#define SIGEV_MAX_SIZE	64


    typedef struct sigevent sigevent_t;


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


/* POSIX 1003.1b siginfo*/
#if __i386__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-3)
#endif
#if __powerpc__ && !__powerpc64__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-3)
#endif
#if __s390__ && !__s390x__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-3)
#endif
#if __ia64__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-4)
#endif
#if __powerpc64__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-4)
#endif
#if __x86_64__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-4)
#endif
#if __s390x__
#define SI_PAD_SIZE	((SI_MAX_SIZE/sizeof(int))-4)
#endif
#define SI_MAX_SIZE	128
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
#define si_timer2	_sifields._timer._timer2


    typedef struct siginfo siginfo_t;


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


/* Values for `si_code'.  Positive values are reserved for kernel-generated
   signals.*/
#define SI_QUEUE	-1
#define SI_TIMER	-2
#define SI_MESGQ	-3
#define SI_ASYNCIO	-4
#define SI_SIGIO	-5
#define SI_TKILL	-6
#define SI_ASYNCNL	-60
#define SI_USER	0
#define SI_KERNEL	0x80



/* `si_code' values for SIGILL signal.*/
#define ILL_ILLOPC	1
#define ILL_ILLOPN	2
#define ILL_ILLADR	3
#define ILL_ILLTRP	4
#define ILL_PRVOPC	5
#define ILL_PRVREG	6
#define ILL_COPROC	7
#define ILL_BADSTK	8



/* `si_code' values for SIGFPE signal.*/
#define FPE_INTDIV	1
#define FPE_INTOVF	2
#define FPE_FLTDIV	3
#define FPE_FLTOVF	4
#define FPE_FLTUND	5
#define FPE_FLTRES	6
#define FPE_FLTINV	7
#define FPE_FLTSUB	8



/* `si_code' values for SIGSEGV signal.*/
#define SEGV_MAPERR	1
#define SEGV_ACCERR	2



/* `si_code' values for SIGBUS signal.*/
#define BUS_ADRALN	1
#define BUS_ADRERR	2
#define BUS_OBJERR	3



/* `si_code' values for SIGTRAP signal.*/
#define TRAP_BRKPT	1
#define TRAP_TRACE	2



/* `si_code' values for SIGCHLD signal.*/
#define CLD_EXITED	1
#define CLD_KILLED	2
#define CLD_DUMPED	3
#define CLD_TRAPPED	4
#define CLD_STOPPED	5
#define CLD_CONTINUED	6



/* `si_code' values for SIGPOLL signal.*/
#define POLL_IN	1
#define POLL_OUT	2
#define POLL_MSG	3
#define POLL_ERR	4
#define POLL_PRI	5
#define POLL_HUP	6



/* sigset_t*/


    typedef struct {
	unsigned long int sig[_SIGSET_NWORDS];
    } sigset_t;


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


#if __i386__
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
#if __s390__ && !__s390x__
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
#if __ia64__
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
#if __powerpc__ && !__powerpc64__
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
#if __powerpc64__
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
#if __s390x__
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
#if __x86_64__
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

/* Structure used in sigaltstack call.*/
#if __ia64__
#define MINSIGSTKSZ	131027
#endif
#if __i386__
#define MINSIGSTKSZ	2048
#endif
#if __powerpc__ && !__powerpc64__
#define MINSIGSTKSZ	2048
#endif
#if __powerpc64__
#define MINSIGSTKSZ	2048
#endif
#if __s390__ && !__s390x__
#define MINSIGSTKSZ	2048
#endif
#if __x86_64__
#define MINSIGSTKSZ	2048
#endif
#if __s390x__
#define MINSIGSTKSZ	2048
#endif
#if __ia64__
#define SIGSTKSZ	262144
#endif
#if __i386__
#define SIGSTKSZ	8192
#endif
#if __powerpc__ && !__powerpc64__
#define SIGSTKSZ	8192
#endif
#if __powerpc64__
#define SIGSTKSZ	8192
#endif
#if __s390__ && !__s390x__
#define SIGSTKSZ	8192
#endif
#if __x86_64__
#define SIGSTKSZ	8192
#endif
#if __s390x__
#define SIGSTKSZ	8192
#endif


    typedef struct sigaltstack stack_t;


    struct sigaltstack {
	void *ss_sp;
	int ss_flags;
	size_t ss_size;
    };


/* Possible values for `ss_flags.'.*/
#define SS_ONSTACK	1
#define SS_DISABLE	2



/* FP registers*/


#if __s390__ && !__s390x__
/* S390 */
    typedef struct {
	unsigned int fpc;
	double fprs[__NUM_FPRS];
    } _s390_fp_regs;

#endif
#if __s390x__
/* S390X */
    typedef struct {
	unsigned int fpc;
	double fprs[__NUM_FPRS];
    } _s390_fp_regs;

#endif
#if __s390__ && !__s390x__
/* S390 */
    typedef struct {
	_s390_regs_common regs;
	_s390_fp_regs fpregs;
    } _sigregs;

#endif
#if __s390x__
/* S390X */
    typedef struct {
	_s390_regs_common regs;
	_s390_fp_regs fpregs;
    } _sigregs;

#endif
#if __i386__
/* IA32 */
    struct _fpreg {
	unsigned short significand[4];
	unsigned short exponent;
    };

#endif
#if __i386__
/* IA32 */
    struct _fpxreg {
	unsigned short significand[4];
	unsigned short exponent;
	unsigned short padding[3];
    };

#endif
#if __x86_64__
/* x86-64 */
    struct _fpxreg {
	unsigned short significand[4];
	unsigned short exponent;
	unsigned short padding[3];
    };

#endif
#if __i386__
/* IA32 */
    struct _xmmreg {
	unsigned long int element[4];
    };

#endif
#if __x86_64__
/* x86-64 */
    struct _xmmreg {
	uint32_t element[4];
    };

#endif
#if __ia64__
/* IA64 */
    struct ia64_fpreg {
	union {
	    unsigned long int bits[2];
	    long double __dummy;	/* force 16-byte alignment */
	} u;
    };

#endif

/* FPU state information*/


#if __i386__
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
	unsigned long int padding[56];
    };

#endif
#if __x86_64__
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

/* Process context when signal delivered*/


#if __i386__
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
#if __powerpc__ && !__powerpc64__
/* PPC32 */
    struct sigcontext {
	long int _unused[4];
	int signal;
	unsigned long int handler;
	unsigned long int oldmask;
	struct pt_regs *regs;
    };

#endif
#if __ia64__
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
#if __x86_64__
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
#if __s390__ && !__s390x__
/* S390 */
    struct sigcontext {
	unsigned long int oldmask[2];
	_sigregs *sregs;
    };

#endif
#if __s390x__
/* S390X */
    struct sigcontext {
	unsigned long int oldmask;
	_sigregs *sregs;
    };

#endif
#if __powerpc64__
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

    extern int __libc_current_sigrtmax(void);
    extern int __libc_current_sigrtmin(void);
    extern sighandler_t __sysv_signal(int, sighandler_t);
    extern char *const _sys_siglist[64];
    extern int killpg(pid_t, int);
    extern void psignal(int, const char *);
    extern int raise(int);
    extern int sigaddset(sigset_t *, int);
    extern int sigandset(sigset_t *, const sigset_t *, const sigset_t *);
    extern int sigdelset(sigset_t *, int);
    extern int sigemptyset(sigset_t *);
    extern int sigfillset(sigset_t *);
    extern int sighold(int);
    extern int sigignore(int);
    extern int siginterrupt(int, int);
    extern int sigisemptyset(const sigset_t *);
    extern int sigismember(const sigset_t *, int);
    extern int sigorset(sigset_t *, const sigset_t *, const sigset_t *);
    extern int sigpending(sigset_t *);
    extern int sigrelse(int);
    extern sighandler_t sigset(int, sighandler_t);
    extern int pthread_kill(pthread_t, int);
    extern int pthread_sigmask(int, const sigset_t *, sigset_t *);
    extern int sigaction(int, const struct sigaction *,
			 struct sigaction *);
    extern int sigwait(const sigset_t *, int *);
    extern int kill(pid_t, int);
    extern int sigaltstack(const struct sigaltstack *,
			   struct sigaltstack *);
    extern sighandler_t signal(int, sighandler_t);
    extern int sigpause(int);
    extern int sigprocmask(int, const sigset_t *, sigset_t *);
    extern int sigreturn(struct sigcontext *);
    extern int sigsuspend(const sigset_t *);
    extern int sigqueue(pid_t, int, const union sigval);
    extern int sigwaitinfo(const sigset_t *, siginfo_t *);
    extern int sigtimedwait(const sigset_t *, siginfo_t *,
			    const struct timespec *);
    extern sighandler_t bsd_signal(int, sighandler_t);
    extern int __xpg_sigpause(int);
#ifdef __cplusplus
}
#endif
#endif
