#ifndef _X11_XFT_XFT_H_
#define _X11_XFT_XFT_H_

#include <GL/gl.h>
#include <fontconfig/fontconfig.h>
#include <fontconfig/fcfreetype.h>
#include <X11/extensions/Xrender.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftglyph.h>
#include <freetype/t1tables.h>

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
#if defined __i386__
/* IA32 */
    typedef struct _XftCharSpec XftCharSpec;

#endif
#if defined __i386__
/* IA32 */
    typedef struct _XftFtFile XftFtFile;

#endif
#if defined __i386__
/* IA32 */
    typedef struct _XftFontInfo XftFontInfo;

#endif
#if defined __i386__
/* IA32 */
    typedef struct _XftCharFontSpec XftCharFontSpec;

#endif
#if defined __i386__
/* IA32 */
    typedef struct _XftGlyphFontSpec XftGlyphFontSpec;

#endif












#if defined __i386__
/* IA32 */

    struct _XftCharSpec {
	FcChar32 ucs4;
	short int x;
	short int y;
    };

#endif
#if defined __i386__
/* IA32 */

    struct _XftFtFile {
	struct _XftFtFile *next;
	int ref;
	char *file;
	int id;
	FT_F26Dot6 xsize;
	FT_F26Dot6 ysize;
	FT_Matrix matrix;
	int lock;
	FT_Face face;
    };

#endif
#if defined __i386__
/* IA32 */

    struct _XftFontInfo {
	FcChar32 hash;
	XftFtFile *file;
	FT_F26Dot6 xsize;
	FT_F26Dot6 ysize;
	FcBool antialias;
	FcBool embolden;
	int rgba;
	FT_Matrix matrix;
	FcBool transform;
	FT_Int load_flags;
	FcBool render;
	int spacing;
	FcBool minspace;
	int char_width;
    };

#endif
#if defined __i386__
/* IA32 */

    struct _XftCharFontSpec {
	XftFont *font;
	FcChar32 ucs4;
	short int x;
	short int y;
    };

#endif
#if defined __i386__
/* IA32 */

    struct _XftGlyphFontSpec {
	XftFont *font;
	FT_UInt glyph;
	short int x;
	short int y;
    };

#endif

#ifdef __cplusplus
}
#endif
#endif
