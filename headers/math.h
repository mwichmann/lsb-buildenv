#ifndef _MATH_H_
#define _MATH_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define DOMAIN	1
#define SING	2


  struct exception
  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  }
   ;


/* All floating-point numbers can be put in one of these categories.*/
#define FP_NAN	0
#define FP_INFINITE	1
#define FP_ZERO	2
#define FP_SUBNORMAL	3
#define FP_NORMAL	4



/* ISO C99 defines some generic macros which work on any data type.*/
#define isnormal(x)	(fpclassify (x) == FP_NORMAL)
#define isfinite(x)	(sizeof (x) == sizeof (float) ? __finitef (x) : sizeof (x) == sizeof (double)? __finite (x) : __finitel (x))
#define fpclassify(x)	(sizeof (x) == sizeof (float) ? __fpclassifyf (x) :sizeof (x) == sizeof (double) ? __fpclassify (x) : __fpclassifyl (x))
#define isinf(x)	(sizeof (x) == sizeof (float) ? __isinff (x): sizeof (x) == sizeof (double) ? __isinf (x) : __isinfl (x))
#define isnan(x)	(sizeof (x) == sizeof (float) ? __isnanf (x)  : sizeof (x) == sizeof (double) ? __isnan (x) : __isnanl (x))
#define signbit(x)	(sizeof (x) == sizeof (float)? __signbitf (x): sizeof (x) == sizeof (double)? __signbit (x) : __signbitl (x))



/* machine-dependent HUGE_VAL value*/
#define HUGE_VAL	0x1.0p2047
#define HUGE_VALF	0x1.0p255f
#define HUGE_VALL	0x1.0p32767L



/* Some useful constants*/
#define NAN	((float)0x7fc00000UL)
#if __i386__
#define FP_ILOGB0	(-2147483647 - 1)
#endif
#if __i386__
#define FP_ILOGBNAN	(-2147483647 - 1)
#endif
#if __powerpc__ && !__powerpc64__
#define FP_ILOGB0	-2147483647
#endif
#if __powerpc64__
#define FP_ILOGB0	-2147483647
#endif
#if __s390__ && !__s390x__
#define FP_ILOGB0	-2147483647
#endif
#if __s390x__
#define FP_ILOGB0	-2147483647
#endif
#if __ia64__
#define FP_ILOGB0	-2147483648
#endif
#if __x86_64__
#define FP_ILOGB0	-2147483648
#endif
#if __x86_64__
#define FP_ILOGBNAN	-2147483648
#endif
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
#if __ia64__
#define FP_ILOGBNAN	2147483647
#endif
#if __powerpc__ && !__powerpc64__
#define FP_ILOGBNAN	2147483647
#endif
#if __powerpc64__
#define FP_ILOGBNAN	2147483647
#endif
#if __s390__ && !__s390x__
#define FP_ILOGBNAN	2147483647
#endif
#if __s390x__
#define FP_ILOGBNAN	2147483647
#endif
#define M_PI	3.14159265358979323846
#define INFINITY	HUGE_VALF



/* Bitmasks for the math_errhandling macro.*/
#define MATH_ERRNO	1
#define MATH_ERREXCEPT	2



/* ISO C99 defines some macros to compare number while taking care
   for unordered numbers.  Since many FPUs provide special
   instructions to support these operations and these tests are
   defined in <bits/mathinline.h>, we define the generic macros at
   this late point and only if they are not defined yet.*/
