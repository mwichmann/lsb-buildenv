#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_XMD_H_
#define _X11_XMD_H_


#ifdef __cplusplus
extern "C" {
#endif


#if defined __i386__
#define B16
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define B16
#endif
#if defined __s390__ && !defined __s390x__
#define B16
#endif
#if defined __i386__
#define B32
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define B32
#endif
#if defined __s390__ && !defined __s390x__
#define B32
#endif
#if defined __ia64__
#define B16	:16
#endif
#if defined __powerpc64__
#define B16	:16
#endif
#if defined __x86_64__
#define B16	:16
#endif
#if defined __s390x__
#define B16	:16
#endif
#if defined __ia64__
#define B32	:32
#endif
#if defined __powerpc64__
#define B32	:32
#endif
#if defined __x86_64__
#define B32	:32
#endif
#if defined __s390x__
#define B32	:32
#endif
#if __LSB_VERSION__ >= 40
#define _SIZEOF(x)	sz_ ##x
#define SIZEOF(x)	_SIZEOF(x)
#endif				/* __LSB_VERSION__ >= 4.0 */



    typedef unsigned short CARD16;

    typedef unsigned char CARD8;

    typedef CARD8 BOOL;

#if defined __s390x__
/* S390X */
    typedef unsigned int CARD32;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned int CARD32;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned long int CARD32;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned int CARD32;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned long int CARD32;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned long int CARD32;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned int CARD32;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int CARD64;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int CARD64;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int CARD64;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int CARD64;

#endif
    typedef unsigned char BYTE;

    typedef CARD32 BITS32;

    typedef CARD16 BITS16;

#if defined __ia64__
/* IA64 */
    typedef unsigned long int INT64;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int INT64;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int INT64;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int INT64;

#endif
    typedef int INT32;

    typedef short int INT16;

    typedef signed char INT8;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
