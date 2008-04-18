#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_EXTENSIONS_SHAPE_H_
#define _X11_EXTENSIONS_SHAPE_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	int kind;
	int x;
	int y;
	unsigned int width;
	unsigned int height;
	Time time;
	int shaped;
    } XShapeEvent;

#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 12
    struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Window window;
	int kind;
	int x;
	int y;
	unsigned int width;
	unsigned int height;
	Time time;
	int shaped;
    };

#endif				// __LSB_VERSION__ >= 1.2


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern void XShapeCombineMask(Display *, Window, int, int, int, Pixmap,
				  int);
    extern void XShapeCombineRectangles(Display *, Window, int, int, int,
					XRectangle *, int, int, int);
    extern void XShapeCombineRegion(Display *, Window, int, int, int,
				    Region, int);
    extern void XShapeCombineShape(Display *, Window, int, int, int,
				   Window, int, int);
    extern XRectangle *XShapeGetRectangles(Display *, Window, int, int *,
					   int *);
    extern unsigned long int XShapeInputSelected(Display *, Window);
    extern void XShapeOffsetShape(Display *, Window, int, int, int);
    extern int XShapeQueryExtension(Display *, int *, int *);
    extern int XShapeQueryExtents(Display *, Window, int *, int *, int *,
				  unsigned int *, unsigned int *, int *,
				  int *, int *, unsigned int *,
				  unsigned int *);
    extern int XShapeQueryVersion(Display *, int *, int *);
    extern void XShapeSelectInput(Display *, Window, unsigned long int);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
