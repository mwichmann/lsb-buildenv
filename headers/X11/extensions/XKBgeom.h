#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_EXTENSIONS_XKBGEOM_H_
#define _X11_EXTENSIONS_XKBGEOM_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    typedef struct _XkbProperty XkbPropertyRec;

    typedef struct _XkbProperty *XkbPropertyPtr;

    typedef struct _XkbColor XkbColorRec;

    typedef struct _XkbColor *XkbColorPtr;

    typedef struct _XkbPoint XkbPointRec;

    typedef struct _XkbPoint *XkbPointPtr;

    typedef struct _XkbBounds XkbBoundsRec;

    typedef struct _XkbBounds *XkbBoundsPtr;

    typedef struct _XkbOutline XkbOutlineRec;

    typedef struct _XkbOutline *XkbOutlinePtr;

    typedef struct _XkbShape XkbShapeRec;

    typedef struct _XkbShape *XkbShapePtr;

    typedef struct _XkbShapeDoodad XkbShapeDoodadRec;

    typedef struct _XkbShapeDoodad *XkbShapeDoodadPtr;

    typedef struct _XkbTextDoodad XkbTextDoodadRec;

    typedef struct _XkbTextDoodad *XkbTextDoodadPtr;

    typedef struct _XkbIndicatorDoodad XkbIndicatorDoodadRec;

    typedef struct _XkbIndicatorDoodad *XkbIndicatorDoodadPtr;

    typedef struct _XkbLogoDoodad XkbLogoDoodadRec;

    typedef struct _XkbLogoDoodad *XkbLogoDoodadPtr;

    typedef struct _XkbAnyDoodad XkbAnyDoodadRec;

    typedef struct _XkbAnyDoodad *XkbAnyDoodadPtr;

    typedef union _XkbDoodad XkbDoodadRec;

    typedef union _XkbDoodad *XkbDoodadPtr;

    typedef struct _XkbKey XkbKeyRec;

    typedef struct _XkbKey *XkbKeyPtr;

    typedef struct _XkbRow XkbRowRec;

    typedef struct _XkbRow *XkbRowPtr;

    typedef struct _XkbSection XkbSectionRec;

    typedef struct _XkbOverlay **XkbSectionPtr;

    typedef struct _XkbOverlayKey XkbOverlayKeyRec;

    typedef struct _XkbOverlayKey *XkbOverlayKeyPtr;

    typedef struct _XkbOverlayRow XkbOverlayRowRec;

    typedef struct _XkbOverlayRow *XkbOverlayRowPtr;

    typedef struct _XkbOverlay XkbOverlayRec;

    typedef struct _XkbOverlay *XkbOverlayPtr;

    typedef struct _XkbGeometry XkbGeometryRec;

    typedef struct _XkbGeometrySizes XkbGeometrySizesRec;

    typedef struct _XkbGeometrySizes *XkbGeometrySizesPtr;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XkbProperty {
	char *name;
	char *value;
    };

    struct _XkbColor {
	unsigned int pixel;
	char *spec;
    };

    struct _XkbPoint {
	short x;
	short y;
    };

    struct _XkbBounds {
	short x1;
	short y1;
	short x2;
	short y2;
    };

    struct _XkbOutline {
	unsigned short num_points;
	unsigned short sz_points;
	unsigned short corner_radius;
	XkbPointPtr points;
    };

    struct _XkbShape {
	Atom name;
	unsigned short num_outlines;
	unsigned short sz_outlines;
	XkbOutlinePtr outlines;
	XkbOutlinePtr approx;
	XkbOutlinePtr primary;
	XkbBoundsRec bounds;
    };

    struct _XkbShapeDoodad {
	Atom name;
	unsigned char type;
	unsigned char priority;
	short top;
	short left;
	short angle;
	unsigned short color_ndx;
	unsigned short shape_ndx;
    };

    struct _XkbTextDoodad {
	Atom name;
	unsigned char type;
	unsigned char priority;
	short top;
	short left;
	short angle;
	short width;
	short height;
	unsigned short color_ndx;
	char *text;
	char *font;
    };

    struct _XkbIndicatorDoodad {
	Atom name;
	unsigned char type;
	unsigned char priority;
	short top;
	short left;
	short angle;
	unsigned short shape_ndx;
	unsigned short on_color_ndx;
	unsigned short off_color_ndx;
    };

    struct _XkbLogoDoodad {
	Atom name;
	unsigned char type;
	unsigned char priority;
	short top;
	short left;
	short angle;
	unsigned short color_ndx;
	unsigned short shape_ndx;
	char *logo_name;
    };

    struct _XkbAnyDoodad {
	Atom name;
	unsigned char type;
	unsigned char priority;
	short top;
	short left;
	short angle;
    };

    union _XkbDoodad {
	XkbAnyDoodadRec any;
	XkbShapeDoodadRec shape;
	XkbTextDoodadRec text;
	XkbIndicatorDoodadRec indicator;
	XkbLogoDoodadRec logo;
    };

    struct _XkbKey {
	XkbKeyNameRecname;
	short gap;
	unsigned char shape_ndx;
	unsigned char color_ndx;
    };

    struct _XkbRow {
	short top;
	short left;
	unsigned short num_keys;
	unsigned short sz_keys;
	int vertical;
	XkbKeyPtr keys;
	XkbBoundsRec bounds;
    };

    struct _XkbSection {
	Atom name;
	unsigned char priority;
	short top;
	short left;
	unsigned short width;
	unsigned short height;
	short angle;
	unsigned short num_rows;
	unsigned short num_doodads;
	unsigned short num_overlays;
	unsigned short sz_rows;
	unsigned short sz_doodads;
	unsigned short sz_overlays;
	XkbRowPtr rows;
	XkbDoodadPtr doodads;
	XkbBoundsRec bounds;
	struct _XkbOverlay *overlays;
    };

    struct _XkbOverlay {
	Atom name;
	XkbSectionPtr section_under;
	unsigned short num_rows;
	unsigned short sz_rows;
	XkbOverlayRowPtr rows;
	XkbBoundsPtr bounds;
    };

    struct _XkbOverlayKey {
	XkbKeyNameRecover;
	XkbKeyNameRecunder;
    };

    struct _XkbOverlayRow {
	unsigned short row_under;
	unsigned short num_keys;
	unsigned short sz_keys;
	XkbOverlayKeyPtr keys;
    };

    struct _XkbGeometry {
	Atom name;
	unsigned short width_mm;
	unsigned short height_mm;
	char *label_font;
	XkbColorPtr label_color;
	XkbColorPtr base_color;
	unsigned short sz_properties;
	unsigned short sz_colors;
	unsigned short sz_shapes;
	unsigned short sz_sections;
	unsigned short sz_doodads;
	unsigned short sz_key_aliases;
	unsigned short num_properties;
	unsigned short num_colors;
	unsigned short num_shapes;
	unsigned short num_sections;
	unsigned short num_doodads;
	unsigned short num_key_aliases;
	XkbPropertyPtr properties;
	XkbColorPtr colors;
	XkbShapePtr shapes;
	XkbSectionPtr sections;
	XkbDoodadPtr doodads;
	 XkbKeyAliasPtrkey_aliases;
    };

    struct _XkbGeometrySizes {
	unsigned int which;
	unsigned short num_properties;
	unsigned short num_colors;
	unsigned short num_shapes;
	unsigned short num_sections;
	unsigned short num_doodads;
	unsigned short num_key_aliases;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int XkbAllocGeomColors(, int);
    extern int XkbAllocGeomDoodads(, int);
    extern int XkbAllocGeomKeyAliases(, int);
    extern int XkbAllocGeomKeys(XkbRowPtr, int);
    extern int XkbAllocGeomOutlines(XkbShapePtr, int);
    extern int XkbAllocGeomOverlayKeys(XkbOverlayRowPtr, int);
    extern int XkbAllocGeomOverlayRows(XkbOverlayPtr, int);
    extern int XkbAllocGeomOverlays(XkbSectionPtr, int);
    extern int XkbAllocGeomPoints(XkbOutlinePtr, int);
    extern int XkbAllocGeomProps(, int);
    extern int XkbAllocGeomRows(XkbSectionPtr, int);
    extern int XkbAllocGeomSectionDoodads(XkbSectionPtr, int);
    extern int XkbAllocGeomSections(, int);
    extern int XkbAllocGeomShapes(, int);
    extern int XkbAllocGeometry(, XkbGeometrySizesPtr);
    extern int XkbComputeRowBounds(, XkbSectionPtr, XkbRowPtr);
    extern int XkbComputeSectionBounds(, XkbSectionPtr);
    extern int XkbComputeShapeBounds(XkbShapePtr);
    extern int XkbComputeShapeTop(XkbShapePtr, XkbBoundsPtr);
    extern char *XkbFindOverlayForKey(, XkbSectionPtr, char *);
    extern void XkbFreeGeomColors(, int, int, int);
    extern void XkbFreeGeomDoodads(XkbDoodadPtr, int, int);
    extern void XkbFreeGeomKeyAliases(, int, int, int);
    extern void XkbFreeGeomKeys(XkbRowPtr, int, int, int);
    extern void XkbFreeGeomOutlines(XkbShapePtr, int, int, int);
    extern void XkbFreeGeomOverlayKeys(XkbOverlayRowPtr, int, int, int);
    extern void XkbFreeGeomOverlayRows(XkbOverlayPtr, int, int, int);
    extern void XkbFreeGeomOverlays(XkbSectionPtr, int, int, int);
    extern void XkbFreeGeomPoints(XkbOutlinePtr, int, int, int);
    extern void XkbFreeGeomProperties(, int, int, int);
    extern void XkbFreeGeomRows(XkbSectionPtr, int, int, int);
    extern void XkbFreeGeomSections(, int, int, int);
    extern void XkbFreeGeomShapes(, int, int, int);
    extern void XkbFreeGeometry(, unsigned int, int);
    extern int XkbGetGeometry(Display *,);
    extern int XkbGetNamedGeometry(Display *,, Atom);
    extern int XkbSetGeometry(Display *, unsigned int,);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
