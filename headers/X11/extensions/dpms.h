#ifndef _X11_EXTENSIONS_DPMS_H_
#define _X11_EXTENSIONS_DPMS_H_

#include <X11/Xlib.h>




int DPMSCapable (Display *);
int DPMSDisable (Display *);
int DPMSEnable (Display *);
int DPMSForceLevel (Display *,);
int DPMSGetTimeouts (Display *, *, *, *);
int DPMSGetVersion (Display *, int *, int *);
int DPMSInfo (Display *, *, *);
int DPMSQueryExtension (Display *, int *, int *);
int DPMSSetTimeouts (Display *,,,);
#endif
