#ifndef _SYS_IOCTL_H_
#define _SYS_IOCTL_H_


#define FIONREAD	0x541B
#if defined(__i386__)
#define TIOCNOTTY	0x5422
#endif



extern int ioctl (int, int, ...);
#endif
