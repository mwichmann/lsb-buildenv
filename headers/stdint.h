#ifndef _STDINT_H_
#define _STDINT_H_


#ifdef __cplusplus
extern "C" {
#endif




    typedef signed char int8_t;

    typedef short int16_t;

    typedef int int32_t;

#if defined ___i386__
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
#if defined ___i386__
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
#if defined ___i386__
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
#if defined ___i386__
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

#if defined ___i386__
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
#if defined ___i386__
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
#if defined ___i386__
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
#if defined ___i386__
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
#if defined ___i386__
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
#if defined ___i386__
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
#if defined ___i386__
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
#if defined ___i386__
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
#if defined ___i386__
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
#if defined ___i386__
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
