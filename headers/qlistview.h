#ifndef _QLISTVIEW_H_
#define _QLISTVIEW_H_

#include <X11/Xlib.h>
#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftglyph.h>
#include <freetype/ftrender.h>
#include <freetype/ftsizes.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftstroke.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
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
