#ifndef _FREETYPE_FTOUTLN_H_
#define _FREETYPE_FTOUTLN_H_

#include <freetype/freetype.h>
#include <freetype/ftglyph.h>
#include <freetype/fttypes.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftimage.h>

#ifdef __cplusplus
extern "C" {
#endif





    typedef enum {
	FT_ORIENTATION_TRUETYPE = 0,
	FT_ORIENTATION_POSTSCRIPT = 1,
	FT_ORIENTATION_FILL_RIGHT = 0,
	FT_ORIENTATION_FILL_LEFT = 1
    } FT_Orientation;


    extern void FT_Outline_Reverse(FT_Outline *);
    extern FT_Error FT_Outline_New(FT_Library, FT_UInt, FT_Int,
				   FT_Outline *);
    extern void FT_Outline_Transform(const FT_Outline *,
				     const FT_Matrix *);
    extern FT_Error FT_Outline_Done(FT_Library, FT_Outline *);
    extern void FT_Outline_Translate(const FT_Outline *, FT_Pos, FT_Pos);
    extern FT_Error FT_Outline_Render(FT_Library, FT_Outline *,
				      FT_Raster_Params *);
    extern void FT_Outline_Get_CBox(const FT_Outline *, FT_BBox *);
    extern FT_Error FT_Outline_Get_Bitmap(FT_Library, FT_Outline *,
					  const FT_Bitmap *);
    extern FT_Error FT_Outline_Decompose(FT_Outline *,
					 const FT_Outline_Funcs *, void *);
    extern FT_Error FT_Outline_Check(FT_Outline *);
    extern FT_Error FT_Outline_Copy(const FT_Outline *, FT_Outline *);
    extern FT_Orientation FT_Outline_Get_Orientation(FT_Outline *);
#ifdef __cplusplus
}
#endif
#endif
