#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_EXTENSIONS_DPMS_H_
#define _X11_EXTENSIONS_DPMS_H_

#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define DPMSModeOn	0
#define DPMSModeStandby	1
#define DPMSModeSuspend	2
#define DPMSModeOff	3
#endif				// __LSB_VERSION__ >= 1.2




// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int DPMSCapable(Display *);
    extern int DPMSDisable(Display *);
    extern int DPMSEnable(Display *);
    extern int DPMSForceLevel(Display *,);
    extern int DPMSGetTimeouts(Display *, *, *, *);
    extern int DPMSGetVersion(Display *, int *, int *);
    extern int DPMSInfo(Display *, *, *);
    extern int DPMSQueryExtension(Display *, int *, int *);
    extern int DPMSSetTimeouts(Display *,,,);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
