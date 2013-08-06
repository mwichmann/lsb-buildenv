#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRTHREAD_H_
#define _NSPR4_PRTHREAD_H_

#include <nspr4/prinrval.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prthread_h___


    typedef struct PRThread PRThread;

#if __LSB_VERSION__ >= 50
    typedef enum PRThreadType {
	PR_USER_THREAD,
	PR_SYSTEM_THREAD
    } PRThreadType;

    typedef enum PRThreadScope {
	PR_LOCAL_THREAD,
	PR_GLOBAL_THREAD,
	PR_GLOBAL_BOUND_THREAD
    } PRThreadScope;

    typedef enum PRThreadState {
	PR_JOINABLE_THREAD,
	PR_UNJOINABLE_THREAD
    } PRThreadState;

    typedef enum PRThreadPriority {
	PR_PRIORITY_FIRST = 0,
	PR_PRIORITY_LOW = 0,
	PR_PRIORITY_NORMAL = 1,
	PR_PRIORITY_HIGH = 2,
	PR_PRIORITY_URGENT = 3,
	PR_PRIORITY_LAST = 3
    } PRThreadPriority;

    typedef void (*PRThreadPrivateDTOR) (void *);

#endif				/* __LSB_VERSION__ >= 5.0 */


/* Function prototypes */

    extern PRStatus PR_Interrupt(PRThread * thread);
#if __LSB_VERSION__ >= 50
    extern PRStatus PR_ClearInterrupt(void);
    extern void *PR_GetThreadPrivate(PRUintn tpdIndex);
    extern PRThreadScope PR_GetThreadScope(const PRThread * thread);
    extern PRThreadState PR_GetThreadState(const PRThread * thread);
    extern PRStatus PR_NewThreadPrivateIndex(PRUintn * newIndex,
					     PRThreadPrivateDTOR
					     destructor);
    extern PRStatus PR_SetThreadPrivate(PRUintn tpIndex, void *priv);
    extern PRStatus PR_Sleep(PRIntervalTime ticks);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
