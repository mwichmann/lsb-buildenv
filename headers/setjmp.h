#ifndef _SETJMP_H_
#define _SETJMP_H_

#include <signal.h>


typedef struct __jmp_buf_tag
{
  __jmp_buf __jmpbuf;
  int __mask_was_saved;
  __sigset_t __saved_mask;
}
jmp_buf;

typedef jmp_buf sigjmp_buf;

typedef int __jmp_buf;


int __sigsetjmp (jmp_buf, int);
void longjmp (jmp_buf, int);
void siglongjmp (sigjmp_buf, int);
void _longjmp (jmp_buf, int);
#endif
