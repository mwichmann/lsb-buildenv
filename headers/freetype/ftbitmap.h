#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTBITMAP_H_
#define _FREETYPE_FTBITMAP_H_

#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern FT_Error FT_Bitmap_Convert(FT_Library, const FT_Bitmap *,
				      FT_Bitmap *, FT_Int);
    extern FT_Error FT_Bitmap_Copy(FT_Library, const FT_Bitmap *,
				   FT_Bitmap);
    extern FT_Error FT_Bitmap_Done(FT_Library, FT_Bitmap *);
    extern FT_Error FT_Bitmap_Embolden(FT_Library, FT_Bitmap *, FT_Pos,
				       FT_Pos);
    extern void FT_Bitmap_New(FT_Bitmap *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
