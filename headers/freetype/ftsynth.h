#ifndef _FREETYPE_FTSYNTH_H_
#define _FREETYPE_FTSYNTH_H_

#include <freetype/fttypes.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftimage.h>
#include <freetype/ftstroke.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct FT_GlyphSlotRec_ *FT_GlyphSlot;

#include <freetype/ftglyph.h>
#include <freetype/freetype.h>
#include <freetype/ftoutln.h>
#include <freetype/tttables.h>
#include <freetype/ftsizes.h>

    extern void FT_GlyphSlot_Oblique(FT_GlyphSlot);
    extern void FT_GlyphSlot_Embolden(FT_GlyphSlot);
#ifdef __cplusplus
}
#endif
#endif
