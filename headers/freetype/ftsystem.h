#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTSYSTEM_H_
#define _FREETYPE_FTSYSTEM_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
    typedef struct FT_MemoryRec_ *FT_Memory;

#include <freetype/ftlist.h>
    typedef void *(*FT_Alloc_Func) (FT_Memory, long int);

    typedef void (*FT_Free_Func) (FT_Memory, void *);

    typedef void *(*FT_Realloc_Func) (FT_Memory, long int, long int,
				      void *);

    typedef union FT_StreamDesc_ FT_StreamDesc;

    typedef struct FT_StreamRec_ *FT_Stream;

#include <freetype/freetype.h>
    typedef long unsigned int (*FT_Stream_IoFunc) (FT_Stream,
						   long unsigned int,
						   unsigned char *,
						   long unsigned int);

    typedef void (*FT_Stream_CloseFunc) (FT_Stream);

#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 32
    struct FT_MemoryRec_ {
	void *user;
	FT_Alloc_Func alloc;
	FT_Free_Func free;
	FT_Realloc_Func realloc;
    };

    union FT_StreamDesc_ {
	long int value;
	void *pointer;
    };

    struct FT_StreamRec_ {
	unsigned char *base;
	long unsigned int size;
	long unsigned int pos;
	FT_StreamDesc descriptor;
	FT_StreamDesc pathname;
	FT_Stream_IoFunc read;
	FT_Stream_CloseFunc close;
	FT_Memory memory;
	unsigned char *cursor;
	unsigned char *limit;
    };

#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
