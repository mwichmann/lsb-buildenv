#ifndef _FREETYPE_FTRENDER_H_
#define _FREETYPE_FTRENDER_H_

#include <GL/gl.h>
#include <freetype/ftlist.h>
#include <freetype/ftmm.h>
#include <freetype/ftsizes.h>
#include <freetype/t1tables.h>

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


    typedef enum FT_Glyph_Format_ FT_Glyph_Format;

    typedef struct FT_RendererRec_ *FT_Renderer;

#include <freetype/ftmodapi.h>
#include <freetype/ftoutln.h>
#include <freetype/ftsynth.h>
#include <freetype/ftstroke.h>
    typedef struct FT_Parameter_ FT_Parameter;

#include <freetype/freetype.h>




#ifdef __cplusplus
}
#endif
#endif
