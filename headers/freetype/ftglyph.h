#ifndef _FREETYPE_FTGLYPH_H_
#define _FREETYPE_FTGLYPH_H_

#include <freetype/ftrender.h>
#include <freetype/ftmm.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftstroke.h>
#include <freetype/t1tables.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ft_glyph_bbox_gridfit	FT_GLYPH_BBOX_GRIDFIT
#define ft_glyph_bbox_pixels	FT_GLYPH_BBOX_PIXELS
#define ft_glyph_bbox_subpixels	FT_GLYPH_BBOX_SUBPIXELS
#define ft_glyph_bbox_truncate	FT_GLYPH_BBOX_TRUNCATE
#define ft_glyph_bbox_unscaled	FT_GLYPH_BBOX_UNSCALED


    typedef struct FT_Matrix_ FT_Matrix;

#include <freetype/ftsynth.h>
    typedef struct FT_BBox_ FT_BBox;

#include <freetype/ftoutln.h>
    typedef enum FT_Render_Mode_ FT_Render_Mode;

#include <freetype/freetype.h>







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
