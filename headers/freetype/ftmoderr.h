#ifndef _FREETYPE_FTMODERR_H_
#define _FREETYPE_FTMODERR_H_

#include <GL/gl.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FT_MODERR_START_LIST	enum {
#define FT_MODERRDEF(e,v,s)	FT_Mod_Err_ ## e = 0,
#define FT_MODERR_END_LIST	FT_Mod_Err_Max };



#ifdef __cplusplus
}
#endif
#endif
