#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRINRVAL_H_
#define _NSPR4_PRINRVAL_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef PRUint32 PRIntervalTime;


/* Function prototypes */

    extern PRIntervalTime PR_MillisecondsToInterval(PRUint32);
    extern PRIntervalTime PR_SecondsToInterval(PRUint32);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
