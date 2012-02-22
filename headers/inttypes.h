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
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRId32	"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRId8	"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIdFAST8	"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIdLEAST16	"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIdLEAST32	"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIdLEAST8	"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNd32	"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNdLEAST32	"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNd16	"hd"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNdLEAST16	"hd"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNd8	"hhd"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNdFAST8	"hhd"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNdLEAST8	"hhd"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNi8	"hhi"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNiFAST8	"hhi"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNiLEAST8	"hhi"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNo8	"hho"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNoFAST8	"hho"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNoLEAST8	"hho"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNu8	"hhu"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNuFAST8	"hhu"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNuLEAST8	"hhu"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNx8	"hhx"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNxFAST8	"hhx"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNxLEAST8	"hhx"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNi16	"hi"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNiLEAST16	"hi"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNo16	"ho"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNoLEAST16	"ho"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNu16	"hu"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNuLEAST16	"hu"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNx16	"hx"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNxLEAST16	"hx"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIi16	"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIi32	"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIi8	"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIiFAST8	"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIiLEAST16	"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIiLEAST32	"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIiLEAST8	"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNi32	"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
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
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIo32	"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIo8	"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIoFAST8	"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIoLEAST16	"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIoLEAST32	"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIoLEAST8	"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNo32	"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNoLEAST32	"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIu16	"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIu32	"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIu8	"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIuFAST8	"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIuLEAST16	"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIuLEAST32	"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIuLEAST8	"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNu32	"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNuLEAST32	"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIX16	"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIX32	"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIX8	"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIXFAST8	"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIXLEAST16	"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIXLEAST32	"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIXLEAST8	"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIx16	"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIx32	"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIx8	"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIxFAST8	"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIxLEAST16	"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIxLEAST32	"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIxLEAST8	"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNx32	"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNxLEAST32	"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRId64	__PRI64_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIdFAST64	__PRI64_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIdLEAST64	__PRI64_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIdMAX	__PRI64_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNd64	__PRI64_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNdFAST64	__PRI64_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNdLEAST64	__PRI64_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNdMAX	__PRI64_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIi64	__PRI64_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIiFAST64	__PRI64_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIiLEAST64	__PRI64_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIiMAX	__PRI64_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNi64	__PRI64_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNiFAST64	__PRI64_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNiLEAST64	__PRI64_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNiMAX	__PRI64_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIo64	__PRI64_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIoFAST64	__PRI64_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIoLEAST64	__PRI64_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIoMAX	__PRI64_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNo64	__PRI64_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNoFAST64	__PRI64_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNoLEAST64	__PRI64_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNoMAX	__PRI64_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIu64	__PRI64_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIuFAST64	__PRI64_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIuLEAST64	__PRI64_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIuMAX	__PRI64_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNu64	__PRI64_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNuFAST64	__PRI64_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNuLEAST64	__PRI64_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNuMAX	__PRI64_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIX64	__PRI64_PREFIX"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIXFAST64	__PRI64_PREFIX"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIXLEAST64	__PRI64_PREFIX"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIXMAX	__PRI64_PREFIX"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIx64	__PRI64_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIxFAST64	__PRI64_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIxLEAST64	__PRI64_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIxMAX	__PRI64_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNx64	__PRI64_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNxFAST64	__PRI64_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNxLEAST64	__PRI64_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNxMAX	__PRI64_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIdFAST16	__PRIPTR_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIdFAST32	__PRIPTR_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIdPTR	__PRIPTR_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNdFAST16	__PRIPTR_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNdFAST32	__PRIPTR_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNdPTR	__PRIPTR_PREFIX"d"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIiFAST16	__PRIPTR_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIiFAST32	__PRIPTR_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIiPTR	__PRIPTR_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNiFAST16	__PRIPTR_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNiFAST32	__PRIPTR_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNiPTR	__PRIPTR_PREFIX"i"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIoFAST16	__PRIPTR_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIoFAST32	__PRIPTR_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIoPTR	__PRIPTR_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNoFAST16	__PRIPTR_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNoFAST32	__PRIPTR_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNoPTR	__PRIPTR_PREFIX"o"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIuFAST16	__PRIPTR_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIuFAST32	__PRIPTR_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIuPTR	__PRIPTR_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNuFAST16	__PRIPTR_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNuFAST32	__PRIPTR_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNuPTR	__PRIPTR_PREFIX"u"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIXFAST16	__PRIPTR_PREFIX"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIXFAST32	__PRIPTR_PREFIX"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIXPTR	__PRIPTR_PREFIX"X"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIxFAST16	__PRIPTR_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIxFAST32	__PRIPTR_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define PRIxPTR	__PRIPTR_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNxFAST16	__PRIPTR_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
#define SCNxFAST32	__PRIPTR_PREFIX"x"
#endif
#if !defined __cplusplus || defined __STDC_FORMAT_MACROS
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
