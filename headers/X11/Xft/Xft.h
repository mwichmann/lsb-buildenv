#if (__LSB_VERSION__ >= 32 )
#ifndef _X11_XFT_XFT_H_
#define _X11_XFT_XFT_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#include <fontconfig/fontconfig.h>
#include <X11/extensions/render.h>
#include <X11/extensions/Xrender.h>
#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>
#include <X11/Xft/XftCompat.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _XFT_H_
#define XFT_VERSION	 \
	((XFT_MAJOR * 10000) + (XFT_MINOR * 100) + (XFT_REVISION))
#define XFT_CORE	"core"
#define XFT_MAX_GLYPH_MEMORY	"maxglyphmemory"
#define XFT_MAX_UNREF_FONTS	"maxunreffonts"
#define XFT_RENDER	"render"
#define XFT_XLFD	"xlfd"
#define XFT_MINOR	1
#define XFT_MAJOR	2
#define XFT_NMISSING	256
#define XFT_REVISION	8
#define XftVersion	XFT_VERSION


    typedef struct _XftDraw XftDraw;

    typedef struct _XftColor XftColor;

    typedef struct _XftFont XftFont;

    typedef struct _XftGlyphSpec XftGlyphSpec;

    typedef struct _XftCharSpec XftCharSpec;

    typedef struct _XftFtFile XftFtFile;

    typedef struct _XftFontInfo XftFontInfo;

    typedef struct _XftCharFontSpec XftCharFontSpec;

    typedef struct _XftGlyphFontSpec XftGlyphFontSpec;

    struct _XftColor {
	unsigned long int pixel;
	XRenderColor color;
    };

    struct _XftFont {
	int ascent;
	int descent;
	int height;
	int max_advance_width;
	FcCharSet *charset;
	FcPattern **pattern;
    };

    struct _XftGlyphSpec {
	FT_UInt glyph;
	short x;
	short y;
    };

    struct _XftCharSpec {
	FcChar32 ucs4;
	short x;
	short y;
    };

    struct _XftFontInfo;

    struct _XftFtFile;

    struct _XftCharFontSpec {
	XftFont *font;
	FcChar32 ucs4;
	short x;
	short y;
    };

    struct _XftGlyphFontSpec {
	XftFont *font;
	FT_UInt glyph;
	short x;
	short y;
    };


