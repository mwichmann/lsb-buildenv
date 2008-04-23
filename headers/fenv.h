#if (__LSB_VERSION__ >= 30 )
#ifndef _FENV_H_
#define _FENV_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Define bits representing the exception.  We use the bit positions of the appropriate bits in the FPU control word.*/
#if __LSB_VERSION__ >= 30
#if defined __powerpc__ && !defined __powerpc64__
#define FE_INVALID	(1 << (31 - 2))
#endif
#if defined __powerpc64__
#define FE_INVALID	(1 << (31 - 2))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FE_OVERFLOW	(1 << (31 - 3))
#endif
#if defined __powerpc64__
#define FE_OVERFLOW	(1 << (31 - 3))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FE_UNDERFLOW	(1 << (31 - 4))
#endif
#if defined __powerpc64__
#define FE_UNDERFLOW	(1 << (31 - 4))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FE_DIVBYZERO	(1 << (31 - 5))
#endif
#if defined __powerpc64__
#define FE_DIVBYZERO	(1 << (31 - 5))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FE_INEXACT	(1 << (31 - 6))
#endif
#if defined __powerpc64__
#define FE_INEXACT	(1 << (31 - 6))
#endif
#if defined __ia64__
#define FE_INVALID	(1UL << 0)
#endif
#if defined __ia64__
#define FE_DIVBYZERO	(1UL << 2)
#endif
#if defined __ia64__
#define FE_OVERFLOW	(1UL << 3)
#endif
#if defined __ia64__
#define FE_UNDERFLOW	(1UL << 4)
#endif
#if defined __ia64__
#define FE_INEXACT	(1UL << 5)
#endif
#if defined __i386__
#define FE_INVALID	0x01
#endif
#if defined __x86_64__
#define FE_INVALID	0x01
#endif
#if defined __i386__
#define FE_DIVBYZERO	0x04
#endif
#if defined __x86_64__
#define FE_DIVBYZERO	0x04
#endif
#if defined __s390__ && !defined __s390x__
#define FE_INEXACT	0x08
#endif
#if defined __s390x__
#define FE_INEXACT	0x08
#endif
#if defined __i386__
#define FE_OVERFLOW	0x08
#endif
#if defined __x86_64__
#define FE_OVERFLOW	0x08
#endif
#if defined __i386__
#define FE_UNDERFLOW	0x10
#endif
#if defined __s390__ && !defined __s390x__
#define FE_UNDERFLOW	0x10
#endif
#if defined __x86_64__
#define FE_UNDERFLOW	0x10
#endif
#if defined __s390x__
#define FE_UNDERFLOW	0x10
#endif
#if defined __i386__
#define FE_INEXACT	0x20
#endif
#if defined __x86_64__
#define FE_INEXACT	0x20
#endif
#if defined __s390__ && !defined __s390x__
#define FE_OVERFLOW	0x20
#endif
#if defined __s390x__
#define FE_OVERFLOW	0x20
#endif
#if defined __s390__ && !defined __s390x__
#define FE_DIVBYZERO	0x40
#endif
#if defined __s390x__
#define FE_DIVBYZERO	0x40
#endif
#if defined __s390__ && !defined __s390x__
#define FE_INVALID	0x80
#endif
#if defined __s390x__
#define FE_INVALID	0x80
#endif
#if defined __ia64__
#define FE_UNNORMAL	1UL << 1
#endif
#endif				/* __LSB_VERSION__ >= 3.0 */




#if __LSB_VERSION__ >= 30
#if defined __i386__
#define FE_ALL_EXCEPT	\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID)
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FE_ALL_EXCEPT	\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID)
#endif
#if defined __powerpc64__
#define FE_ALL_EXCEPT	\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID)
#endif
#if defined __s390__ && !defined __s390x__
#define FE_ALL_EXCEPT	\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID)
#endif
#if defined __x86_64__
#define FE_ALL_EXCEPT	\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID)
#endif
#if defined __s390x__
#define FE_ALL_EXCEPT	\
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID)
#endif
#if defined __ia64__
#define FE_ALL_EXCEPT	\
	(FE_INEXACT | FE_UNDERFLOW | FE_OVERFLOW | FE_DIVBYZERO | FE_UNNORMAL | FE_INVALID)
#endif
#endif				/* __LSB_VERSION__ >= 3.0 */




