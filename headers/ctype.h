#if (__LSB_VERSION__ >= 10 )
#ifndef _CTYPE_H_
#define _CTYPE_H_

#include <sys/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



/* These are all the characteristics of characters*/
#if __LSB_VERSION__ >= 12
    enum {
#if defined __i386__
/* IA32 */
	_ISupper = 256,
	_ISlower = 512,
	_ISalpha = 1024,
	_ISdigit = 2048,
	_ISxdigit = 4096,
	_ISspace = 8192,
	_ISprint = 16384,
	_ISgraph = 32768,
	_ISblank = 1,
	_IScntrl = 2,
	_ISpunct = 4,
	_ISalnum = 8,
#endif
#if defined __ia64__
/* IA64 */
	_ISupper = 256,
	_ISlower = 512,
	_ISalpha = 1024,
	_ISdigit = 2048,
	_ISxdigit = 4096,
	_ISspace = 8192,
	_ISprint = 16384,
	_ISgraph = 32768,
	_ISblank = 1,
	_IScntrl = 2,
	_ISpunct = 4,
	_ISalnum = 8,
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
	_ISupper = 1,
	_ISlower = 2,
	_ISalpha = 4,
	_ISdigit = 8,
	_ISxdigit = 16,
	_ISspace = 32,
	_ISprint = 64,
	_ISgraph = 128,
	_ISblank = 256,
	_IScntrl = 512,
	_ISpunct = 1024,
	_ISalnum = 2048,
#endif
#if defined __powerpc64__
/* PPC64 */
	_ISupper = 1,
	_ISlower = 2,
	_ISalpha = 4,
	_ISdigit = 8,
	_ISxdigit = 16,
	_ISspace = 32,
	_ISprint = 64,
	_ISgraph = 128,
	_ISblank = 256,
	_IScntrl = 512,
	_ISpunct = 1024,
	_ISalnum = 2048,
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
	_ISupper = 1,
	_ISlower = 2,
	_ISalpha = 4,
	_ISdigit = 8,
	_ISxdigit = 16,
	_ISspace = 32,
	_ISprint = 64,
	_ISgraph = 128,
	_ISblank = 256,
	_IScntrl = 512,
	_ISpunct = 1024,
	_ISalnum = 2048,
#endif
#if defined __x86_64__
/* x86-64 */
	_ISupper = 256,
	_ISlower = 512,
	_ISalpha = 1024,
	_ISdigit = 2048,
	_ISxdigit = 4096,
	_ISspace = 8192,
	_ISprint = 16384,
	_ISgraph = 32768,
	_ISblank = 1,
	_IScntrl = 2,
	_ISpunct = 4,
	_ISalnum = 8,
#endif
#if defined __s390x__
/* S390X */
	_ISupper = 1,
	_ISlower = 2,
	_ISalpha = 4,
	_ISdigit = 8,
	_ISxdigit = 16,
	_ISspace = 32,
	_ISprint = 64,
	_ISgraph = 128,
	_ISblank = 256,
	_IScntrl = 512,
	_ISpunct = 1024,
	_ISalnum = 2048
#endif
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int _tolower(int);
    extern int _toupper(int);
    extern int isalnum(int);
    extern int isalpha(int);
    extern int isascii(int);
    extern int isblank(int);
    extern int iscntrl(int);
    extern int isdigit(int);
    extern int isgraph(int);
    extern int islower(int);
    extern int isprint(int);
    extern int ispunct(int);
    extern int isspace(int);
    extern int isupper(int);
    extern int isxdigit(int);
    extern int toascii(int);
    extern int tolower(int);
    extern int toupper(int);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 20
    extern const unsigned short **__ctype_b_loc(void);
    extern const int32_t **__ctype_tolower_loc(void);
    extern const int32_t **__ctype_toupper_loc(void);
#endif				/* __LSB_VERSION__ >= 2.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
