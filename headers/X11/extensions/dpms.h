#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_EXTENSIONS_DPMS_H_
#define _X11_EXTENSIONS_DPMS_H_

#include <X11/Xlib.h>
#include <X11/Xmd.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define DPMSModeOn	0
#define DPMSModeStandby	1
#define DPMSModeSuspend	2
#define DPMSModeOff	3
#endif				/* __LSB_VERSION__ >= 1.2 */




/* Function prototypes */

    extern int DPMSCapable(Display *);
    extern int DPMSDisable(Display *);
    extern int DPMSEnable(Display *);
    extern int DPMSForceLevel(Display *, CARD16);
    extern int DPMSGetTimeouts(Display *, CARD16 *, CARD16 *, CARD16 *);
    extern int DPMSGetVersion(Display *, int *, int *);
    extern int DPMSInfo(Display *, CARD16 *, BOOL *);
    extern int DPMSQueryExtension(Display *, int *, int *);
    extern int DPMSSetTimeouts(Display *, CARD16, CARD16, CARD16);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
