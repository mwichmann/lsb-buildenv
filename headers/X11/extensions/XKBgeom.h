#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_EXTENSIONS_XKBGEOM_H_
#define _X11_EXTENSIONS_XKBGEOM_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/XKBstr.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _XKBGEOM_H_
#define XkbLogoDoodadColor(g,d)	(&(g)->colors[(d)->color_ndx])
#define XkbShapeDoodadColor(g,d)	(&(g)->colors[(d)->color_ndx])
#define XkbTextDoodadColor(g,d)	(&(g)->colors[(d)->color_ndx])
#define XkbIndicatorDoodadOffColor(g,d)	(&(g)->colors[(d)->off_color_ndx])
#define XkbIndicatorDoodadOnColor(g,d)	(&(g)->colors[(d)->on_color_ndx])
#define XkbKeyColor(g,k)	(&(g)->colors[(k)->color_ndx])
#define XkbIndicatorDoodadShape(g,d)	(&(g)->shapes[(d)->shape_ndx])
#define XkbLogoDoodadShape(g,d)	(&(g)->shapes[(d)->shape_ndx])
#define XkbShapeDoodadShape(g,d)	(&(g)->shapes[(d)->shape_ndx])
#define XkbKeyShape(g,k)	(&(g)->shapes[(k)->shape_ndx])
#define XkbBoundsHeight(b)	(((b)->y2)-((b)->y1))
#define XkbSetLogoDoodadColor(g,d,c)	((d)->color_ndx= (c)-&(g)->colors[0])
#define XkbSetShapeDoodadColor(g,d,c)	((d)->color_ndx= (c)-&(g)->colors[0])
#define XkbSetTextDoodadColor(g,d,c)	((d)->color_ndx= (c)-&(g)->colors[0])
#define XkbSetIndicatorDoodadOffColor(g,d,c)	((d)->off_color_ndx= (c)-&(g)->colors[0])
#define XkbSetIndicatorDoodadOnColor(g,d,c)	((d)->on_color_ndx= (c)-&(g)->colors[0])
#define XkbSetIndicatorDoodadShape(g,d,s)	((d)->shape_ndx= (s)-&(g)->shapes[0])
#define XkbSetLogoDoodadShape(g,d,s)	((d)->shape_ndx= (s)-&(g)->shapes[0])
#define XkbSetShapeDoodadShape(g,d,s)	((d)->shape_ndx= (s)-&(g)->shapes[0])
#define XkbGeomColorIndex(g,c)	((int)((c)-&(g)->colors[0]))
#define XkbOutlineIndex(s,o)	((int)((o)-&(s)->outlines[0]))
#define XkbSetKeyColor(g,k,c)	((k)->color_ndx= (c)-&(g)->colors[0])
#define XkbSetKeyShape(g,k,s)	((k)->shape_ndx= (s)-&(g)->shapes[0])
#define XkbGeomAllMask	(0x3f)
#define XkbGeomPropertiesMask	(1<<0)
#define XkbGeomColorsMask	(1<<1)
#define XkbGeomShapesMask	(1<<2)
#define XkbGeomSectionsMask	(1<<3)
#define XkbGeomDoodadsMask	(1<<4)
#define XkbGeomKeyAliasesMask	(1<<5)
#define XkbUnknownDoodad	0
#define XkbOutlineDoodad	1
#define XkbSolidDoodad	2
#define XkbTextDoodad	3
#define XkbIndicatorDoodad	4
#define XkbLogoDoodad	5


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

    typedef struct _XkbSection *XkbSectionPtr;

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
	XkbKeyNameRec name;
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
	XkbKeyNameRec over;
	XkbKeyNameRec under;
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
	XkbKeyAliasPtr key_aliases;
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

    extern int XkbAllocGeomColors(XkbGeometryPtr, int);
    extern int XkbAllocGeomDoodads(XkbGeometryPtr, int);
    extern int XkbAllocGeomKeyAliases(XkbGeometryPtr, int);
    extern int XkbAllocGeomKeys(XkbRowPtr, int);
    extern int XkbAllocGeomOutlines(XkbShapePtr, int);
    extern int XkbAllocGeomOverlayKeys(XkbOverlayRowPtr, int);
    extern int XkbAllocGeomOverlayRows(XkbOverlayPtr, int);
    extern int XkbAllocGeomOverlays(XkbSectionPtr, int);
    extern int XkbAllocGeomPoints(XkbOutlinePtr, int);
    extern int XkbAllocGeomProps(XkbGeometryPtr, int);
    extern int XkbAllocGeomRows(XkbSectionPtr, int);
    extern int XkbAllocGeomSectionDoodads(XkbSectionPtr, int);
    extern int XkbAllocGeomSections(XkbGeometryPtr, int);
    extern int XkbAllocGeomShapes(XkbGeometryPtr, int);
    extern int XkbAllocGeometry(XkbDescPtr, XkbGeometrySizesPtr);
    extern int XkbComputeRowBounds(XkbGeometryPtr, XkbSectionPtr,
				   XkbRowPtr);
    extern int XkbComputeSectionBounds(XkbGeometryPtr, XkbSectionPtr);
    extern int XkbComputeShapeBounds(XkbShapePtr);
    extern int XkbComputeShapeTop(XkbShapePtr, XkbBoundsPtr);
    extern char *XkbFindOverlayForKey(XkbGeometryPtr, XkbSectionPtr,
				      char *);
    extern void XkbFreeGeomColors(XkbGeometryPtr, int, int, int);
    extern void XkbFreeGeomDoodads(XkbDoodadPtr, int, int);
    extern void XkbFreeGeomKeyAliases(XkbGeometryPtr, int, int, int);
    extern void XkbFreeGeomKeys(XkbRowPtr, int, int, int);
    extern void XkbFreeGeomOutlines(XkbShapePtr, int, int, int);
    extern void XkbFreeGeomOverlayKeys(XkbOverlayRowPtr, int, int, int);
    extern void XkbFreeGeomOverlayRows(XkbOverlayPtr, int, int, int);
    extern void XkbFreeGeomOverlays(XkbSectionPtr, int, int, int);
    extern void XkbFreeGeomPoints(XkbOutlinePtr, int, int, int);
    extern void XkbFreeGeomProperties(XkbGeometryPtr, int, int, int);
    extern void XkbFreeGeomRows(XkbSectionPtr, int, int, int);
    extern void XkbFreeGeomSections(XkbGeometryPtr, int, int, int);
    extern void XkbFreeGeomShapes(XkbGeometryPtr, int, int, int);
    extern void XkbFreeGeometry(XkbGeometryPtr, unsigned int, int);
    extern int XkbGetGeometry(Display *, XkbDescPtr);
    extern int XkbGetNamedGeometry(Display *, XkbDescPtr, Atom);
    extern int XkbSetGeometry(Display *, unsigned int, XkbGeometryPtr);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
