#ifndef _INTTYPES_H_
#define _INTTYPES_H_

#include <stdlib.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif





/* Basic Integral Types*/


  typedef lldiv_t imaxdiv_t;

#if __i386__
/* IA32 */
  typedef long long intmax_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef unsigned long long uintmax_t;

#endif
  typedef unsigned int uint;

  typedef unsigned char uint8_t;

  typedef unsigned short uint16_t;

  typedef unsigned int uint32_t;

#if __i386__
/* IA32 */
  typedef unsigned int uintptr_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef unsigned long long uint64_t;

#endif
#if __ia64__
/* IA64 */
  typedef long intmax_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef long intmax_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef long long intmax_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef long long intmax_t;

#endif
#if __ia64__
/* IA64 */
  typedef unsigned long uintmax_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef unsigned long uintmax_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef unsigned long long uintmax_t;

#endif
#if __i386__
/* IA32 */
  typedef unsigned long long uintmax_t;

#endif
#if __ia64__
/* IA64 */
  typedef unsigned long uintptr_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef unsigned int uintptr_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef unsigned long uintptr_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef unsigned int uintptr_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef long intmax_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef unsigned long uintptr_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef unsigned long uintmax_t;

#endif
#if __s390x__
/* S390X */
  typedef long intmax_t;

#endif
#if __s390x__
/* S390X */
  typedef unsigned long uintmax_t;

#endif
#if __s390x__
/* S390X */
  typedef unsigned long uintptr_t;

#endif
#if __ia64__
/* IA64 */
  typedef unsigned long uint64_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef unsigned long long uint64_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef unsigned long uint64_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef unsigned long uint64_t;

#endif
#if __s390x__
/* S390X */
  typedef unsigned long uint64_t;

#endif
#if __i386__
/* IA32 */
  typedef unsigned long long uint64_t;

#endif

#define __PDP_ENDIAN	3412
#define PDP_ENDIAN	__PDP_ENDIAN






  extern intmax_t strtoimax (char *, char **, int);
  extern uintmax_t strtoumax (char *, char **, int);
  extern intmax_t wcstoimax (wchar_t *, wchar_t * *, int);
  extern uintmax_t wcstoumax (wchar_t *, wchar_t * *, int);
  extern intmax_t imaxabs (intmax_t);
  extern imaxdiv_t imaxdiv (intmax_t, intmax_t);
#ifdef __cplusplus
}
#endif
#endif
