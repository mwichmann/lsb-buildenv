#ifndef _SETJMP_H_
#define _SETJMP_H_

#include <signal.h>

#ifdef __cplusplus
extern "C" {
#endif


#define setjmp(env)	_setjmp(env)
#define sigsetjmp(a,b)	__sigsetjmp(a,b)





#if defined ___i386__
/* IA32 */
    typedef int __jmp_buf[6];

#endif
#if defined __ia64__
/* IA64 */
    typedef long int __jmp_buf[70] __attribute__ ((aligned(16)));

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef long int __jmp_buf[112] __attribute__ ((aligned(16)));

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef int __jmp_buf[14];

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int __jmp_buf[64] __attribute__ ((aligned(16)));

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int __jmp_buf[8];

#endif
#if defined __s390x__
/* S390X */
    typedef long int __jmp_buf[18];

#endif



    struct __jmp_buf_tag {
	__jmp_buf __jmpbuf;
	int __mask_was_saved;
	sigset_t __saved_mask;
    };




    typedef struct __jmp_buf_tag jmp_buf[1];

    typedef jmp_buf sigjmp_buf;


    extern int __sigsetjmp(jmp_buf, int);
    extern void longjmp(jmp_buf, int);
    extern void siglongjmp(sigjmp_buf, int);
    extern void _longjmp(jmp_buf, int);
    extern int _setjmp(jmp_buf);
#ifdef __cplusplus
}
#endif
#endif
