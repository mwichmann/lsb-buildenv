#ifndef _X11_EXTENSIONS_SECURITY_H_
#define _X11_EXTENSIONS_SECURITY_H_

#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xauth.h>



typedef unsigned long XSecurityAuthorization;

typedef struct
{
  unsigned int timeout;
  unsigned int trust_level;
  XID group;
  long event_mask;
}
XSecurityAuthorizationAttributes;


Xauth *XSecurityAllocXauth (void);
void XSecurityFreeXauth (Xauth *);
Xauth *XSecurityGenerateAuthorization (Display *, Xauth *, unsigned long,
				       XSecurityAuthorizationAttributes *,
				       XSecurityAuthorization *);
int XSecurityQueryExtension (Display *, int *, int *);
int XSecurityRevokeAuthorization (Display *, XSecurityAuthorization);
#endif
