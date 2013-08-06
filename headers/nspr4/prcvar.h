#if (__LSB_VERSION__ >= 50 )
#ifndef _NSPR4_PRCVAR_H_
#define _NSPR4_PRCVAR_H_

#include <nspr4/prinrval.h>
#include <nspr4/prlock.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct PRCondVar PRCondVar;


/* Function prototypes */

    extern void PR_DestroyCondVar(PRCondVar * cvar);
    extern PRCondVar *PR_NewCondVar(PRLock * lock);
    extern PRStatus PR_NotifyAllCondVar(PRCondVar * cvar);
    extern PRStatus PR_NotifyCondVar(PRCondVar * cvar);
    extern PRStatus PR_WaitCondVar(PRCondVar * cvar,
				   PRIntervalTime timeout);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
