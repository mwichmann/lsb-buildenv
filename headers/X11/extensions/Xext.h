#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_EXTENSIONS_XEXT_H_
#define _X11_EXTENSIONS_XEXT_H_

#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C" {
#endif


#define X_EXTENSION_MISSING	"missing"
#define X_EXTENSION_UNKNOWN	"unknown"



/* Function prototypes */

    extern int XMissingExtension(Display *, const char *);
    extern
	int (*XSetExtensionErrorHandler(int (*)(Display *, char *, char *)
	     )) (Display *, char *, char *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
