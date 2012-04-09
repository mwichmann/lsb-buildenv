#if (__LSB_VERSION__ >= 10 )
#ifndef _INTTYPES_H_
#define _INTTYPES_H_

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#if defined __i386__
#define __PRIPTR_PREFIX
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __PRIPTR_PREFIX
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRId16	"d"
#define PRId32	"d"
#define PRId8	"d"
#define PRIdFAST8	"d"
#define PRIdLEAST16	"d"
#define PRIdLEAST32	"d"
#define PRIdLEAST8	"d"
#define SCNd32	"d"
#define SCNdLEAST32	"d"
#define SCNd16	"hd"
#define SCNdLEAST16	"hd"
#define SCNd8	"hhd"
#define SCNdFAST8	"hhd"
#define SCNdLEAST8	"hhd"
#define SCNi8	"hhi"
#define SCNiFAST8	"hhi"
#define SCNiLEAST8	"hhi"
#define SCNo8	"hho"
#define SCNoFAST8	"hho"
#define SCNoLEAST8	"hho"
#define SCNu8	"hhu"
#define SCNuFAST8	"hhu"
#define SCNuLEAST8	"hhu"
#define SCNx8	"hhx"
#define SCNxFAST8	"hhx"
#define SCNxLEAST8	"hhx"
#define SCNi16	"hi"
#define SCNiLEAST16	"hi"
#define SCNo16	"ho"
#define SCNoLEAST16	"ho"
#define SCNu16	"hu"
#define SCNuLEAST16	"hu"
#define SCNx16	"hx"
#define SCNxLEAST16	"hx"
#define PRIi16	"i"
#define PRIi32	"i"
#define PRIi8	"i"
#define PRIiFAST8	"i"
#define PRIiLEAST16	"i"
#define PRIiLEAST32	"i"
#define PRIiLEAST8	"i"
#define SCNi32	"i"
#define SCNiLEAST32	"i"
#endif
#if defined __i386__
#define __PRI64_PREFIX	"ll"
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __PRI64_PREFIX	"ll"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIo16	"o"
#define PRIo32	"o"
#define PRIo8	"o"
#define PRIoFAST8	"o"
#define PRIoLEAST16	"o"
#define PRIoLEAST32	"o"
#define PRIoLEAST8	"o"
#define SCNo32	"o"
#define SCNoLEAST32	"o"
#define PRIu16	"u"
#define PRIu32	"u"
#define PRIu8	"u"
#define PRIuFAST8	"u"
#define PRIuLEAST16	"u"
#define PRIuLEAST32	"u"
#define PRIuLEAST8	"u"
#define SCNu32	"u"
#define SCNuLEAST32	"u"
#define PRIX16	"X"
#define PRIX32	"X"
#define PRIX8	"X"
#define PRIXFAST8	"X"
#define PRIXLEAST16	"X"
#define PRIXLEAST32	"X"
#define PRIXLEAST8	"X"
#define PRIx16	"x"
#define PRIx32	"x"
#define PRIx8	"x"
#define PRIxFAST8	"x"
#define PRIxLEAST16	"x"
#define PRIxLEAST32	"x"
#define PRIxLEAST8	"x"
#define SCNx32	"x"
#define SCNxLEAST32	"x"
#define PRId64	__PRI64_PREFIX"d"
#define PRIdFAST64	__PRI64_PREFIX"d"
#define PRIdLEAST64	__PRI64_PREFIX"d"
#define PRIdMAX	__PRI64_PREFIX"d"
#define SCNd64	__PRI64_PREFIX"d"
#define SCNdFAST64	__PRI64_PREFIX"d"
#define SCNdLEAST64	__PRI64_PREFIX"d"
#define SCNdMAX	__PRI64_PREFIX"d"
#define PRIi64	__PRI64_PREFIX"i"
#define PRIiFAST64	__PRI64_PREFIX"i"
#define PRIiLEAST64	__PRI64_PREFIX"i"
#define PRIiMAX	__PRI64_PREFIX"i"
#define SCNi64	__PRI64_PREFIX"i"
#define SCNiFAST64	__PRI64_PREFIX"i"
#define SCNiLEAST64	__PRI64_PREFIX"i"
#define SCNiMAX	__PRI64_PREFIX"i"
#define PRIo64	__PRI64_PREFIX"o"
#define PRIoFAST64	__PRI64_PREFIX"o"
#define PRIoLEAST64	__PRI64_PREFIX"o"
#define PRIoMAX	__PRI64_PREFIX"o"
#define SCNo64	__PRI64_PREFIX"o"
#define SCNoFAST64	__PRI64_PREFIX"o"
#define SCNoLEAST64	__PRI64_PREFIX"o"
#define SCNoMAX	__PRI64_PREFIX"o"
#define PRIu64	__PRI64_PREFIX"u"
#define PRIuFAST64	__PRI64_PREFIX"u"
#define PRIuLEAST64	__PRI64_PREFIX"u"
#define PRIuMAX	__PRI64_PREFIX"u"
#define SCNu64	__PRI64_PREFIX"u"
#define SCNuFAST64	__PRI64_PREFIX"u"
#define SCNuLEAST64	__PRI64_PREFIX"u"
#define SCNuMAX	__PRI64_PREFIX"u"
#define PRIX64	__PRI64_PREFIX"X"
#define PRIXFAST64	__PRI64_PREFIX"X"
#define PRIXLEAST64	__PRI64_PREFIX"X"
#define PRIXMAX	__PRI64_PREFIX"X"
#define PRIx64	__PRI64_PREFIX"x"
#define PRIxFAST64	__PRI64_PREFIX"x"
#define PRIxLEAST64	__PRI64_PREFIX"x"
#define PRIxMAX	__PRI64_PREFIX"x"
#define SCNx64	__PRI64_PREFIX"x"
#define SCNxFAST64	__PRI64_PREFIX"x"
#define SCNxLEAST64	__PRI64_PREFIX"x"
#define SCNxMAX	__PRI64_PREFIX"x"
#define PRIdFAST16	__PRIPTR_PREFIX"d"
#define PRIdFAST32	__PRIPTR_PREFIX"d"
#define PRIdPTR	__PRIPTR_PREFIX"d"
#define SCNdFAST16	__PRIPTR_PREFIX"d"
#define SCNdFAST32	__PRIPTR_PREFIX"d"
#define SCNdPTR	__PRIPTR_PREFIX"d"
#define PRIiFAST16	__PRIPTR_PREFIX"i"
#define PRIiFAST32	__PRIPTR_PREFIX"i"
#define PRIiPTR	__PRIPTR_PREFIX"i"
#define SCNiFAST16	__PRIPTR_PREFIX"i"
#define SCNiFAST32	__PRIPTR_PREFIX"i"
#define SCNiPTR	__PRIPTR_PREFIX"i"
#define PRIoFAST16	__PRIPTR_PREFIX"o"
#define PRIoFAST32	__PRIPTR_PREFIX"o"
#define PRIoPTR	__PRIPTR_PREFIX"o"
#define SCNoFAST16	__PRIPTR_PREFIX"o"
#define SCNoFAST32	__PRIPTR_PREFIX"o"
#define SCNoPTR	__PRIPTR_PREFIX"o"
#define PRIuFAST16	__PRIPTR_PREFIX"u"
#define PRIuFAST32	__PRIPTR_PREFIX"u"
#define PRIuPTR	__PRIPTR_PREFIX"u"
#define SCNuFAST16	__PRIPTR_PREFIX"u"
#define SCNuFAST32	__PRIPTR_PREFIX"u"
#define SCNuPTR	__PRIPTR_PREFIX"u"
#define PRIXFAST16	__PRIPTR_PREFIX"X"
#define PRIXFAST32	__PRIPTR_PREFIX"X"
#define PRIXPTR	__PRIPTR_PREFIX"X"
#define PRIxFAST16	__PRIPTR_PREFIX"x"
#define PRIxFAST32	__PRIPTR_PREFIX"x"
#define PRIxPTR	__PRIPTR_PREFIX"x"
#define SCNxFAST16	__PRIPTR_PREFIX"x"
#define SCNxFAST32	__PRIPTR_PREFIX"x"
#define SCNxPTR	__PRIPTR_PREFIX"x"
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __s390__ && !defined __s390x__
#define __PRIPTR_PREFIX
#endif
#if defined __ia64__
#define __PRI64_PREFIX	"l"
#endif
#if defined __s390x__
#define __PRI64_PREFIX	"l"
#endif
#if defined __ia64__
#define __PRIPTR_PREFIX	"l"
#endif
#if defined __s390x__
#define __PRIPTR_PREFIX	"l"
#endif
#if defined __s390__ && !defined __s390x__
#define __PRI64_PREFIX	"ll"
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __powerpc64__
#define __PRI64_PREFIX	"l"
#endif
#if defined __x86_64__
#define __PRI64_PREFIX	"l"
#endif
#if defined __powerpc64__
#define __PRIPTR_PREFIX	"l"
#endif
#if defined __x86_64__
#define __PRIPTR_PREFIX	"l"
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */




/* Basic Integral Types*/
#if defined __i386__
/* IA32 */
    typedef lldiv_t imaxdiv_t;

#endif
#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef lldiv_t imaxdiv_t;

#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
/* IA64 */
    typedef ldiv_t imaxdiv_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef lldiv_t imaxdiv_t;

#endif
#if defined __s390x__
/* S390X */
    typedef ldiv_t imaxdiv_t;

#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __powerpc64__
/* PPC64 */
    typedef ldiv_t imaxdiv_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef ldiv_t imaxdiv_t;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


#define __PDP_ENDIAN	3412
#define PDP_ENDIAN	__PDP_ENDIAN




/* Function prototypes */

    extern intmax_t imaxabs(intmax_t __n);
    extern imaxdiv_t imaxdiv(intmax_t __numer, intmax_t __denom);
    extern intmax_t strtoimax(const char *__nptr, char **__endptr,
			      int __base);
    extern uintmax_t strtoumax(const char *__nptr, char **__endptr,
			       int __base);
    extern intmax_t wcstoimax(const wchar_t * __nptr, wchar_t * *__endptr,
			      int __base);
    extern uintmax_t wcstoumax(const wchar_t * __nptr, wchar_t * *__endptr,
			       int __base);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
