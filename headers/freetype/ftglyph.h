#ifndef _FREETYPE_FTGLYPH_H_
#define _FREETYPE_FTGLYPH_H_

#include <GL/gl.h>
#include <freetype/ftrender.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftstroke.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ft_glyph_bbox_gridfit	FT_GLYPH_BBOX_GRIDFIT
#define ft_glyph_bbox_pixels	FT_GLYPH_BBOX_PIXELS
#define ft_glyph_bbox_subpixels	FT_GLYPH_BBOX_SUBPIXELS
#define ft_glyph_bbox_truncate	FT_GLYPH_BBOX_TRUNCATE
#define ft_glyph_bbox_unscaled	FT_GLYPH_BBOX_UNSCALED


#if defined __i386__
/* IA32 */
    typedef struct FT_Matrix_ FT_Matrix;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_BBox_ FT_BBox;

#endif
#include <freetype/ftoutln.h>
#if defined __i386__
/* IA32 */
    typedef enum FT_Render_Mode_ FT_Render_Mode;

#endif
#if defined __i386__
/* IA32 */



#endif
#if defined __i386__
/* IA32 */



#endif

#ifdef __cplusplus
}
#endif
#endif
