#ifndef _FONTCONFIG_FCFREETYPE_H_
#define _FONTCONFIG_FCFREETYPE_H_

#include <fontconfig/fontconfig.h>
#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftsizes.h>
#include <freetype/ftimage.h>
#include <freetype/ftstroke.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FcResult FcPatternGetFTFace(const FcPattern *, const char *,
				       int, FT_Face *);
    extern FcBool FcPatternAddFTFace(FcPattern *, const char *,
				     const FT_Face);
    extern FT_UInt FcFreeTypeCharIndex(FT_Face, FcChar32);
    extern FcCharSet *FcFreeTypeCharSet(FT_Face, FcBlanks *);
    extern FcCharSet *FcFreeTypeCharSetAndSpacing(FT_Face, FcBlanks *,
						  int *);
#ifdef __cplusplus
}
#endif
#endif
