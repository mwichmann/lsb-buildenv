#ifndef _FREETYPE_TTTABLES_H_
#define _FREETYPE_TTTABLES_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftsizes.h>
#include <freetype/ftimage.h>
#include <freetype/ftstroke.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef enum {
	ft_sfnt_head = 0,
	ft_sfnt_maxp = 1,
	ft_sfnt_os2 = 2,
	ft_sfnt_hhea = 3,
	ft_sfnt_vhea = 4,
	ft_sfnt_post = 5,
	ft_sfnt_pclt = 6,
	sfnt_max = 7
    } FT_Sfnt_Tag;


    extern FT_ULong FT_Get_CMap_Language_ID(FT_CharMap);
    extern FT_Error FT_Load_Sfnt_Table(FT_Face, FT_ULong, FT_Long,
				       FT_Byte *, FT_ULong *);
    extern void *FT_Get_Sfnt_Table(FT_Face, FT_Sfnt_Tag);
    extern FT_Error FT_Sfnt_Table_Info(FT_Face, FT_UInt, FT_ULong *,
				       FT_ULong *);
#ifdef __cplusplus
}
#endif
#endif
