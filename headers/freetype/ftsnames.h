#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTSNAMES_H_
#define _FREETYPE_FTSNAMES_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct FT_SfntName_ FT_SfntName;

    struct FT_SfntName_ {
	FT_UShort platform_id;
	FT_UShort encoding_id;
	FT_UShort language_id;
	FT_UShort name_id;
	FT_Byte *string;
	FT_UInt string_len;
    };


/* Function prototypes */

    extern FT_Error FT_Get_Sfnt_Name(FT_Face, FT_UInt, FT_SfntName *);
    extern FT_UInt FT_Get_Sfnt_Name_Count(FT_Face);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
