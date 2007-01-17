#ifndef _ASSERT_H_
#define _ASSERT_H_


#ifdef __cplusplus
extern "C" {
#endif


#ifdef  NDEBUG
#define assert(expr)    ((void)0)
#else
#define assert(expr)  ((void) ((expr) ? 0 : (__assert_fail (#expr, __FILE__, __LINE__, __PRETTY_FUNCTION__), 0)))
#endif



    extern void __assert_fail(const char *, const char *, unsigned int,
			      const char *);
#ifdef __cplusplus
}
#endif
#endif
