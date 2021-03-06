#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FREETYPE_H_
#define _FREETYPE_FREETYPE_H_

#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FT_HAS_FAST_GLYPHS(face)	 \
	( face->face_flags & FT_FACE_FLAG_FAST_GLYPHS )
#define FT_HAS_FIXED_SIZES(face)	 \
	( face->face_flags & FT_FACE_FLAG_FIXED_SIZES )
#define FT_IS_FIXED_WIDTH(face)	 \
	( face->face_flags & FT_FACE_FLAG_FIXED_WIDTH )
#define FT_HAS_GLYPH_NAMES(face)	 \
	( face->face_flags & FT_FACE_FLAG_GLYPH_NAMES )
#define FT_HAS_HORIZONTAL(face)	 \
	( face->face_flags & FT_FACE_FLAG_HORIZONTAL )
#define FT_HAS_MULTIPLE_MASTERS(face)	 \
	( face->face_flags & FT_FACE_FLAG_MULTIPLE_MASTERS )
#define FT_ENC_TAG(value,a,b,c,d)	 \
	value = ( ( (FT_UInt32)(a) << 24 ) | ( (FT_UInt32)(b) << 16 ) | ( \
	(FT_UInt32)(c) << 8 ) | (FT_UInt32)(d) )
#define FT_LOAD_TARGET_(x)	( (FT_Int32)( (x) & 15 ) << 16 )
#define FT_LOAD_TARGET_MODE(x)	( (FT_Render_Mode)( ( (x) >16 ) & 15 ) )
#define FT_STYLE_FLAG_ITALIC	( 1 << 0 )
#define FT_STYLE_FLAG_BOLD	( 1 << 1 )
#define FT_FACE_FLAG_SCALABLE	( 1L << 0 )
#define FT_FACE_FLAG_FIXED_SIZES	( 1L << 1 )
#define FT_FACE_FLAG_EXTERNAL_STREAM	( 1L << 10 )
#define FT_FACE_FLAG_FIXED_WIDTH	( 1L << 2 )
#define FT_FACE_FLAG_SFNT	( 1L << 3 )
#define FT_FACE_FLAG_HORIZONTAL	( 1L << 4 )
#define FT_FACE_FLAG_VERTICAL	( 1L << 5 )
#define FT_FACE_FLAG_KERNING	( 1L << 6 )
#define FT_FACE_FLAG_FAST_GLYPHS	( 1L << 7 )
#define FT_FACE_FLAG_MULTIPLE_MASTERS	( 1L << 8 )
#define FT_FACE_FLAG_GLYPH_NAMES	( 1L << 9 )
#define FT_HAS_KERNING(face)	( face->face_flags & FT_FACE_FLAG_KERNING )
#define FT_IS_SCALABLE(face)	( face->face_flags & FT_FACE_FLAG_SCALABLE )
#define FT_IS_SFNT(face)	( face->face_flags & FT_FACE_FLAG_SFNT )
#define FT_HAS_VERTICAL(face)	( face->face_flags & FT_FACE_FLAG_VERTICAL )
#define FT_LOAD_DEFAULT	0x0
#define FT_LOAD_NO_SCALE	0x1
#define FT_OPEN_MEMORY	0x1
#define FT_LOAD_VERTICAL_LAYOUT	0x10
#define FT_OPEN_PARAMS	0x10
#define FT_LOAD_MONOCHROME	0x1000
#define FT_LOAD_NO_HINTING	0x2
#define FT_OPEN_STREAM	0x2
#define FT_LOAD_FORCE_AUTOHINT	0x20
#define FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH	0x200
#define FT_LOAD_LINEAR_DESIGN	0x2000
#define FT_LOAD_RENDER	0x4
#define FT_OPEN_PATHNAME	0x4
#define FT_LOAD_CROP_BITMAP	0x40
#define FT_LOAD_NO_RECURSE	0x400
#define FT_LOAD_SBITS_ONLY	0x4000
#define FT_LOAD_NO_BITMAP	0x8
#define FT_OPEN_DRIVER	0x8
#define FT_LOAD_PEDANTIC	0x80
#define FT_LOAD_IGNORE_TRANSFORM	0x800
#define FT_LOAD_NO_AUTOHINT	0x8000U
#define FREETYPE_MINOR	1
#define FREETYPE_PATCH	10
#define FREETYPE_MAJOR	2
#define FT_LOAD_TARGET_LCD	FT_LOAD_TARGET_( FT_RENDER_MODE_LCD )
#define FT_LOAD_TARGET_LCD_V	FT_LOAD_TARGET_( FT_RENDER_MODE_LCD_V )
#define FT_LOAD_TARGET_LIGHT	FT_LOAD_TARGET_( FT_RENDER_MODE_LIGHT )
#define FT_LOAD_TARGET_MONO	FT_LOAD_TARGET_( FT_RENDER_MODE_MONO )
#define FT_LOAD_TARGET_NORMAL	FT_LOAD_TARGET_( FT_RENDER_MODE_NORMAL )


    typedef struct FT_FaceRec_ *FT_Face;

    typedef struct FT_ModuleRec_ *FT_Module;

    typedef struct FT_LibraryRec_ *FT_Library;

    typedef struct FT_ModuleRec_ FT_ModuleRec;

    typedef struct FT_RendererRec_ *FT_Renderer;

    typedef struct FT_GlyphSlotRec_ *FT_GlyphSlot;

    typedef struct FT_Glyph_Metrics_ FT_Glyph_Metrics;

    typedef struct FT_SubGlyphRec_ *FT_SubGlyph;

    typedef struct FT_Slot_InternalRec_ *FT_Slot_Internal;

    typedef enum FT_Encoding_ {
	FT_ENCODING_NONE = 0,
	FT_ENCODING_MS_SYMBOL = 1937337698,
	FT_ENCODING_UNICODE = 1970170211,
	FT_ENCODING_SJIS = 1936353651,
	FT_ENCODING_GB2312 = 1734484000,
	FT_ENCODING_BIG5 = 1651074869,
	FT_ENCODING_WANSUNG = 2002873971,
	FT_ENCODING_JOHAB = 1785686113,
	FT_ENCODING_MS_SJIS = 1936353651,
	FT_ENCODING_MS_GB2312 = 1734484000,
	FT_ENCODING_MS_BIG5 = 1651074869,
	FT_ENCODING_MS_WANSUNG = 2002873971,
	FT_ENCODING_MS_JOHAB = 1785686113,
	FT_ENCODING_ADOBE_STANDARD = 1094995778,
	FT_ENCODING_ADOBE_EXPERT = 1094992453,
	FT_ENCODING_ADOBE_CUSTOM = 1094992451,
	FT_ENCODING_ADOBE_LATIN_1 = 1818326065,
	FT_ENCODING_OLD_LATIN_2 = 1818326066,
	FT_ENCODING_APPLE_ROMAN = 1634889070
    } FT_Encoding;

    typedef struct FT_CharMapRec_ *FT_CharMap;

    typedef long int FT_F26Dot6;

    typedef enum FT_Render_Mode_ {
	FT_RENDER_MODE_NORMAL = 0,
	FT_RENDER_MODE_LIGHT = 1,
	FT_RENDER_MODE_MONO = 2,
	FT_RENDER_MODE_LCD = 3,
	FT_RENDER_MODE_LCD_V = 4,
	FT_RENDER_MODE_MAX = 5
    } FT_Render_Mode;

    typedef struct FT_Parameter_ FT_Parameter;

    typedef struct FT_Open_Args_ FT_Open_Args;

    typedef struct FT_Size_Metrics_ FT_Size_Metrics;

    typedef struct FT_Size_InternalRec_ *FT_Size_Internal;

    typedef struct FT_SizeRec_ *FT_Size;

    typedef struct FT_Bitmap_Size_ FT_Bitmap_Size;

    typedef struct FT_Face_InternalRec_ *FT_Face_Internal;

    typedef struct FT_DriverRec_ *FT_Driver;

    typedef struct FT_FaceRec_ FT_FaceRec;

    typedef enum FT_Kerning_Mode_ {
	FT_KERNING_DEFAULT = 0,
	FT_KERNING_UNFITTED = 1,
	FT_KERNING_UNSCALED = 2
    } FT_Kerning_Mode;

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

    struct FT_CharMapRec_ {
	FT_Face face;
	FT_Encoding encoding;
	FT_UShort platform_id;
	FT_UShort encoding_id;
    };

    struct FT_Parameter_ {
	FT_ULong tag;
	FT_Pointer data;
    };

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

    struct FT_SizeRec_ {
	FT_Face face;
	FT_Generic generic;
	FT_Size_Metrics metrics;
	FT_Size_Internal internal;
    };

    struct FT_Bitmap_Size_ {
	FT_Short height;
	FT_Short width;
	FT_Pos size;
	FT_Pos x_ppem;
	FT_Pos y_ppem;
    };

    struct FT_Open_Args_ {
	FT_UInt flags;
	const FT_Byte *memory_base;
	FT_Long memory_size;
	FT_String *pathname;
	FT_Stream stream;
	FT_Module driver;
	FT_Int num_params;
	FT_Parameter *params;
    };

    struct FT_FaceRec_ {
	FT_Long num_faces;
	FT_Long face_index;
	FT_Long face_flags;
	FT_Long style_flags;
	FT_Long num_glyphs;
	const FT_String *family_name;
	const FT_String *style_name;
	FT_Int num_fixed_sizes;
	FT_Bitmap_Size *available_sizes;
	FT_Int num_charmaps;
	FT_CharMap *charmaps;
	FT_Generic generic;
	FT_BBox bbox;
	FT_UShort units_per_EM;
	FT_Short ascender;
	FT_Short descender;
	FT_Short height;
	FT_Short max_advance_width;
	FT_Short max_advance_height;
	FT_Short underline_position;
	FT_Short underline_thickness;
	FT_GlyphSlot glyph;
	FT_Size size;
	FT_CharMap charmap;
	FT_Driver driver;
	FT_Memory memory;
	FT_Stream stream;
	FT_ListRec sizes_list;
	FT_Generic autohint;
	void *extensions;
	FT_Face_Internal internal;
    };


