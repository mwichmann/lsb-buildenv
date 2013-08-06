#if (__LSB_VERSION__ >= 50 )
#ifndef _NSPR4_PRATOM_H_
#define _NSPR4_PRATOM_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define PR_ATOMIC_ADD(val)	PR_AtomicAdd(val)
#define PR_ATOMIC_DECREMENT(val)	PR_AtomicDecrement(val)
#define PR_ATOMIC_INCREMENT(val)	PR_AtomicIncrement(val)
#define PR_ATOMIC_SET(val)	PR_AtomicSet(val)



/* Function prototypes */

    extern PRInt32 PR_AtomicAdd(PRInt32 * ptr, PRInt32 val);
    extern PRInt32 PR_AtomicDecrement(PRInt32 * val);
    extern PRInt32 PR_AtomicIncrement(PRInt32 * val);
    extern PRInt32 PR_AtomicSet(PRInt32 * val, PRInt32 newval);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
