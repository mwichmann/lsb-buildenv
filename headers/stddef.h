#ifndef _STDDEF_H_
#define _STDDEF_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define offsetof(TYPE,MEMBER)	((size_t)&((TYPE*)0)->MEMBER)
#define NULL	(0)


  typedef long wchar_t;

  typedef unsigned int size_t;

  typedef int ptrdiff_t;


#ifdef __cplusplus
}
#endif
#endif
