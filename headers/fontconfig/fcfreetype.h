#if (__LSB_VERSION__ >= 31 )
#ifndef _FONTCONFIG_FCFREETYPE_H_
#define _FONTCONFIG_FCFREETYPE_H_

#include <fontconfig/fontconfig.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern FT_UInt FcFreeTypeCharIndex(FT_Face, FcChar32);
    extern FcCharSet *FcFreeTypeCharSet(FT_Face, FcBlanks *);
    extern FcCharSet *FcFreeTypeCharSetAndSpacing(FT_Face, FcBlanks *,
						  int *);
    extern FcBool FcPatternAddFTFace(FcPattern *, const char *,
				     const FT_Face);
    extern FcResult FcPatternGetFTFace(const FcPattern *, const char *,
				       int, FT_Face *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
