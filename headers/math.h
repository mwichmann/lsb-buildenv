#ifndef _MATH_H_
#define _MATH_H_


#define HUGE_VAL	0x7FF00000UL


struct exception
{
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
}
 ;


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






extern int signgam;
double copysign (double, double);
int finite (double);
double frexp (double, int *);
int isinf (double);
double ldexp (double, int);
double modf (double, double *);
double acos (double);
double acosh (double);
double asinh (double);
double atanh (double);
double asin (double);
double atan (double);
double atan2 (double, double);
double cbrt (double);
double ceil (double);
double cos (double);
double cosh (double);
double erf (double);
double erfc (double);
double exp (double);
double expm1 (double);
double fabs (double);
double floor (double);
double fmod (double, double);
double gamma (double);
double hypot (double, double);
int ilogb (double);
double j0 (double);
double j1 (double);
double jn (int, double);
double lgamma (double);
double log (double);
double log10 (double);
double log1p (double);
double logb (double);
double nextafter (double, double);
double pow (double, double);
double remainder (double, double);
double rint (double);
double scalb (double, double);
double sin (double);
double sinh (double);
double sqrt (double);
double tan (double);
double tanh (double);
double y0 (double);
double y1 (double);
double yn (int, double);
float copysignf (float, float);
long double copysignl (long double, long double);
int finitef (float);
int finitel (long double);
float frexpf (float, int *);
long double frexpl (long double, int *);
int isinfl (long double);
int isnan (double);
int isnanf (float);
int isnanl (long double);
float ldexpf (float, int);
long double ldexpl (long double, int);
float modff (float, float *);
long double modfl (long double, long double *);
double scalbln (double, long);
float scalblnf (float, long);
long double scalblnl (long double, long);
double scalbn (double, int);
float scalbnf (float, int);
long double scalbnl (long double, int);
float acosf (float);
float acoshf (float);
long double acoshl (long double);
long double acosl (long double);
float asinf (float);
float asinhf (float);
long double asinhl (long double);
long double asinl (long double);
float atan2f (float, float);
long double atan2l (long double, long double);
float atanf (float);
float atanhf (float);
long double atanhl (long double);
long double atanl (long double);
float cbrtf (float);
long double cbrtl (long double);
float ceilf (float);
long double ceill (long double);
float cosf (float);
float coshf (float);
long double coshl (long double);
long double cosl (long double);
float dremf (float, float);
long double dreml (long double, long double);
float erfcf (float);
long double erfcl (long double);
float erff (float);
long double erfl (long double);
float fabsf (float);
long double fabsl (long double);
double fdim (double, double);
float fdimf (float, float);
long double fdiml (long double, long double);
float floorf (float);
long double floorl (long double);
double fma (double, double, double);
float fmaf (float, float, float);
long double fmal (long double, long double, long double);
double fmax (double, double);
float fmaxf (float, float);
long double fmaxl (long double, long double);
double fmin (double, double);
float fminf (float, float);
long double fminl (long double, long double);
float fmodf (float, float);
long double fmodl (long double, long double);
float gammaf (float);
long double gammal (long double);
float hypotf (float, float);
long double hypotl (long double, long double);
int ilogbf (float);
int ilogbl (long double);
float j0f (float);
long double j0l (long double);
float j1f (float);
long double j1l (long double);
float jnf (int, float);
long double jnl (int, long double);
double lgamma_r (double, int *);
float lgammaf (float);
float lgammaf_r (float, int *);
long double lgammal (long double);
long double lgammal_r (long double, int *);
long long llrint (double);
long long llrintf (float);
long long llrintl (long double);
long long llround (double);
long long llroundf (float);
long long llroundl (long double);
long lrint (double);
long lrintf (float);
long lrintl (long double);
long lround (double);
long lroundf (float);
long lroundl (long double);
int matherr (struct exception *);
double nan (char *);
float nanf (char *);
long double nanl (char *);
double nearbyint (double);
float nearbyintf (float);
long double nearbyintl (long double);
float nextafterf (float, float);
long double nextafterl (long double, long double);
double nexttoward (double, long double);
float nexttowardf (float, long double);
long double nexttowardl (long double, long double);
double pow10 (double);
float pow10f (float);
long double pow10l (long double);
float powf (float, float);
long double powl (long double, long double);
float remainderf (float, float);
long double remainderl (long double, long double);
double remquo (double, double, int *);
float remquof (float, float, int *);
long double remquol (long double, long double, int *);
float rintf (float);
long double rintl (long double);
double round (double);
float roundf (float);
long double roundl (long double);
float scalbf (float, float);
long double scalbl (long double, long double);
double significand (double);
float significandf (float);
long double significandl (long double);
void sincos (double, double *, double *);
void sincosf (float, float *, float *);
void sincosl (long double, long double *, long double *);
float sinf (float);
float sinhf (float);
long double sinhl (long double);
long double sinl (long double);
float sqrtf (float);
long double sqrtl (long double);
float tanf (float);
float tanhf (float);
long double tanhl (long double);
long double tanl (long double);
double tgamma (double);
float tgammaf (float);
long double tgammal (long double);
double trunc (double);
float truncf (float);
long double truncl (long double);
float y0f (float);
long double y0l (long double);
float y1f (float);
long double y1l (long double);
float ynf (int, float);
long double ynl (int, long double);
#endif
