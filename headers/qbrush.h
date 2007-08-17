#ifndef _QBRUSH_H_
#define _QBRUSH_H_

#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftsizes.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Error FT_New_Size(FT_Face, FT_Size *);
    extern FT_Error FT_Activate_Size(FT_Size);
    extern FT_Error FT_Done_Size(FT_Size);
#ifdef __cplusplus
}
#endif
#endif
