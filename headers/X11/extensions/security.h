
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
