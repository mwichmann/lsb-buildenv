#if (__LSB_VERSION__ >= 10 )
#ifndef _LSB_TYPES_H_
#define _LSB_TYPES_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/* 
   Special header to avoid header inclusion loops.
   DO NOT include this header directly.
*/
#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    typedef int32_t ssize_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef int32_t ssize_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef int32_t ssize_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef int64_t ssize_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef int64_t ssize_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef int64_t ssize_t;

#endif
#if defined __s390x__
/* S390X */
    typedef int64_t ssize_t;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
