#ifndef _LIMITS_H_
#define _LIMITS_H_


#ifdef __cplusplus
extern "C" {
#endif


#define LLONG_MIN	(-LLONG_MAX-1LL)
#if defined __ia64__
#define LONG_MAX	0x7FFFFFFFFFFFFFFFL
#endif
#if defined __x86_64__
#define LONG_MAX	0x7FFFFFFFFFFFFFFFL
#endif
#if defined ___i386__
#define LONG_MAX	0x7FFFFFFFL
#endif
#if defined __ia64__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined __powerpc64__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined __x86_64__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined __s390x__
#define ULONG_MAX	0xFFFFFFFFFFFFFFFFUL
#endif
#if defined ___i386__
#define ULONG_MAX	0xFFFFFFFFUL
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define ULONG_MAX	0xFFFFFFFFUL
#endif
#if defined __s390__ && !defined __s390x__
#define ULONG_MAX	0xFFFFFFFFUL
#endif
#define ULLONG_MAX	18446744073709551615ULL
#if defined __s390__ && !defined __s390x__
#define LONG_MAX	2147483647
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define LONG_MAX	2147483647L
#endif
#define OPEN_MAX	256
#define NGROUPS_MAX	32
#define PATH_MAX	4096
#if defined __powerpc64__
#define LONG_MAX	9223372036854775807L
#endif
#if defined __s390x__
#define LONG_MAX	9223372036854775807L
#endif
#define LLONG_MAX	9223372036854775807LL
#define SSIZE_MAX	LONG_MAX



/* Maximum length of any multibyte character in any locale.*/
#define MB_LEN_MAX	16



/* Number of bits in a `char'.*/
#define SCHAR_MIN	(-128)
#if defined __powerpc__ && !defined __powerpc64__
#define CHAR_MIN	0
#endif
#if defined __powerpc64__
#define CHAR_MIN	0
#endif
#if defined __s390__ && !defined __s390x__
#define CHAR_MIN	0
#endif
#if defined __s390x__
#define CHAR_MIN	0
#endif
#if defined __x86_64__
#define CHAR_MAX	127
#endif
#define SCHAR_MAX	127
#if defined __powerpc__ && !defined __powerpc64__
#define CHAR_MAX	255
#endif
#if defined __powerpc64__
#define CHAR_MAX	255
#endif
#if defined __s390__ && !defined __s390x__
#define CHAR_MAX	255
#endif
#if defined __s390x__
#define CHAR_MAX	255
#endif
#define UCHAR_MAX	255
#define CHAR_BIT	8
#if defined ___i386__
#define CHAR_MAX	SCHAR_MAX
#endif
#if defined __ia64__
#define CHAR_MAX	SCHAR_MAX
#endif
#if defined ___i386__
#define CHAR_MIN	SCHAR_MIN
#endif
#if defined __ia64__
#define CHAR_MIN	SCHAR_MIN
#endif
#if defined __x86_64__
#define CHAR_MIN	SCHAR_MIN
#endif



/* Minimum and maximum values a `signed short int' can hold.*/
#define SHRT_MIN	(-32768)
#define SHRT_MAX	32767
#define USHRT_MAX	65535



/* Minimum and maximum values a `int' can hold.*/
#define INT_MIN	(-INT_MAX-1)
#define INT_MAX	2147483647
#define UINT_MAX	4294967295U



/* Minimum and maximum values a `long int' can hold.*/
#define LONG_MIN	(-LONG_MAX-1L)



/* POSIX Threads values*/
#define PTHREAD_KEYS_MAX	1024
#if defined ___i386__
#define PTHREAD_STACK_MIN	16384
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define PTHREAD_STACK_MIN	16384
#endif
#if defined __powerpc64__
#define PTHREAD_STACK_MIN	16384
#endif
#if defined __s390__ && !defined __s390x__
#define PTHREAD_STACK_MIN	16384
#endif
#if defined __x86_64__
#define PTHREAD_STACK_MIN	16384
#endif
#if defined __s390x__
#define PTHREAD_STACK_MIN	16384
#endif
#define PTHREAD_THREADS_MAX	16384
#if defined __ia64__
#define PTHREAD_STACK_MIN	196608
#endif
#define PTHREAD_DESTRUCTOR_ITERATIONS	4



#ifdef __cplusplus
}
#endif
#endif
