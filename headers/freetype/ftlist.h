#ifndef _FREETYPE_FTLIST_H_
#define _FREETYPE_FTLIST_H_

#include <GL/gl.h>
#include <freetype/t1tables.h>

#ifdef __cplusplus
extern "C" {
#endif




#if defined __i386__
/* IA32 */
    typedef struct FT_ListNodeRec_ *FT_ListNode;

#endif
#if defined __i386__
/* IA32 */
    typedef struct FT_ListRec_ *FT_List;

#endif
#if defined __i386__
/* IA32 */
    typedef void *(*FT_Alloc_Func) (FT_Memory, long int);

#endif
#if defined __i386__
/* IA32 */
    typedef void (*FT_Free_Func) (FT_Memory, void *);

#endif
#if defined __i386__
/* IA32 */
    typedef void *(*FT_Realloc_Func) (FT_Memory, long int, long int,
				      void *);

#endif
#if defined __i386__
/* IA32 */
    typedef void (*FT_List_Destructor) (FT_Memory, void *, void *);

#endif
#if defined __i386__
/* IA32 */
    typedef FT_Error(*FT_List_Iterator) (FT_ListNode, void *);

#endif
#if defined __i386__
/* IA32 */
    struct FT_ListNodeRec_ {
	FT_ListNode prev;
	FT_ListNode next;
	void *data;
    };

#endif
#if defined __i386__
/* IA32 */
    struct FT_MemoryRec_ {
	void *user;
	FT_Alloc_Func alloc;
	FT_Free_Func free;
	FT_Realloc_Func realloc;
    };

#endif

    extern void FT_List_Finalize(FT_List, FT_List_Destructor, FT_Memory,
				 void *);
    extern void FT_List_Insert(FT_List, FT_ListNode);
    extern FT_ListNode FT_List_Find(FT_List, void *);
    extern void FT_List_Remove(FT_List, FT_ListNode);
    extern void FT_List_Up(FT_List, FT_ListNode);
    extern void FT_List_Add(FT_List, FT_ListNode);
    extern FT_Error FT_List_Iterate(FT_List, FT_List_Iterator, void *);
#ifdef __cplusplus
}
#endif
#endif
