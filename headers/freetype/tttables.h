#ifndef _FREETYPE_TTTABLES_H_
#define _FREETYPE_TTTABLES_H_

#include <GL/gl.h>
#include <freetype/ftoutln.h>
#include <freetype/ftmm.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct FT_CharMapRec_ *FT_CharMap;

#include <freetype/freetype.h>
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


#ifdef __cplusplus
}
#endif
#endif
