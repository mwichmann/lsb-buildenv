#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_EXTENSIONS_XTEST_H_
#define _X11_EXTENSIONS_XTEST_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/XInput.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XTestNumberErrors	0
#define XTestNumberEvents	0
#define X_XTestGetVersion	0
#define X_XTestCompareCursor	1
#define XTestMajorVersion	2
#define XTestMinorVersion	2
#define X_XTestFakeInput	2
#define X_XTestGrabControl	3
#define XTestExtensionName	"XTEST"



/* Function prototypes */

    extern int XTestCompareCurrentCursorWithWindow(Display *, Window);
    extern int XTestCompareCursorWithWindow(Display *, Window, Cursor);
    extern int XTestDiscard(Display *);
    extern int XTestFakeButtonEvent(Display *, unsigned int, int,
				    unsigned long int);
    extern int XTestFakeDeviceButtonEvent(Display *, XDevice *,
					  unsigned int, int, int *, int,
					  unsigned long int);
    extern int XTestFakeDeviceKeyEvent(Display *, XDevice *, unsigned int,
				       int, int *, int, unsigned long int);
    extern int XTestFakeDeviceMotionEvent(Display *, XDevice *, int, int,
					  int *, int, unsigned long int);
    extern int XTestFakeKeyEvent(Display *, unsigned int, int,
				 unsigned long int);
    extern int XTestFakeMotionEvent(Display *, int, int, int,
				    unsigned long int);
    extern int XTestFakeProximityEvent(Display *, XDevice *, int, int *,
				       int, unsigned long int);
    extern int XTestFakeRelativeMotionEvent(Display *, int, int,
					    unsigned long int);
    extern int XTestGrabControl(Display *, int);
    extern int XTestQueryExtension(Display *, int *, int *, int *, int *);
    extern void XTestSetGContextOfGC(GC, GContext);
    extern void XTestSetVisualIDOfVisual(Visual *, VisualID);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
