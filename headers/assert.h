#ifndef _ASSERT_H_
#define _ASSERT_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define assert(expr)	((void)0)



  extern void __assert_fail (char *, char *, unsigned int, char *);
#ifdef __cplusplus
}
#endif
#endif
