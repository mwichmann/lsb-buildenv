#ifndef _UCONTEXT_H_
#define _UCONTEXT_H_

#include <inttypes.h>
#include <signal.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif


#if __ia64__
#define _SC_GR0_OFFSET	(((char *) &((struct sigcontext *) 0)->sc_gr[0]) - (char *) 0)
#endif


#if __powerpc__ && !__powerpc64__
/* PPC32 */
  struct pt_regs
  {
    unsigned long gpr[32];
    unsigned long nip;
    unsigned long msr;
    unsigned long orig_gpr3;	/* Used for restarting system calls */
    unsigned long ctr;
    unsigned long link;
    unsigned long xer;
    unsigned long ccr;
    unsigned long mq;		/* 601 only (not used at present). Used on APUS to hold IPL val */
    unsigned long trap;		/* Reason for being here */
    unsigned long dar;		/* Fault registers */
    unsigned long dsisr;
    unsigned long result;	/* Result of a system call */
  }
   ;

#endif
#if __x86_64__
/* x86-64 */
  struct _libc_fpxreg
  {
    unsigned short significand[4];
    unsigned short exponent;
    unsigned short padding[3];
  }
   ;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef struct _libc_vrstate
  {
    unsigned int vrregs[128];
    unsigned int vscr;
    unsigned int vrsave;
    unsigned int _pad[2];
  }
  vrregset_t __attribute__ ((__aligned__ (16)));

#endif

/* Type for general register.*/


#if __i386__
/* IA32 */
  typedef int greg_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef long greg_t;

#endif

/* Number of general registers.*/
#if __i386__
#define NGREG	19
#endif
#if __x86_64__
#define NGREG	23
#endif
#if __s390x__
#define NGREG	27
#endif
#if __s390__ && !__s390x__
#define NGREG	36
#endif
#if __powerpc__ && !__powerpc64__
#define NGREG	48
#endif
#if __powerpc64__
#define NGREG	48
#endif



/* Container for all general registers.*/


#if __i386__
/* IA32 */
  typedef greg_t gregset_t[19];

#endif
#if __x86_64__
/* x86-64 */
  typedef greg_t gregset_t[23];

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef unsigned long gregset_t[48];

#endif

/* Number of each register is the `gregset_t' array.*/



/* Definitions taken from the kernel headers.*/


#if __i386__
/* IA32 */
  struct _libc_fpreg
  {
    unsigned short significand[4];
    unsigned short exponent;
  }
   ;

#endif
#if __s390x__
/* S390X */
  typedef union
  {
    double d;
    float f;
  }
  fpreg_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef union
  {
    double d;
    float f;
  }
  fpreg_t;

#endif




/* Structure to describe FPU registers.*/


#if __i386__
/* IA32 */
  struct _libc_fpstate
  {
    unsigned long cw;
    unsigned long sw;
    unsigned long tag;
    unsigned long ipoff;
    unsigned long cssel;
    unsigned long dataoff;
    unsigned long datasel;
    struct _libc_fpreg _st[8];
    unsigned long status;
  }
   ;

#endif
#if __i386__
/* IA32 */
  typedef struct _libc_fpstate *fpregset_t;

#endif
#if __s390x__
/* S390X */
  typedef struct
  {
    unsigned int fpc;
    fpreg_t fprs[16];
  }
  fpregset_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef struct
  {
    unsigned int fpc;
    fpreg_t fprs[16];
  }
  fpregset_t;

#endif
#if __x86_64__
/* x86-64 */
  struct _libc_xmmreg
  {
    uint32_t element[4];
  }
   ;

#endif
#if __x86_64__
/* x86-64 */
  struct _libc_fpstate
  {
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
  }
   ;

#endif
#if __x86_64__
/* x86-64 */
  typedef struct _libc_fpstate *fpregset_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  struct _libc_fpstate
  {
    double fpregs[32];
    double fpscr;
    int _pad[2];
  }
   ;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef struct _libc_fpstate fpregset_t;

#endif




/* Context to describe whole processor state.*/


#if __i386__
/* IA32 */
  typedef struct
  {
    gregset_t gregs;
    fpregset_t fpregs;
    unsigned long oldmask;
    unsigned long cr2;
  }
  mcontext_t;

#endif
#if __ia64__
/* IA64 */
  typedef struct sigcontext mcontext_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef struct sigcontext mcontext_t;

#endif
#if __s390x__
/* S390X */
  typedef struct
  {
    _psw_t psw;
    unsigned long gregs[16];
    unsigned int aregs[16];
    fpregset_t fpregs;
  }
  mcontext_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef struct
  {
    _psw_t psw;
    unsigned long gregs[16];
    unsigned int aregs[16];
    fpregset_t fpregs;
  }
  mcontext_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef struct
  {
    gregset_t gregs;
    fpregset_t fpregs;
    unsigned long __reserved1[8];
  }
  mcontext_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef struct
  {
    gregset_t gregs;
    fpregset_t fpregs;
    vrregset_t vrregs;
  }
  mcontext_t;

#endif



#if __powerpc__ && !__powerpc64__
/* PPC32 */
  union uc_regs_ptr
  {
    struct pt_regs *regs;
    mcontext_t *uc_regs;
  }
   ;

#endif

/* Userlevel context.*/


#if __i386__
/* IA32 */
  typedef struct ucontext
  {
    unsigned long uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  }
  ucontext_t;

#endif
#if __ia64__
/* IA64 */
  typedef struct ucontext
  {
    union
    {
      mcontext_t _mc;
      struct
      {
	unsigned long _pad[_SC_GR0_OFFSET / 8];
	struct ucontext *_link;
      }
      _uc;
    }
    _u;
  }
  ucontext_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef struct ucontext
  {
    unsigned long uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    int uc_pad[7];
    union uc_regs_ptr uc_mcontext;
    sigset_t uc_sigmask;
    char uc_reg_space[sizeof (mcontext_t) + 12];
  }
  ucontext_t;

#endif
#if __s390x__
/* S390X */
  typedef struct ucontext
  {
    unsigned long uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
  }
  ucontext_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef struct ucontext
  {
    unsigned long uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
  }
  ucontext_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef struct ucontext
  {
    unsigned long uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  }
  ucontext_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef struct ucontext
  {
    unsigned long uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    sigset_t uc_sigmask;
    mcontext_t uc_mcontext;
  }
  ucontext_t;

#endif

  extern int getcontext (ucontext_t *);
  extern int makecontext (ucontext_t *, void (*func) (void), int, ...);
  extern int setcontext (ucontext_t * const);
  extern int swapcontext (ucontext_t *, ucontext_t *);
#ifdef __cplusplus
}
#endif
#endif
