/*
 * 76 Default HeaderGroup for X11/extensions/dpms.h
 */

int DPMSCapable(Display *);
int DPMSDisable(Display *);
int DPMSEnable(Display *);
int DPMSForceLevel(Display *,);
int DPMSGetTimeouts(Display *, *, *, *);
int DPMSGetVersion(Display *, int *, int *);
int DPMSInfo(Display *, *, *);
int DPMSQueryExtension(Display *, int *, int *);
int DPMSSetTimeouts(Display *,,,);
