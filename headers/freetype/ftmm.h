#ifndef _FREETYPE_FTMM_H_
#define _FREETYPE_FTMM_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftpfr.h>
#include <freetype/tttables.h>
#include <freetype/ftglyph.h>
#include <freetype/fttypes.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftimage.h>
#include <freetype/ftstroke.h>
#include <freetype/ftsynth.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct FT_MM_Axis_ FT_MM_Axis;

    typedef struct FT_Multi_Master_ FT_Multi_Master;

    typedef struct FT_Var_Axis_ FT_Var_Axis;

    typedef struct FT_Var_Named_Style_ FT_Var_Named_Style;

    typedef struct FT_MM_Var_ FT_MM_Var;


    struct FT_MM_Axis_ {
	FT_String *name;
	FT_Long minimum;
	FT_Long maximum;
    };


    struct FT_Multi_Master_ {
	FT_UInt num_axis;
	FT_UInt num_designs;
	FT_MM_Axis axis[4];
    };


    struct FT_Var_Axis_ {
	FT_String *name;
	FT_Fixed minimum;
	FT_Fixed def;
	FT_Fixed maximum;
	FT_ULong tag;
	FT_UInt strid;
    };


    struct FT_Var_Named_Style_ {
	FT_Fixed *coords;
	FT_UInt strid;
    };


    struct FT_MM_Var_ {
	FT_UInt num_axis;
	FT_UInt num_designs;
	FT_UInt num_namedstyles;
	FT_Var_Axis *axis;
	FT_Var_Named_Style *namedstyle;
    };


    extern FT_Error FT_Get_Multi_Master(FT_Face, FT_Multi_Master *);
    extern FT_Error FT_Set_MM_Design_Coordinates(FT_Face, FT_UInt,
						 FT_Long *);
    extern FT_Error FT_Get_MM_Var(FT_Face, FT_MM_Var * *);
    extern FT_Error FT_Set_Var_Blend_Coordinates(FT_Face, FT_UInt,
						 FT_Fixed *);
    extern FT_Error FT_Set_MM_Blend_Coordinates(FT_Face, FT_UInt,
						FT_Fixed *);
    extern FT_Error FT_Set_Var_Design_Coordinates(FT_Face, FT_UInt,
						  FT_Fixed *);
#ifdef __cplusplus
}
#endif
#endif
