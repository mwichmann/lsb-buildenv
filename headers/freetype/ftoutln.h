#ifndef _FREETYPE_FTOUTLN_H_
#define _FREETYPE_FTOUTLN_H_

#include <freetype/ftlist.h>
#include <freetype/ftrender.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef FT_Error(*FT_Module_Constructor) (FT_Module);

    typedef void (*FT_Module_Destructor) (FT_Module);

    typedef FT_Pointer FT_Module_Interface;

    typedef FT_Module_Interface(*FT_Module_Requester) (FT_Module,
						       const char *);

#include <freetype/ftmodapi.h>
    typedef struct FT_ListRec_ FT_ListRec;

    typedef struct FT_ModuleRec_ FT_ModuleRec;

    typedef struct FT_Glyph_Metrics_ FT_Glyph_Metrics;

    typedef struct FT_SubGlyphRec_ *FT_SubGlyph;

    typedef struct FT_GlyphLoadRec_ FT_GlyphLoadRec;

    typedef struct FT_GlyphLoaderRec_ *FT_GlyphLoader;

    typedef struct FT_Slot_InternalRec_ *FT_Slot_Internal;

    typedef FT_Error(*FT_Renderer_RenderFunc) (FT_Renderer, FT_Renderer,
					       FT_GlyphSlot, FT_GlyphSlot,
					       FT_UInt, FT_UInt,
					       FT_Vector *, FT_Vector *);

    typedef FT_Error(*FT_Renderer_TransformFunc) (FT_Renderer,
						  FT_GlyphSlot,
						  FT_Matrix *,
						  FT_Vector *);

    typedef void (*FT_Renderer_GetCBoxFunc) (FT_Renderer, FT_GlyphSlot,
					     FT_BBox *);

    typedef FT_Error(*FT_Renderer_SetModeFunc) (FT_Renderer, FT_ULong,
						FT_Pointer);

    typedef struct FT_RasterRec_ *FT_Raster;

    typedef int (*FT_Raster_NewFunc) (void *, FT_Raster *);

    typedef void (*FT_Raster_ResetFunc) (FT_Raster, unsigned char *,
					 long unsigned int);

    typedef int (*FT_Raster_SetModeFunc) (FT_Raster, long unsigned int,
					  void *);

    typedef struct FT_Span_ FT_Span;

    typedef void (*FT_SpanFunc) (int, int, int, int, FT_Span *, FT_Span *,
				 void *, void *);

    typedef int (*FT_Raster_BitTest_Func) (int, int, void *);

    typedef void (*FT_Raster_BitSet_Func) (int, int, void *);

    typedef struct FT_Raster_Params_ FT_Raster_Params;

    typedef int (*FT_Raster_RenderFunc) (FT_Raster, FT_Raster,
					 FT_Raster_Params *,
					 FT_Raster_Params *);

    typedef void (*FT_Raster_DoneFunc) (FT_Raster);

    typedef struct FT_Raster_Funcs_ FT_Raster_Funcs;

    typedef struct FT_Renderer_Class_ FT_Renderer_Class;

    typedef struct FT_Glyph_Class_ FT_Glyph_Class;

    typedef FT_Error(*FT_Glyph_InitFunc) (FT_Glyph, FT_Glyph, FT_GlyphSlot,
					  FT_GlyphSlot);

    typedef void (*FT_Glyph_DoneFunc) (FT_Glyph);

    typedef FT_Error(*FT_Glyph_CopyFunc) (FT_Glyph, FT_Glyph);

    typedef void (*FT_Glyph_TransformFunc) (FT_Glyph, FT_Matrix *,
					    FT_Vector *);

    typedef void (*FT_Glyph_GetBBoxFunc) (FT_Glyph, FT_BBox *);

    typedef FT_Error(*FT_Glyph_PrepareFunc) (FT_Glyph, FT_Glyph,
					     FT_GlyphSlot, FT_GlyphSlot);

    typedef int (*FT_Outline_MoveToFunc) (FT_Vector *, FT_Vector *, void *,
					  void *);

    typedef int (*FT_Outline_LineToFunc) (FT_Vector *, FT_Vector *, void *,
					  void *);

    typedef int (*FT_Outline_ConicToFunc) (FT_Vector *, FT_Vector *,
					   void *);

    typedef int (*FT_Outline_CubicToFunc) (FT_Vector *, FT_Vector *,
					   FT_Vector *, void *);

    typedef struct FT_Outline_Funcs_ FT_Outline_Funcs;

    typedef enum {
	FT_ORIENTATION_TRUETYPE = 0,
	FT_ORIENTATION_POSTSCRIPT = 1,
	FT_ORIENTATION_FILL_RIGHT = 0,
	FT_ORIENTATION_FILL_LEFT = 1
    } FT_Orientation;

    struct FT_GlyphSlotRec_ {
	FT_Library library;
	FT_Face face;
	FT_GlyphSlot next;
	FT_UInt reserved;
	FT_Generic generic;
	FT_Glyph_Metrics metrics;
	FT_Fixed linearHoriAdvance;
	FT_Fixed linearVertAdvance;
	FT_Vector advance;
	FT_Glyph_Format format;
	FT_Bitmap bitmap;
	FT_Int bitmap_left;
	FT_Int bitmap_top;
	FT_Outline outline;
	FT_UInt num_subglyphs;
	FT_SubGlyph subglyphs;
	void *control_data;
	long int control_len;
	FT_Pos lsb_delta;
	FT_Pos rsb_delta;
	void *other;
	FT_Slot_Internal internal;
    };

