#if (__LSB_VERSION__ >= 11 )
#ifndef _SYS_TIMEX_H_
#define _SYS_TIMEX_H_

#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

#if __LSB_VERSION__ >= 10
#if __LSB_VERSION__ < 30
#if defined __i386__
/* IA32 */
    extern int adjtimex(struct timex *);
#endif
    extern int adjtimex(struct timex *);
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 30
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern int adjtimex(struct timex *);
#endif
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if __LSB_VERSION__ < 30
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern int adjtimex(struct timex *);
#endif
#if defined __ia64__
/* IA64 */
    extern int adjtimex(struct timex *);
#endif
#if defined __s390x__
/* S390X */
    extern int adjtimex(struct timex *);
#endif
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if __LSB_VERSION__ < 30
#if defined __x86_64__
/* x86-64 */
    extern int adjtimex(struct timex *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern int adjtimex(struct timex *);
#endif
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 2.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
