#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTPFR_H_
#define _FREETYPE_FTPFR_H_

#include <freetype/ftlist.h>
#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/fttypes.h>
#include <freetype/ftimage.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern FT_Error FT_Get_PFR_Advance(FT_Face, FT_UInt, FT_Pos *);
    extern FT_Error FT_Get_PFR_Kerning(FT_Face, FT_UInt, FT_UInt,
				       FT_Vector *);
    extern FT_Error FT_Get_PFR_Metrics(FT_Face, FT_UInt *, FT_UInt *,
				       FT_Fixed *, FT_Fixed *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
