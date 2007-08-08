#ifndef _QGDICT_H_
#define _QGDICT_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftrender.h>
#include <freetype/ftmm.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftstroke.h>
#include <freetype/ftsynth.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Error FT_Set_Renderer(FT_Library, FT_Renderer, FT_UInt,
				    FT_Parameter *);
    extern FT_Renderer FT_Get_Renderer(FT_Library, FT_Glyph_Format);
#ifdef __cplusplus
}
#endif
#endif
