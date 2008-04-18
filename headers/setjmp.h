#if (__LSB_VERSION__ >= 10 )
#ifndef _SETJMP_H_
#define _SETJMP_H_

#include <signal.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define setjmp(env)	_setjmp(env)
#define sigsetjmp(a,b)	__sigsetjmp(a,b)
#endif				// __LSB_VERSION__ >= 1.1




#if __LSB_VERSION__ >= 20
#if defined __i386__
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
#endif				// __LSB_VERSION__ >= 2.0


#if __LSB_VERSION__ >= 12
    struct __jmp_buf_tag {
	__jmp_buf __jmpbuf;
	int __mask_was_saved;
	sigset_t __saved_mask;
    };

#endif				// __LSB_VERSION__ >= 1.2


#if __LSB_VERSION__ >= 10
    typedef struct __jmp_buf_tag jmp_buf[1];

    typedef jmp_buf sigjmp_buf;

#endif				// __LSB_VERSION__ >= 1.0


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int __sigsetjmp(jmp_buf, int);
    extern void _longjmp(jmp_buf, int);
    extern int _setjmp(jmp_buf);
    extern void longjmp(jmp_buf, int);
    extern void siglongjmp(sigjmp_buf, int);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
