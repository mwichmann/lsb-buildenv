#ifndef _STDDEF_H_
#define _STDDEF_H_


#ifdef __cplusplus
extern "C" {
#endif


#define offsetof(TYPE,MEMBER)	((size_t)&((TYPE*)0)->MEMBER)
#define NULL	(0L)


#if !defined(__cplusplus)
#if defined __i386__
/* IA32 */
    typedef long int wchar_t;

#endif
#endif
#if !defined(__cplusplus)
#if defined __ia64__
/* IA64 */
    typedef int wchar_t;

#endif
#endif
#if !defined(__cplusplus)
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef long int wchar_t;

#endif
#endif
#if !defined(__cplusplus)
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef int wchar_t;

#endif
#endif
#if !defined(__cplusplus)
#if defined __powerpc64__
/* PPC64 */
    typedef int wchar_t;

#endif
#endif
#if !defined(__cplusplus)
#if defined __s390x__
/* S390X */
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

#ifdef __cplusplus
}
#endif
#endif
