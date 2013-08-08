#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRINIT_H_
#define _NSPR4_PRINIT_H_

#include <nspr4/prthread.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prinit_h___


#if __LSB_VERSION__ >= 50
    typedef PRIntn(*PRPrimordialFn) (PRIntn argc, char **argv);

#endif				/* __LSB_VERSION__ >= 5.0 */


/* Function prototypes */

    extern PRStatus PR_Cleanup(void);
#if __LSB_VERSION__ >= 50
    extern void PR_Abort(void);
    extern void PR_Init(PRThreadType type, PRThreadPriority priority,
			PRUintn maxPTDs);
    extern PRIntn PR_Initialize(PRPrimordialFn prmain, PRIntn argc,
				char **argv, PRUintn maxPTDs);
    extern PRBool PR_Initialized(void);
    extern void PR_ProcessExit(PRIntn status);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
