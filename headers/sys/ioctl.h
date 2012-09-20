#if (__LSB_VERSION__ >= 11 )
#ifndef _SYS_IOCTL_H_
#define _SYS_IOCTL_H_


#ifdef __cplusplus
extern "C" {
#endif


#if defined __i386__
#define FIONREAD	0x541B
#endif
#if __LSB_VERSION__ >= 12
#if defined __i386__
#define TIOCNOTTY	0x5422
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define TIOCNOTTY	0x5422
#define FIONREAD	1074030207
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define FIONREAD	0x541B
#endif
#if defined __s390__ && !defined __s390x__
#define FIONREAD	0x541B
#endif
#if defined __ia64__
#define TIOCNOTTY	0x5422
#endif
#if defined __s390x__
#define FIONREAD	21531
#endif
#if defined __s390__ && !defined __s390x__
#define TIOCNOTTY	21538
#endif
#if defined __s390x__
#define TIOCNOTTY	21538
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __x86_64__
#define FIONREAD	0x541B
#endif
#if defined __powerpc64__
#define FIONREAD	1074030207
#define TIOCNOTTY	21538
#endif
#if defined __x86_64__
#define TIOCNOTTY	21538
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 30
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
#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 50
#define _IOC(dir,type,nr,size)	(((dir) << _IOC_DIRSHIFT) | ((type) << _IOC_TYPESHIFT) | ((nr) << _IOC_NRSHIFT) | ((size) << _IOC_SIZESHIFT))
#define _IOC_DIR(nr)	(((nr) >> _IOC_DIRSHIFT) & _IOC_DIRMASK)
#define _IOC_NR(nr)	(((nr) >> _IOC_NRSHIFT) & _IOC_NRMASK)
#define _IOC_SIZE(nr)	(((nr) >> _IOC_SIZESHIFT) & _IOC_SIZEMASK)
#define _IOC_TYPE(nr)	(((nr) >> _IOC_TYPESHIFT) & _IOC_TYPEMASK)
#define _IOC_DIRMASK	((1 << _IOC_DIRBITS)-1)
#define _IOC_NRMASK	((1 << _IOC_NRBITS)-1)
#define _IOC_SIZEMASK	((1 << _IOC_SIZEBITS)-1)
#define _IOC_TYPEMASK	((1 << _IOC_TYPEBITS)-1)
#define IOC_INOUT	((_IOC_WRITE|_IOC_READ) << _IOC_DIRSHIFT)
#define _IOC_TYPECHECK(t)	(sizeof(t))
#define _IOC_TYPESHIFT	(_IOC_NRSHIFT+_IOC_NRBITS)
#define IOC_OUT	(_IOC_READ << _IOC_DIRSHIFT)
#define IOCSIZE_MASK	(_IOC_SIZEMASK << _IOC_SIZESHIFT)
#define IOCSIZE_SHIFT	(_IOC_SIZESHIFT)
#define _IOC_DIRSHIFT	(_IOC_SIZESHIFT+_IOC_SIZEBITS)
#define _IOC_SIZESHIFT	(_IOC_TYPESHIFT+_IOC_TYPEBITS)
#define IOC_IN	(_IOC_WRITE << _IOC_DIRSHIFT)
#define _IOC_NRSHIFT	0
#define _IOC_NONE	0U
#define _IOC_SIZEBITS	14
#define _IOC_WRITE	1U
#define _IOC_DIRBITS	2
#define _IOC_READ	2U
#define _IOC_NRBITS	8
#define _IOC_TYPEBITS	8
#define _IO(type,nr)	_IOC(_IOC_NONE,(type),(nr),0)
#define _IOR(type,nr,size)	_IOC(_IOC_READ,(type),(nr),(_IOC_TYPECHECK(size)))
#define _IOR_BAD(type,nr,size)	_IOC(_IOC_READ,(type),(nr),sizeof(size))
#define _IOWR(type,nr,size)	_IOC(_IOC_READ|_IOC_WRITE,(type),(nr),(_IOC_TYPECHECK(size)))
#define _IOWR_BAD(type,nr,size)	_IOC(_IOC_READ|_IOC_WRITE,(type),(nr),sizeof(size))
#define _IOW(type,nr,size)	_IOC(_IOC_WRITE,(type),(nr),(_IOC_TYPECHECK(size)))
#define _IOW_BAD(type,nr,size)	_IOC(_IOC_WRITE,(type),(nr),sizeof(size))
#endif				/* __LSB_VERSION__ >= 5.0 */



#if __LSB_VERSION__ >= 12
    struct winsize {
	unsigned short ws_row;	/* Rows, in characters. */
	unsigned short ws_col;	/* Columns, in characters. */
	unsigned short ws_xpixel;	/* Horizontal pixels. */
	unsigned short ws_ypixel;	/* Vertical pixels. */
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern int ioctl(int __fd, unsigned long int __request, ...);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
