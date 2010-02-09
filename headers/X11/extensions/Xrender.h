#if (__LSB_VERSION__ >= 32 )
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
	XFixed matrix[3][3];
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


/* Function prototypes */

    extern void XRenderAddGlyphs(Display * dpy, GlyphSet glyphset,
				 const Glyph * gids,
				 const XGlyphInfo * glyphs, int nglyphs,
				 const char *images, int nbyte_images);
    extern void XRenderAddTraps(Display * dpy, Picture picture, int xOff,
				int yOff, const XTrap * traps, int ntrap);
    extern void XRenderChangePicture(Display * dpy, Picture picture,
				     long unsigned int valuemask,
				     const XRenderPictureAttributes *
				     attributes);
    extern void XRenderComposite(Display * dpy, int op, Picture src,
				 Picture mask, Picture dst, int src_x,
				 int src_y, int mask_x, int mask_y,
				 int dst_x, int dst_y, unsigned int width,
				 unsigned int height);
    extern void XRenderCompositeDoublePoly(Display * dpy, int op,
					   Picture src, Picture dst,
					   const XRenderPictFormat *
					   maskFormat, int xSrc, int ySrc,
					   int xDst, int yDst,
					   const XPointDouble * fpoints,
					   int npoints, int winding);
    extern void XRenderCompositeString16(Display * dpy, int op,
					 Picture src, Picture dst,
					 const XRenderPictFormat *
					 maskFormat, GlyphSet glyphset,
					 int xSrc, int ySrc, int xDst,
					 int yDst,
					 const short unsigned int *string,
					 int nchar);
    extern void XRenderCompositeString32(Display * dpy, int op,
					 Picture src, Picture dst,
					 const XRenderPictFormat *
					 maskFormat, GlyphSet glyphset,
					 int xSrc, int ySrc, int xDst,
					 int yDst,
					 const unsigned int *string,
					 int nchar);
    extern void XRenderCompositeString8(Display * dpy, int op, Picture src,
					Picture dst,
					const XRenderPictFormat *
					maskFormat, GlyphSet glyphset,
					int xSrc, int ySrc, int xDst,
					int yDst, const char *string,
					int nchar);
    extern void XRenderCompositeText16(Display * dpy, int op, Picture src,
				       Picture dst,
				       const XRenderPictFormat *
				       maskFormat, int xSrc, int ySrc,
				       int xDst, int yDst,
				       const XGlyphElt16 * elts, int nelt);
    extern void XRenderCompositeText32(Display * dpy, int op, Picture src,
				       Picture dst,
				       const XRenderPictFormat *
				       maskFormat, int xSrc, int ySrc,
				       int xDst, int yDst,
				       const XGlyphElt32 * elts, int nelt);
    extern void XRenderCompositeText8(Display * dpy, int op, Picture src,
				      Picture dst,
				      const XRenderPictFormat * maskFormat,
				      int xSrc, int ySrc, int xDst,
				      int yDst, const XGlyphElt8 * elts,
				      int nelt);
    extern void XRenderCompositeTrapezoids(Display * dpy, int op,
					   Picture src, Picture dst,
					   const XRenderPictFormat *
					   maskFormat, int xSrc, int ySrc,
					   const XTrapezoid * traps,
					   int ntrap);
    extern void XRenderCompositeTriFan(Display * dpy, int op, Picture src,
				       Picture dst,
				       const XRenderPictFormat *
				       maskFormat, int xSrc, int ySrc,
				       const XPointFixed * points,
				       int npoint);
    extern void XRenderCompositeTriStrip(Display * dpy, int op,
					 Picture src, Picture dst,
					 const XRenderPictFormat *
					 maskFormat, int xSrc, int ySrc,
					 const XPointFixed * points,
					 int npoint);
    extern void XRenderCompositeTriangles(Display * dpy, int op,
					  Picture src, Picture dst,
					  const XRenderPictFormat *
					  maskFormat, int xSrc, int ySrc,
					  const XTriangle * triangles,
					  int ntriangle);
    extern Cursor XRenderCreateAnimCursor(Display * dpy, int ncursor,
					  XAnimCursor * cursors);
    extern Picture XRenderCreateConicalGradient(Display * dpy,
						const XConicalGradient *
						gradient,
						const XFixed * stops,
						const XRenderColor *
						colors, int nstops);
    extern Cursor XRenderCreateCursor(Display * dpy, Picture source,
				      unsigned int x, unsigned int y);
    extern GlyphSet XRenderCreateGlyphSet(Display * dpy,
					  const XRenderPictFormat *
					  format);
    extern Picture XRenderCreateLinearGradient(Display * dpy,
					       const XLinearGradient *
					       gradient,
					       const XFixed * stops,
					       const XRenderColor * colors,
					       int nstops);
    extern Picture XRenderCreatePicture(Display * dpy, Drawable drawable,
					const XRenderPictFormat * format,
					long unsigned int valuemask,
					const XRenderPictureAttributes *
					attributes);
    extern Picture XRenderCreateRadialGradient(Display * dpy,
					       const XRadialGradient *
					       gradient,
					       const XFixed * stops,
					       const XRenderColor * colors,
					       int nstops);
    extern Picture XRenderCreateSolidFill(Display * dpy,
					  const XRenderColor * color);
    extern void XRenderFillRectangle(Display * dpy, int op, Picture dst,
				     const XRenderColor * color, int x,
				     int y, unsigned int width,
				     unsigned int height);
    extern void XRenderFillRectangles(Display * dpy, int op, Picture dst,
				      const XRenderColor * color,
				      const XRectangle * rectangles,
				      int n_rects);
    extern XRenderPictFormat *XRenderFindFormat(Display * dpy,
						long unsigned int mask,
						const XRenderPictFormat *
						templ, int count);
    extern XRenderPictFormat *XRenderFindStandardFormat(Display * dpy,
							int format);
    extern XRenderPictFormat *XRenderFindVisualFormat(Display * dpy,
						      const Visual *
						      visual);
    extern void XRenderFreeGlyphSet(Display * dpy, GlyphSet glyphset);
    extern void XRenderFreeGlyphs(Display * dpy, GlyphSet glyphset,
				  const Glyph * gids, int nglyphs);
    extern void XRenderFreePicture(Display * dpy, Picture picture);
    extern int XRenderParseColor(Display * dpy, char *spec,
				 XRenderColor * def);
    extern int XRenderQueryExtension(Display * dpy, int *event_basep,
				     int *error_basep);
    extern XFilters *XRenderQueryFilters(Display * dpy, Drawable drawable);
    extern int XRenderQueryFormats(Display * dpy);
    extern XIndexValue *XRenderQueryPictIndexValues(Display * dpy,
						    const XRenderPictFormat
						    * format, int *num);
    extern int XRenderQuerySubpixelOrder(Display * dpy, int screen);
    extern int XRenderQueryVersion(Display * dpy, int *major_versionp,
				   int *minor_versionp);
    extern GlyphSet XRenderReferenceGlyphSet(Display * dpy,
					     GlyphSet existing);
    extern void XRenderSetPictureClipRectangles(Display * dpy,
						Picture picture,
						int xOrigin, int yOrigin,
						const XRectangle * rects,
						int n);
    extern void XRenderSetPictureClipRegion(Display * dpy, Picture picture,
					    Region r);
    extern void XRenderSetPictureFilter(Display * dpy, Picture picture,
					const char *filter,
					XFixed * params, int nparams);
    extern void XRenderSetPictureTransform(Display * dpy, Picture picture,
					   XTransform * transform);
    extern int XRenderSetSubpixelOrder(Display * dpy, int screen,
				       int subpixel);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
