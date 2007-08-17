#ifndef _QEVENT_H_
#define _QEVENT_H_

#include <freetype/ftoutln.h>
#include <freetype/freetype.h>
#include <freetype/ftotval.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern FT_Error FT_OpenType_Validate(FT_Face, FT_UInt, FT_Bytes *,
					 FT_Bytes *, FT_Bytes *,
					 FT_Bytes *, FT_Bytes *);
#ifdef __cplusplus
}
#endif
#endif
