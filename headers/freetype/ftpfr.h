#ifndef _FREETYPE_FTPFR_H_
#define _FREETYPE_FTPFR_H_

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





    extern FT_Error FT_Get_PFR_Advance(FT_Face, FT_UInt, FT_Pos *);
    extern FT_Error FT_Get_PFR_Metrics(FT_Face, FT_UInt *, FT_UInt *,
				       FT_Fixed *, FT_Fixed *);
    extern FT_Error FT_Get_PFR_Kerning(FT_Face, FT_UInt, FT_UInt,
				       FT_Vector *);
#ifdef __cplusplus
}
#endif
#endif
