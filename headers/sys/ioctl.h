#ifndef _SYS_IOCTL_H_
#define _SYS_IOCTL_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define FIONREAD	0x541B
#if defined(__i386__)
#define TIOCNOTTY	0x5422
#endif
#if defined(__ia64__)
#define TIOCNOTTY	0x5422
#endif
#if defined(__powerpc__)
#define TIOCNOTTY	0x5422
#endif
#if defined(__powerpc__)
#define FIONREAD	1074030207
#endif
#if defined(__s390__)
#define TIOCNOTTY	21538
#endif



  extern int ioctl (int, unsigned long, ...);
#ifdef __cplusplus
}
#endif
#endif
