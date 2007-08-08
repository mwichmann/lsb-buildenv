#ifndef _QACCEL_H_
#define _QACCEL_H_

#include <fontconfig/fcfreetype.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/tttables.h>
#include <freetype/ftmm.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_ULong FT_Get_CMap_Language_ID(FT_CharMap);
    extern FT_Error FT_Load_Sfnt_Table(FT_Face, FT_ULong, FT_Long,
				       FT_Byte *, FT_ULong *);
    extern void *FT_Get_Sfnt_Table(FT_Face, FT_Sfnt_Tag);
    extern FT_Error FT_Sfnt_Table_Info(FT_Face, FT_UInt, FT_ULong *,
				       FT_ULong *);
#ifdef __cplusplus
}
#endif
#endif
