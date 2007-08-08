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
#if defined __i386__
/* IA32 */
    typedef struct FT_GlyphRec_ *FT_Glyph;

#endif
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

#ifdef __cplusplus
}
#endif
#endif
