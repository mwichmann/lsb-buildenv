#ifndef _ENDIAN_H_
#define _ENDIAN_H_


#ifdef __cplusplus
extern "C"
{
#endif





/* Setup some values*/
#define __LITTLE_ENDIAN	1234
#define __BIG_ENDIAN	4321



/* Per Architecture settings*/
#if __i386__
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif



/* The visible Symbols*/
#define BIG_ENDIAN	__BIG_ENDIAN
#define BYTE_ORDER	__BYTE_ORDER
#define LITTLE_ENDIAN	__LITTLE_ENDIAN



#ifdef __cplusplus
}
#endif
#endif
