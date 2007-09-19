#ifndef _FREETYPE_FTSIZES_H_
#define _FREETYPE_FTSIZES_H_

#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef long int FT_Pos;

    typedef struct FT_Generic_ FT_Generic;

#include <freetype/freetype.h>
#include <freetype/ftoutln.h>
    typedef struct FT_Size_Metrics_ FT_Size_Metrics;

    typedef struct FT_Size_InternalRec_ *FT_Size_Internal;

    typedef struct FT_SizeRec_ *FT_Size;

    struct FT_SizeRec_ {
	FT_Face face;
	FT_Generic generic;
	FT_Size_Metrics metrics;
	FT_Size_Internal internal;
    };





    struct FT_Size_Metrics_ {
	FT_UShort x_ppem;
	FT_UShort y_ppem;
	FT_Fixed x_scale;
	FT_Fixed y_scale;
	FT_Pos ascender;
	FT_Pos descender;
	FT_Pos height;
	FT_Pos max_advance;
    };


#ifdef __cplusplus
}
#endif
#endif
