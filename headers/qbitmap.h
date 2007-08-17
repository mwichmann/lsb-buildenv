#ifndef _QBITMAP_H_
#define _QBITMAP_H_

#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftbdf.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Error FT_Get_BDF_Property(FT_Face, const char *,
					BDF_PropertyRec *);
    extern FT_Error FT_Get_BDF_Charset_ID(FT_Face, const char **,
					  const char **);
#ifdef __cplusplus
}
#endif
#endif
