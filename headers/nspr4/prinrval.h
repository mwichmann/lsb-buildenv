#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRINRVAL_H_
#define _NSPR4_PRINRVAL_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prinrval_h
#if __LSB_VERSION__ >= 50
#define PR_INTERVAL_NO_WAIT	0UL
#define PR_INTERVAL_NO_TIMEOUT	0xffffffffUL
#endif				/* __LSB_VERSION__ >= 5.0 */



    typedef PRUint32 PRIntervalTime;


/* Function prototypes */

    extern PRIntervalTime PR_MillisecondsToInterval(PRUint32 milli);
    extern PRIntervalTime PR_SecondsToInterval(PRUint32 seconds);
#if __LSB_VERSION__ >= 50
    extern PRIntervalTime PR_IntervalNow(void);
    extern PRUint32 PR_IntervalToMicroseconds(PRIntervalTime ticks);
    extern PRUint32 PR_IntervalToMilliseconds(PRIntervalTime ticks);
    extern PRUint32 PR_IntervalToSeconds(PRIntervalTime ticks);
    extern PRIntervalTime PR_MicrosecondsToInterval(PRUint32 micro);
    extern PRUint32 PR_TicksPerSecond(void);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