/* Rounding modes*/
#if __LSB_VERSION__ >= 30
#if defined __i386__
#define FE_TONEAREST	0
#endif
#if defined __ia64__
#define FE_TONEAREST	0
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FE_TONEAREST	0
#endif
#if defined __powerpc64__
#define FE_TONEAREST	0
#endif
#if defined __s390__ && !defined __s390x__
#define FE_TONEAREST	0
#endif
#if defined __x86_64__
#define FE_TONEAREST	0
#endif
#if defined __s390x__
#define FE_TONEAREST	0
#endif
#if defined __s390__ && !defined __s390x__
#define FE_TOWARDZERO	0x1
#endif
#if defined __s390x__
#define FE_TOWARDZERO	0x1
#endif
#if defined __s390__ && !defined __s390x__
#define FE_UPWARD	0x2
#endif
#if defined __s390x__
#define FE_UPWARD	0x2
#endif
#if defined __s390__ && !defined __s390x__
#define FE_DOWNWARD	0x3
#endif
#if defined __s390x__
#define FE_DOWNWARD	0x3
#endif
#if defined __i386__
#define FE_DOWNWARD	0x400
#endif
#if defined __x86_64__
#define FE_DOWNWARD	0x400
#endif
#if defined __i386__
#define FE_UPWARD	0x800
#endif
#if defined __x86_64__
#define FE_UPWARD	0x800
#endif
#if defined __i386__
#define FE_TOWARDZERO	0xc00
#endif
#if defined __x86_64__
#define FE_TOWARDZERO	0xc00
#endif
#if defined __ia64__
#define FE_DOWNWARD	1
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FE_TOWARDZERO	1
#endif
#if defined __powerpc64__
#define FE_TOWARDZERO	1
#endif
#if defined __ia64__
#define FE_UPWARD	2
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FE_UPWARD	2
#endif
#if defined __powerpc64__
#define FE_UPWARD	2
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FE_DOWNWARD	3
#endif
#if defined __powerpc64__
#define FE_DOWNWARD	3
#endif
#if defined __ia64__
#define FE_TOWARDZERO	3
#endif
#endif				/* __LSB_VERSION__ >= 3.0 */




/* Type representing exception flags.*/
#if __LSB_VERSION__ >= 30
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned int fexcept_t;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned short fexcept_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int fexcept_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned int fexcept_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned int fexcept_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned int fexcept_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned short fexcept_t;

#endif
#endif				/* __LSB_VERSION__ >= 3.0 */


/* Type representing floating-point environment.*/
#if __LSB_VERSION__ >= 30
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef double fenv_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef double fenv_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int fenv_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	fexcept_t fpc;
	void *ieee_instruction_pointer;
    } fenv_t;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	fexcept_t fpc;
	void *ieee_instruction_pointer;
    } fenv_t;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	unsigned short __control_word;
	unsigned short __unused1;
	unsigned short __status_word;
	unsigned short __unused2;
	unsigned short __tags;
	unsigned short __unused3;
	unsigned int __eip;
	unsigned short __cs_selector;
	unsigned int __opcode:11;
	unsigned int __unused4:5;
	unsigned int __data_offset;
	unsigned short __data_selector;
	unsigned short __unused5;
    } fenv_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	unsigned short __control_word;
	unsigned short __unused1;
	unsigned short __status_word;
	unsigned short __unused2;
	unsigned short __tags;
	unsigned short __unused3;
	unsigned int __eip;
	unsigned short __cs_selector;
	unsigned int __opcode:11;
	unsigned int __unused4:5;
	unsigned int __data_offset;
	unsigned short __data_selector;
	unsigned short __unused5;
	unsigned int __mxcsr;
    } fenv_t;

#endif
#endif				/* __LSB_VERSION__ >= 3.0 */


/* If the default argument is used we use this value.*/
#if __LSB_VERSION__ >= 30
#if defined __powerpc__ && !defined __powerpc64__
#define FE_DFL_ENV	(&__fe_dfl_env)
#endif
#if defined __powerpc64__
#define FE_DFL_ENV	(&__fe_dfl_env)
#endif
#if defined __i386__
#define FE_DFL_ENV	((__const fenv_t *) -1)
#endif
#if defined __s390__ && !defined __s390x__
#define FE_DFL_ENV	((__const fenv_t *) -1)
#endif
#if defined __x86_64__
#define FE_DFL_ENV	((__const fenv_t *) -1)
#endif
#if defined __s390x__
#define FE_DFL_ENV	((__const fenv_t *) -1)
#endif
#if defined __ia64__
#define FE_DFL_ENV	((__const fenv_t *) 0xc009804c0270033fUL)
#endif
#endif				/* __LSB_VERSION__ >= 3.0 */




/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int feclearexcept(int);
    extern int fegetenv(fenv_t *);
    extern int fegetexceptflag(fexcept_t *, int);
    extern int fegetround(void);
    extern int feholdexcept(fenv_t *);
    extern int feraiseexcept(int);
    extern int fesetenv(const fenv_t *);
    extern int fesetexceptflag(const fexcept_t *, int);
    extern int fesetround(int);
    extern int fetestexcept(int);
    extern int feupdateenv(const fenv_t *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 32
    extern int fedisableexcept(int);
    extern int feenableexcept(int);
    extern int fegetexcept(void);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
