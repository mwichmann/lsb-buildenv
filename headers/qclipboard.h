#ifndef _QCLIPBOARD_H_
#define _QCLIPBOARD_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftglyph.h>
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





    extern void FT_GlyphSlot_Oblique(FT_GlyphSlot);
    extern void FT_GlyphSlot_Embolden(FT_GlyphSlot);
#ifdef __cplusplus
}
#endif
#endif
