#ifndef _SETJMP_H_
#define _SETJMP_H_

#include <signal.h>

#define setjmp(env)	_setjmp(env)
#define sigsetjmp(a,b)	__sigsetjmp(a,b)





typedef int __jmp_buf[560];




struct __jmp_buf_tag
{
  __jmp_buf __jmpbuf;
  int __mask_was_saved;
  sigset_t __saved_mask;
}
 ;




typedef struct __jmp_buf_tag jmp_buf[1];

typedef jmp_buf sigjmp_buf;


extern int __sigsetjmp (jmp_buf, int);
extern void longjmp (jmp_buf, int);
extern void siglongjmp (sigjmp_buf, int);
extern int _setjmp (jmp_buf);
#endif
