#ifndef _X11_EXTENSIONS_XKBGEOM_H_
#define _X11_EXTENSIONS_XKBGEOM_H_

#include <X11/X.h>
#include <X11/Xlib.h>




int XkbAllocGeomColors (, int);
int XkbAllocGeomDoodads (, int);
int XkbAllocGeomKeyAliases (, int);
int XkbAllocGeomKeys (XkbRowPtr, int);
int XkbAllocGeomOutlines (XkbShapePtr, int);
int XkbAllocGeomOverlayKeys (XkbOverlayRowPtr, int);
int XkbAllocGeomOverlayRows (XkbOverlayPtr, int);
int XkbAllocGeomOverlays (XkbSectionPtr, int);
int XkbAllocGeomPoints (XkbOutlinePtr, int);
int XkbAllocGeomProps (, int);
int XkbAllocGeomRows (XkbSectionPtr, int);
int XkbAllocGeomSectionDoodads (XkbSectionPtr, int);
int XkbAllocGeomSections (, int);
int XkbAllocGeomShapes (, int);
int XkbAllocGeometry (, XkbGeometrySizesPtr);
int XkbComputeRowBounds (, XkbSectionPtr, XkbRowPtr);
int XkbComputeSectionBounds (, XkbSectionPtr);
int XkbComputeShapeBounds (XkbShapePtr);
int XkbComputeShapeTop (XkbShapePtr, XkbBoundsPtr);
char *XkbFindOverlayForKey (, XkbSectionPtr, char *);
void XkbFreeGeomColors (, int, int, int);
void XkbFreeGeomDoodads (XkbDoodadPtr, int, int);
void XkbFreeGeomKeyAliases (, int, int, int);
void XkbFreeGeomKeys (XkbRowPtr, int, int, int);
void XkbFreeGeomOutlines (XkbShapePtr, int, int, int);
void XkbFreeGeomOverlayKeys (XkbOverlayRowPtr, int, int, int);
void XkbFreeGeomOverlayRows (XkbOverlayPtr, int, int, int);
void XkbFreeGeomOverlays (XkbSectionPtr, int, int, int);
void XkbFreeGeomPoints (XkbOutlinePtr, int, int, int);
void XkbFreeGeomProperties (, int, int, int);
void XkbFreeGeomRows (XkbSectionPtr, int, int, int);
void XkbFreeGeomSections (, int, int, int);
void XkbFreeGeomShapes (, int, int, int);
void XkbFreeGeometry (, unsigned int, int);
int XkbGetGeometry (Display *,);
int XkbGetNamedGeometry (Display *,, Atom);
int XkbSetGeometry (Display *, unsigned int,);
#endif
