#ifndef _SYS_IOCTL_H_
#define _SYS_IOCTL_H_


#ifdef __cplusplus
extern "C"
{
#endif


#if __i386__
#define FIONREAD	0x541B
#endif
#if __ia64__
#define FIONREAD	0x541B
#endif
#if __s390__ && !__s390x__
#define FIONREAD	0x541B
#endif
#if __x86_64__
#define FIONREAD	0x541B
#endif
#if __i386__
#define TIOCNOTTY	0x5422
#endif
#if __ia64__
#define TIOCNOTTY	0x5422
#endif
#if __powerpc__ && !__powerpc64__
#define TIOCNOTTY	0x5422
#endif
#if __powerpc__ && !__powerpc64__
#define FIONREAD	1074030207
#endif
#if __powerpc64__
#define FIONREAD	1074030207
#endif
#if __s390x__
#define FIONREAD	21531
#endif
#if __powerpc64__
#define TIOCNOTTY	21538
#endif
#if __s390__ && !__s390x__
#define TIOCNOTTY	21538
#endif
#if __x86_64__
#define TIOCNOTTY	21538
#endif
#if __s390x__
#define TIOCNOTTY	21538
#endif



  extern int ioctl (int, unsigned long, ...);
#ifdef __cplusplus
}
#endif
#endif
