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
  typedef unsigned int size_t;

  typedef long ptrdiff_t;


#ifdef __cplusplus
}
#endif
#endif
