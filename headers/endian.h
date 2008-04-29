#if (__LSB_VERSION__ >= 11 )
#ifndef _ENDIAN_H_
#define _ENDIAN_H_


#ifdef __cplusplus
extern "C" {
#endif



/* The visible Symbols*/
#if __LSB_VERSION__ >= 12
#define __LITTLE_ENDIAN	1234
#define __BIG_ENDIAN	4321
#define BIG_ENDIAN	__BIG_ENDIAN
#if defined __powerpc__ && !defined __powerpc64__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#define BYTE_ORDER	__BYTE_ORDER
#define LITTLE_ENDIAN	__LITTLE_ENDIAN
#if defined __i386__
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __s390__ && !defined __s390x__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#if defined __s390x__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#if defined __ia64__
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __powerpc64__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#if defined __x86_64__
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
