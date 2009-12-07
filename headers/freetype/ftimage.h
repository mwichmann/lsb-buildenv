#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTIMAGE_H_
#define _FREETYPE_FTIMAGE_H_


#ifdef __cplusplus
extern "C" {
#endif


#define FT_CURVE_TAG_TOUCH_BOTH	 \
	( FT_CURVE_TAG_TOUCH_X | FT_CURVE_TAG_TOUCH_Y )
#define FT_IMAGE_TAG(value,_x1,_x2,_x3,_x4)	 \
	value = ( ( (unsigned long)_x1 << 24 ) | ( (unsigned long)_x2 << 16 ) \
	| ( (unsigned long)_x3 << 8 ) | (unsigned long)_x4 )
#define FT_CURVE_TAG(flag)	( flag & 3 )
#define FT_CURVE_TAG_CONIC	0
#define FT_OUTLINE_NONE	0x0
#define FT_RASTER_FLAG_DEFAULT	0x0
#define FT_OUTLINE_OWNER	0x1
#define FT_RASTER_FLAG_AA	0x1
#define FT_OUTLINE_HIGH_PRECISION	0x100
#define FT_OUTLINE_EVEN_ODD_FILL	0x2
#define FT_RASTER_FLAG_DIRECT	0x2
#define FT_OUTLINE_SINGLE_PASS	0x200
#define FT_OUTLINE_REVERSE_FILL	0x4
#define FT_RASTER_FLAG_CLIP	0x4
#define FT_OUTLINE_IGNORE_DROPOUTS	0x8
#define FT_CURVE_TAG_ON	1
#define FT_CURVE_TAG_TOUCH_Y	16
#define FT_CURVE_TAG_CUBIC	2
#define FT_CURVE_TAG_TOUCH_X	8
#define FT_Curve_Tag_Conic	FT_CURVE_TAG_CONIC
#define FT_Curve_Tag_Cubic	FT_CURVE_TAG_CUBIC
#define FT_Curve_Tag_On	FT_CURVE_TAG_ON
#define FT_Curve_Tag_Touch_X	FT_CURVE_TAG_TOUCH_X
#define FT_Curve_Tag_Touch_Y	FT_CURVE_TAG_TOUCH_Y
#define FT_Outline_ConicTo_Func	FT_Outline_ConicToFunc
#define FT_Outline_CubicTo_Func	FT_Outline_CubicToFunc
#define FT_Outline_LineTo_Func	FT_Outline_LineToFunc
#define FT_Outline_MoveTo_Func	FT_Outline_MoveToFunc
#define FT_Raster_Done_Func	FT_Raster_DoneFunc
#define FT_Raster_New_Func	FT_Raster_NewFunc
#define FT_Raster_Render_Func	FT_Raster_RenderFunc
#define FT_Raster_Reset_Func	FT_Raster_ResetFunc
#define FT_Raster_Set_Mode_Func	FT_Raster_SetModeFunc
#define FT_Raster_Span_Func	FT_SpanFunc


    typedef struct FT_Bitmap_ FT_Bitmap;

    typedef long int FT_Pos;

    typedef struct FT_Vector_ FT_Vector;

    typedef struct FT_Outline_ FT_Outline;

    typedef enum FT_Glyph_Format_ {
	FT_GLYPH_FORMAT_NONE = 0,
	FT_GLYPH_FORMAT_COMPOSITE = 1668246896,
	FT_GLYPH_FORMAT_BITMAP = 1651078259,
	FT_GLYPH_FORMAT_OUTLINE = 1869968492,
	FT_GLYPH_FORMAT_PLOTTER = 1886154612
    } FT_Glyph_Format;

    typedef struct FT_BBox_ FT_BBox;

    typedef struct FT_RasterRec_ *FT_Raster;

    typedef int (*FT_Raster_NewFunc) (void *, FT_Raster *);

    typedef void (*FT_Raster_ResetFunc) (FT_Raster, unsigned char *,
					 long unsigned int);

    typedef int (*FT_Raster_SetModeFunc) (FT_Raster, long unsigned int,
					  void *);

    typedef struct FT_Span_ FT_Span;

    typedef void (*FT_SpanFunc) (int, int, const FT_Span *, void *);

    typedef int (*FT_Raster_BitTest_Func) (int, int, void *);

    typedef void (*FT_Raster_BitSet_Func) (int, int, void *);

    typedef struct FT_Raster_Params_ FT_Raster_Params;

    typedef int (*FT_Raster_RenderFunc) (FT_Raster,
					 const FT_Raster_Params *);

    typedef void (*FT_Raster_DoneFunc) (FT_Raster);

    typedef struct FT_Raster_Funcs_ FT_Raster_Funcs;

    typedef int (*FT_Outline_MoveToFunc) (const FT_Vector *, void *);

    typedef int (*FT_Outline_LineToFunc) (const FT_Vector *, void *);

    typedef int (*FT_Outline_ConicToFunc) (const FT_Vector *,
					   const FT_Vector *, void *);

    typedef int (*FT_Outline_CubicToFunc) (const FT_Vector *,
					   const FT_Vector *,
					   const FT_Vector *, void *);

    typedef struct FT_Outline_Funcs_ FT_Outline_Funcs;

    typedef enum FT_Pixel_Mode_ {
	FT_PIXEL_MODE_NONE = 0,
	FT_PIXEL_MODE_MONO,
	FT_PIXEL_MODE_GRAY,
	FT_PIXEL_MODE_GRAY2,
	FT_PIXEL_MODE_GRAY4,
	FT_PIXEL_MODE_LCD,
	FT_PIXEL_MODE_LCD_V,
	FT_PIXEL_MODE_MAX
    } FT_Pixel_Mode;

    struct FT_Vector_ {
	FT_Pos x;
	FT_Pos y;
    };

    struct FT_BBox_ {
	FT_Pos xMin;
	FT_Pos yMin;
	FT_Pos xMax;
	FT_Pos yMax;
    };

/* #include <freetype/ftoutln.h>		XXX hand-edit */

    struct FT_Bitmap_ {
	int rows;
	int width;
	int pitch;
	unsigned char *buffer;
	short num_grays;
	char pixel_mode;
	char palette_mode;
	void *palette;
    };

    struct FT_Outline_ {
	short n_contours;
	short n_points;
	FT_Vector *points;
	char *tags;
	short int *contours;
	int flags;
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

    struct FT_Outline_Funcs_ {
	FT_Outline_MoveToFunc move_to;
	FT_Outline_LineToFunc line_to;
	FT_Outline_ConicToFunc conic_to;
	FT_Outline_CubicToFunc cubic_to;
	int shift;
	FT_Pos delta;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
