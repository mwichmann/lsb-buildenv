#ifndef _X11_EXTENSIONS_DPMS_H_
#define _X11_EXTENSIONS_DPMS_H_

#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern int DPMSCapable(Display *);
    extern int DPMSDisable(Display *);
    extern int DPMSEnable(Display *);
    extern int DPMSForceLevel(Display *,);
    extern int DPMSGetTimeouts(Display *, *, *, *);
    extern int DPMSGetVersion(Display *, int *, int *);
    extern int DPMSInfo(Display *, *, *);
    extern int DPMSQueryExtension(Display *, int *, int *);
    extern int DPMSSetTimeouts(Display *,,,);
#ifdef __cplusplus
}
#endif
#endif
