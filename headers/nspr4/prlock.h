#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRLOCK_H_
#define _NSPR4_PRLOCK_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prlock_h___


    typedef struct PRLock PRLock;


/* Function prototypes */

#if __LSB_VERSION__ >= 50
    extern void PR_DestroyLock(PRLock * lock);
    extern void PR_Lock(PRLock * lock);
    extern PRLock *PR_NewLock(void);
    extern PRStatus PR_Unlock(PRLock * lock);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
