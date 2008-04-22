#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_EXTENSIONS_SECURITY_H_
#define _X11_EXTENSIONS_SECURITY_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xauth.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define XSecurityAuthorizationName	"XC-QUERY-SECURITY-1"
#define XSecurityAuthorizationRevokedMask	(1<<0)
#define XSecurityTimeout	(1<<0)
#define XSecurityTrustLevel	(1<<1)
#define XSecurityGroup	(1<<2)
#define XSecurityEventMask	(1<<3)
#define XSecurityAllAuthorizationAttributes	(XSecurityTimeout | XSecurityTrustLevel | XSecurityGroup | XSecurityEventMask)
#define XSecurityAuthorizationRevoked	0
#define XSecurityBadAuthorization	0
#define XSecurityClientTrusted	0
#define XSecurityBadAuthorizationProtocol	1
#define XSecurityClientUntrusted	1
#define XSecurityNumberEvents	1
#define XSecurityAuthorizationNameLen	19
#define XSecurityNumberErrors	2
#define XSecurityAllEventMasks	XSecurityAuthorizationRevokedMask
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
    typedef unsigned long int XSecurityAuthorization;

    typedef struct {
	unsigned int timeout;
	unsigned int trust_level;
	XID group;
	long int event_mask;
    } XSecurityAuthorizationAttributes;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	XSecurityAuthorization auth_id;
    } XSecurityAuthorizationRevokedEvent;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct {
	unsigned int timeout;
	unsigned int trust_level;
	XID group;
	long int event_mask;
    };

    struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	XSecurityAuthorization auth_id;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
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
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
