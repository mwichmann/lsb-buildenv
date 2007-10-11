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
#include <freetype/ftsizes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

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
#define XFT_REVISION	12
#define XFT_MAJOR	2
#define XFT_NMISSING	256
#define XftVersion	XFT_VERSION


    typedef struct _XftDraw XftDraw;

    typedef struct _XftColor XftColor;

    typedef struct _XftFont XftFont;

    typedef struct _XftGlyphSpec XftGlyphSpec;

#include <pango-1.0/pango/pangoxft.h>
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


    extern void XftTextRender32BE(Display *, int, Picture, XftFont *,
				  Picture, int, int, int, int,
				  const FcChar8 *, int);
    extern int XftInit(const char *);
    extern void XftTextRender16BE(Display *, int, Picture, XftFont *,
				  Picture, int, int, int, int,
				  const FcChar8 *, int);
    extern void XftDrawCharSpec(XftDraw *, const XftColor *, XftFont *,
				const XftCharSpec *, int);
    extern void XftTextExtentsUtf16(Display *, XftFont *, const FcChar8 *,
				    FcEndian, int, XGlyphInfo *);
    extern void XftGlyphSpecRender(Display *, int, Picture, XftFont *,
				   Picture, int, int, const XftGlyphSpec *,
				   int);
    extern FT_Face XftLockFace(XftFont *);
    extern void XftFontInfoDestroy(Display *, XftFontInfo *);
    extern void XftTextExtents8(Display *, XftFont *, const FcChar8 *, int,
				XGlyphInfo *);
    extern void XftDrawSetSubwindowMode(XftDraw *, int);
    extern int XftColorAllocValue(Display *, Visual *, Colormap,
				  const XRenderColor *, XftColor *);
    extern XftFont *XftFontCopy(Display *, XftFont *);
    extern void XftDrawCharFontSpec(XftDraw *, const XftColor *,
				    const XftCharFontSpec *, int);
    extern void XftGlyphExtents(Display *, XftFont *, const FT_UInt *, int,
				XGlyphInfo *);
    extern Picture XftDrawSrcPicture(XftDraw *, const XftColor *);
    extern void XftTextRender16(Display *, int, Picture, XftFont *,
				Picture, int, int, int, int,
				const FcChar16 *, int);
    extern void XftTextRender32LE(Display *, int, Picture, XftFont *,
				  Picture, int, int, int, int,
				  const FcChar8 *, int);
    extern FcBool XftCharExists(Display *, XftFont *, FcChar32);
    extern void XftFontClose(Display *, XftFont *);
    extern void XftDrawGlyphs(XftDraw *, const XftColor *, XftFont *, int,
			      int, const FT_UInt *, int);
    extern void XftDrawString8(XftDraw *, const XftColor *, XftFont *, int,
			       int, const FcChar8 *, int);
    extern FcPattern *XftXlfdParse(const char *, FcBool, FcBool);
    extern void XftTextRender16LE(Display *, int, Picture, XftFont *,
				  Picture, int, int, int, int,
				  const FcChar8 *, int);
    extern int XftColorAllocName(Display *, const Visual *, Colormap,
				 const char *, XftColor *);
    extern XftFont *XftFontOpen(Display *, int, ...);
    extern void XftFontUnloadGlyphs(Display *, XftFont *, const FT_UInt *,
				    int);
    extern XftDraw *XftDrawCreateBitmap(Display *, Pixmap);
    extern XftDraw *XftDrawCreateAlpha(Display *, Pixmap, int);
    extern Colormap XftDrawColormap(XftDraw *);
    extern void XftDrawGlyphFontSpec(XftDraw *, const XftColor *,
				     const XftGlyphFontSpec *, int);
    extern void XftDrawGlyphSpec(XftDraw *, const XftColor *, XftFont *,
				 const XftGlyphSpec *, int);
    extern void XftTextRenderUtf16(Display *, int, Picture, XftFont *,
				   Picture, int, int, int, int,
				   const FcChar8 *, FcEndian, int);
    extern int XftDrawSetClipRectangles(XftDraw *, int, int,
					const XRectangle *, int);
    extern void XftDrawDestroy(XftDraw *);
    extern int XftDefaultHasRender(Display *);
    extern XftFontInfo *XftFontInfoCreate(Display *, const FcPattern *);
    extern void XftCharFontSpecRender(Display *, int, Picture, Picture,
				      int, int, const XftCharFontSpec *,
				      int);
    extern int XftGetVersion(void);
    extern Drawable XftDrawDrawable(XftDraw *);
    extern void XftUnlockFace(XftFont *);
    extern void XftGlyphFontSpecRender(Display *, int, Picture, Picture,
				       int, int, const XftGlyphFontSpec *,
				       int);
    extern void XftColorFree(Display *, Visual *, Colormap, XftColor *);
    extern FcBool XftFontInfoEqual(const XftFontInfo *,
				   const XftFontInfo *);
    extern void XftDrawRect(XftDraw *, const XftColor *, int, int,
			    unsigned int, unsigned int);
    extern XftFont *XftFontOpenPattern(Display *, FcPattern *);
    extern FcPattern *XftNameParse(const char *);
    extern Display *XftDrawDisplay(XftDraw *);
    extern FcBool XftFontCheckGlyph(Display *, XftFont *, FcBool, FT_UInt,
				    FT_UInt *, int *);
    extern FcFontSet *XftListFonts(Display *, int, ...);
    extern void XftDefaultSubstitute(Display *, int, FcPattern *);
    extern Visual *XftDrawVisual(XftDraw *);
    extern void XftFontLoadGlyphs(Display *, XftFont *, FcBool,
				  const FT_UInt *, int);
    extern XftFont *XftFontOpenXlfd(Display *, int, const char *);
    extern XftDraw *XftDrawCreate(Display *, Drawable, Visual *, Colormap);
    extern void XftTextExtentsUtf8(Display *, XftFont *, const FcChar8 *,
				   int, XGlyphInfo *);
    extern void XftTextExtents32(Display *, XftFont *, const FcChar32 *,
				 int, XGlyphInfo *);
    extern void XftTextRenderUtf8(Display *, int, Picture, XftFont *,
				  Picture, int, int, int, int,
				  const FcChar8 *, int);
    extern FT_UInt XftCharIndex(Display *, XftFont *, FcChar32);
    extern void XftTextRender32(Display *, int, Picture, XftFont *,
				Picture, int, int, int, int,
				const FcChar32 *, int);
    extern void XftGlyphRender(Display *, int, Picture, XftFont *, Picture,
			       int, int, int, int, const FT_UInt *, int);
    extern Picture XftDrawPicture(XftDraw *);
    extern void XftDrawStringUtf8(XftDraw *, const XftColor *, XftFont *,
				  int, int, const FcChar8 *, int);
    extern int XftDefaultSet(Display *, FcPattern *);
    extern void XftDrawStringUtf16(XftDraw *, const XftColor *, XftFont *,
				   int, int, const FcChar8 *, FcEndian,
				   int);
    extern int XftDrawSetClip(XftDraw *, Region);
    extern void XftDrawString32(XftDraw *, const XftColor *, XftFont *,
				int, int, const FcChar32 *, int);
    extern FcChar32 XftFontInfoHash(const XftFontInfo *);
    extern XftFont *XftFontOpenInfo(Display *, FcPattern *, XftFontInfo *);
    extern void XftDrawChange(XftDraw *, Drawable);
    extern void XftCharSpecRender(Display *, int, Picture, XftFont *,
				  Picture, int, int, const XftCharSpec *,
				  int);
    extern void XftTextRender8(Display *, int, Picture, XftFont *, Picture,
			       int, int, int, int, const FcChar8 *, int);
    extern void XftTextExtents16(Display *, XftFont *, const FcChar16 *,
				 int, XGlyphInfo *);
    extern XftFont *XftFontOpenName(Display *, int, const char *);
    extern FcPattern *XftFontMatch(Display *, int, const FcPattern *,
				   FcResult *);
    extern FcBool XftInitFtLibrary(void);
    extern void XftDrawString16(XftDraw *, const XftColor *, XftFont *,
				int, int, const FcChar16 *, int);
#ifdef __cplusplus
}
#endif
#endif
