#ifndef _FREETYPE_FTSTROKE_H_
#define _FREETYPE_FTSTROKE_H_

#include <GL/gl.h>
#include <freetype/ftlist.h>
#include <freetype/ftmm.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif




#if defined __i386__
/* IA32 */
    typedef struct FT_Vector_ FT_Vector;

#endif
#include <freetype/ftrender.h>
#if defined __i386__
/* IA32 */
    typedef struct FT_Outline_ FT_Outline;

#endif
#include <freetype/freetype.h>
#if defined __i386__
/* IA32 */
    typedef struct FT_GlyphRec_ *FT_Glyph;

#endif
#include <freetype/ftglyph.h>
#include <freetype/ftoutln.h>
#if defined __i386__
/* IA32 */
    typedef FT_Fixed FT_Angle;

#endif
#if defined __i386__
/* IA32 */
    typedef enum {
	FT_STROKER_LINECAP_BUTT = 0,
	FT_STROKER_LINECAP_ROUND = 1,
	FT_STROKER_LINECAP_SQUARE = 2
    } FT_Stroker_LineCap;

#endif
#if defined __i386__
/* IA32 */
    typedef enum {
	FT_STROKER_LINEJOIN_ROUND = 0,
	FT_STROKER_LINEJOIN_BEVEL = 1,
	FT_STROKER_LINEJOIN_MITER = 2
    } FT_Stroker_LineJoin;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_StrokeBorderRec_ FT_StrokeBorderRec;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_StrokerRec_ *FT_Stroker;

#endif
#if defined __i386__
/* IA32 */
    typedef enum {
	FT_STROKER_BORDER_LEFT = 0,
	FT_STROKER_BORDER_RIGHT = 1
    } FT_StrokerBorder;

#endif
#if defined __i386__
/* IA32 */
    struct FT_StrokerRec_ {
	FT_Angle angle_in;
	FT_Angle angle_out;
	FT_Vector center;
	FT_Bool first_point;
	FT_Bool subpath_open;
	FT_Angle subpath_angle;
	FT_Vector subpath_start;
	FT_Stroker_LineCap line_cap;
	FT_Stroker_LineJoin line_join;
	FT_Fixed miter_limit;
	FT_Fixed radius;
	FT_Bool valid;
	FT_StrokeBorderRec borders[2];
	FT_Memory memory;
    };

#endif
     FT_StrokeBorderRec;

#if defined __i386__
/* IA32 */



#endif
#if defined __i386__
/* IA32 */



#endif
#if defined __i386__
/* IA32 */

    struct FT_StrokeBorderRec_ {
	FT_UInt num_points;
	FT_UInt max_points;
	FT_Vector *points;
	FT_Byte *tags;
	FT_Bool movable;
	FT_Int start;
	FT_Memory memory;
	FT_Bool valid;
    };

#endif

    extern FT_Error FT_Glyph_Stroke(FT_Glyph *, FT_Stroker, FT_Bool);
    extern FT_Error FT_Stroker_ConicTo(FT_Stroker, FT_Vector *,
				       FT_Vector *);
    extern void FT_Stroker_Done(FT_Stroker);
    extern FT_StrokerBorder FT_Outline_GetInsideBorder(FT_Outline *);
    extern FT_Error FT_Stroker_ParseOutline(FT_Stroker, FT_Outline *,
					    FT_Bool);
    extern FT_Error FT_Stroker_New(FT_Memory, FT_Stroker *);
    extern FT_Error FT_Stroker_BeginSubPath(FT_Stroker, FT_Vector *,
					    FT_Bool);
    extern void FT_Stroker_Set(FT_Stroker, FT_Fixed, FT_Stroker_LineCap,
			       FT_Stroker_LineJoin, FT_Fixed);
    extern void FT_Stroker_Rewind(FT_Stroker);
    extern FT_Error FT_Glyph_StrokeBorder(FT_Glyph *, FT_Stroker, FT_Bool,
					  FT_Bool);
    extern FT_StrokerBorder FT_Outline_GetOutsideBorder(FT_Outline *);
    extern void FT_Stroker_Export(FT_Stroker, FT_Outline *);
    extern FT_Error FT_Stroker_GetCounts(FT_Stroker, FT_UInt *, FT_UInt *);
    extern FT_Error FT_Stroker_CubicTo(FT_Stroker, FT_Vector *,
				       FT_Vector *, FT_Vector *);
    extern FT_Error FT_Stroker_LineTo(FT_Stroker, FT_Vector *);
    extern FT_Error FT_Stroker_GetBorderCounts(FT_Stroker,
					       FT_StrokerBorder, FT_UInt *,
					       FT_UInt *);
    extern FT_Error FT_Stroker_EndSubPath(FT_Stroker);
    extern void FT_Stroker_ExportBorder(FT_Stroker, FT_StrokerBorder,
					FT_Outline *);
#ifdef __cplusplus
}
#endif
#endif
