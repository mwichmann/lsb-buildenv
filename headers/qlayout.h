#ifndef _QLAYOUT_H_
#define _QLAYOUT_H_

#include <fontconfig/fcfreetype.h>
#include <freetype/ftoutln.h>
#include <freetype/ftpfr.h>
#include <freetype/ftmm.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Error FT_Get_Multi_Master(FT_Face, FT_Multi_Master *);
    extern FT_Error FT_Set_MM_Design_Coordinates(FT_Face, FT_UInt,
						 FT_Long *);
    extern FT_Error FT_Get_MM_Var(FT_Face, FT_MM_Var * *);
    extern FT_Error FT_Set_Var_Blend_Coordinates(FT_Face, FT_UInt,
						 FT_Fixed *);
    extern FT_Error FT_Set_MM_Blend_Coordinates(FT_Face, FT_UInt,
						FT_Fixed *);
    extern FT_Error FT_Set_Var_Design_Coordinates(FT_Face, FT_UInt,
						  FT_Fixed *);
#ifdef __cplusplus
}
#endif
#endif
