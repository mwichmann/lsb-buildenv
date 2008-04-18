#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTLIST_H_
#define _FREETYPE_FTLIST_H_

#include <freetype/fttypes.h>
#include <freetype/ftsystem.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
    typedef void (*FT_List_Destructor) (FT_Memory, void *, void *);

    typedef FT_Error(*FT_List_Iterator) (FT_ListNode, void *);

#endif				// __LSB_VERSION__ >= 3.2


// Function prototypes

#if __LSB_VERSION__ >= 32
    extern void FT_List_Add(FT_List, FT_ListNode);
    extern void FT_List_Finalize(FT_List, FT_List_Destructor, FT_Memory,
				 void *);
    extern FT_ListNode FT_List_Find(FT_List, void *);
    extern void FT_List_Insert(FT_List, FT_ListNode);
    extern FT_Error FT_List_Iterate(FT_List, FT_List_Iterator, void *);
    extern void FT_List_Remove(FT_List, FT_ListNode);
    extern void FT_List_Up(FT_List, FT_ListNode);
#endif				// __LSB_VERSION__ >= 3.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
