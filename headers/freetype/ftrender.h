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


#if defined __i386__
/* IA32 */
    typedef enum FT_Glyph_Format_ FT_Glyph_Format;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_RendererRec_ *FT_Renderer;

#endif
#include <freetype/ftmodapi.h>
#include <freetype/ftoutln.h>
#include <freetype/ftsynth.h>
#include <freetype/ftstroke.h>
#if defined __i386__
/* IA32 */
    typedef struct FT_Parameter_ FT_Parameter;

#endif
#include <freetype/freetype.h>
#if defined __i386__
/* IA32 */



#endif

    extern FT_Error FT_Set_Renderer(FT_Library, FT_Renderer, FT_UInt,
				    FT_Parameter *);
    extern FT_Renderer FT_Get_Renderer(FT_Library, FT_Glyph_Format);
#ifdef __cplusplus
}
#endif
#endif
