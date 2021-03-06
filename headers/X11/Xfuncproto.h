#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_XFUNCPROTO_H_
#define _X11_XFUNCPROTO_H_


#ifdef __cplusplus
extern "C" {
#endif


#define NARROWPROTO
#ifdef __cplusplus
#define _XFUNCPROTOBEGIN extern "C" {
#else
#define _XFUNCPROTOBEGIN
#endif
#ifdef __cplusplus
#define _XFUNCPROTOEND }
#else
#define _XFUNCPROTOEND
#endif
#define NeedFunctionPrototypes	1
#define NeedNestedPrototypes	1
#define NeedVarargsPrototypes	1
#define NeedWidePrototypes	1
#define FUNCPROTO	15
#define _Xconst	const
#define _X_INLINE	inline
#define _X_SENTINEL(x)	__attribute__ ((__sentinel__(x)))
#define _X_DEPRECATED	__attribute__((deprecated))
#define _X_EXPORT	__attribute__((visibility("default")))
#define _X_HIDDEN	__attribute__((visibility("hidden")))
#define _X_INTERNAL	__attribute__((visibility("internal")))
#define _X_ATTRIBUTE_PRINTF(x,y)	__attribute__((__format__(__printf__,x,y)))
#define _X_UNLIKELY(x)	__builtin_expect(!!(x), 0)
#define _X_LIKELY(x)	__builtin_expect(!!(x), 1)


#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
