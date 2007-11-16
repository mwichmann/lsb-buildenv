#ifndef _FREETYPE_FTRENDER_H_
#define _FREETYPE_FTRENDER_H_

#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftimage.h>

#ifdef __cplusplus
extern "C" {
#endif



#define FT_Glyph_Done_Func	FT_Glyph_DoneFunc
#define FT_Glyph_BBox_Func	FT_Glyph_GetBBoxFunc
#define FT_Glyph_Init_Func	FT_Glyph_InitFunc
#define FT_Glyph_Prepare_Func	FT_Glyph_PrepareFunc
#define FTRenderer_getCBox	FT_Renderer_GetCBoxFunc
#define FTRenderer_render	FT_Renderer_RenderFunc
#define FTRenderer_setMode	FT_Renderer_SetModeFunc
#define FTRenderer_transform	FT_Renderer_TransformFunc


    typedef FT_Error(*FT_Renderer_RenderFunc) (FT_Renderer, FT_Renderer,
					       FT_GlyphSlot, FT_GlyphSlot,
					       FT_UInt, FT_UInt,
					       FT_Vector *, FT_Vector *);

    typedef FT_Error(*FT_Renderer_TransformFunc) (FT_Renderer,
						  FT_GlyphSlot,
						  FT_Matrix *,
						  FT_Vector *);

    typedef void (*FT_Renderer_GetCBoxFunc) (FT_Renderer, FT_GlyphSlot,
					     FT_BBox *);

    typedef FT_Error(*FT_Renderer_SetModeFunc) (FT_Renderer, FT_ULong,
						FT_Pointer);

    typedef struct FT_Renderer_Class_ FT_Renderer_Class;


    struct FT_Renderer_Class_ {
	FT_Module_Class root;
	FT_Glyph_Format glyph_format;
	FT_Renderer_RenderFunc render_glyph;
	FT_Renderer_TransformFunc transform_glyph;
	FT_Renderer_GetCBoxFunc get_glyph_cbox;
	FT_Renderer_SetModeFunc set_mode;
	FT_Raster_Funcs *raster_class;
    };


    extern FT_Error FT_Set_Renderer(FT_Library, FT_Renderer, FT_UInt,
				    FT_Parameter *);
    extern FT_Renderer FT_Get_Renderer(FT_Library, FT_Glyph_Format);
#ifdef __cplusplus
}
#endif
#endif
