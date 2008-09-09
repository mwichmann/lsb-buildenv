#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRERROR_H_
#define _NSPR4_PRERROR_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef PRInt32 PRErrorCode;


/* Function prototypes */

    extern PRErrorCode PR_GetError(void);
    extern PRInt32 PR_GetOSError(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
