#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTGLYPH_H_
#define _FREETYPE_FTGLYPH_H_

#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct FT_Glyph_Class_ FT_Glyph_Class;

    typedef struct FT_GlyphRec_ *FT_Glyph;

#include <freetype/ftoutln.h>
    typedef FT_Error(*FT_Glyph_InitFunc) (FT_Glyph, FT_GlyphSlot);

    typedef void (*FT_Glyph_DoneFunc) (FT_Glyph);

    typedef FT_Error(*FT_Glyph_CopyFunc) (FT_Glyph, FT_Glyph);

    typedef void (*FT_Glyph_TransformFunc) (FT_Glyph, FT_Matrix *,
					    FT_Vector *);

    typedef void (*FT_Glyph_GetBBoxFunc) (FT_Glyph, FT_BBox *);

    typedef FT_Error(*FT_Glyph_PrepareFunc) (FT_Glyph, FT_GlyphSlot);

    typedef enum FT_Glyph_BBox_Mode_ {
	FT_GLYPH_BBOX_UNSCALED = 0,
	FT_GLYPH_BBOX_SUBPIXELS = 0,
	FT_GLYPH_BBOX_GRIDFIT = 1,
	FT_GLYPH_BBOX_TRUNCATE = 2,
	FT_GLYPH_BBOX_PIXELS = 3
    } FT_Glyph_BBox_Mode;

    typedef struct FT_OutlineGlyphRec_ *FT_OutlineGlyph;

    typedef struct FT_GlyphRec_ FT_GlyphRec;

    typedef struct FT_BitmapGlyphRec_ *FT_BitmapGlyph;

    struct FT_Glyph_Class_ {
	FT_Long glyph_size;
	FT_Glyph_Format glyph_format;
	FT_Glyph_InitFunc glyph_init;
	FT_Glyph_DoneFunc glyph_done;
	FT_Glyph_CopyFunc glyph_copy;
	FT_Glyph_TransformFunc glyph_transform;
	FT_Glyph_GetBBoxFunc glyph_bbox;
	FT_Glyph_PrepareFunc glyph_prepare;
    };

    struct FT_GlyphRec_ {
	FT_Library library;
	const FT_Glyph_Class *clazz;
	FT_Glyph_Format format;
	FT_Vector advance;
    };

    struct FT_OutlineGlyphRec_ {
	FT_GlyphRec root;
	FT_Outline outline;
    };

    struct FT_BitmapGlyphRec_ {
	FT_GlyphRec root;
	FT_Int left;
	FT_Int top;
	FT_Bitmap bitmap;
    };


/* Function prototypes */

    extern void FT_Done_Glyph(FT_Glyph);
    extern FT_Error FT_Get_Glyph(FT_GlyphSlot, FT_Glyph *);
    extern FT_Error FT_Glyph_Copy(FT_Glyph, FT_Glyph *);
    extern void FT_Glyph_Get_CBox(FT_Glyph, FT_UInt, FT_BBox *);
    extern FT_Error FT_Glyph_To_Bitmap(FT_Glyph *, FT_Render_Mode,
				       FT_Vector *, FT_Bool);
    extern FT_Error FT_Glyph_Transform(FT_Glyph, FT_Matrix *, FT_Vector *);
    extern FT_Error FT_Matrix_Invert(FT_Matrix *);
    extern void FT_Matrix_Multiply(const FT_Matrix *, FT_Matrix *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
