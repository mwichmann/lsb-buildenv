#if (__LSB_VERSION__ >= 10 )
#ifndef _ASSERT_H_
#define _ASSERT_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#ifdef NDEBUG
#define assert(expr) ((void)0)
#else
#define assert(expr)	((void) ((expr) ? 0 : (__assert_fail (#expr, __FILE__, __LINE__, __PRETTY_FUNCTION__), 0)))
#endif
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Function prototypes */

    extern void __assert_fail(const char *__assertion, const char *__file,
			      unsigned int __line, const char *__function);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
