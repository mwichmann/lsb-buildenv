#ifndef _QBUTTON_H_
#define _QBUTTON_H_

#include <X11/Xlib.h>
#include <pango-1.0/pango/pangoft2.h>
#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/ftrender.h>
#include <freetype/ftmm.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/t1tables.h>

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
