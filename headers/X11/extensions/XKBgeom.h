#ifndef _X11_EXTENSIONS_XKBGEOM_H_
#define _X11_EXTENSIONS_XKBGEOM_H_

#include <X11/X.h>
#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern int XkbAllocGeomColors (, int);
  extern int XkbAllocGeomDoodads (, int);
  extern int XkbAllocGeomKeyAliases (, int);
  extern int XkbAllocGeomKeys (XkbRowPtr, int);
  extern int XkbAllocGeomOutlines (XkbShapePtr, int);
  extern int XkbAllocGeomOverlayKeys (XkbOverlayRowPtr, int);
  extern int XkbAllocGeomOverlayRows (XkbOverlayPtr, int);
  extern int XkbAllocGeomOverlays (XkbSectionPtr, int);
  extern int XkbAllocGeomPoints (XkbOutlinePtr, int);
  extern int XkbAllocGeomProps (, int);
  extern int XkbAllocGeomRows (XkbSectionPtr, int);
  extern int XkbAllocGeomSectionDoodads (XkbSectionPtr, int);
  extern int XkbAllocGeomSections (, int);
  extern int XkbAllocGeomShapes (, int);
  extern int XkbAllocGeometry (, XkbGeometrySizesPtr);
  extern int XkbComputeRowBounds (, XkbSectionPtr, XkbRowPtr);
  extern int XkbComputeSectionBounds (, XkbSectionPtr);
  extern int XkbComputeShapeBounds (XkbShapePtr);
  extern int XkbComputeShapeTop (XkbShapePtr, XkbBoundsPtr);
  extern char *XkbFindOverlayForKey (, XkbSectionPtr, char *);
  extern void XkbFreeGeomColors (, int, int, int);
  extern void XkbFreeGeomDoodads (XkbDoodadPtr, int, int);
  extern void XkbFreeGeomKeyAliases (, int, int, int);
  extern void XkbFreeGeomKeys (XkbRowPtr, int, int, int);
  extern void XkbFreeGeomOutlines (XkbShapePtr, int, int, int);
  extern void XkbFreeGeomOverlayKeys (XkbOverlayRowPtr, int, int, int);
  extern void XkbFreeGeomOverlayRows (XkbOverlayPtr, int, int, int);
  extern void XkbFreeGeomOverlays (XkbSectionPtr, int, int, int);
  extern void XkbFreeGeomPoints (XkbOutlinePtr, int, int, int);
  extern void XkbFreeGeomProperties (, int, int, int);
  extern void XkbFreeGeomRows (XkbSectionPtr, int, int, int);
  extern void XkbFreeGeomSections (, int, int, int);
  extern void XkbFreeGeomShapes (, int, int, int);
  extern void XkbFreeGeometry (, unsigned int, int);
  extern int XkbGetGeometry (Display *,);
  extern int XkbGetNamedGeometry (Display *,, Atom);
  extern int XkbSetGeometry (Display *, unsigned int,);
#ifdef __cplusplus
}
#endif
#endif
