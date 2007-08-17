#ifndef _QCOLOR_H_
#define _QCOLOR_H_

#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Int FT_Has_PS_Glyph_Names(FT_Face);
    extern FT_Error FT_Get_PS_Font_Private(FT_Face, PS_PrivateRec *);
    extern FT_Error FT_Get_PS_Font_Info(FT_Face, PS_FontInfoRec *);
#ifdef __cplusplus
}
#endif
#endif