/* Function prototypes */

    extern FT_Error FT_Attach_File(FT_Face, const char *);
    extern FT_Error FT_Attach_Stream(FT_Face, FT_Open_Args *);
    extern FT_Fixed FT_CeilFix(FT_Fixed);
    extern FT_Long FT_DivFix(FT_Long, FT_Long);
    extern FT_Error FT_Done_Face(FT_Face);
    extern FT_Error FT_Done_FreeType(FT_Library);
    extern FT_Fixed FT_FloorFix(FT_Fixed);
    extern FT_UInt FT_Get_Char_Index(FT_Face, FT_ULong);
    extern FT_Int FT_Get_Charmap_Index(FT_CharMap);
    extern FT_ULong FT_Get_First_Char(FT_Face, FT_UInt *);
    extern FT_Error FT_Get_Glyph_Name(FT_Face, FT_UInt, FT_Pointer,
				      FT_UInt);
    extern FT_Error FT_Get_Kerning(FT_Face, FT_UInt, FT_UInt, FT_UInt,
				   FT_Vector *);
    extern FT_UInt FT_Get_Name_Index(FT_Face, FT_String *);
    extern FT_ULong FT_Get_Next_Char(FT_Face, FT_ULong, FT_UInt *);
    extern const char *FT_Get_Postscript_Name(FT_Face);
    extern FT_Error FT_Init_FreeType(FT_Library *);
    extern void FT_Library_Version(FT_Library, FT_Int *, FT_Int *,
				   FT_Int *);
    extern FT_Error FT_Load_Char(FT_Face, FT_ULong, FT_Int32);
    extern FT_Error FT_Load_Glyph(FT_Face, FT_UInt, FT_Int32);
    extern FT_Long FT_MulDiv(FT_Long, FT_Long, FT_Long);
    extern FT_Long FT_MulFix(FT_Long, FT_Long);
    extern FT_Error FT_New_Face(FT_Library, const char *, FT_Long,
				FT_Face *);
    extern FT_Error FT_New_Memory_Face(FT_Library, const FT_Byte *,
				       FT_Long, FT_Long, FT_Face *);
    extern FT_Error FT_Open_Face(FT_Library, const FT_Open_Args *, FT_Long,
				 FT_Face *);
    extern FT_Error FT_Render_Glyph(FT_GlyphSlot, FT_Render_Mode);
    extern FT_Fixed FT_RoundFix(FT_Fixed);
    extern FT_Error FT_Select_Charmap(FT_Face, FT_Encoding);
    extern FT_Error FT_Set_Char_Size(FT_Face, FT_F26Dot6, FT_F26Dot6,
				     FT_UInt, FT_UInt);
    extern FT_Error FT_Set_Charmap(FT_Face, FT_CharMap);
    extern FT_Error FT_Set_Pixel_Sizes(FT_Face, FT_UInt, FT_UInt);
    extern void FT_Set_Transform(FT_Face, FT_Matrix *, FT_Vector *);
    extern void FT_Vector_Transform(FT_Vector *, const FT_Matrix *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
