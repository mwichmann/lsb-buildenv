#ifndef _FREETYPE_FREETYPE_H_
#define _FREETYPE_FREETYPE_H_

#include <GL/gl.h>
#include <fontconfig/fcfreetype.h>
#include <freetype/ftlist.h>
#include <freetype/ftglyph.h>
#include <freetype/ftbdf.h>
#include <freetype/ftmm.h>
#include <freetype/ftsizes.h>
#include <freetype/ftstroke.h>
#include <freetype/ftsynth.h>
#include <freetype/t1tables.h>

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
#define ft_encoding_adobe_custom	FT_ENCODING_ADOBE_CUSTOM
#define ft_encoding_adobe_expert	FT_ENCODING_ADOBE_EXPERT
#define ft_encoding_latin_1	FT_ENCODING_ADOBE_LATIN_1
#define ft_encoding_adobe_standard	FT_ENCODING_ADOBE_STANDARD
#define ft_encoding_apple_roman	FT_ENCODING_APPLE_ROMAN
#define ft_encoding_big5	FT_ENCODING_BIG5
#define ft_encoding_gb2312	FT_ENCODING_GB2312
#define ft_encoding_johab	FT_ENCODING_JOHAB
#define ft_encoding_symbol	FT_ENCODING_MS_SYMBOL
#define ft_encoding_none	FT_ENCODING_NONE
#define ft_encoding_latin_2	FT_ENCODING_OLD_LATIN_2
#define ft_encoding_sjis	FT_ENCODING_SJIS
#define ft_encoding_unicode	FT_ENCODING_UNICODE
#define ft_encoding_wansung	FT_ENCODING_WANSUNG
#define ft_kerning_default	FT_KERNING_DEFAULT
#define ft_kerning_unfitted	FT_KERNING_UNFITTED
#define ft_kerning_unscaled	FT_KERNING_UNSCALED
#define FT_LOAD_TARGET_LCD	FT_LOAD_TARGET_( FT_RENDER_MODE_LCD )
#define FT_LOAD_TARGET_LCD_V	FT_LOAD_TARGET_( FT_RENDER_MODE_LCD_V )
#define FT_LOAD_TARGET_LIGHT	FT_LOAD_TARGET_( FT_RENDER_MODE_LIGHT )
#define FT_LOAD_TARGET_MONO	FT_LOAD_TARGET_( FT_RENDER_MODE_MONO )
#define FT_LOAD_TARGET_NORMAL	FT_LOAD_TARGET_( FT_RENDER_MODE_NORMAL )
#define ft_open_driver	FT_OPEN_DRIVER
#define ft_open_memory	FT_OPEN_MEMORY
#define ft_open_params	FT_OPEN_PARAMS
#define ft_open_pathname	FT_OPEN_PATHNAME
#define ft_open_stream	FT_OPEN_STREAM
#define ft_render_mode_mono	FT_RENDER_MODE_MONO
#define ft_render_mode_normal	FT_RENDER_MODE_NORMAL


#if defined __i386__
/* IA32 */
    typedef void *FT_Pointer;

#endif
#include <freetype/ftmodapi.h>
#include <freetype/ftrender.h>
#include <freetype/ftoutln.h>
#if defined __i386__
/* IA32 */
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

#endif
#include <freetype/tttables.h>
#if defined __i386__
/* IA32 */
    typedef long int FT_F26Dot6;

#endif
#if defined __i386__
/* IA32 */
    typedef union FT_StreamDesc_ FT_StreamDesc;

#endif
#if defined __i386__
/* IA32 */
    typedef long unsigned int (*FT_Stream_IoFunc) (FT_Stream,
						   long unsigned int,
						   unsigned char *,
						   long unsigned int);

#endif
#if defined __i386__
/* IA32 */
    typedef void (*FT_Stream_CloseFunc) (FT_Stream);

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_Open_Args_ FT_Open_Args;

#endif
#if defined __i386__
/* IA32 */
    struct FT_StreamRec_ {
	unsigned char *base;
	long unsigned int size;
	long unsigned int pos;
	FT_StreamDesc descriptor;
	FT_StreamDesc pathname;
	FT_Stream_IoFunc read;
	FT_Stream_CloseFunc close;
	FT_Memory memory;
	unsigned char *cursor;
	unsigned char *limit;
    };

#endif
#if defined __i386__
/* IA32 */
    union FT_StreamDesc_ {
	long int value;
	void *pointer;
    };

#endif
#if defined __i386__
/* IA32 */

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

#endif

    extern FT_Int FT_Get_Charmap_Index(FT_CharMap);
    extern FT_Fixed FT_RoundFix(FT_Fixed);
    extern FT_Fixed FT_CeilFix(FT_Fixed);
    extern FT_Error FT_Done_FreeType(FT_Library);
    extern FT_Error FT_Init_FreeType(FT_Library *);
    extern FT_ULong FT_Get_First_Char(FT_Face, FT_UInt *);
    extern FT_Error FT_Load_Char(FT_Face, FT_ULong, FT_Int32);
    extern void FT_Set_Transform(FT_Face, FT_Matrix *, FT_Vector *);
    extern void FT_Vector_Transform(FT_Vector *, const FT_Matrix *);
    extern FT_Error FT_Set_Charmap(FT_Face, FT_CharMap);
    extern FT_Error FT_Load_Glyph(FT_Face, FT_UInt, FT_Int32);
    extern FT_Error FT_New_Face(FT_Library, const char *, FT_Long,
				FT_Face *);
    extern FT_Error FT_Set_Pixel_Sizes(FT_Face, FT_UInt, FT_UInt);
    extern FT_ULong FT_Get_Next_Char(FT_Face, FT_ULong, FT_UInt *);
    extern FT_Fixed FT_FloorFix(FT_Fixed);
    extern const char *FT_Get_Postscript_Name(FT_Face);
    extern FT_Error FT_New_Memory_Face(FT_Library, const FT_Byte *,
				       FT_Long, FT_Long, FT_Face *);
    extern FT_Error FT_Set_Char_Size(FT_Face, FT_F26Dot6, FT_F26Dot6,
				     FT_UInt, FT_UInt);
    extern FT_Error FT_Get_Glyph_Name(FT_Face, FT_UInt, FT_Pointer,
				      FT_UInt);
    extern FT_Long FT_MulDiv(FT_Long, FT_Long, FT_Long);
    extern FT_Long FT_DivFix(FT_Long, FT_Long);
    extern void FT_Library_Version(FT_Library, FT_Int *, FT_Int *,
				   FT_Int *);
    extern FT_Error FT_Attach_File(FT_Face, const char *);
    extern FT_Error FT_Done_Face(FT_Face);
    extern FT_Long FT_MulFix(FT_Long, FT_Long);
    extern FT_Error FT_Select_Charmap(FT_Face, FT_Encoding);
    extern FT_Error FT_Render_Glyph(FT_GlyphSlot, FT_Render_Mode);
    extern FT_Error FT_Attach_Stream(FT_Face, FT_Open_Args *);
    extern FT_UInt FT_Get_Name_Index(FT_Face, FT_String *);
    extern FT_Error FT_Open_Face(FT_Library, const FT_Open_Args *, FT_Long,
				 FT_Face *);
    extern FT_UInt FT_Get_Char_Index(FT_Face, FT_ULong);
    extern FT_Error FT_Get_Kerning(FT_Face, FT_UInt, FT_UInt, FT_UInt,
				   FT_Vector *);
#ifdef __cplusplus
}
#endif
#endif
