#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_EXTENSIONS_XTEST_H_
#define _X11_EXTENSIONS_XTEST_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 40
#define XTestExtensionName	"XTEST"
#define XTestNumberErrors	0
#define XTestNumberEvents	0
#define X_XTestGetVersion	0
#define X_XTestCompareCursor	1
#define XTestMajorVersion	2
#define XTestMinorVersion	2
#define X_XTestFakeInput	2
#define X_XTestGrabControl	3
#endif				/* __LSB_VERSION__ >= 4.0 */




/* Function prototypes */

#if __LSB_VERSION__ >= 40
    extern int XTestCompareCurrentCursorWithWindow(Display *, Window);
    extern int XTestCompareCursorWithWindow(Display *, Window, Cursor);
    extern int XTestDiscard(Display *);
    extern int XTestFakeButtonEvent(Display *, XDevice *, int,
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
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
