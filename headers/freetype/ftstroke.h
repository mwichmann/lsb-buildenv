#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTSTROKE_H_
#define _FREETYPE_FTSTROKE_H_

#include <freetype/ftlist.h>
#include <freetype/freetype.h>
#include <freetype/ftglyph.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
    typedef enum {
	FT_STROKER_LINECAP_BUTT = 0,
	FT_STROKER_LINECAP_ROUND = 1,
	FT_STROKER_LINECAP_SQUARE = 2
    } FT_Stroker_LineCap;

    typedef enum {
	FT_STROKER_LINEJOIN_ROUND = 0,
	FT_STROKER_LINEJOIN_BEVEL = 1,
	FT_STROKER_LINEJOIN_MITER = 2
    } FT_Stroker_LineJoin;

    typedef struct FT_StrokerRec_ *FT_Stroker;

    typedef enum {
	FT_STROKER_BORDER_LEFT = 0,
	FT_STROKER_BORDER_RIGHT = 1
    } FT_StrokerBorder;

#endif				// __LSB_VERSION__ >= 3.2


// Function prototypes

#if __LSB_VERSION__ >= 32
    extern FT_Error FT_Glyph_Stroke(FT_Glyph *, FT_Stroker, FT_Bool);
    extern FT_Error FT_Glyph_StrokeBorder(FT_Glyph *, FT_Stroker, FT_Bool,
					  FT_Bool);
    extern FT_StrokerBorder FT_Outline_GetInsideBorder(FT_Outline *);
    extern FT_StrokerBorder FT_Outline_GetOutsideBorder(FT_Outline *);
    extern FT_Error FT_Stroker_BeginSubPath(FT_Stroker, FT_Vector *,
					    FT_Bool);
    extern FT_Error FT_Stroker_ConicTo(FT_Stroker, FT_Vector *,
				       FT_Vector *);
    extern FT_Error FT_Stroker_CubicTo(FT_Stroker, FT_Vector *,
				       FT_Vector *, FT_Vector *);
    extern void FT_Stroker_Done(FT_Stroker);
    extern FT_Error FT_Stroker_EndSubPath(FT_Stroker);
    extern void FT_Stroker_Export(FT_Stroker, FT_Outline *);
    extern void FT_Stroker_ExportBorder(FT_Stroker, FT_StrokerBorder,
					FT_Outline *);
    extern FT_Error FT_Stroker_GetBorderCounts(FT_Stroker,
					       FT_StrokerBorder, FT_UInt *,
					       FT_UInt *);
    extern FT_Error FT_Stroker_GetCounts(FT_Stroker, FT_UInt *, FT_UInt *);
    extern FT_Error FT_Stroker_LineTo(FT_Stroker, FT_Vector *);
    extern FT_Error FT_Stroker_New(FT_Memory, FT_Stroker *);
    extern FT_Error FT_Stroker_ParseOutline(FT_Stroker, FT_Outline *,
					    FT_Bool);
    extern void FT_Stroker_Rewind(FT_Stroker);
    extern void FT_Stroker_Set(FT_Stroker, FT_Fixed, FT_Stroker_LineCap,
			       FT_Stroker_LineJoin, FT_Fixed);
#endif				// __LSB_VERSION__ >= 3.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
