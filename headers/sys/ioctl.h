#ifndef _SYS_IOCTL_H_
#define _SYS_IOCTL_H_


#ifdef __cplusplus
extern "C" {
#endif


#if defined __powerpc__ && !defined __powerpc64__
#define TIOCGWINSZ	0x40087468
#endif
#if defined __powerpc64__
#define TIOCGWINSZ	0x40087468
#endif
#if defined __i386__
#define TIOCGWINSZ	0x5413
#endif
#if defined __ia64__
#define TIOCGWINSZ	0x5413
#endif
#if defined __s390__ && !defined __s390x__
#define TIOCGWINSZ	0x5413
#endif
#if defined __x86_64__
#define TIOCGWINSZ	0x5413
#endif
#if defined __s390x__
#define TIOCGWINSZ	0x5413
#endif
#if defined __i386__
#define FIONREAD	0x541B
#endif
#if defined __ia64__
#define FIONREAD	0x541B
#endif
#if defined __s390__ && !defined __s390x__
#define FIONREAD	0x541B
#endif
#if defined __x86_64__
#define FIONREAD	0x541B
#endif
#if defined __i386__
#define TIOCNOTTY	0x5422
#endif
#if defined __ia64__
#define TIOCNOTTY	0x5422
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define TIOCNOTTY	0x5422
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define FIONREAD	1074030207
#endif
#if defined __powerpc64__
#define FIONREAD	1074030207
#endif
#if defined __s390x__
#define FIONREAD	21531
#endif
#if defined __powerpc64__
#define TIOCNOTTY	21538
#endif
#if defined __s390__ && !defined __s390x__
#define TIOCNOTTY	21538
#endif
#if defined __x86_64__
#define TIOCNOTTY	21538
#endif
#if defined __s390x__
#define TIOCNOTTY	21538
#endif


    struct winsize {
	unsigned short ws_row;	/* Rows, in characters. */
	unsigned short ws_col;	/* Columns, in characters. */
	unsigned short ws_xpixel;	/* Horizontal pixels. */
	unsigned short ws_ypixel;	/* Vertical pixels. */
    };


    extern int ioctl(int, unsigned long int, ...);
#ifdef __cplusplus
}
#endif
#endif
