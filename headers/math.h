#if (__LSB_VERSION__ >= 10 )
#ifndef _MATH_H_
#define _MATH_H_


#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define DOMAIN	1
#define SING	2
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
    struct exception {
	int type;
	char *name;
	double arg1;
	double arg2;
	double retval;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* All floating-point numbers can be put in one of these categories.*/
#if __LSB_VERSION__ >= 21
#define FP_NAN	0
#define FP_INFINITE	1
#define FP_ZERO	2
#define FP_SUBNORMAL	3
#define FP_NORMAL	4
#endif				/* __LSB_VERSION__ >= 2.1 */




/* ISO C99 defines some generic macros which work on any data type.*/
#if __LSB_VERSION__ >= 20
#if defined __powerpc__ && !defined __powerpc64__
#define isinf(x)	\
     (sizeof (x) == sizeof (float) ? __isinff (x) : __isinf (x))
#endif
#if defined __powerpc64__
#define isinf(x)	\
     (sizeof (x) == sizeof (float) ? __isinff (x) : __isinf (x))
#endif
#if defined __s390__ && !defined __s390x__
#define isinf(x)	\
     (sizeof (x) == sizeof (float) ? __isinff (x) : __isinf (x))
#endif
#if defined __s390x__
#define isinf(x)	\
     (sizeof (x) == sizeof (float) ? __isinff (x) : __isinf (x))
#endif
#if defined __i386__
#define isinf(x)	\
     (sizeof (x) == sizeof (float) ? __isinff (x): sizeof (x) == sizeof (double) ? __isinf (x) : __isinfl (x))
#endif
#if defined __ia64__
#define isinf(x)	\
     (sizeof (x) == sizeof (float) ? __isinff (x): sizeof (x) == sizeof (double) ? __isinf (x) : __isinfl (x))
#endif
#if defined __x86_64__
#define isinf(x)	\
     (sizeof (x) == sizeof (float) ? __isinff (x): sizeof (x) == sizeof (double) ? __isinf (x) : __isinfl (x))
#endif
#if defined __i386__
#define isnan(x)	\
     (sizeof (x) == sizeof (float) ? __isnanf (x)  : sizeof (x) == sizeof (double) ? __isnan (x) : __isnanl (x))
#endif
#if defined __ia64__
#define isnan(x)	\
     (sizeof (x) == sizeof (float) ? __isnanf (x)  : sizeof (x) == sizeof (double) ? __isnan (x) : __isnanl (x))
#endif
#if defined __x86_64__
#define isnan(x)	\
     (sizeof (x) == sizeof (float) ? __isnanf (x)  : sizeof (x) == sizeof (double) ? __isnan (x) : __isnanl (x))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define isnan(x)	\
     (sizeof (x) == sizeof (float) ? __isnanf (x) : __isnan (x))
#endif
#if defined __powerpc64__
#define isnan(x)	\
     (sizeof (x) == sizeof (float) ? __isnanf (x) : __isnan (x))
#endif
#if defined __s390__ && !defined __s390x__
#define isnan(x)	\
     (sizeof (x) == sizeof (float) ? __isnanf (x) : __isnan (x))
#endif
#if defined __s390x__
#define isnan(x)	\
     (sizeof (x) == sizeof (float) ? __isnanf (x) : __isnan (x))
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 21
#define isnormal(x)	(fpclassify (x) == FP_NORMAL)	/* Return nonzero value if X is neither zero, subnormal, Inf, n */
#if defined __powerpc__ && !defined __powerpc64__
#define fpclassify(x)	\
	(sizeof (x) == sizeof (float) ? __fpclassifyf (x) : __fpclassify (x) )	/* Return number of classification appropriate for X. */
#endif
#if defined __powerpc64__
#define fpclassify(x)	\
	(sizeof (x) == sizeof (float) ? __fpclassifyf (x) : __fpclassify (x) )	/* Return number of classification appropriate for X. */
#endif
#if defined __s390__ && !defined __s390x__
#define fpclassify(x)	\
	(sizeof (x) == sizeof (float) ? __fpclassifyf (x) : __fpclassify (x) )	/* Return number of classification appropriate for X. */
#endif
#if defined __s390x__
#define fpclassify(x)	\
	(sizeof (x) == sizeof (float) ? __fpclassifyf (x) : __fpclassify (x) )	/* Return number of classification appropriate for X. */
#endif
#if defined __i386__
#define fpclassify(x)	\
	(sizeof (x) == sizeof (float) ? __fpclassifyf (x) :sizeof (x) == sizeof (double) ? __fpclassify (x) : __fpclassifyl (x))	/* Return number of classification appropriate for X. */
#endif
#if defined __ia64__
#define fpclassify(x)	\
	(sizeof (x) == sizeof (float) ? __fpclassifyf (x) :sizeof (x) == sizeof (double) ? __fpclassify (x) : __fpclassifyl (x))	/* Return number of classification appropriate for X. */
#endif
#if defined __x86_64__
#define fpclassify(x)	\
	(sizeof (x) == sizeof (float) ? __fpclassifyf (x) :sizeof (x) == sizeof (double) ? __fpclassify (x) : __fpclassifyl (x))	/* Return number of classification appropriate for X. */
#endif
#if defined __i386__
#define signbit(x)	\
	(sizeof (x) == sizeof (float)? __signbitf (x): sizeof (x) == sizeof (double)? __signbit (x) : __signbitl (x))	/* Return nonzero value if sign of X is negative. */
#endif
#if defined __ia64__
#define signbit(x)	\
	(sizeof (x) == sizeof (float)? __signbitf (x): sizeof (x) == sizeof (double)? __signbit (x) : __signbitl (x))	/* Return nonzero value if sign of X is negative. */
#endif
#if defined __x86_64__
#define signbit(x)	\
	(sizeof (x) == sizeof (float)? __signbitf (x): sizeof (x) == sizeof (double)? __signbit (x) : __signbitl (x))	/* Return nonzero value if sign of X is negative. */
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define signbit(x)	\
	(sizeof (x) == sizeof (float)? __signbitf (x): __signbit (x))	/* Return nonzero value if sign of X is negative. */
#endif
#if defined __powerpc64__
#define signbit(x)	\
	(sizeof (x) == sizeof (float)? __signbitf (x): __signbit (x))	/* Return nonzero value if sign of X is negative. */
#endif
#if defined __s390__ && !defined __s390x__
#define signbit(x)	\
	(sizeof (x) == sizeof (float)? __signbitf (x): __signbit (x))	/* Return nonzero value if sign of X is negative. */
#endif
#if defined __s390x__
#define signbit(x)	\
	(sizeof (x) == sizeof (float)? __signbitf (x): __signbit (x))	/* Return nonzero value if sign of X is negative. */
#endif
#if defined __i386__
#define isfinite(x)	\
     (sizeof (x) == sizeof (float) ? __finitef (x) : sizeof (x) == sizeof (double)? __finite (x) : __finitel (x))	/* Return nonzero value if X is not +-Inf or NaN. */
#endif
#if defined __ia64__
#define isfinite(x)	\
     (sizeof (x) == sizeof (float) ? __finitef (x) : sizeof (x) == sizeof (double)? __finite (x) : __finitel (x))	/* Return nonzero value if X is not +-Inf or NaN. */
#endif
#if defined __x86_64__
#define isfinite(x)	\
     (sizeof (x) == sizeof (float) ? __finitef (x) : sizeof (x) == sizeof (double)? __finite (x) : __finitel (x))	/* Return nonzero value if X is not +-Inf or NaN. */
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define isfinite(x)	\
     (sizeof (x) == sizeof (float) ? __finitef (x) : __finite (x))	/* Return nonzero value if X is not +-Inf or NaN. */
#endif
#if defined __powerpc64__
#define isfinite(x)	\
     (sizeof (x) == sizeof (float) ? __finitef (x) : __finite (x))	/* Return nonzero value if X is not +-Inf or NaN. */
#endif
#if defined __s390__ && !defined __s390x__
#define isfinite(x)	\
     (sizeof (x) == sizeof (float) ? __finitef (x) : __finite (x))	/* Return nonzero value if X is not +-Inf or NaN. */
#endif
#if defined __s390x__
#define isfinite(x)	\
     (sizeof (x) == sizeof (float) ? __finitef (x) : __finite (x))	/* Return nonzero value if X is not +-Inf or NaN. */
#endif
#endif				/* __LSB_VERSION__ >= 2.1 */




/* machine-dependent HUGE_VAL value*/
#if __LSB_VERSION__ >= 11
#define HUGE_VAL	0x1.0p2047
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 20
#if defined __powerpc__ && !defined __powerpc64__
#define HUGE_VALL	0x1.0p2047L
#endif
#if defined __powerpc64__
#define HUGE_VALL	0x1.0p2047L
#endif
#if defined __s390__ && !defined __s390x__
#define HUGE_VALL	0x1.0p2047L
#endif
#if defined __s390x__
#define HUGE_VALL	0x1.0p2047L
#endif
#define HUGE_VALF	0x1.0p255f
#if defined __i386__
#define HUGE_VALL	0x1.0p32767L
#endif
#if defined __ia64__
#define HUGE_VALL	0x1.0p32767L
#endif
#if defined __x86_64__
#define HUGE_VALL	0x1.0p32767L
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */




/* Some useful constants*/
#if __LSB_VERSION__ >= 11
#define M_1_PI	0.31830988618379067154
#define M_LOG10E	0.43429448190325182765
#define M_2_PI	0.63661977236758134308
#define M_LN2	0.69314718055994530942
#define M_SQRT1_2	0.70710678118654752440
#define M_PI_4	0.78539816339744830962
#define M_2_SQRTPI	1.12837916709551257390
#define M_SQRT2	1.41421356237309504880
#define M_LOG2E	1.4426950408889634074
#define M_PI_2	1.57079632679489661923
#define M_LN10	2.30258509299404568402
#define M_E	2.7182818284590452354
#define M_PI	3.14159265358979323846
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 20
#define NAN	((float)0x7fc00000UL)
#define INFINITY	HUGE_VALF
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 21
#if defined __i386__
#define FP_ILOGB0	(-2147483647 - 1)
#endif
#if defined __i386__
#define FP_ILOGBNAN	(-2147483647 - 1)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FP_ILOGB0	-2147483647
#endif
#if defined __powerpc64__
#define FP_ILOGB0	-2147483647
#endif
#if defined __s390__ && !defined __s390x__
#define FP_ILOGB0	-2147483647
#endif
#if defined __s390x__
#define FP_ILOGB0	-2147483647
#endif
#if defined __ia64__
#define FP_ILOGB0	-2147483648
#endif
#if defined __x86_64__
#define FP_ILOGB0	-2147483648
#endif
#if defined __x86_64__
#define FP_ILOGBNAN	-2147483648
#endif
#if defined __ia64__
#define FP_ILOGBNAN	2147483647
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FP_ILOGBNAN	2147483647
#endif
#if defined __powerpc64__
#define FP_ILOGBNAN	2147483647
#endif
#if defined __s390__ && !defined __s390x__
#define FP_ILOGBNAN	2147483647
#endif
#if defined __s390x__
#define FP_ILOGBNAN	2147483647
#endif
#endif				/* __LSB_VERSION__ >= 2.1 */




/* Bitmasks for the math_errhandling macro.*/
#if __LSB_VERSION__ >= 20
#define MATH_ERRNO	1	/* errno set by math functions. */
#define MATH_ERREXCEPT	2	/* Exceptions raised by math functions. */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* ISO C99 defines some macros to compare number while taking care
   for unordered numbers.  Since many FPUs provide special
   instructions to support these operations and these tests are
   defined in <bits/mathinline.h>, we define the generic macros at
   this late point and only if they are not defined yet.*/
#if __LSB_VERSION__ >= 21
#define isunordered(u, v)	\
	(__extension__({ __typeof__(u) __u = (u); __typeof__(v) __v = (v);fpclassify (__u) == FP_NAN || fpclassify (__v) == FP_NAN; }))	/* Return nonzero value if arguments are unordered. */
#define islessgreater(x, y)	\
	(__extension__({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);!isunordered (__x, __y) && (__x < __y || __y < __x); }))	/* Return nonzero value if either X is less than Y or Y is less */
