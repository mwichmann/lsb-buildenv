#ifndef _STDDEF_H_
#define _STDDEF_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define offsetof(TYPE,MEMBER)	((size_t)&((TYPE*)0)->MEMBER)
#define NULL	(0)


#if !defined(__cplusplus)
  typedef int wchar_t;

#endif
  typedef long ptrdiff_t;

#if __i386__
/* IA32 */
  typedef unsigned int size_t;

#endif
#if __ia64__
/* IA64 */
  typedef unsigned long size_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef unsigned int size_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef unsigned long size_t;

#endif
#if __s390__
/* S390 */
  typedef unsigned long size_t;

#endif

#ifdef __cplusplus
}
#endif
#endif
