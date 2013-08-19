#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTSIZES_H_
#define _FREETYPE_FTSIZES_H_

#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern FT_Error FT_Activate_Size(FT_Size);
    extern FT_Error FT_Done_Size(FT_Size);
    extern FT_Error FT_New_Size(FT_Face, FT_Size *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
