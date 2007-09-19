#ifndef _X11_XFT_XFT_H_
#define _X11_XFT_XFT_H_

#include <fontconfig/fontconfig.h>
#include <X11/extensions/Xrender.h>
#include <freetype/ftoutln.h>

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


#ifdef __cplusplus
}
#endif
#endif
