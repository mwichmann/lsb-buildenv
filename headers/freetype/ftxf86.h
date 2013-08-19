#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTXF86_H_
#define _FREETYPE_FTXF86_H_

#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern const char *FT_Get_X11_Font_Format(FT_Face);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
