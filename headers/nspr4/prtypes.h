#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRTYPES_H_
#define _NSPR4_PRTYPES_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prtypes_h___


    typedef int PRInt32;

    typedef unsigned long int PRUword;

    typedef int PRIntn;

    typedef unsigned long int PRUint64;

    typedef unsigned char PRUint8;

    typedef short int PRInt16;

    typedef long int PRInt64;

    typedef PRIntn PRBool;

    typedef unsigned short PRUint16;

    typedef unsigned int PRUint32;

    typedef size_t PRSize;

    typedef unsigned int PRUintn;

    typedef PRInt64 PROffset64;

    typedef PRInt32 PROffset32;

    typedef enum {
	PR_FAILURE = -1,
	PR_SUCCESS = 0
    } PRStatus;

#if __LSB_VERSION__ >= 50
    typedef signed char PRInt8;

#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
