#ifndef _FREETYPE_FTTYPES_H_
#define _FREETYPE_FTTYPES_H_

#include <GL/gl.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FT_MAKE_TAG(_x1,_x2,_x3,_x4)	 \
	( ( (FT_ULong)_x1 << 24 ) | ( (FT_ULong)_x2 << 16 ) | ( (FT_ULong)_x3 \
	<< 8 ) | (FT_ULong)_x4 )
#define FT_BOOL(x)	( (FT_Bool)( x ) )
#define FT_IS_EMPTY(list)	( (list).head == 0 )
#define FT_ERROR_BASE(x)	( (x) & 0xFF )
#define FT_ERROR_MODULE(x)	( (x) & 0xFF00U )



#ifdef __cplusplus
}
#endif
#endif
