#ifndef _FREETYPE_FTBITMAP_H_
#define _FREETYPE_FTBITMAP_H_

#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>

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
