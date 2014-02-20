#if (__LSB_VERSION__ >= 12 )
#ifndef _UCONTEXT_H_
#define _UCONTEXT_H_

#include <signal.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if defined __powerpc__ && !defined __powerpc64__
#define ELF_NGREG	48
#endif
#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define _SC_GR0_OFFSET	\
	(((char *) &((struct sigcontext *) 0)->sc_gr[0]) - (char *) 0)
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 41
#if defined __powerpc64__
#define define NFPREG	33
#define define NVRREG	34
#endif
#if defined __ia64__
#define rPOS	r16
#define rTMP	r16
#define rCPOS	r17
#define rB5	r18
#define rNAT	r18
#define rB4	r19
#define rB3	r20
#define rB2	r21
#define rB1	r22
#define rB0	r23
#define rRSC	r24
#define rBSP	r25
#define rRNAT	r26
#define rUNAT	r27
#define rFPSR	r28
#define rPFS	r29
#define rLC	r30
#define rPR	r31
#endif
#endif				/* __LSB_VERSION__ >= 4.1 */



#if __LSB_VERSION__ >= 20
#if defined __powerpc64__
/* PPC64 */
    typedef struct _libc_vscr vscr_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct _libc_vrstate vrregset_t
	__attribute__ ((__aligned__(16)));

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct _libc_vrstate vrregset_t
	__attribute__ ((__aligned__(16)));

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 20
#if defined __x86_64__
/* x86-64 */
    struct _libc_fpxreg {
	unsigned short significand[4];
	unsigned short exponent;
	unsigned short padding[3];
    };

