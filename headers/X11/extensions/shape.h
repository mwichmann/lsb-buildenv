#ifndef _X11_EXTENSIONS_SHAPE_H_
#define _X11_EXTENSIONS_SHAPE_H_

#include <X11/X.h>
#include <X11/Xutil.h>
#include <X11/Xlib.h>




extern void XShapeCombineMask (Display *, Window, int, int, int, Pixmap, int);
extern void XShapeCombineRectangles (Display *, Window, int, int, int,
				     XRectangle *, int, int, int);
extern void XShapeCombineRegion (Display *, Window, int, int, int, Region,
				 int);
extern void XShapeCombineShape (Display *, Window, int, int, int, Window, int,
				int);
extern XRectangle *XShapeGetRectangles (Display *, Window, int, int *, int *);
extern unsigned long XShapeInputSelected (Display *, Window);
extern void XShapeOffsetShape (Display *, Window, int, int, int);
extern int XShapeQueryExtension (Display *, int *, int *);
extern int XShapeQueryExtents (Display *, Window, int *, int *, int *,
			       unsigned int *, unsigned int *, int *, int *,
			       int *, unsigned int *, unsigned int *);
extern int XShapeQueryVersion (Display *, int *, int *);
extern void XShapeSelectInput (Display *, Window, unsigned long);
#endif
