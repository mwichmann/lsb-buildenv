#ifndef _FREETYPE_FTGLYPH_H_
#define _FREETYPE_FTGLYPH_H_

#include <freetype/fttypes.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct FT_Matrix_ FT_Matrix;

    typedef struct FT_BBox_ FT_BBox;

#include <freetype/ftimage.h>
#include <freetype/ftsizes.h>
    typedef struct FT_Glyph_Class_ FT_Glyph_Class;

    typedef FT_Error(*FT_Glyph_InitFunc) (FT_Glyph, FT_Glyph, FT_GlyphSlot,
					  FT_GlyphSlot);

    typedef void (*FT_Glyph_DoneFunc) (FT_Glyph);

    typedef FT_Error(*FT_Glyph_CopyFunc) (FT_Glyph, FT_Glyph);

    typedef void (*FT_Glyph_TransformFunc) (FT_Glyph, FT_Matrix *,
					    FT_Vector *);

    typedef void (*FT_Glyph_GetBBoxFunc) (FT_Glyph, FT_BBox *);

    typedef FT_Error(*FT_Glyph_PrepareFunc) (FT_Glyph, FT_Glyph,
					     FT_GlyphSlot, FT_GlyphSlot);

    typedef enum FT_Render_Mode_ FT_Render_Mode;

    struct FT_GlyphRec_ {
	FT_Library library;
	const FT_Glyph_Class *clazz;
	FT_Glyph_Format format;
	FT_Vector advance;
    };

#include <freetype/freetype.h>
#include <freetype/ftoutln.h>
#include <freetype/ftstroke.h>










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
