#ifndef _FREETYPE_FTSYSTEM_H_
#define _FREETYPE_FTSYSTEM_H_


#ifdef __cplusplus
extern "C" {
#endif




    struct FT_MemoryRec_ {
	void *user;
	FT_Alloc_Func alloc;
	FT_Free_Func free;
	FT_Realloc_Func realloc;
    };

#include <freetype/ftlist.h>

#ifdef __cplusplus
}
#endif
#endif
