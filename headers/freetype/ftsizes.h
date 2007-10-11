#ifndef _FREETYPE_FTSIZES_H_
#define _FREETYPE_FTSIZES_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct FT_Size_Metrics_ FT_Size_Metrics;

    typedef struct FT_Size_InternalRec_ *FT_Size_Internal;

#include <freetype/freetype.h>

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


    extern FT_Error FT_New_Size(FT_Face, FT_Size *);
    extern FT_Error FT_Activate_Size(FT_Size);
    extern FT_Error FT_Done_Size(FT_Size);
#ifdef __cplusplus
}
#endif
#endif
