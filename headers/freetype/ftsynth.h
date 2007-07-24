#ifndef _FREETYPE_FTSYNTH_H_
#define _FREETYPE_FTSYNTH_H_

#include <GL/gl.h>
#include <fontconfig/fcfreetype.h>
#include <freetype/ftlist.h>
#include <freetype/ftmm.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftstroke.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif




#if defined __i386__
/* IA32 */
    typedef struct FT_GlyphSlotRec_ *FT_GlyphSlot;

#endif
#include <freetype/ftglyph.h>
#include <freetype/ftrender.h>
#include <freetype/ftoutln.h>

    extern void FT_GlyphSlot_Oblique(FT_GlyphSlot);
    extern void FT_GlyphSlot_Embolden(FT_GlyphSlot);
#ifdef __cplusplus
}
#endif
#endif
