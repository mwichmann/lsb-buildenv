#ifndef _FREETYPE_FTPFR_H_
#define _FREETYPE_FTPFR_H_

#include <GL/gl.h>
#include <fontconfig/fcfreetype.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftsizes.h>
#include <freetype/ftstroke.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Error FT_Get_PFR_Advance(FT_Face, FT_UInt, FT_Pos *);
    extern FT_Error FT_Get_PFR_Metrics(FT_Face, FT_UInt *, FT_UInt *,
				       FT_Fixed *, FT_Fixed *);
    extern FT_Error FT_Get_PFR_Kerning(FT_Face, FT_UInt, FT_UInt,
				       FT_Vector *);
#ifdef __cplusplus
}
#endif
#endif
