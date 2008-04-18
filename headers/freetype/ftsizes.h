#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTSIZES_H_
#define _FREETYPE_FTSIZES_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif



// Function prototypes

#if __LSB_VERSION__ >= 32
    extern FT_Error FT_Activate_Size(FT_Size);
    extern FT_Error FT_Done_Size(FT_Size);
    extern FT_Error FT_New_Size(FT_Face, FT_Size *);
#endif				// __LSB_VERSION__ >= 3.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
