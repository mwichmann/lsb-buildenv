#ifndef _FREETYPE_FTSYSTEM_H_
#define _FREETYPE_FTSYSTEM_H_


#ifdef __cplusplus
extern "C" {
#endif




    typedef void *(*FT_Alloc_Func) (FT_Memory, long int);

    typedef void (*FT_Free_Func) (FT_Memory, void *);

    typedef void *(*FT_Realloc_Func) (FT_Memory, long int, long int,
				      void *);

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
