#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTBBOX_H_
#define _FREETYPE_FTBBOX_H_

#include <freetype/fttypes.h>
#include <freetype/ftimage.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern FT_Error FT_Outline_Get_BBox(FT_Outline *, FT_BBox *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
