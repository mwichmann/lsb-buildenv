
void XShapeCombineMask (Display *, Window, int, int, int, Pixmap, int);
void XShapeCombineRectangles (Display *, Window, int, int, int, XRectangle *,
			      int, int, int);
void XShapeCombineRegion (Display *, Window, int, int, int, Region, int);
void XShapeCombineShape (Display *, Window, int, int, int, Window, int, int);
XRectangle *XShapeGetRectangles (Display *, Window, int, int *, int *);
unsigned long XShapeInputSelected (Display *, Window);
void XShapeOffsetShape (Display *, Window, int, int, int);
int XShapeQueryExtension (Display *, int *, int *);
int XShapeQueryExtents (Display *, Window, int *, int *, int *,
			unsigned int *, unsigned int *, int *, int *, int *,
			unsigned int *, unsigned int *);
int XShapeQueryVersion (Display *, int *, int *);
void XShapeSelectInput (Display *, Window, unsigned long);
