#if (__LSB_VERSION__ >= 11 )
#ifndef _COMPLEX_H_
#define _COMPLEX_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 20
#define complex	_Complex
#endif				// __LSB_VERSION__ >= 2.0




// Function prototypes

#if __LSB_VERSION__ >= 10
    extern double cabs(double complex);
    extern float cabsf(float complex);
    extern long double cabsl(long double complex);
    extern double complex cacos(double complex);
    extern float complex cacosf(float complex);
    extern double complex cacosh(double complex);
    extern float complex cacoshf(float complex);
    extern long double complex cacoshl(long double complex);
    extern long double complex cacosl(long double complex);
    extern double carg(double complex);
    extern float cargf(float complex);
    extern long double cargl(long double complex);
    extern double complex casin(double complex);
    extern float complex casinf(float complex);
    extern double complex casinh(double complex);
    extern float complex casinhf(float complex);
    extern long double complex casinhl(long double complex);
    extern long double complex casinl(long double complex);
    extern double complex catan(double complex);
    extern float complex catanf(float complex);
    extern double complex catanh(double complex);
    extern float complex catanhf(float complex);
    extern long double complex catanhl(long double complex);
    extern long double complex catanl(long double complex);
    extern double complex ccos(double complex);
    extern float complex ccosf(float complex);
    extern double complex ccosh(double complex);
    extern float complex ccoshf(float complex);
    extern long double complex ccoshl(long double complex);
    extern long double complex ccosl(long double complex);
    extern double complex cexp(double complex);
    extern float complex cexpf(float complex);
    extern long double complex cexpl(long double complex);
    extern double cimag(double complex);
    extern float cimagf(float complex);
    extern long double cimagl(long double complex);
    extern double complex clog(double complex);
    extern double complex clog10(double complex);
    extern float complex clog10f(float complex);
    extern long double complex clog10l(long double complex);
    extern float complex clogf(float complex);
    extern long double complex clogl(long double complex);
    extern double complex conj(double complex);
    extern float complex conjf(float complex);
    extern long double complex conjl(long double complex);
    extern double complex cpow(double complex, double complex);
    extern float complex cpowf(float complex, float complex);
    extern long double complex cpowl(long double complex,
				     long double complex);
    extern double complex cproj(double complex);
    extern float complex cprojf(float complex);
    extern long double complex cprojl(long double complex);
    extern double creal(double complex);
    extern float crealf(float complex);
    extern long double creall(long double complex);
    extern double complex csin(double complex);
    extern float complex csinf(float complex);
    extern double complex csinh(double complex);
    extern float complex csinhf(float complex);
    extern long double complex csinhl(long double complex);
    extern long double complex csinl(long double complex);
    extern double complex csqrt(double complex);
    extern float complex csqrtf(float complex);
    extern long double complex csqrtl(long double complex);
    extern double complex ctan(double complex);
    extern float complex ctanf(float complex);
    extern double complex ctanh(double complex);
    extern float complex ctanhf(float complex);
    extern long double complex ctanhl(long double complex);
    extern long double complex ctanl(long double complex);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
