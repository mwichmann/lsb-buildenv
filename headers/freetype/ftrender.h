#ifndef _FREETYPE_FTRENDER_H_
#define _FREETYPE_FTRENDER_H_

#include <freetype/ftlist.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

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


    typedef struct FT_RendererRec_ *FT_Renderer;

#include <freetype/ftmodapi.h>
#include <freetype/ftoutln.h>
#include <freetype/ftsynth.h>
#include <freetype/ftstroke.h>
    typedef struct FT_Parameter_ FT_Parameter;

#include <freetype/freetype.h>




    extern FT_Error FT_Set_Renderer(FT_Library, FT_Renderer, FT_UInt,
				    FT_Parameter *);
    extern FT_Renderer FT_Get_Renderer(FT_Library, FT_Glyph_Format);
#ifdef __cplusplus
}
#endif
#endif
