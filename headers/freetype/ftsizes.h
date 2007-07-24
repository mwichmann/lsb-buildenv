#ifndef _FREETYPE_FTSIZES_H_
#define _FREETYPE_FTSIZES_H_

#include <GL/gl.h>
#include <fontconfig/fcfreetype.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif




#if defined __i386__
/* IA32 */
    typedef long int FT_Pos;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_Generic_ FT_Generic;

#endif
#include <freetype/ftoutln.h>
#if defined __i386__
/* IA32 */
    typedef struct FT_Size_Metrics_ FT_Size_Metrics;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_Size_InternalRec_ *FT_Size_Internal;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_SizeRec_ *FT_Size;

#endif
#if defined __i386__
/* IA32 */
    struct FT_SizeRec_ {
	FT_Face face;
	FT_Generic generic;
	FT_Size_Metrics metrics;
	FT_Size_Internal internal;
    };

#endif
#if defined __i386__
/* IA32 */
    struct FT_Size_InternalRec_;

#endif
#if defined __i386__
/* IA32 */



#endif
#if defined __i386__
/* IA32 */

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

#endif

    extern FT_Error FT_New_Size(FT_Face, FT_Size *);
    extern FT_Error FT_Activate_Size(FT_Size);
    extern FT_Error FT_Done_Size(FT_Size);
#ifdef __cplusplus
}
#endif
#endif
