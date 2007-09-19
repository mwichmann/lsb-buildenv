#ifndef _X11_EXTENSIONS_XRENDER_H_
#define _X11_EXTENSIONS_XRENDER_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#include <jpeglib.h>
#include <X11/extensions/render.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XFixedToDouble(f)	(((XDouble) (f)) / 65536)
#define XDoubleToFixed(f)	((XFixed) ((f) * 65536))
#define PictFormatID	(1 << 0)
#define PictFormatType	(1 << 1)
#define PictFormatAlphaMask	(1 << 10)
#define PictFormatColormap	(1 << 11)
#define PictFormatDepth	(1 << 2)
#define PictFormatRed	(1 << 3)
#define PictFormatRedMask	(1 << 4)
#define PictFormatGreen	(1 << 5)
#define PictFormatGreenMask	(1 << 6)
#define PictFormatBlue	(1 << 7)
#define PictFormatBlueMask	(1 << 8)
#define PictFormatAlpha	(1 << 9)
#define PictStandardARGB32	0
#define PictStandardRGB24	1
#define PictStandardA8	2
#define PictStandardA4	3
#define PictStandardA1	4
#define PictStandardNUM	5





    typedef long unsigned int GlyphSet;

    typedef int XFixed;

    typedef struct _XPointFixed XPointFixed;

    typedef struct _XCircle XCircle;

    typedef double XDouble;

    typedef struct _XSpanFix XSpanFix;

    typedef struct _XLineFixed XLineFixed;


    struct _XPointFixed {
	XFixed x;
	XFixed y;
    };


    struct _XCircle {
	XFixed x;
	XFixed y;
	XFixed radius;
    };


    struct _XSpanFix {
	XFixed left;
	XFixed right;
	XFixed y;
    };


    struct _XLineFixed {
	XPointFixed p1;
	XPointFixed p2;
    };


