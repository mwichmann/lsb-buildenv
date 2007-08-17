#ifndef _FREETYPE_FTMM_H_
#define _FREETYPE_FTMM_H_

#include <GL/gl.h>
#include <freetype/ftpfr.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef long unsigned int FT_ULong;

#include <freetype/freetype.h>
#include <freetype/ftoutln.h>
    typedef struct FT_MM_Axis_ FT_MM_Axis;

    typedef struct FT_Multi_Master_ FT_Multi_Master;

    typedef struct FT_Var_Axis_ FT_Var_Axis;

    typedef struct FT_Var_Named_Style_ FT_Var_Named_Style;

    typedef struct FT_MM_Var_ FT_MM_Var;

     FT_MM_Axis;


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


#ifdef __cplusplus
}
#endif
#endif
