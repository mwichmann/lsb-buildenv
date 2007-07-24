#ifndef _FREETYPE_FTMM_H_
#define _FREETYPE_FTMM_H_

#include <GL/gl.h>
#include <fontconfig/fcfreetype.h>
#include <freetype/ftpfr.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif




#if defined __i386__
/* IA32 */
    typedef long unsigned int FT_ULong;

#endif
#include <freetype/freetype.h>
#if defined __i386__
/* IA32 */
    typedef struct FT_MM_Axis_ FT_MM_Axis;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_Multi_Master_ FT_Multi_Master;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_Var_Axis_ FT_Var_Axis;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_Var_Named_Style_ FT_Var_Named_Style;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_MM_Var_ FT_MM_Var;

#endif
     FT_MM_Axis;

#if defined __i386__
/* IA32 */

    struct FT_MM_Axis_ {
	FT_String *name;
	FT_Long minimum;
	FT_Long maximum;
    };

#endif
#if defined __i386__
/* IA32 */

    struct FT_Multi_Master_ {
	FT_UInt num_axis;
	FT_UInt num_designs;
	FT_MM_Axis axis[4];
    };

#endif
#if defined __i386__
/* IA32 */

    struct FT_Var_Axis_ {
	FT_String *name;
	FT_Fixed minimum;
	FT_Fixed def;
	FT_Fixed maximum;
	FT_ULong tag;
	FT_UInt strid;
    };

#endif
#if defined __i386__
/* IA32 */

    struct FT_Var_Named_Style_ {
	FT_Fixed *coords;
	FT_UInt strid;
    };

#endif
#if defined __i386__
/* IA32 */

    struct FT_MM_Var_ {
	FT_UInt num_axis;
	FT_UInt num_designs;
	FT_UInt num_namedstyles;
	FT_Var_Axis *axis;
	FT_Var_Named_Style *namedstyle;
    };

#endif

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
