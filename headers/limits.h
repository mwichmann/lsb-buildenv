#ifndef _LIMITS_H_
#define _LIMITS_H_


#if defined(__ia64__)
#define LONG_MAX	0x7FFFFFFFFFFFFFFFL
#endif
#if defined(__i386__)
#define LONG_MAX	0x7FFFFFFFL
#endif
#if defined(__ia64__)
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined(__i386__)
#define ULONG_MAX	0xFFFFFFFFUL
#endif
#define OPEN_MAX	256
#define PATH_MAX	4095



/* Maximum length of any multibyte character in any locale.*/
#define MB_LEN_MAX	16



/* Number of bits in a `char'.*/
#define SCHAR_MIN	(-128)
#define SCHAR_MAX	127
#define UCHAR_MAX	255
#define CHAR_BIT	8
#define CHAR_MAX	SCHAR_MAX
#define CHAR_MIN	SCHAR_MIN



/* Minimum and maximum values a `signed short int' can hold.*/
#define SHRT_MIN	(-32768)
#define SHRT_MAX	32767
#define USHRT_MAX	65535



/* Minimum and maximum values a `int' can hold.*/
#define INT_MIN	(-INT_MAX-1)
#if defined(__i386__)
#define __INT_MAX__	2147483647
#endif
#define INT_MAX	2147483647
#define UINT_MAX	4294967295U



/* Minimum and maximum values a `long int' can hold.*/
#define LONG_MIN	(-LONG_MAX-1L)



#endif
