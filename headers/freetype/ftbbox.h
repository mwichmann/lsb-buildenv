#ifndef _FREETYPE_FTBBOX_H_
#define _FREETYPE_FTBBOX_H_

#include <freetype/ftoutln.h>
#include <freetype/ftglyph.h>
#include <freetype/fttypes.h>
#include <freetype/ftsizes.h>
#include <freetype/ftstroke.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Error FT_Outline_Get_BBox(FT_Outline *, FT_BBox *);
#ifdef __cplusplus
}
#endif
#endif