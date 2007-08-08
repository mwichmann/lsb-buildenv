#ifndef _QCSTRING_H_
#define _QCSTRING_H_

#include <fontconfig/fcfreetype.h>
#include <freetype/ftoutln.h>
#include <freetype/ftsnames.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Error FT_Get_Sfnt_Name(FT_Face, FT_UInt, FT_SfntName *);
    extern FT_UInt FT_Get_Sfnt_Name_Count(FT_Face);
#ifdef __cplusplus
}
#endif
#endif