/* x86-64 */
    struct _libc_xmmreg {
	uint32_t element[4];
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 41
#if defined __i386__
/* IA32 */
    enum {
	REG_GS = 0,
	REG_FS = 1,
	REG_ES = 2,
	REG_DS = 3,
	REG_EDI = 4,
	REG_ESI = 5,
	REG_EBP = 6,
	REG_ESP = 7,
	REG_EBX = 8,
	REG_EDX = 9,
	REG_ECX = 10,
	REG_EAX = 11,
	REG_TRAPNO = 12,
	REG_ERR = 13,
	REG_EIP = 14,
	REG_CS = 15,
	REG_EFL = 16,
	REG_UESP = 17,
	REG_SS = 18
    };

#endif
#if defined __x86_64__
/* x86-64 */
    enum {
	REG_R8 = 0,
	REG_R9 = 1,
	REG_R10 = 2,
	REG_R11 = 3,
	REG_R12 = 4,
	REG_R13 = 5,
	REG_R14 = 6,
	REG_R15 = 7,
	REG_RDI = 8,
	REG_RSI = 9,
	REG_RBP = 10,
	REG_RBX = 11,
	REG_RDX = 12,
	REG_RAX = 13,
	REG_RCX = 14,
	REG_RSP = 15,
	REG_RIP = 16,
	REG_EFL = 17,
	REG_CSGSFS = 18,
	REG_ERR = 19,
	REG_TRAPNO = 20,
	REG_OLDMASK = 21,
	REG_CR2 = 22
    };

#endif
#endif				/* __LSB_VERSION__ >= 4.1 */

#if __LSB_VERSION__ >= 20
#if defined __powerpc64__
/* PPC64 */
    struct _libc_vscr {
	int __pad[3];
	int vscr_word;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct _libc_vrstate {
	unsigned int vrregs[128];
	unsigned int vrsave;
	unsigned int _pad[2];
	unsigned int vscr;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct _libc_vrstate {
	unsigned int vrregs[128];
	vscr_t vscr;
	unsigned int vrsave;
	unsigned int __pad[3];
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* Type for general register.*/
#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    typedef int greg_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int greg_t;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* Number of general registers.*/
#if defined __i386__
#define NGREG	19
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define NGREG	48
#endif
#if __LSB_VERSION__ >= 13
#if defined __s390x__
#define NGREG	27
#endif
#if defined __s390__ && !defined __s390x__
#define NGREG	36
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __x86_64__
#define NGREG	23
#endif
#if defined __powerpc64__
#define NGREG	48
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */




/* Container for all general registers.*/
#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    typedef greg_t gregset_t[19];

#endif
#if defined __x86_64__
/* x86-64 */
    typedef greg_t gregset_t[23];

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned long int gregset_t[48];

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int gregset_t[48];

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* Number of each register is the `gregset_t' array.*/

/* Definitions taken from the kernel headers.*/
#if __LSB_VERSION__ >= 20
#if defined __s390x__
/* S390X */
    typedef union {
	double d;
	float f;
    } fpreg_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef union {
	double d;
	float f;
    } fpreg_t;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if defined __i386__
/* IA32 */
    struct _libc_fpreg {
	unsigned short significand[4];
	unsigned short exponent;
    };

#endif


/* Structure to describe FPU registers.*/
#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    typedef struct _libc_fpstate *fpregset_t;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	unsigned int fpc;
	fpreg_t fprs[16];
    } fpregset_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	unsigned int fpc;
	fpreg_t fprs[16];
    } fpregset_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct _libc_fpstate *fpregset_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct _libc_fpstate fpregset_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef double fpregset_t[33];

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    struct _libc_fpstate {
	unsigned long int cw;
	unsigned long int sw;
	unsigned long int tag;
	unsigned long int ipoff;
	unsigned long int cssel;
	unsigned long int dataoff;
	unsigned long int datasel;
	struct _libc_fpreg _st[8];
	unsigned long int status;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct _libc_fpstate {
	uint16_t cwd;
	uint16_t swd;
	uint16_t ftw;
	uint16_t fop;
	uint64_t rip;
	uint64_t rdp;
	uint32_t mxcsr;
	uint32_t mxcr_mask;
	struct _libc_fpxreg _st[8];
	struct _libc_xmmreg _xmm[16];
	uint32_t padding[24];
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 20
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct _libc_fpstate {
	double fpregs[32];
	double fpscr;
	int _pad[2];
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */



/* Context to describe whole processor state.*/
#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    typedef struct {
	gregset_t gregs;
	fpregset_t fpregs;
	unsigned long int oldmask;
	unsigned long int cr2;
    } mcontext_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct sigcontext mcontext_t;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	_psw_t psw;
	unsigned long int gregs[16];
	unsigned int aregs[16];
	fpregset_t fpregs;
    } mcontext_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	_psw_t psw;
	unsigned long int gregs[16];
	unsigned int aregs[16];
	fpregset_t fpregs;
    } mcontext_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	gregset_t gregs;
	fpregset_t fpregs;
	unsigned long int __reserved1[8];
    } mcontext_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	gregset_t gregs;
	fpregset_t fpregs;
	vrregset_t vrregs;
    } mcontext_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	unsigned long int __unused[4];
	int signal;
	int pad0;
	unsigned long int handler;
	unsigned long int oldmask;
	struct pt_regs *regs;
	gregset_t gp_regs;
	fpregset_t fp_regs;
	vrregset_t *v_regs;
	long int vmx_reserve[69];
    } mcontext_t;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


#if __LSB_VERSION__ >= 20
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    union uc_regs_ptr {
	struct pt_regs *regs;
	mcontext_t *uc_regs;
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* Userlevel context.*/
#if __LSB_VERSION__ >= 32
#if defined __ia64__
#define uc_mcontext	_u._mc
#define uc_sigmask	_u._mc.sc_mask
#define uc_stack	_u._mc.sc_stack
#define uc_link	_u._uc._link
#endif
#endif				/* __LSB_VERSION__ >= 3.2 */



#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    typedef struct ucontext ucontext_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct ucontext ucontext_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct ucontext ucontext_t;

#endif
#if defined __s390x__
/* S390X */
    typedef struct ucontext ucontext_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct ucontext ucontext_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct ucontext ucontext_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct ucontext ucontext_t;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    struct ucontext {
	unsigned long int uc_flags;
	struct ucontext *uc_link;
	stack_t uc_stack;
	mcontext_t uc_mcontext;
	sigset_t uc_sigmask;
	struct _libc_fpstate __fpregs_mem;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct ucontext {
	union {
	    mcontext_t _mc;
	    struct {
		unsigned long int _pad[_SC_GR0_OFFSET / 8];
		struct ucontext *_link;
	    } _uc;
	} _u;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct ucontext {
	unsigned long int uc_flags;
	struct ucontext *uc_link;
	stack_t uc_stack;
	int uc_pad[7];
	union uc_regs_ptr uc_mcontext;
	sigset_t uc_sigmask;
	char uc_reg_space[sizeof(mcontext_t) + 12];
    };

#endif
#if defined __s390x__
/* S390X */
    struct ucontext {
	unsigned long int uc_flags;
	struct ucontext *uc_link;
	stack_t uc_stack;
	mcontext_t uc_mcontext;
	sigset_t uc_sigmask;
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct ucontext {
	unsigned long int uc_flags;
	struct ucontext *uc_link;
	stack_t uc_stack;
	mcontext_t uc_mcontext;
	sigset_t uc_sigmask;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct ucontext {
	unsigned long int uc_flags;
	struct ucontext *uc_link;
	stack_t uc_stack;
	mcontext_t uc_mcontext;
	sigset_t uc_sigmask;
	struct _libc_fpstate __fpregs_mem;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct ucontext {
	unsigned long int uc_flags;
	struct ucontext *uc_link;
	stack_t uc_stack;
	sigset_t uc_sigmask;
	mcontext_t uc_mcontext;
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* Function prototypes */

    extern int getcontext(ucontext_t * __ucp);
    extern void makecontext(ucontext_t * __ucp, void (*__func) (void),
			    int __argc, ...);
    extern int setcontext(const struct ucontext *__ucp);
    extern int swapcontext(ucontext_t * __oucp,
			   const struct ucontext *__ucp);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
