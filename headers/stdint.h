#ifndef _STDINT_H_
#define _STDINT_H_


#ifdef __cplusplus
extern "C" {
#endif


#define INT16_C(c)	c
#define INT32_C(c)	c
#define INT8_C(c)	c
#define UINT16_C(c)	c
#define UINT8_C(c)	c
#if defined __ia64__
#define INT64_C(c)	c ## L
#endif
#if defined __powerpc64__
#define INT64_C(c)	c ## L
#endif
#if defined __x86_64__
#define INT64_C(c)	c ## L
#endif
#if defined __s390x__
#define INT64_C(c)	c ## L
#endif
#if defined __ia64__
#define INTMAX_C(c)	c ## L
#endif
#if defined __powerpc64__
#define INTMAX_C(c)	c ## L
#endif
#if defined __x86_64__
#define INTMAX_C(c)	c ## L
#endif
#if defined __s390x__
#define INTMAX_C(c)	c ## L
#endif
#if defined __ia64__
#define __INT64_C(c)	c ## L
#endif
#if defined __powerpc64__
#define __INT64_C(c)	c ## L
#endif
#if defined __x86_64__
#define __INT64_C(c)	c ## L
#endif
#if defined __s390x__
#define __INT64_C(c)	c ## L
#endif
#if defined __i386__
#define INT64_C(c)	c ## LL
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define INT64_C(c)	c ## LL
#endif
#if defined __s390__ && !defined __s390x__
#define INT64_C(c)	c ## LL
#endif
#if defined __i386__
#define INTMAX_C(c)	c ## LL
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define INTMAX_C(c)	c ## LL
#endif
#if defined __s390__ && !defined __s390x__
#define INTMAX_C(c)	c ## LL
#endif
#if defined __i386__
#define __INT64_C(c)	c ## LL
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __INT64_C(c)	c ## LL
#endif
#if defined __s390__ && !defined __s390x__
#define __INT64_C(c)	c ## LL
#endif
#define UINT32_C(c)	c ## U
#if defined __ia64__
#define UINT64_C(c)	c ## UL
#endif
#if defined __powerpc64__
#define UINT64_C(c)	c ## UL
#endif
#if defined __x86_64__
#define UINT64_C(c)	c ## UL
#endif
#if defined __s390x__
#define UINT64_C(c)	c ## UL
#endif
#if defined __ia64__
#define UINTMAX_C(c)	c ## UL
#endif
#if defined __powerpc64__
#define UINTMAX_C(c)	c ## UL
#endif
#if defined __x86_64__
#define UINTMAX_C(c)	c ## UL
#endif
#if defined __s390x__
#define UINTMAX_C(c)	c ## UL
#endif
#if defined __ia64__
#define __UINT64_C(c)	c ## UL
#endif
#if defined __powerpc64__
#define __UINT64_C(c)	c ## UL
#endif
#if defined __x86_64__
#define __UINT64_C(c)	c ## UL
#endif
#if defined __s390x__
#define __UINT64_C(c)	c ## UL
#endif
#if defined __i386__
#define UINT64_C(c)	c ## ULL
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define UINT64_C(c)	c ## ULL
#endif
#if defined __s390__ && !defined __s390x__
#define UINT64_C(c)	c ## ULL
#endif
#if defined __i386__
#define UINTMAX_C(c)	c ## ULL
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define UINTMAX_C(c)	c ## ULL
#endif
#if defined __s390__ && !defined __s390x__
#define UINTMAX_C(c)	c ## ULL
#endif
#if defined __i386__
#define __UINT64_C(c)	c ## ULL
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __UINT64_C(c)	c ## ULL
#endif
#if defined __s390__ && !defined __s390x__
#define __UINT64_C(c)	c ## ULL
#endif



/* Default Header Section for stdint.h*/
#define INT8_MIN	(-128)
#define INT_FAST8_MIN	(-128)
#define INT_LEAST8_MIN	(-128)
#define INT32_MIN	(-2147483647-1)
#if defined __i386__
#define INTPTR_MIN	(-2147483647-1)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define INTPTR_MIN	(-2147483647-1)
#endif
#if defined __s390__ && !defined __s390x__
#define INTPTR_MIN	(-2147483647-1)
#endif
#if defined __i386__
#define INT_FAST16_MIN	(-2147483647-1)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define INT_FAST16_MIN	(-2147483647-1)
#endif
#if defined __s390__ && !defined __s390x__
#define INT_FAST16_MIN	(-2147483647-1)
#endif
#if defined __i386__
#define INT_FAST32_MIN	(-2147483647-1)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define INT_FAST32_MIN	(-2147483647-1)
#endif
#if defined __s390__ && !defined __s390x__
#define INT_FAST32_MIN	(-2147483647-1)
#endif
#define INT_LEAST32_MIN	(-2147483647-1)
#if defined __i386__
#define PTRDIFF_MIN	(-2147483647-1)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define PTRDIFF_MIN	(-2147483647-1)
#endif
#if defined __s390__ && !defined __s390x__
#define PTRDIFF_MIN	(-2147483647-1)
#endif
#define SIG_ATOMIC_MIN	(-2147483647-1)
#define INT16_MIN	(-32767-1)
#define INT_LEAST16_MIN	(-32767-1)
#if defined __ia64__
#define INTPTR_MIN	(-9223372036854775807L-1)
#endif
#if defined __powerpc64__
#define INTPTR_MIN	(-9223372036854775807L-1)
#endif
#if defined __x86_64__
#define INTPTR_MIN	(-9223372036854775807L-1)
#endif
#if defined __s390x__
#define INTPTR_MIN	(-9223372036854775807L-1)
#endif
#if defined __ia64__
#define INT_FAST16_MIN	(-9223372036854775807L-1)
#endif
#if defined __powerpc64__
#define INT_FAST16_MIN	(-9223372036854775807L-1)
#endif
#if defined __x86_64__
#define INT_FAST16_MIN	(-9223372036854775807L-1)
#endif
#if defined __s390x__
#define INT_FAST16_MIN	(-9223372036854775807L-1)
#endif
#if defined __ia64__
#define INT_FAST32_MIN	(-9223372036854775807L-1)
#endif
#if defined __powerpc64__
#define INT_FAST32_MIN	(-9223372036854775807L-1)
#endif
#if defined __x86_64__
#define INT_FAST32_MIN	(-9223372036854775807L-1)
#endif
#if defined __s390x__
#define INT_FAST32_MIN	(-9223372036854775807L-1)
#endif
#if defined __ia64__
#define PTRDIFF_MIN	(-9223372036854775807L-1)
#endif
#if defined __powerpc64__
#define PTRDIFF_MIN	(-9223372036854775807L-1)
#endif
#if defined __x86_64__
#define PTRDIFF_MIN	(-9223372036854775807L-1)
#endif
#if defined __s390x__
#define PTRDIFF_MIN	(-9223372036854775807L-1)
#endif
#define INT64_MIN	(-__INT64_C(9223372036854775807)-1)
#define INTMAX_MIN	(-__INT64_C(9223372036854775807)-1)
#define INT_FAST64_MIN	(-__INT64_C(9223372036854775807)-1)
#define INT_LEAST64_MIN	(-__INT64_C(9223372036854775807)-1)
#define WINT_MIN	(0u)
#define INT8_MAX	(127)
#define INT_FAST8_MAX	(127)
#define INT_LEAST8_MAX	(127)
#if defined __ia64__
#define SIZE_MAX	(18446744073709551615UL)
#endif
#if defined __powerpc64__
#define SIZE_MAX	(18446744073709551615UL)
#endif
#if defined __x86_64__
#define SIZE_MAX	(18446744073709551615UL)
#endif
#if defined __s390x__
#define SIZE_MAX	(18446744073709551615UL)
#endif
#if defined __ia64__
#define UINTPTR_MAX	(18446744073709551615UL)
#endif
#if defined __powerpc64__
#define UINTPTR_MAX	(18446744073709551615UL)
#endif
#if defined __x86_64__
#define UINTPTR_MAX	(18446744073709551615UL)
#endif
#if defined __s390x__
#define UINTPTR_MAX	(18446744073709551615UL)
#endif
#if defined __ia64__
#define UINT_FAST16_MAX	(18446744073709551615UL)
#endif
#if defined __powerpc64__
#define UINT_FAST16_MAX	(18446744073709551615UL)
#endif
#if defined __x86_64__
#define UINT_FAST16_MAX	(18446744073709551615UL)
#endif
#if defined __s390x__
#define UINT_FAST16_MAX	(18446744073709551615UL)
#endif
#if defined __ia64__
#define UINT_FAST32_MAX	(18446744073709551615UL)
#endif
#if defined __powerpc64__
#define UINT_FAST32_MAX	(18446744073709551615UL)
#endif
#if defined __x86_64__
#define UINT_FAST32_MAX	(18446744073709551615UL)
#endif
#if defined __s390x__
#define UINT_FAST32_MAX	(18446744073709551615UL)
#endif
#define INT32_MAX	(2147483647)
#if defined __i386__
#define INTPTR_MAX	(2147483647)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define INTPTR_MAX	(2147483647)
#endif
#if defined __s390__ && !defined __s390x__
#define INTPTR_MAX	(2147483647)
#endif
#if defined __i386__
#define INT_FAST16_MAX	(2147483647)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define INT_FAST16_MAX	(2147483647)
#endif
#if defined __s390__ && !defined __s390x__
#define INT_FAST16_MAX	(2147483647)
#endif
#if defined __i386__
#define INT_FAST32_MAX	(2147483647)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define INT_FAST32_MAX	(2147483647)
#endif
#if defined __s390__ && !defined __s390x__
#define INT_FAST32_MAX	(2147483647)
#endif
#define INT_LEAST32_MAX	(2147483647)
#if defined __i386__
#define PTRDIFF_MAX	(2147483647)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define PTRDIFF_MAX	(2147483647)
#endif
#if defined __s390__ && !defined __s390x__
#define PTRDIFF_MAX	(2147483647)
#endif
#define SIG_ATOMIC_MAX	(2147483647)
#define UINT8_MAX	(255)
#define UINT_FAST64_MAX	(255)
#define UINT_LEAST8_MAX	(255)
#define INT16_MAX	(32767)
#define INT_LEAST16_MAX	(32767)
#if defined __i386__
#define SIZE_MAX	(4294967295U)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define SIZE_MAX	(4294967295U)
#endif
#if defined __s390__ && !defined __s390x__
#define SIZE_MAX	(4294967295U)
#endif
#define UINT32_MAX	(4294967295U)
#if defined __i386__
#define UINTPTR_MAX	(4294967295U)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define UINTPTR_MAX	(4294967295U)
#endif
#if defined __s390__ && !defined __s390x__
#define UINTPTR_MAX	(4294967295U)
#endif
#if defined __i386__
#define UINT_FAST16_MAX	(4294967295U)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define UINT_FAST16_MAX	(4294967295U)
#endif
#if defined __s390__ && !defined __s390x__
#define UINT_FAST16_MAX	(4294967295U)
#endif
#if defined __i386__
#define UINT_FAST32_MAX	(4294967295U)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define UINT_FAST32_MAX	(4294967295U)
#endif
#if defined __s390__ && !defined __s390x__
#define UINT_FAST32_MAX	(4294967295U)
#endif
#define UINT_LEAST32_MAX	(4294967295U)
#define WINT_MAX	(4294967295u)
#define UINT16_MAX	(65535)
#define UINT_LEAST16_MAX	(65535)
#if defined __ia64__
#define INTPTR_MAX	(9223372036854775807L)
#endif
#if defined __powerpc64__
#define INTPTR_MAX	(9223372036854775807L)
#endif
#if defined __x86_64__
#define INTPTR_MAX	(9223372036854775807L)
#endif
#if defined __s390x__
#define INTPTR_MAX	(9223372036854775807L)
#endif
#if defined __ia64__
#define INT_FAST16_MAX	(9223372036854775807L)
#endif
#if defined __powerpc64__
#define INT_FAST16_MAX	(9223372036854775807L)
#endif
#if defined __x86_64__
#define INT_FAST16_MAX	(9223372036854775807L)
#endif
#if defined __s390x__
#define INT_FAST16_MAX	(9223372036854775807L)
#endif
#if defined __ia64__
#define INT_FAST32_MAX	(9223372036854775807L)
#endif
#if defined __powerpc64__
#define INT_FAST32_MAX	(9223372036854775807L)
#endif
#if defined __x86_64__
#define INT_FAST32_MAX	(9223372036854775807L)
#endif
#if defined __s390x__
#define INT_FAST32_MAX	(9223372036854775807L)
#endif
#if defined __ia64__
#define PTRDIFF_MAX	(9223372036854775807L)
#endif
#if defined __powerpc64__
#define PTRDIFF_MAX	(9223372036854775807L)
#endif
#if defined __x86_64__
#define PTRDIFF_MAX	(9223372036854775807L)
#endif
#if defined __s390x__
#define PTRDIFF_MAX	(9223372036854775807L)
#endif
#define INT64_MAX	(__INT64_C(9223372036854775807))
#define INTMAX_MAX	(__INT64_C(9223372036854775807))
#define INT_FAST64_MAX	(__INT64_C(9223372036854775807))
#define INT_LEAST64_MAX	(__INT64_C(9223372036854775807))
#define UINT64_MAX	(__UINT64_C(18446744073709551615))
#define UINTMAX_MAX	(__UINT64_C(18446744073709551615))
#define UINT_FAST8_MAX	(__UINT64_C(18446744073709551615))
#define UINT_LEAST64_MAX	(__UINT64_C(18446744073709551615))


    typedef signed char int8_t;

    typedef short int16_t;

    typedef int int32_t;

#if defined __i386__
/* IA32 */
    typedef long long int int64_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int int64_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef long long int int64_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int int64_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef long long int int64_t;

#endif
#if defined __s390x__
/* S390X */
    typedef long int int64_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef long int int64_t;

#endif
#if defined __i386__
/* IA32 */
    typedef long long int intmax_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef long long int intmax_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef long long int intmax_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int intmax_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef long int intmax_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int intmax_t;

#endif
#if defined __s390x__
/* S390X */
    typedef long int intmax_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned long long int uintmax_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int uintmax_t;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned long long int uintmax_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned long long int uintmax_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int uintmax_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int uintmax_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int uintmax_t;

#endif
#if defined __i386__
/* IA32 */
    typedef int intptr_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int intptr_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef int intptr_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef int intptr_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef long int intptr_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int intptr_t;

#endif
#if defined __s390x__
/* S390X */
    typedef long int intptr_t;

#endif
    typedef unsigned char uint8_t;

    typedef unsigned short uint16_t;

    typedef unsigned int uint32_t;

#if defined __i386__
/* IA32 */
    typedef unsigned int uintptr_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned int uintptr_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int uintptr_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned int uintptr_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int uintptr_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int uintptr_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int uintptr_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned long long int uint64_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int uint64_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned long long int uint64_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int uint64_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int uint64_t;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned long long int uint64_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int uint64_t;

#endif
    typedef signed char int_least8_t;

    typedef short int int_least16_t;

    typedef int int_least32_t;

    typedef unsigned char uint_least8_t;

    typedef unsigned short uint_least16_t;

    typedef unsigned int uint_least32_t;

    typedef signed char int_fast8_t;

    typedef unsigned char uint_fast8_t;

#if defined __ia64__
/* IA64 */
    typedef long int int_least64_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int int_least64_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int int_least64_t;

#endif
#if defined __s390x__
/* S390X */
    typedef long int int_least64_t;

#endif
#if defined __i386__
/* IA32 */
    typedef long long int int_least64_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef long long int int_least64_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef long long int int_least64_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int uint_least64_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int uint_least64_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int uint_least64_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int uint_least64_t;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned long long int uint_least64_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned long long int uint_least64_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned long long int uint_least64_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef long int int_fast16_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int int_fast16_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int int_fast16_t;

#endif
#if defined __s390x__
/* S390X */
    typedef long int int_fast16_t;

#endif
#if defined __i386__
/* IA32 */
    typedef int int_fast16_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef int int_fast16_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef int int_fast16_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef long int int_fast32_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int int_fast32_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int int_fast32_t;

#endif
#if defined __s390x__
/* S390X */
    typedef long int int_fast32_t;

#endif
#if defined __i386__
/* IA32 */
    typedef int int_fast32_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef int int_fast32_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef int int_fast32_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef long int int_fast64_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int int_fast64_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int int_fast64_t;

#endif
#if defined __s390x__
/* S390X */
    typedef long int int_fast64_t;

#endif
#if defined __i386__
/* IA32 */
    typedef long long int int_fast64_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef long long int int_fast64_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef long long int int_fast64_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int uint_fast16_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int uint_fast16_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int uint_fast16_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int uint_fast16_t;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned int uint_fast16_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned int uint_fast16_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned int uint_fast16_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int uint_fast32_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int uint_fast32_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int uint_fast32_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int uint_fast32_t;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned int uint_fast32_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned int uint_fast32_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned int uint_fast32_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int uint_fast64_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int uint_fast64_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int uint_fast64_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int uint_fast64_t;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned long long int uint_fast64_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned long long int uint_fast64_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned long long int uint_fast64_t;

#endif

#ifdef __cplusplus
}
#endif
#endif