#include <freetype/freetype.h>
#include <freetype/tttables.h>
#include <freetype/ftsynth.h>
#include <freetype/ftsizes.h>
    struct FT_GlyphLoaderRec_ {
	FT_Memory memory;
	FT_UInt max_points;
	FT_UInt max_contours;
	FT_UInt max_subglyphs;
	FT_Bool use_extra;
	FT_GlyphLoadRec base;
	FT_GlyphLoadRec current;
	void *other;
    };

    struct FT_GlyphRec_ {
	FT_Library library;
	const FT_Glyph_Class *clazz;
	FT_Glyph_Format format;
	FT_Vector advance;
    };

#include <freetype/ftglyph.h>
#include <freetype/ftstroke.h>







    struct FT_Glyph_Metrics_ {
	FT_Pos width;
	FT_Pos height;
	FT_Pos horiBearingX;
	FT_Pos horiBearingY;
	FT_Pos horiAdvance;
	FT_Pos vertBearingX;
	FT_Pos vertBearingY;
	FT_Pos vertAdvance;
    };


    struct FT_GlyphLoadRec_ {
	FT_Outline outline;
	FT_Vector *extra_points;
	FT_UInt num_subglyphs;
	FT_SubGlyph subglyphs;
    };


    struct FT_Span_ {
	short x;
	unsigned short len;
	unsigned char coverage;
    };


    struct FT_Raster_Params_ {
	const FT_Bitmap *target;
	const void *source;
	int flags;
	FT_SpanFunc gray_spans;
	FT_SpanFunc black_spans;
	FT_Raster_BitTest_Func bit_test;
	FT_Raster_BitSet_Func bit_set;
	void *user;
	FT_BBox clip_box;
    };


    struct FT_Raster_Funcs_ {
	FT_Glyph_Format glyph_format;
	FT_Raster_NewFunc raster_new;
	FT_Raster_ResetFunc raster_reset;
	FT_Raster_SetModeFunc raster_set_mode;
	FT_Raster_RenderFunc raster_render;
	FT_Raster_DoneFunc raster_done;
    };


    struct FT_Renderer_Class_ {
	FT_Module_Class root;
	FT_Glyph_Format glyph_format;
	FT_Renderer_RenderFunc render_glyph;
	FT_Renderer_TransformFunc transform_glyph;
	FT_Renderer_GetCBoxFunc get_glyph_cbox;
	FT_Renderer_SetModeFunc set_mode;
	FT_Raster_Funcs *raster_class;
    };


    struct FT_Glyph_Class_ {
	FT_Long glyph_size;
	FT_Glyph_Format glyph_format;
	FT_Glyph_InitFunc glyph_init;
	FT_Glyph_DoneFunc glyph_done;
	FT_Glyph_CopyFunc glyph_copy;
	FT_Glyph_TransformFunc glyph_transform;
	FT_Glyph_GetBBoxFunc glyph_bbox;
	FT_Glyph_PrepareFunc glyph_prepare;
    };


    struct FT_Outline_Funcs_ {
	FT_Outline_MoveToFunc move_to;
	FT_Outline_LineToFunc line_to;
	FT_Outline_ConicToFunc conic_to;
	FT_Outline_CubicToFunc cubic_to;
	int shift;
	FT_Pos delta;
    };


    extern void FT_Outline_Reverse(FT_Outline *);
    extern FT_Error FT_Outline_New(FT_Library, FT_UInt, FT_Int,
				   FT_Outline *);
    extern void FT_Outline_Transform(const FT_Outline *,
				     const FT_Matrix *);
    extern FT_Error FT_Outline_Done(FT_Library, FT_Outline *);
    extern void FT_Outline_Translate(const FT_Outline *, FT_Pos, FT_Pos);
    extern FT_Error FT_Outline_Render(FT_Library, FT_Outline *,
				      FT_Raster_Params *);
    extern void FT_Outline_Get_CBox(const FT_Outline *, FT_BBox *);
    extern FT_Error FT_Outline_Get_Bitmap(FT_Library, FT_Outline *,
					  const FT_Bitmap *);
    extern FT_Error FT_Outline_Decompose(FT_Outline *,
					 const FT_Outline_Funcs *, void *);
    extern FT_Error FT_Outline_Check(FT_Outline *);
    extern FT_Error FT_Outline_Copy(const FT_Outline *, FT_Outline *);
    extern FT_Error FT_Outline_Done_Internal(FT_Memory, FT_Outline *);
    extern FT_Orientation FT_Outline_Get_Orientation(FT_Outline *);
    extern FT_Error FT_Outline_New_Internal(FT_Memory, FT_UInt, FT_Int,
					    FT_Outline *);
#ifdef __cplusplus
}
#endif
#endif
