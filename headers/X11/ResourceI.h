#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_RESOURCEI_H_
#define _X11_RESOURCEI_H_

#include <X11/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _XtresourceI_h
#define StringToClass(string)	XrmStringToQuark(string)
#define StringToName(string)	XrmStringToQuark(string)
#define StringToQuark(string)	XrmStringToQuark(string)



/* Function prototypes */

    extern void _XtCopyFromArg(XtArgVal, char *, unsigned int);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
