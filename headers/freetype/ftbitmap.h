#ifndef _FREETYPE_FTBITMAP_H_
#define _FREETYPE_FTBITMAP_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftrender.h>
#include <freetype/ftmm.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/t1tables.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Error FT_Bitmap_Done(FT_Library, FT_Bitmap *);
    extern FT_Error FT_Bitmap_Convert(FT_Library, const FT_Bitmap *,
				      FT_Bitmap *, FT_Int);
    extern void FT_Bitmap_New(FT_Bitmap *);
#ifdef __cplusplus
}
#endif
#endif
