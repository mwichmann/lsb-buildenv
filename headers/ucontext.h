#ifndef _UCONTEXT_H_
#define _UCONTEXT_H_

#include <signal.h>

#ifdef __cplusplus
extern "C"
{
#endif





/* Type for general register.*/


#if defined(__i386__)
/* IA32 */
  typedef int greg_t;

#endif

/* Number of general registers.*/
#if defined(__i386__)
#define NGREG	19
#endif
#if defined(__powerpc__)
#define NGREG	48
#endif



/* Container for all general registers.*/


#if defined(__i386__)
/* IA32 */
  typedef greg_t gregset_t[19];

#endif

/* Number of each register is the `gregset_t' array.*/



/* Definitions taken from the kernel headers.*/


#if defined(__i386__)
/* IA32 */
  struct _libc_fpreg
  {
    unsigned short significand[4];
    unsigned short exponent;
  }
   ;

#endif




/* Structure to describe FPU registers.*/


#if defined(__i386__)
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
#if defined(__i386__)
/* IA32 */
  typedef struct _libc_fpstate *fpregset_t;

#endif

/* Context to describe whole processor state.*/


  typedef struct
  {
    gregset_t gregs;
    fpregset_t fpregs;
    unsigned long oldmask;
    unsigned long cr2;
  }
  mcontext_t;


/* Userlevel context.*/


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


  extern int getcontext (void);
  extern int makecontext (void);
  extern int setcontext (void);
  extern int swapcontext (void);
#ifdef __cplusplus
}
#endif
#endif
