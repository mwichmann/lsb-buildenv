#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRTIME_H_
#define _NSPR4_PRTIME_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef PRInt64 PRTime;


/* Function prototypes */

    extern PRTime PR_Now(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