/* Default Header Section for X11/extensions/Xrender.h*/


    typedef struct _XTrapezoid XTrapezoid;

    typedef struct {
	unsigned short red;
	unsigned short green;
	unsigned short blue;
	unsigned short alpha;
    } XRenderColor;

    typedef long unsigned int Glyph;

    typedef long unsigned int PictFormat;

    typedef struct {
	short red;
	short redMask;
	short green;
	short greenMask;
	short blue;
	short blueMask;
	short alpha;
	short alphaMask;
    } XRenderDirectFormat;

    typedef struct {
	PictFormat id;
	int type;
	int depth;
	XRenderDirectFormat direct;
	Colormap colormap;
    } XRenderPictFormat;

    typedef struct _XGlyphInfo XGlyphInfo;

    typedef struct _XFilters XFilters;

    typedef struct _XTransform XTransform;

    typedef struct _XAnimCursor XAnimCursor;

    typedef struct _XRadialGradient XRadialGradient;

    typedef struct _XGlyphElt32 XGlyphElt32;

    typedef struct _XGlyphElt8 XGlyphElt8;

    typedef struct _XConicalGradient XConicalGradient;

    typedef struct _XLinearGradient XLinearGradient;

    typedef struct _XPointDouble XPointDouble;

    typedef struct _XRenderPictureAttributes XRenderPictureAttributes;

    typedef struct _XTrap XTrap;

    typedef struct _XIndexValue XIndexValue;

    typedef struct _XGlyphElt16 XGlyphElt16;

    typedef struct _XTriangle XTriangle;


    struct _XTrapezoid {
	XFixed top;
	XFixed bottom;
	XLineFixed left;
	XLineFixed right;
    };


    struct _XGlyphInfo {
	unsigned short width;
	unsigned short height;
	short x;
	short y;
	short xOff;
	short yOff;
    };


    struct _XFilters {
	int nfilter;
	char **filter;
	int nalias;
	short int *alias;
    };


    struct _XTransform {
	XFixed matrix[3];
    };


    struct _XAnimCursor {
	Cursor cursor;
	long unsigned int delay;
    };


    struct _XRadialGradient {
	XCircle inner;
	XCircle outer;
    };


    struct _XGlyphElt32 {
	GlyphSet glyphset;
	const unsigned int *chars;
	int nchars;
	int xOff;
	int yOff;
    };


    struct _XGlyphElt8 {
	GlyphSet glyphset;
	const char *chars;
	int nchars;
	int xOff;
	int yOff;
    };


    struct _XConicalGradient {
	XPointFixed center;
	XFixed angle;
    };


    struct _XLinearGradient {
	XPointFixed p1;
	XPointFixed p2;
    };


    struct _XPointDouble {
	XDouble x;
	XDouble y;
    };


    struct _XRenderPictureAttributes {
	int repeat;
	Picture alpha_map;
	int alpha_x_origin;
	int alpha_y_origin;
	int clip_x_origin;
	int clip_y_origin;
	Pixmap clip_mask;
	int graphics_exposures;
	int subwindow_mode;
	int poly_edge;
	int poly_mode;
	Atom dither;
	int component_alpha;
    };


    struct _XTrap {
	XSpanFix top;
	XSpanFix bottom;
    };


    struct _XIndexValue {
	long unsigned int pixel;
	unsigned short red;
	unsigned short green;
	unsigned short blue;
	unsigned short alpha;
    };


    struct _XGlyphElt16 {
	GlyphSet glyphset;
	const short unsigned int *chars;
	int nchars;
	int xOff;
	int yOff;
    };


    struct _XTriangle {
	XPointFixed p1;
	XPointFixed p2;
	XPointFixed p3;
    };


    extern int XRenderQuerySubpixelOrder(Display *, int);
    extern void XRenderFreeGlyphSet(Display *, GlyphSet);
    extern void XRenderFillRectangles(Display *, int, Picture,
				      const XRenderColor *,
				      const XRectangle *, int);
    extern int XRenderParseColor(Display *, char *, XRenderColor *);
    extern void XRenderFreeGlyphs(Display *, GlyphSet, const Glyph *, int);
    extern GlyphSet XRenderCreateGlyphSet(Display *,
					  const XRenderPictFormat *);
    extern void XRenderCompositeTriStrip(Display *, int, Picture, Picture,
					 const XRenderPictFormat *, int,
					 int, const XPointFixed *, int);
    extern void XRenderAddGlyphs(Display *, GlyphSet, const Glyph *,
				 const XGlyphInfo *, int, const char *,
				 int);
    extern XFilters *XRenderQueryFilters(Display *, Drawable);
    extern void XRenderSetPictureClipRegion(Display *, Picture, Region);
    extern XRenderPictFormat *XRenderFindStandardFormat(Display *, int);
    extern void XRenderSetPictureTransform(Display *, Picture,
					   XTransform *);
    extern Cursor XRenderCreateAnimCursor(Display *, int, XAnimCursor *);
    extern Picture XRenderCreateRadialGradient(Display *,
					       const XRadialGradient *,
					       const XFixed *,
					       const XRenderColor *, int);
    extern void XRenderCompositeText32(Display *, int, Picture, Picture,
				       const XRenderPictFormat *, int, int,
				       int, int, const XGlyphElt32 *, int);
    extern void XRenderComposite(Display *, int, Picture, Picture, Picture,
				 int, int, int, int, int, int,
				 unsigned int, unsigned int);
    extern void XRenderCompositeText8(Display *, int, Picture, Picture,
				      const XRenderPictFormat *, int, int,
				      int, int, const XGlyphElt8 *, int);
    extern Picture XRenderCreateConicalGradient(Display *,
						const XConicalGradient *,
						const XFixed *,
						const XRenderColor *, int);
    extern XRenderPictFormat *XRenderFindVisualFormat(Display *,
						      const Visual *);
    extern Picture XRenderCreateLinearGradient(Display *,
					       const XLinearGradient *,
					       const XFixed *,
					       const XRenderColor *, int);
    extern void XRenderCompositeDoublePoly(Display *, int, Picture,
					   Picture,
					   const XRenderPictFormat *, int,
					   int, int, int,
					   const XPointDouble *, int, int);
    extern Picture XRenderCreateSolidFill(Display *, const XRenderColor *);
    extern int XRenderQueryExtension(Display *, int *, int *);
    extern void XRenderSetPictureFilter(Display *, Picture, const char *,
					XFixed *, int);
    extern void XRenderCompositeTrapezoids(Display *, int, Picture,
					   Picture,
					   const XRenderPictFormat *, int,
					   int, const XTrapezoid *, int);
    extern void XRenderChangePicture(Display *, Picture, long unsigned int,
				     const XRenderPictureAttributes *);
    extern void XRenderCompositeString8(Display *, int, Picture, Picture,
					const XRenderPictFormat *,
					GlyphSet, int, int, int, int,
					const char *, int);
    extern void XRenderAddTraps(Display *, Picture, int, int,
				const XTrap *, int);
    extern XRenderPictFormat *XRenderFindFormat(Display *,
						long unsigned int,
						const XRenderPictFormat *,
						int);
    extern void XRenderCompositeTriFan(Display *, int, Picture, Picture,
				       const XRenderPictFormat *, int, int,
				       const XPointFixed *, int);
    extern XIndexValue *XRenderQueryPictIndexValues(Display *,
						    const XRenderPictFormat
						    *, int *);
    extern int XRenderSetSubpixelOrder(Display *, int, int);
    extern int XRenderQueryVersion(Display *, int *, int *);
    extern void XRenderCompositeText16(Display *, int, Picture, Picture,
				       const XRenderPictFormat *, int, int,
				       int, int, const XGlyphElt16 *, int);
    extern void XRenderSetPictureClipRectangles(Display *, Picture, int,
						int, const XRectangle *,
						int);
    extern int XRenderQueryFormats(Display *);
    extern void XRenderFillRectangle(Display *, int, Picture,
				     const XRenderColor *, int, int,
				     unsigned int, unsigned int);
    extern void XRenderFreePicture(Display *, Picture);
    extern void XRenderCompositeTriangles(Display *, int, Picture, Picture,
					  const XRenderPictFormat *, int,
					  int, const XTriangle *, int);
    extern void XRenderCompositeString32(Display *, int, Picture, Picture,
					 const XRenderPictFormat *,
					 GlyphSet, int, int, int, int,
					 const unsigned int *, int);
    extern Picture XRenderCreatePicture(Display *, Drawable,
					const XRenderPictFormat *,
					long unsigned int,
					const XRenderPictureAttributes *);
    extern GlyphSet XRenderReferenceGlyphSet(Display *, GlyphSet);
    extern void XRenderCompositeString16(Display *, int, Picture, Picture,
					 const XRenderPictFormat *,
					 GlyphSet, int, int, int, int,
					 const short unsigned int *, int);
    extern Cursor XRenderCreateCursor(Display *, Picture, unsigned int,
				      unsigned int);
#ifdef __cplusplus
}
#endif
#endif
