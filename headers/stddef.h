#ifndef _STDDEF_H_
#define _STDDEF_H_


#define offsetof(TYPE,MEMBER)	((size_t)&((TYPE*)0)->MEMBER)
#define NULL	((void*)0)


typedef long wchar_t;

typedef unsigned int size_t;

typedef int ptrdiff_t;


#endif
