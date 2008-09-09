#if (__LSB_VERSION__ >= 11 )
#ifndef _STDDEF_H_
#define _STDDEF_H_


#ifdef __cplusplus
extern "C" {
#endif


#ifndef NULL
#  ifdef __cplusplus
#    define NULL        (0L)
#  else
#    define NULL        ((void*) 0)
#  endif
#endif
#if __LSB_VERSION__ >= 12
#define offsetof(TYPE,MEMBER)	((size_t)&((TYPE*)0)->MEMBER)
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
#if !defined(__cplusplus)
#if defined __i386__
/* IA32 */
    typedef long int wchar_t;

#endif
#endif
#if !defined(__cplusplus)
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef long int wchar_t;

#endif
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if !defined(__cplusplus)
#if defined __ia64__
/* IA64 */
    typedef int wchar_t;

#endif
#endif
#if !defined(__cplusplus)
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef int wchar_t;

#endif
#endif
#if !defined(__cplusplus)
#if defined __s390x__
/* S390X */
    typedef int wchar_t;

#endif
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if !defined(__cplusplus)
#if defined __powerpc64__
/* PPC64 */
    typedef int wchar_t;

#endif
#endif
#if !defined(__cplusplus)
#if defined __x86_64__
/* x86-64 */
    typedef int wchar_t;

#endif
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned int size_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int size_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int size_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned long int size_t;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned int size_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int size_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int size_t;

#endif
#if defined __i386__
/* IA32 */
    typedef int ptrdiff_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef int ptrdiff_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef int ptrdiff_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int ptrdiff_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int ptrdiff_t;

#endif
#if defined __s390x__
/* S390X */
    typedef long int ptrdiff_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef long int ptrdiff_t;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