#define isless(x,y)	\
	(__extension__({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);!isunordered (__x, __y) && __x < __y; }))	/* Return nonzero value if X is less than Y. */
#define islessequal(x, y)	\
	(__extension__({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);!isunordered (__x, __y) && __x <= __y; }))	/* Return nonzero value if X is less than or equal to Y. */
#define isgreater(x,y)	\
	(__extension__({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);!isunordered (__x, __y) && __x > __y; }))	/* Return nonzero value if X is greater than Y. */
#define isgreaterequal(x,y)	\
	(__extension__({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);!isunordered (__x, __y) && __x >= __y; }))	/* Return nonzero value if X is greater than or equal to Y. */
#endif				/* __LSB_VERSION__ >= 2.1 */




/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern double acos(double);
    extern float acosf(float);
    extern double acosh(double);
    extern float acoshf(float);
    extern long double acoshl(long double);
    extern long double acosl(long double);
    extern double asin(double);
    extern float asinf(float);
    extern double asinh(double);
    extern float asinhf(float);
    extern long double asinhl(long double);
    extern long double asinl(long double);
    extern double atan(double);
    extern double atan2(double, double);
    extern float atan2f(float, float);
    extern long double atan2l(long double, long double);
    extern float atanf(float);
    extern double atanh(double);
    extern float atanhf(float);
    extern long double atanhl(long double);
    extern long double atanl(long double);
    extern double cbrt(double);
    extern float cbrtf(float);
    extern long double cbrtl(long double);
    extern double ceil(double);
    extern float ceilf(float);
    extern long double ceill(long double);
    extern double copysign(double, double);
    extern float copysignf(float, float);
    extern long double copysignl(long double, long double);
    extern double cos(double);
    extern float cosf(float);
    extern double cosh(double);
    extern float coshf(float);
    extern long double coshl(long double);
    extern long double cosl(long double);
    extern float dremf(float, float) LSB_DECL_DEPRECATED;
    extern long double dreml(long double, long double) LSB_DECL_DEPRECATED;
    extern double erf(double);
    extern double erfc(double);
    extern float erfcf(float);
    extern long double erfcl(long double);
    extern float erff(float);
    extern long double erfl(long double);
    extern double exp(double);
    extern double expm1(double);
    extern double fabs(double);
    extern float fabsf(float);
    extern long double fabsl(long double);
    extern double fdim(double, double);
    extern float fdimf(float, float);
    extern long double fdiml(long double, long double);
    extern int finite(double) LSB_DECL_DEPRECATED;
    extern int finitef(float) LSB_DECL_DEPRECATED;
    extern int finitel(long double) LSB_DECL_DEPRECATED;
    extern double floor(double);
    extern float floorf(float);
    extern long double floorl(long double);
    extern double fma(double, double, double);
    extern float fmaf(float, float, float);
    extern long double fmal(long double, long double, long double);
    extern double fmax(double, double);
    extern float fmaxf(float, float);
    extern long double fmaxl(long double, long double);
    extern double fmin(double, double);
    extern float fminf(float, float);
    extern long double fminl(long double, long double);
    extern double fmod(double, double);
    extern float fmodf(float, float);
    extern long double fmodl(long double, long double);
    extern double frexp(double, int *);
    extern float frexpf(float, int *);
    extern long double frexpl(long double, int *);
    extern double gamma(double) LSB_DECL_DEPRECATED;
    extern float gammaf(float) LSB_DECL_DEPRECATED;
    extern long double gammal(long double) LSB_DECL_DEPRECATED;
    extern double hypot(double, double);
    extern float hypotf(float, float);
    extern long double hypotl(long double, long double);
    extern int ilogb(double);
    extern int ilogbf(float);
    extern int ilogbl(long double);
    extern double j0(double);
    extern float j0f(float);
    extern long double j0l(long double);
    extern double j1(double);
    extern float j1f(float);
    extern long double j1l(long double);
    extern double jn(int, double);
    extern float jnf(int, float);
    extern long double jnl(int, long double);
    extern double ldexp(double, int);
    extern float ldexpf(float, int);
    extern long double ldexpl(long double, int);
    extern double lgamma(double);
    extern double lgamma_r(double, int *);
    extern float lgammaf(float);
    extern float lgammaf_r(float, int *);
    extern long double lgammal(long double);
    extern long double lgammal_r(long double, int *);
    extern long long int llrint(double);
    extern long long int llrintf(float);
    extern long long int llrintl(long double);
    extern long long int llround(double);
    extern long long int llroundf(float);
    extern long long int llroundl(long double);
    extern double log(double);
    extern double log10(double);
    extern double log1p(double);
    extern double logb(double);
    extern long int lrint(double);
    extern long int lrintf(float);
    extern long int lrintl(long double);
    extern long int lround(double);
    extern long int lroundf(float);
    extern long int lroundl(long double);
    extern double modf(double, double *);
    extern float modff(float, float *);
    extern long double modfl(long double, long double *);
    extern double nan(const char *);
    extern float nanf(const char *);
    extern long double nanl(const char *);
    extern double nearbyint(double);
    extern float nearbyintf(float);
    extern long double nearbyintl(long double);
    extern double nextafter(double, double);
    extern float nextafterf(float, float);
    extern long double nextafterl(long double, long double);
    extern double nexttoward(double, long double);
    extern float nexttowardf(float, long double);
    extern long double nexttowardl(long double, long double);
    extern double pow(double, double);
    extern double pow10(double);
    extern float pow10f(float);
    extern long double pow10l(long double);
    extern float powf(float, float);
    extern long double powl(long double, long double);
    extern double remainder(double, double);
    extern float remainderf(float, float);
    extern long double remainderl(long double, long double);
    extern double remquo(double, double, int *);
    extern float remquof(float, float, int *);
    extern long double remquol(long double, long double, int *);
    extern double rint(double);
    extern float rintf(float);
    extern long double rintl(long double);
    extern double round(double);
    extern float roundf(float);
    extern long double roundl(long double);
    extern double scalb(double, double);
    extern float scalbf(float, float);
    extern long double scalbl(long double, long double);
    extern double scalbln(double, long int);
    extern float scalblnf(float, long int);
    extern long double scalblnl(long double, long int);
    extern double scalbn(double, int);
    extern float scalbnf(float, int);
    extern long double scalbnl(long double, int);
    extern int signgam;
    extern double significand(double);
    extern float significandf(float);
    extern long double significandl(long double);
    extern double sin(double);
    extern void sincos(double, double *, double *);
    extern void sincosf(float, float *, float *);
    extern void sincosl(long double, long double *, long double *);
    extern float sinf(float);
    extern double sinh(double);
    extern float sinhf(float);
    extern long double sinhl(long double);
    extern long double sinl(long double);
    extern double sqrt(double);
    extern float sqrtf(float);
    extern long double sqrtl(long double);
    extern double tan(double);
    extern float tanf(float);
    extern double tanh(double);
    extern float tanhf(float);
    extern long double tanhl(long double);
    extern long double tanl(long double);
    extern double tgamma(double);
    extern float tgammaf(float);
    extern long double tgammal(long double);
    extern double trunc(double);
    extern float truncf(float);
    extern long double truncl(long double);
    extern double y0(double);
    extern float y0f(float);
    extern long double y0l(long double);
    extern double y1(double);
    extern float y1f(float);
    extern long double y1l(long double);
    extern double yn(int, double);
    extern float ynf(int, float);
    extern long double ynl(int, long double);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 13
    extern int __isinf(double);
    extern int __isinff(float);
    extern int __isinfl(long double);
    extern int __isnan(double);
    extern int __isnanf(float);
    extern int __isnanl(long double);
    extern float expf(float);
    extern long double expl(long double);
    extern float log10f(float);
    extern long double log10l(long double);
    extern float logf(float);
    extern long double logl(long double);
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 30
    extern int __finite(double);
    extern int __finitef(float);
    extern int __finitel(long double);
    extern int __fpclassify(double);
    extern int __fpclassifyf(float);
