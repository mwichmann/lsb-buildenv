#ifndef _QAPPLICATION_H_
#define _QAPPLICATION_H_

#include <X11/Xlib.h>
#include <fontconfig/fcfreetype.h>
#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
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





    extern void FT_Done_Glyph(FT_Glyph);
    extern void FT_Matrix_Multiply(const FT_Matrix *, FT_Matrix *);
    extern FT_Error FT_Glyph_Transform(FT_Glyph, FT_Matrix *, FT_Vector *);
    extern FT_Error FT_Matrix_Invert(FT_Matrix *);
    extern FT_Error FT_Glyph_To_Bitmap(FT_Glyph *, FT_Render_Mode,
				       FT_Vector *, FT_Bool);
    extern void FT_Glyph_Get_CBox(FT_Glyph, FT_UInt, FT_BBox *);
    extern FT_Error FT_Glyph_Copy(FT_Glyph, FT_Glyph *);
    extern FT_Error FT_Get_Glyph(FT_GlyphSlot, FT_Glyph *);
#ifdef __cplusplus
}
#endif
#endif
