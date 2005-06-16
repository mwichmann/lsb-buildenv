#ifndef _SYS_IOCTL_H_
#define _SYS_IOCTL_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define TIOCGWINSZ	0x5413
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


  struct winsize
  {
    unsigned short ws_row;	/* Rows, in characters. */
    unsigned short ws_col;	/* Columns, in characters. */
    unsigned short ws_xpixel;	/* Horizontal pixels. */
    unsigned short ws_ypixel;	/* Vertical pixels. */
  }
   ;


  extern int ioctl (int, unsigned long int, ...);
#ifdef __cplusplus
}
#endif
#endif