/* Function prototypes */

    extern FcBool XftCharExists(Display *, XftFont *, FcChar32);
    extern void XftCharFontSpecRender(Display *, int, Picture, Picture,
				      int, int, const XftCharFontSpec *,
				      int);
    extern FT_UInt XftCharIndex(Display *, XftFont *, FcChar32);
    extern void XftCharSpecRender(Display *, int, Picture, XftFont *,
				  Picture, int, int, const XftCharSpec *,
				  int);
    extern int XftColorAllocName(Display *, const Visual *, Colormap,
				 const char *, XftColor *);
    extern int XftColorAllocValue(Display *, Visual *, Colormap,
				  const XRenderColor *, XftColor *);
    extern void XftColorFree(Display *, Visual *, Colormap, XftColor *);
    extern int XftDefaultHasRender(Display *);
    extern int XftDefaultSet(Display *, FcPattern *);
    extern void XftDefaultSubstitute(Display *, int, FcPattern *);
    extern void XftDrawChange(XftDraw *, Drawable);
    extern void XftDrawCharFontSpec(XftDraw *, const XftColor *,
				    const XftCharFontSpec *, int);
    extern void XftDrawCharSpec(XftDraw *, const XftColor *, XftFont *,
				const XftCharSpec *, int);
    extern Colormap XftDrawColormap(XftDraw *);
    extern XftDraw *XftDrawCreate(Display *, Drawable, Visual *, Colormap);
    extern XftDraw *XftDrawCreateAlpha(Display *, Pixmap, int);
    extern XftDraw *XftDrawCreateBitmap(Display *, Pixmap);
    extern void XftDrawDestroy(XftDraw *);
    extern Display *XftDrawDisplay(XftDraw *);
    extern Drawable XftDrawDrawable(XftDraw *);
    extern void XftDrawGlyphFontSpec(XftDraw *, const XftColor *,
				     const XftGlyphFontSpec *, int);
    extern void XftDrawGlyphSpec(XftDraw *, const XftColor *, XftFont *,
				 const XftGlyphSpec *, int);
    extern void XftDrawGlyphs(XftDraw *, const XftColor *, XftFont *, int,
			      int, const FT_UInt *, int);
    extern Picture XftDrawPicture(XftDraw *);
    extern void XftDrawRect(XftDraw *, const XftColor *, int, int,
			    unsigned int, unsigned int);
    extern int XftDrawSetClip(XftDraw *, Region);
    extern int XftDrawSetClipRectangles(XftDraw *, int, int,
					const XRectangle *, int);
    extern void XftDrawSetSubwindowMode(XftDraw *, int);
    extern Picture XftDrawSrcPicture(XftDraw *, const XftColor *);
    extern void XftDrawString16(XftDraw *, const XftColor *, XftFont *,
				int, int, const FcChar16 *, int);
    extern void XftDrawString32(XftDraw *, const XftColor *, XftFont *,
				int, int, const FcChar32 *, int);
    extern void XftDrawString8(XftDraw *, const XftColor *, XftFont *, int,
			       int, const FcChar8 *, int);
    extern void XftDrawStringUtf16(XftDraw *, const XftColor *, XftFont *,
				   int, int, const FcChar8 *, FcEndian,
				   int);
    extern void XftDrawStringUtf8(XftDraw *, const XftColor *, XftFont *,
				  int, int, const FcChar8 *, int);
    extern Visual *XftDrawVisual(XftDraw *);
    extern FcBool XftFontCheckGlyph(Display *, XftFont *, FcBool, FT_UInt,
				    FT_UInt *, int *);
    extern void XftFontClose(Display *, XftFont *);
    extern XftFont *XftFontCopy(Display *, XftFont *);
    extern XftFontInfo *XftFontInfoCreate(Display *, const FcPattern *);
    extern void XftFontInfoDestroy(Display *, XftFontInfo *);
    extern FcBool XftFontInfoEqual(const XftFontInfo *,
				   const XftFontInfo *);
    extern FcChar32 XftFontInfoHash(const XftFontInfo *);
    extern void XftFontLoadGlyphs(Display *, XftFont *, FcBool,
				  const FT_UInt *, int);
    extern FcPattern *XftFontMatch(Display *, int, const FcPattern *,
				   FcResult *);
    extern XftFont *XftFontOpen(Display *, int, ...);
    extern XftFont *XftFontOpenInfo(Display *, FcPattern *, XftFontInfo *);
    extern XftFont *XftFontOpenName(Display *, int, const char *);
    extern XftFont *XftFontOpenPattern(Display *, FcPattern *);
    extern XftFont *XftFontOpenXlfd(Display *, int, const char *);
    extern void XftFontUnloadGlyphs(Display *, XftFont *, const FT_UInt *,
				    int);
    extern int XftGetVersion(void);
    extern void XftGlyphExtents(Display *, XftFont *, const FT_UInt *, int,
				XGlyphInfo *);
    extern void XftGlyphFontSpecRender(Display *, int, Picture, Picture,
				       int, int, const XftGlyphFontSpec *,
				       int);
    extern void XftGlyphRender(Display *, int, Picture, XftFont *, Picture,
			       int, int, int, int, const FT_UInt *, int);
    extern void XftGlyphSpecRender(Display *, int, Picture, XftFont *,
				   Picture, int, int, const XftGlyphSpec *,
				   int);
    extern int XftInit(const char *);
    extern FcBool XftInitFtLibrary(void);
    extern FcFontSet *XftListFonts(Display *, int, ...);
    extern FT_Face XftLockFace(XftFont *);
    extern FcPattern *XftNameParse(const char *);
    extern void XftTextExtents16(Display *, XftFont *, const FcChar16 *,
				 int, XGlyphInfo *);
    extern void XftTextExtents32(Display *, XftFont *, const FcChar32 *,
				 int, XGlyphInfo *);
    extern void XftTextExtents8(Display *, XftFont *, const FcChar8 *, int,
				XGlyphInfo *);
    extern void XftTextExtentsUtf16(Display *, XftFont *, const FcChar8 *,
				    FcEndian, int, XGlyphInfo *);
    extern void XftTextExtentsUtf8(Display *, XftFont *, const FcChar8 *,
				   int, XGlyphInfo *);
    extern void XftTextRender16(Display *, int, Picture, XftFont *,
				Picture, int, int, int, int,
				const FcChar16 *, int);
    extern void XftTextRender16BE(Display *, int, Picture, XftFont *,
				  Picture, int, int, int, int,
				  const FcChar8 *, int);
    extern void XftTextRender16LE(Display *, int, Picture, XftFont *,
				  Picture, int, int, int, int,
				  const FcChar8 *, int);
    extern void XftTextRender32(Display *, int, Picture, XftFont *,
				Picture, int, int, int, int,
				const FcChar32 *, int);
    extern void XftTextRender32BE(Display *, int, Picture, XftFont *,
				  Picture, int, int, int, int,
				  const FcChar8 *, int);
    extern void XftTextRender32LE(Display *, int, Picture, XftFont *,
				  Picture, int, int, int, int,
				  const FcChar8 *, int);
    extern void XftTextRender8(Display *, int, Picture, XftFont *, Picture,
			       int, int, int, int, const FcChar8 *, int);
    extern void XftTextRenderUtf16(Display *, int, Picture, XftFont *,
				   Picture, int, int, int, int,
				   const FcChar8 *, FcEndian, int);
    extern void XftTextRenderUtf8(Display *, int, Picture, XftFont *,
				  Picture, int, int, int, int,
				  const FcChar8 *, int);
    extern void XftUnlockFace(XftFont *);
    extern FcPattern *XftXlfdParse(const char *, FcBool, FcBool);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