#define isunordered(u, v)	(__extension__({ __typeof__(u) __u = (u); __typeof__(v) __v = (v);fpclassify (__u) == FP_NAN || fpclassify (__v) == FP_NAN; }))
#define islessgreater(x, y)	(__extension__({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);!isunordered (__x, __y) && (__x < __y || __y < __x); }))
#define isless(x,y)	(__extension__({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);!isunordered (__x, __y) && __x < __y; }))
#define islessequal(x, y)	(__extension__({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);!isunordered (__x, __y) && __x <= __y; }))
#define isgreater(x,y)	(__extension__({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);!isunordered (__x, __y) && __x > __y; }))
#define isgreaterequal(x,y)	(__extension__({ __typeof__(x) __x = (x); __typeof__(y) __y = (y);!isunordered (__x, __y) && __x >= __y; }))



  extern int __finite (double);
  extern int __finitef (float);
  extern int __finitel (long double);
  extern int __isinf (double);
  extern int __isinff (float);
  extern int __isinfl (long double);
  extern int __isnan (double);
  extern int __isnanf (float);
  extern int __isnanl (long double);
  extern int __signbit (double);
  extern int __signbitf (float);
  extern int __signbitl (long double);
  extern int __fpclassify (double);
  extern int __fpclassifyf (float);
  extern int __fpclassifyl (long double);
  extern int signgam;
  extern double copysign (double, double);
  extern int finite (double);
  extern double frexp (double, int *);
  extern double ldexp (double, int);
  extern double modf (double, double *);
  extern double acos (double);
  extern double acosh (double);
  extern double asinh (double);
  extern double atanh (double);
  extern double asin (double);
  extern double atan (double);
  extern double atan2 (double, double);
  extern double cbrt (double);
  extern double ceil (double);
  extern double cos (double);
  extern double cosh (double);
  extern double erf (double);
  extern double erfc (double);
  extern double exp (double);
  extern double expm1 (double);
  extern double fabs (double);
  extern double floor (double);
  extern double fmod (double, double);
  extern double gamma (double);
  extern double hypot (double, double);
  extern int ilogb (double);
  extern double j0 (double);
  extern double j1 (double);
  extern double jn (int, double);
  extern double lgamma (double);
  extern double log (double);
  extern double log10 (double);
  extern double log1p (double);
  extern double logb (double);
  extern double nextafter (double, double);
  extern double pow (double, double);
  extern double remainder (double, double);
  extern double rint (double);
  extern double scalb (double, double);
  extern double sin (double);
  extern double sinh (double);
  extern double sqrt (double);
  extern double tan (double);
  extern double tanh (double);
  extern double y0 (double);
  extern double y1 (double);
  extern double yn (int, double);
  extern float copysignf (float, float);
  extern long double copysignl (long double, long double);
  extern int finitef (float);
  extern int finitel (long double);
  extern float frexpf (float, int *);
  extern long double frexpl (long double, int *);
  extern float ldexpf (float, int);
  extern long double ldexpl (long double, int);
  extern float modff (float, float *);
  extern long double modfl (long double, long double *);
  extern double scalbln (double, long);
  extern float scalblnf (float, long);
  extern long double scalblnl (long double, long);
  extern double scalbn (double, int);
  extern float scalbnf (float, int);
  extern long double scalbnl (long double, int);
  extern float acosf (float);
  extern float acoshf (float);
  extern long double acoshl (long double);
  extern long double acosl (long double);
  extern float asinf (float);
  extern float asinhf (float);
  extern long double asinhl (long double);
  extern long double asinl (long double);
  extern float atan2f (float, float);
  extern long double atan2l (long double, long double);
  extern float atanf (float);
  extern float atanhf (float);
  extern long double atanhl (long double);
  extern long double atanl (long double);
  extern float cbrtf (float);
  extern long double cbrtl (long double);
  extern float ceilf (float);
  extern long double ceill (long double);
  extern float cosf (float);
  extern float coshf (float);
  extern long double coshl (long double);
  extern long double cosl (long double);
  extern float dremf (float, float);
  extern long double dreml (long double, long double);
  extern float erfcf (float);
  extern long double erfcl (long double);
  extern float erff (float);
  extern long double erfl (long double);
  extern double exp2 (double);
  extern float exp2f (float);
  extern long double exp2l (long double);
  extern float expf (float);
  extern long double expl (long double);
  extern float expm1f (float);
  extern long double expm1l (long double);
  extern float fabsf (float);
  extern long double fabsl (long double);
  extern double fdim (double, double);
  extern float fdimf (float, float);
  extern long double fdiml (long double, long double);
  extern float floorf (float);
  extern long double floorl (long double);
  extern double fma (double, double, double);
  extern float fmaf (float, float, float);
  extern long double fmal (long double, long double, long double);
  extern double fmax (double, double);
  extern float fmaxf (float, float);
  extern long double fmaxl (long double, long double);
  extern double fmin (double, double);
  extern float fminf (float, float);
  extern long double fminl (long double, long double);
  extern float fmodf (float, float);
  extern long double fmodl (long double, long double);
  extern float gammaf (float);
  extern long double gammal (long double);
  extern float hypotf (float, float);
  extern long double hypotl (long double, long double);
  extern int ilogbf (float);
  extern int ilogbl (long double);
  extern float j0f (float);
  extern long double j0l (long double);
  extern float j1f (float);
  extern long double j1l (long double);
  extern float jnf (int, float);
  extern long double jnl (int, long double);
  extern double lgamma_r (double, int *);
  extern float lgammaf (float);
  extern float lgammaf_r (float, int *);
  extern long double lgammal (long double);
  extern long double lgammal_r (long double, int *);
  extern long long llrint (double);
  extern long long llrintf (float);
  extern long long llrintl (long double);
  extern long long llround (double);
  extern long long llroundf (float);
  extern long long llroundl (long double);
  extern float log10f (float);
  extern long double log10l (long double);
  extern float log1pf (float);
  extern long double log1pl (long double);
  extern double log2 (double);
  extern float log2f (float);
  extern long double log2l (long double);
  extern float logbf (float);
  extern long double logbl (long double);
  extern float logf (float);
  extern long double logl (long double);
  extern long lrint (double);
  extern long lrintf (float);
  extern long lrintl (long double);
  extern long lround (double);
  extern long lroundf (float);
  extern long lroundl (long double);
  extern int matherr (struct exception *);
  extern double nan (const char *);
  extern float nanf (const char *);
  extern long double nanl (const char *);
  extern double nearbyint (double);
  extern float nearbyintf (float);
  extern long double nearbyintl (long double);
  extern float nextafterf (float, float);
  extern long double nextafterl (long double, long double);
  extern double nexttoward (double, long double);
  extern float nexttowardf (float, long double);
  extern long double nexttowardl (long double, long double);
  extern double pow10 (double);
  extern float pow10f (float);
  extern long double pow10l (long double);
  extern float powf (float, float);
  extern long double powl (long double, long double);
  extern float remainderf (float, float);
  extern long double remainderl (long double, long double);
  extern double remquo (double, double, int *);
  extern float remquof (float, float, int *);
  extern long double remquol (long double, long double, int *);
  extern float rintf (float);
  extern long double rintl (long double);
  extern double round (double);
  extern float roundf (float);
  extern long double roundl (long double);
  extern float scalbf (float, float);
  extern long double scalbl (long double, long double);
  extern double significand (double);
  extern float significandf (float);
  extern long double significandl (long double);
  extern void sincos (double, double *, double *);
  extern void sincosf (float, float *, float *);
  extern void sincosl (long double, long double *, long double *);
  extern float sinf (float);
  extern float sinhf (float);
  extern long double sinhl (long double);
  extern long double sinl (long double);
  extern float sqrtf (float);
  extern long double sqrtl (long double);
  extern float tanf (float);
  extern float tanhf (float);
  extern long double tanhl (long double);
  extern long double tanl (long double);
  extern double tgamma (double);
  extern float tgammaf (float);
  extern long double tgammal (long double);
  extern double trunc (double);
  extern float truncf (float);
  extern long double truncl (long double);
  extern float y0f (float);
  extern long double y0l (long double);
  extern float y1f (float);
  extern long double y1l (long double);
  extern float ynf (int, float);
  extern long double ynl (int, long double);
#ifdef __cplusplus
}
#endif
#endif
