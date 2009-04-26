#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRIVATE_PPRIO_H_
#define _NSPR4_PRIVATE_PPRIO_H_

#include <nspr4/prio.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define pprio_h___


    typedef PRInt32 PROsfd;


/* Function prototypes */

    extern PRFileDesc *PR_ImportTCPSocket(PROsfd osfd);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
