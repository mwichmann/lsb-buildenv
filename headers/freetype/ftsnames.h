#ifndef _FREETYPE_FTSNAMES_H_
#define _FREETYPE_FTSNAMES_H_

#include <GL/gl.h>
#include <fontconfig/fcfreetype.h>
#include <freetype/ftoutln.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif




#if defined __i386__
/* IA32 */
    typedef struct FT_SfntName_ FT_SfntName;

#endif
#if defined __i386__
/* IA32 */

    struct FT_SfntName_ {
	FT_UShort platform_id;
	FT_UShort encoding_id;
	FT_UShort language_id;
	FT_UShort name_id;
	FT_Byte *string;
	FT_UInt string_len;
    };

#endif

    extern FT_Error FT_Get_Sfnt_Name(FT_Face, FT_UInt, FT_SfntName *);
    extern FT_UInt FT_Get_Sfnt_Name_Count(FT_Face);
#ifdef __cplusplus
}
#endif
#endif
