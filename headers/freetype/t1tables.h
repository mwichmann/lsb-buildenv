#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_T1TABLES_H_
#define _FREETYPE_T1TABLES_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define T1_MAX_MM_DESIGNS	16
#define T1_MAX_MM_MAP_POINTS	20
#define T1_MAX_MM_AXIS	4
#define t1_blend_blue_scale	T1_BLEND_BLUE_SCALE
#define t1_blend_blue_shift	T1_BLEND_BLUE_SHIFT
#define t1_blend_blue_values	T1_BLEND_BLUE_VALUES
#define t1_blend_family_blues	T1_BLEND_FAMILY_BLUES
#define t1_blend_family_other_blues	T1_BLEND_FAMILY_OTHER_BLUES
#define t1_blend_force_bold	T1_BLEND_FORCE_BOLD
#define t1_blend_italic_angle	T1_BLEND_ITALIC_ANGLE
#define t1_blend_max	T1_BLEND_MAX
#define t1_blend_other_blues	T1_BLEND_OTHER_BLUES
#define t1_blend_standard_height	T1_BLEND_STANDARD_HEIGHT
#define t1_blend_standard_widths	T1_BLEND_STANDARD_WIDTH
#define t1_blend_stem_snap_heights	T1_BLEND_STEM_SNAP_HEIGHTS
#define t1_blend_stem_snap_widths	T1_BLEND_STEM_SNAP_WIDTHS
#define t1_blend_underline_position	T1_BLEND_UNDERLINE_POSITION
#define t1_blend_underline_thickness	T1_BLEND_UNDERLINE_THICKNESS
#endif				// __LSB_VERSION__ >= 3.2



#if __LSB_VERSION__ >= 32
    typedef struct PS_PrivateRec_ PS_PrivateRec;

    typedef struct PS_FontInfoRec PS_FontInfoRec;

#endif				// __LSB_VERSION__ >= 3.2

#if __LSB_VERSION__ >= 32

    struct PS_PrivateRec_ {
	FT_Int unique_id;
	FT_Int lenIV;
	FT_Byte num_blue_values;
	FT_Byte num_other_blues;
	FT_Byte num_family_blues;
	FT_Byte num_family_other_blues;
	FT_Short blue_values[14];
	FT_Short other_blues[10];
	FT_Short family_blues[14];
	FT_Short family_other_blues[10];
	FT_Fixed blue_scale;
	FT_Int blue_shift;
	FT_Int blue_fuzz;
	FT_UShort standard_width[1];
	FT_UShort standard_height[1];
	FT_Byte num_snap_widths;
	FT_Byte num_snap_heights;
	FT_Bool force_bold;
	FT_Bool round_stem_up;
	FT_Short snap_widths[13];
	FT_Short snap_heights[13];
	FT_Fixed expansion_factor;
	FT_Long language_group;
	FT_Long password;
	FT_Short min_feature[2];
    };


    struct PS_FontInfoRec {
	FT_String *version;
	FT_String *notice;
	FT_String *full_name;
	FT_String *family_name;
	FT_String *weight;
	FT_Long italic_angle;
	FT_Bool is_fixed_pitch;
	FT_Short underline_position;
	FT_UShort underline_thickness;
    };

#endif				// __LSB_VERSION__ >= 3.2


// Function prototypes

#if __LSB_VERSION__ >= 32
    extern FT_Error FT_Get_PS_Font_Info(FT_Face, PS_FontInfoRec *);
    extern FT_Error FT_Get_PS_Font_Private(FT_Face, PS_PrivateRec *);
    extern FT_Int FT_Has_PS_Glyph_Names(FT_Face);
#endif				// __LSB_VERSION__ >= 3.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
