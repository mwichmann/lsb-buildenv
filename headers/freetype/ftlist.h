#ifndef _FREETYPE_FTLIST_H_
#define _FREETYPE_FTLIST_H_

#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct FT_ListNodeRec_ *FT_ListNode;

    typedef struct FT_ListRec_ *FT_List;

    typedef void (*FT_List_Destructor) (FT_Memory, void *, void *);

    typedef FT_Error(*FT_List_Iterator) (FT_ListNode, void *);

    struct FT_ListNodeRec_ {
	FT_ListNode prev;
	FT_ListNode next;
	void *data;
    };

#include <freetype/fttypes.h>

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
