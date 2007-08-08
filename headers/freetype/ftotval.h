#ifndef _FREETYPE_FTOTVAL_H_
#define _FREETYPE_FTOTVAL_H_

#include <GL/gl.h>
#include <freetype/freetype.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FT_VALIDATE_OT	 \
	FT_VALIDATE_BASE | FT_VALIDATE_GDEF | FT_VALIDATE_GPOS | \
	FT_VALIDATE_GSUB | FT_VALIDATE_JSTF
#define FT_VALIDATE_BASE	0x0100
#define FT_VALIDATE_GDEF	0x0200
#define FT_VALIDATE_GPOS	0x0400
#define FT_VALIDATE_GSUB	0x0800
#define FT_VALIDATE_JSTF	0x1000


#if defined __i386__
/* IA32 */
    typedef const FT_Byte *FT_Bytes;

#endif

#ifdef __cplusplus
}
#endif
#endif