#if defined __i386__
/* IA32 */
    extern int __fpclassifyl(long double);
#endif
#if defined __ia64__
/* IA64 */
    extern int __fpclassifyl(long double);
#endif
#if defined __x86_64__
/* x86-64 */
    extern int __fpclassifyl(long double);
#endif
    extern int __signbit(double);
    extern int __signbitf(float);
#if defined __i386__
/* IA32 */
    extern int __signbitl(long double);
#endif
#if defined __ia64__
/* IA64 */
    extern int __signbitl(long double);
#endif
#if defined __x86_64__
/* x86-64 */
    extern int __signbitl(long double);
#endif
    extern double exp2(double);
    extern float exp2f(float);
#if defined __i386__
/* IA32 */
    extern long double exp2l(long double);
#endif
#if defined __ia64__
/* IA64 */
    extern long double exp2l(long double);
#endif
#if defined __x86_64__
/* x86-64 */
    extern long double exp2l(long double);
#endif
    extern float expm1f(float);
    extern long double expm1l(long double);
    extern float log1pf(float);
    extern long double log1pl(long double);
    extern double log2(double);
    extern float log2f(float);
    extern long double log2l(long double);
    extern float logbf(float);
    extern long double logbl(long double);
#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 32
    extern double drem(double, double) LSB_DECL_DEPRECATED;
    extern double exp10(double);
    extern float exp10f(float);
    extern long double exp10l(long double);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
