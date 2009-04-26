#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRTHREAD_H_
#define _NSPR4_PRTHREAD_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prthread_h___


    typedef struct PRThread PRThread;


/* Function prototypes */

    extern PRStatus PR_Interrupt(PRThread * thread);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
