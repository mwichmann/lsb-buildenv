#ifndef _UCONTEXT_H_
#define _UCONTEXT_H_

#include <signal.h>




/* Type for general register.*/


typedef int greg_t;


/* Number of general registers.*/
#if defined(__i386__)
#define NGREG	19
#endif



/* Container for all general registers.*/


typedef greg_t gregset_t[19];


/* Number of each register is the `gregset_t' array.*/



/* Definitions taken from the kernel headers.*/


struct _libc_fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
}
 ;





/* Structure to describe FPU registers.*/


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

typedef struct _libc_fpstate
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
fpregset_t;


/* Context to describe whole processor state.*/


typedef struct mcontext
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


int getcontext (void);
int makecontext (void);
int setcontext (void);
int swapcontext (void);
#endif
