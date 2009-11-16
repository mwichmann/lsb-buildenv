#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_XFT_XFTCOMPAT_H_
#define _X11_XFT_XFTCOMPAT_H_

#include <fontconfig/fontconfig.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XFT_ENCODING	"encoding"
#define XftConfigSubstitute(p)	FcConfigSubstitute (0, p, FcMatchPattern)
#define XftFontSetDestroy	FcFontSetDestroy
#define XftFontSetMatch	FcFontSetMatch
#define XftMatrixEqual	FcMatrixEqual
#define XftMatrixInit(m)	FcMatrixInit(m)
#define XftMatrixMultiply	FcMatrixMultiply
#define XftMatrixRotate	FcMatrixRotate
#define XftMatrixScale	FcMatrixScale
#define XftMatrixShear	FcMatrixShear
#define XftObjectSetAdd	FcObjectSetAdd
#define XftObjectSetBuild	FcObjectSetBuild
#define XftObjectSetCreate	FcObjectSetCreate
#define XftObjectSetDestroy	FcObjectSetDestroy
#define XftObjectSetVaBuild	FcObjectSetVaBuild
#define XftPatternAdd	FcPatternAdd
#define XftPatternAddBool	FcPatternAddBool
#define XftPatternAddDouble	FcPatternAddDouble
#define XftPatternAddInteger	FcPatternAddInteger
#define XftPatternAddMatrix	FcPatternAddMatrix
#define XftPatternAddString(p,e,s)	FcPatternAddString(p,e,(FcChar8 *)(s))
#define XftPatternBuild	FcPatternBuild
#define XftPatternCreate	FcPatternCreate
#define XftPatternDel	FcPatternDel
#define XftPatternDestroy	FcPatternDestroy
#define XftPatternDuplicate	FcPatternDuplicate
#define XftPatternGet	FcPatternGet
#define XftPatternGetBool	FcPatternGetBool
#define XftPatternGetDouble	FcPatternGetDouble
#define XftPatternGetInteger	FcPatternGetInteger
#define XftPatternGetMatrix	FcPatternGetMatrix
#define XftPatternGetString(p,e,i,n)	FcPatternGetString(p,e,i,(FcChar8 **) (n))
#define XftPatternVaBuild	FcPatternVaBuild
#define XftResultMatch	FcResultMatch
#define XftResultNoId	FcResultNoId
#define XftResultNoMatch	FcResultNoMatch
#define XftResultTypeMismatch	FcResultTypeMismatch
#define XftTypeBool	FcTypeBool
#define XftTypeDouble	FcTypeDouble
#define XftTypeInteger	FcTypeInteger
#define XftTypeMatrix	FcTypeMatrix
#define XftTypeString	FcTypeString
#define XftTypeVoid	FcTypeVoid
#define XftUtf8Len	FcUtf8Len
#define XftUtf8ToUcs4	FcUtf8ToUcs4
#define XftValueDestroy	FcValueDestroy
#define XFT_ANTIALIAS	FC_ANTIALIAS
#define XFT_CHARCELL	FC_CHARCELL
#define XFT_CHAR_HEIGHT	FC_CHAR_HEIGHT
#define XFT_CHAR_WIDTH	FC_CHAR_WIDTH
#define XFT_DPI	FC_DPI
#define XFT_FAMILY	FC_FAMILY
#define XFT_FILE	FC_FILE
#define XFT_FOUNDRY	FC_FOUNDRY
#define XFT_INDEX	FC_INDEX
#define XFT_MATRIX	FC_MATRIX
#define XFT_MINSPACE	FC_MINSPACE
#define XFT_MONO	FC_MONO
#define XFT_OUTLINE	FC_OUTLINE
#define XFT_PIXEL_SIZE	FC_PIXEL_SIZE
#define XFT_PROPORTIONAL	FC_PROPORTIONAL
#define XFT_RASTERIZER	FC_RASTERIZER
#define XFT_RGBA	FC_RGBA
#define XFT_RGBA_BGR	FC_RGBA_BGR
#define XFT_RGBA_NONE	FC_RGBA_NONE
#define XFT_RGBA_RGB	FC_RGBA_RGB
#define XFT_RGBA_UNKNOWN	FC_RGBA_UNKNOWN
#define XFT_RGBA_VBGR	FC_RGBA_VBGR
#define XFT_RGBA_VRGB	FC_RGBA_VRGB
#define XFT_SCALABLE	FC_SCALABLE
#define XFT_SCALE	FC_SCALE
#define XFT_SIZE	FC_SIZE
#define XFT_SLANT	FC_SLANT
#define XFT_SLANT_ITALIC	FC_SLANT_ITALIC
#define XFT_SLANT_OBLIQUE	FC_SLANT_OBLIQUE
#define XFT_SLANT_ROMAN	FC_SLANT_ROMAN
#define XFT_SPACING	FC_SPACING
#define XFT_STYLE	FC_STYLE
#define XFT_WEIGHT	FC_WEIGHT
#define XFT_WEIGHT_BLACK	FC_WEIGHT_BLACK
#define XFT_WEIGHT_BOLD	FC_WEIGHT_BOLD
#define XFT_WEIGHT_DEMIBOLD	FC_WEIGHT_DEMIBOLD
#define XFT_WEIGHT_LIGHT	FC_WEIGHT_LIGHT
#define XFT_WEIGHT_MEDIUM	FC_WEIGHT_MEDIUM
#define XftGlyphExists	XftCharExists


    typedef unsigned char XftChar8;

    typedef unsigned short XftChar16;

    typedef unsigned int XftChar32;

    typedef enum _FcType XftType;

    typedef struct _FcMatrix XftMatrix;

    typedef enum _FcResult XftResult;

    typedef struct _FcValue XftValue;

    typedef struct _FcPattern XftPattern;

    typedef struct _FcFontSet XftFontSet;

    typedef struct _FcObjectSet XftObjectSet;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
