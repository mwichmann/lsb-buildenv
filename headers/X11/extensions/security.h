#ifndef _X11_EXTENSIONS_SECURITY_H_
#define _X11_EXTENSIONS_SECURITY_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xauth.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef unsigned long int XSecurityAuthorization;

    typedef struct {
	unsigned int timeout;
	unsigned int trust_level;
	XID group;
	long int event_mask;
    } XSecurityAuthorizationAttributes;


    extern Xauth *XSecurityAllocXauth(void);
    extern void XSecurityFreeXauth(Xauth *);
    extern Xauth *XSecurityGenerateAuthorization(Display *, Xauth *,
						 unsigned long int,
						 XSecurityAuthorizationAttributes
						 *,
						 XSecurityAuthorization *);
    extern int XSecurityQueryExtension(Display *, int *, int *);
    extern int XSecurityRevokeAuthorization(Display *,
					    XSecurityAuthorization);
#ifdef __cplusplus
}
#endif
#endif
