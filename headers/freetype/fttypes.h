#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTTYPES_H_
#define _FREETYPE_FTTYPES_H_


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


    typedef unsigned int FT_UInt;

    typedef struct FT_ListNodeRec_ *FT_ListNode;

    typedef struct FT_ListRec_ *FT_List;

    typedef int FT_Error;

    typedef void (*FT_Generic_Finalizer) (void *);

    typedef struct FT_Generic_ FT_Generic;

    typedef int FT_Int;

    typedef long unsigned int FT_ULong;

    typedef long int FT_Long;

    typedef char FT_String;

    typedef long int FT_Fixed;

    typedef void *FT_Pointer;

    typedef struct FT_ListRec_ FT_ListRec;

    typedef short unsigned int FT_UShort;

    typedef struct FT_Matrix_ FT_Matrix;

    typedef unsigned char FT_Bool;

    typedef unsigned char FT_Byte;

    typedef int FT_Int32;

    typedef unsigned int FT_UInt32;

    typedef const FT_Byte *FT_Bytes;

    typedef short int FT_Short;

    typedef struct FT_ListNodeRec_ FT_ListNodeRec;

#if __LSB_VERSION__ >= 40
    typedef char FT_Char;

#endif				/* __LSB_VERSION__ >= 4.0 */

    struct FT_ListRec_ {
	FT_ListNode head;
	FT_ListNode tail;
    };

    struct FT_ListNodeRec_ {
	FT_ListNode prev;
	FT_ListNode next;
	void *data;
    };

    struct FT_Generic_ {
	void *data;
	FT_Generic_Finalizer finalizer;
    };

    struct FT_Matrix_ {
	FT_Fixed xx;
	FT_Fixed xy;
	FT_Fixed yx;
	FT_Fixed yy;
    };

#include <freetype/freetype.h>
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
