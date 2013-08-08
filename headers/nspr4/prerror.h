#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRERROR_H_
#define _NSPR4_PRERROR_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prerror_h___


    typedef PRInt32 PRErrorCode;


/* Function prototypes */

    extern PRErrorCode PR_GetError(void);
    extern void PR_SetError(PRErrorCode errorCode, PRInt32 oserr);
#if __LSB_VERSION__ >= 50
    extern PRInt32 PR_GetErrorText(char *text);
    extern PRInt32 PR_GetErrorTextLength(void);
    extern PRInt32 PR_GetOSError(void);
    extern void PR_SetErrorText(PRIntn textLength, const char *text);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
