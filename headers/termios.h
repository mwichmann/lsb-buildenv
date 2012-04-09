#if (__LSB_VERSION__ >= 10 )
#ifndef _TERMIOS_H_
#define _TERMIOS_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define TCIFLUSH	0
#define TCOOFF	0
#define TCSANOW	0
#define BS0	0000000
#define CR0	0000000
#define FF0	0000000
#define NL0	0000000
#define TAB0	0000000
#define VT0	0000000
#define OPOST	0000001
#if defined __i386__
#define OLCUC	0000002
#define ONLCR	0000004
#define XCASE	0000004
#endif
#define OCRNL	0000010
#define ONOCR	0000020
#define ONLRET	0000040
#define OFILL	0000100
#define OFDEL	0000200
#define NL1	0000400
#if defined __i386__
#define NLDLY	0000400
#define CR1	0001000
#define IUCLC	0001000
#define CR2	0002000
#define CR3	0003000
#define CRDLY	0003000
#define TAB1	0004000
#define TAB2	0010000
#define TAB3	0014000
#define TABDLY	0014000
#define BS1	0020000
#define BSDLY	0020000
#define VT1	0040000
#define VTDLY	0040000
#define FF1	0100000
#define FFDLY	0100000
#endif
#define TCOFLUSH	1
#define TCOON	1
#define TCSADRAIN	1
#define TCIOFF	2
#define TCIOFLUSH	2
#define TCSAFLUSH	2
#define TCION	3
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
#define TAB1	1024
#define CR3	12288
#define CRDLY	12288
#define FF1	16384
#define FFDLY	16384
#define XCASE	16384
#define ONLCR	2
#define TAB2	2048
#define TAB3	3072
#define TABDLY	3072
#define BS1	32768
#define BSDLY	32768
#define OLCUC	4
#define CR1	4096
#define IUCLC	4096
#define VT1	65536
#define VTDLY	65536
#define NLDLY	768
#define CR2	8192
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define OLCUC	0000002
#endif
#if defined __s390__ && !defined __s390x__
#define OLCUC	0000002
#endif
#if defined __ia64__
#define ONLCR	0000004
#endif
#if defined __s390__ && !defined __s390x__
#define ONLCR	0000004
#endif
#if defined __ia64__
#define XCASE	0000004
#endif
#if defined __s390__ && !defined __s390x__
#define XCASE	0000004
#endif
#if defined __ia64__
#define NLDLY	0000400
#endif
#if defined __s390__ && !defined __s390x__
#define NLDLY	0000400
#endif
#if defined __ia64__
#define CR1	0001000
#endif
#if defined __s390__ && !defined __s390x__
#define CR1	0001000
#endif
#if defined __ia64__
#define IUCLC	0001000
#endif
#if defined __s390__ && !defined __s390x__
#define IUCLC	0001000
#endif
#if defined __ia64__
#define CR2	0002000
#endif
#if defined __s390__ && !defined __s390x__
#define CR2	0002000
#endif
#if defined __ia64__
#define CR3	0003000
#endif
#if defined __s390__ && !defined __s390x__
#define CR3	0003000
#endif
#if defined __ia64__
#define CRDLY	0003000
#endif
#if defined __s390__ && !defined __s390x__
#define CRDLY	0003000
#endif
#if defined __ia64__
#define TAB1	0004000
#endif
#if defined __s390__ && !defined __s390x__
#define TAB1	0004000
#endif
#if defined __ia64__
#define TAB2	0010000
#endif
#if defined __s390__ && !defined __s390x__
#define TAB2	0010000
#endif
#if defined __ia64__
#define TAB3	0014000
#endif
#if defined __s390__ && !defined __s390x__
#define TAB3	0014000
#endif
#if defined __ia64__
#define TABDLY	0014000
#endif
#if defined __s390__ && !defined __s390x__
#define TABDLY	0014000
#endif
#if defined __ia64__
#define BS1	0020000
#endif
#if defined __s390__ && !defined __s390x__
#define BS1	0020000
#endif
#if defined __ia64__
#define BSDLY	0020000
#endif
#if defined __s390__ && !defined __s390x__
#define BSDLY	0020000
#endif
#if defined __ia64__
#define VT1	0040000
#endif
#if defined __s390__ && !defined __s390x__
#define VT1	0040000
#endif
#if defined __ia64__
#define VTDLY	0040000
#endif
#if defined __s390__ && !defined __s390x__
#define VTDLY	0040000
#endif
#if defined __ia64__
#define FF1	0100000
#endif
#if defined __s390__ && !defined __s390x__
#define FF1	0100000
#endif
#if defined __ia64__
#define FFDLY	0100000
#endif
#if defined __s390__ && !defined __s390x__
#define FFDLY	0100000
#endif
#if defined __s390x__
#define CR2	1024
#define CR3	1536
#define CRDLY	1536
#define VT1	16384
#define VTDLY	16384
#define OLCUC	2
#define TAB1	2048
#define NLDLY	256
#define FF1	32768
#define FFDLY	32768
#define ONLCR	4
#define XCASE	4
#define TAB2	4096
#define CR1	512
#define IUCLC	512
#define TAB3	6144
#define TABDLY	6144
#define BS1	8192
#define BSDLY	8192
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __x86_64__
#define OLCUC	0000002
#define ONLCR	0000004
#define XCASE	0000004
#define NLDLY	0000400
#define CR1	0001000
#define IUCLC	0001000
#define CR2	0002000
#define CR3	0003000
#define CRDLY	0003000
#define TAB1	0004000
#define TAB2	0010000
#define TAB3	0014000
#define TABDLY	0014000
#define BS1	0020000
#define BSDLY	0020000
#define VT1	0040000
#define VTDLY	0040000
#define FF1	0100000
#define FFDLY	0100000
#endif
#if defined __powerpc64__
#define TAB1	1024
#define CR3	12288
#define CRDLY	12288
#define FF1	16384
#define FFDLY	16384
#define XCASE	16384
#define ONLCR	2
#define TAB2	2048
#define TAB3	3072
#define TABDLY	3072
#define BS1	32768
#define BSDLY	32768
#define OLCUC	4
#define CR1	4096
#define IUCLC	4096
#define VT1	65536
#define VTDLY	65536
#define NLDLY	768
#define CR2	8192
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */




    typedef unsigned int speed_t;

#if __LSB_VERSION__ >= 12
    typedef unsigned char cc_t;

    typedef unsigned int tcflag_t;

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 11
#define NCCS	32
#endif				/* __LSB_VERSION__ >= 1.1 */



#if __LSB_VERSION__ >= 12
    struct termios {
	tcflag_t c_iflag;	/* input mode flags */
	tcflag_t c_oflag;	/* output mode flags */
	tcflag_t c_cflag;	/* control mode flags */
	tcflag_t c_lflag;	/* local mode flags */
	cc_t c_line;		/* line discipline */
	cc_t c_cc[NCCS];	/* control characters */
	speed_t c_ispeed;	/* input speed */
	speed_t c_ospeed;	/* output speed */
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Special Control Characters*/
#if __LSB_VERSION__ >= 11
#define VINTR	0
#define VQUIT	1
#if defined __i386__
#define VSUSP	10
#define VEOL	11
#define VREPRINT	12
#define VDISCARD	13
#define VWERASE	14
#endif
#define VLNEXT	15
#if defined __i386__
#define VEOL2	16
#endif
#define VERASE	2
#define VKILL	3
#define VEOF	4
#if defined __i386__
#define VMIN	6
#define VSWTC	7
#define VSTART	8
#define VSTOP	9
#endif
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
#define VWERASE	10
#define VREPRINT	11
#define VSUSP	12
#define VSTART	13
#define VSTOP	14
#define VDISCARD	16
#define VMIN	5
#define VEOL	6
#define VEOL2	8
#define VSWTC	9
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define VSUSP	10
#endif
#if defined __s390__ && !defined __s390x__
#define VSUSP	10
#endif
#if defined __s390x__
#define VSUSP	10
#endif
#if defined __ia64__
#define VEOL	11
#endif
#if defined __s390__ && !defined __s390x__
#define VEOL	11
#endif
#if defined __s390x__
#define VEOL	11
#endif
#if defined __ia64__
#define VREPRINT	12
#endif
#if defined __s390__ && !defined __s390x__
#define VREPRINT	12
#endif
#if defined __s390x__
#define VREPRINT	12
#endif
#if defined __ia64__
#define VDISCARD	13
#endif
#if defined __s390__ && !defined __s390x__
#define VDISCARD	13
#endif
#if defined __s390x__
#define VDISCARD	13
#endif
#if defined __ia64__
#define VWERASE	14
#endif
#if defined __s390__ && !defined __s390x__
#define VWERASE	14
#endif
#if defined __s390x__
#define VWERASE	14
#endif
#if defined __ia64__
#define VEOL2	16
#endif
#if defined __s390__ && !defined __s390x__
#define VEOL2	16
#endif
#if defined __s390x__
#define VEOL2	16
#endif
#if defined __ia64__
#define VMIN	6
#endif
#if defined __s390__ && !defined __s390x__
#define VMIN	6
#endif
#if defined __s390x__
#define VMIN	6
#endif
#if defined __ia64__
#define VSWTC	7
#endif
#if defined __s390__ && !defined __s390x__
#define VSWTC	7
#endif
#if defined __s390x__
#define VSWTC	7
#endif
#if defined __ia64__
#define VSTART	8
#endif
#if defined __s390__ && !defined __s390x__
#define VSTART	8
#endif
#if defined __s390x__
#define VSTART	8
#endif
#if defined __ia64__
#define VSTOP	9
#endif
#if defined __s390__ && !defined __s390x__
#define VSTOP	9
#endif
#if defined __s390x__
#define VSTOP	9
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __x86_64__
#define VSUSP	10
#endif
#if defined __powerpc64__
#define VWERASE	10
#endif
#if defined __x86_64__
#define VEOL	11
#endif
#if defined __powerpc64__
#define VREPRINT	11
#endif
#if defined __x86_64__
#define VREPRINT	12
#endif
#if defined __powerpc64__
#define VSUSP	12
#endif
#if defined __x86_64__
#define VDISCARD	13
#endif
#if defined __powerpc64__
#define VSTART	13
#define VSTOP	14
#endif
#if defined __x86_64__
#define VWERASE	14
#endif
#if defined __powerpc64__
#define VDISCARD	16
#endif
#if defined __x86_64__
#define VEOL2	16
#endif
#if defined __powerpc64__
#define VMIN	5
#define VEOL	6
#endif
#if defined __x86_64__
#define VMIN	6
#define VSWTC	7
#endif
#if defined __powerpc64__
#define VEOL2	8
#endif
#if defined __x86_64__
#define VSTART	8
#define VSTOP	9
#endif
#if defined __powerpc64__
#define VSWTC	9
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */




/* Input flags - software input processing*/
#if __LSB_VERSION__ >= 11
#define IGNBRK	0000001
#define BRKINT	0000002
#define IGNPAR	0000004
#define PARMRK	0000010
#define INPCK	0000020
#define ISTRIP	0000040
#define INLCR	0000100
#define IGNCR	0000200
#define ICRNL	0000400
#if defined __i386__
#define IXON	0002000
#endif
#define IXANY	0004000
#if defined __i386__
#define IXOFF	0010000
#endif
#define IMAXBEL	0020000
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
#define IXOFF	1024
#define IXON	512
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define IXON	0002000
#endif
#if defined __s390__ && !defined __s390x__
#define IXON	0002000
#endif
#if defined __ia64__
#define IXOFF	0010000
#endif
#if defined __s390__ && !defined __s390x__
#define IXOFF	0010000
#endif
#if defined __s390x__
#define IXON	1024
#define IXOFF	4096
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __x86_64__
#define IXON	0002000
#define IXOFF	0010000
#endif
#if defined __powerpc64__
#define IXOFF	1024
#define IXON	512
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */




/* Output flags - software output processing*/

/* Control flags - hardware control of terminal*/
#if __LSB_VERSION__ >= 11
#define CS5	0000000
#if defined __i386__
#define CS6	0000020
#define CS7	0000040
#define CS8	0000060
#define CSIZE	0000060
#define CSTOPB	0000100
#define CREAD	0000200
#define PARENB	0000400
#define PARODD	0001000
#define HUPCL	0002000
#define CLOCAL	0004000
#define VTIME	5
#endif
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
#define CSTOPB	1024
#define HUPCL	16384
#define CREAD	2048
#define CS6	256
#define CLOCAL	32768
#define PARENB	4096
#define CS7	512
#define VTIME	7
#define CS8	768
#define CSIZE	768
#define PARODD	8192
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define CS6	0000020
#endif
#if defined __s390__ && !defined __s390x__
#define CS6	0000020
#endif
#if defined __ia64__
#define CS7	0000040
#endif
#if defined __s390__ && !defined __s390x__
#define CS7	0000040
#endif
#if defined __ia64__
#define CS8	0000060
#endif
#if defined __s390__ && !defined __s390x__
#define CS8	0000060
#endif
#if defined __ia64__
#define CSIZE	0000060
#endif
#if defined __s390__ && !defined __s390x__
#define CSIZE	0000060
#endif
#if defined __ia64__
#define CSTOPB	0000100
#endif
#if defined __s390__ && !defined __s390x__
#define CSTOPB	0000100
#endif
#if defined __ia64__
#define CREAD	0000200
#endif
#if defined __s390__ && !defined __s390x__
#define CREAD	0000200
#endif
#if defined __ia64__
#define PARENB	0000400
#endif
#if defined __s390__ && !defined __s390x__
#define PARENB	0000400
#endif
#if defined __ia64__
#define PARODD	0001000
#endif
#if defined __s390__ && !defined __s390x__
#define PARODD	0001000
#endif
#if defined __ia64__
#define HUPCL	0002000
#endif
#if defined __s390__ && !defined __s390x__
#define HUPCL	0002000
#endif
#if defined __ia64__
#define CLOCAL	0004000
#endif
#if defined __s390__ && !defined __s390x__
#define CLOCAL	0004000
#endif
#if defined __s390x__
#define HUPCL	1024
#define CREAD	128
#define CS6	16
#define CLOCAL	2048
#define PARENB	256
#define CS7	32
#define CS8	48
#define CSIZE	48
#endif
#if defined __ia64__
#define VTIME	5
#endif
#if defined __s390__ && !defined __s390x__
#define VTIME	5
#endif
#if defined __s390x__
#define VTIME	5
#define PARODD	512
#define CSTOPB	64
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __x86_64__
#define CS6	0000020
#define CS7	0000040
#define CS8	0000060
#define CSIZE	0000060
#define CSTOPB	0000100
#define CREAD	0000200
#define PARENB	0000400
#define PARODD	0001000
#define HUPCL	0002000
#define CLOCAL	0004000
#endif
#if defined __powerpc64__
#define CSTOPB	1024
#define HUPCL	16384
#define CREAD	2048
#define CS6	256
#define CLOCAL	32768
#define PARENB	4096
#endif
#if defined __x86_64__
#define VTIME	5
#endif
#if defined __powerpc64__
#define CS7	512
#define VTIME	7
#define CS8	768
#define CSIZE	768
#define PARODD	8192
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */




/* "Local" flags - dumping ground for other state*/
#if __LSB_VERSION__ >= 11
#if defined __i386__
#define ISIG	0000001
#define ICANON	0000002
#endif
#define ECHO	0000010
#if defined __i386__
#define ECHOE	0000020
#define ECHOK	0000040
#define ECHONL	0000100
#define NOFLSH	0000200
#define TOSTOP	0000400
#define ECHOCTL	0001000
#define ECHOPRT	0002000
#define ECHOKE	0004000
#define FLUSHO	0010000
#define PENDIN	0040000
#define IEXTEN	0100000
#endif
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
#define NOFLSH	0x80000000
#define ECHOKE	1
#define IEXTEN	1024
#define ISIG	128
#define ECHONL	16
#define ECHOE	2
#define ICANON	256
#define ECHOPRT	32
#define ECHOK	4
#define TOSTOP	4194304
#define PENDIN	536870912
#define ECHOCTL	64
#define FLUSHO	8388608
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define ISIG	0000001
#endif
#if defined __s390__ && !defined __s390x__
#define ISIG	0000001
#endif
#if defined __ia64__
#define ICANON	0000002
#endif
#if defined __s390__ && !defined __s390x__
#define ICANON	0000002
#endif
#if defined __ia64__
#define ECHOE	0000020
#endif
#if defined __s390__ && !defined __s390x__
#define ECHOE	0000020
#endif
#if defined __ia64__
#define ECHOK	0000040
#endif
#if defined __s390__ && !defined __s390x__
#define ECHOK	0000040
#endif
#if defined __ia64__
#define ECHONL	0000100
#endif
#if defined __s390__ && !defined __s390x__
#define ECHONL	0000100
#endif
#if defined __ia64__
#define NOFLSH	0000200
#endif
#if defined __s390__ && !defined __s390x__
#define NOFLSH	0000200
#endif
#if defined __ia64__
#define TOSTOP	0000400
#endif
#if defined __s390__ && !defined __s390x__
#define TOSTOP	0000400
#endif
#if defined __ia64__
#define ECHOCTL	0001000
#endif
#if defined __s390__ && !defined __s390x__
#define ECHOCTL	0001000
#endif
#if defined __ia64__
#define ECHOPRT	0002000
#endif
#if defined __s390__ && !defined __s390x__
#define ECHOPRT	0002000
#endif
#if defined __ia64__
#define ECHOKE	0004000
#endif
#if defined __s390__ && !defined __s390x__
#define ECHOKE	0004000
#endif
#if defined __ia64__
#define FLUSHO	0010000
#endif
#if defined __s390__ && !defined __s390x__
#define FLUSHO	0010000
#endif
#if defined __ia64__
#define PENDIN	0040000
#endif
#if defined __s390__ && !defined __s390x__
#define PENDIN	0040000
#endif
#if defined __ia64__
#define IEXTEN	0100000
#endif
#if defined __s390__ && !defined __s390x__
#define IEXTEN	0100000
#endif
#if defined __s390x__
#define ISIG	1
#define ECHOPRT	1024
#define NOFLSH	128
#define ECHOE	16
#define PENDIN	16384
#define ICANON	2
#define ECHOKE	2048
#define TOSTOP	256
#define ECHOK	32
#define IEXTEN	32768
#define FLUSHO	4096
#define ECHOCTL	512
#define ECHONL	64
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __x86_64__
#define ISIG	0000001
#define ICANON	0000002
#define ECHOE	0000020
#define ECHOK	0000040
#define ECHONL	0000100
#define NOFLSH	0000200
#define TOSTOP	0000400
#define ECHOCTL	0001000
#define ECHOPRT	0002000
#define ECHOKE	0004000
#define FLUSHO	0010000
#define PENDIN	0040000
#define IEXTEN	0100000
#endif
#if defined __powerpc64__
#define NOFLSH	0x80000000
#define ECHOKE	1
#define IEXTEN	1024
#define ISIG	128
#define ECHONL	16
#define ECHOE	2
#define ICANON	256
#define ECHOPRT	32
#define ECHOK	4
#define TOSTOP	4194304
#define PENDIN	536870912
#define ECHOCTL	64
#define FLUSHO	8388608
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */




/* Standard speeds*/
#if __LSB_VERSION__ >= 11
#define B0	0000000
#define B50	0000001
#define B75	0000002
#define B110	0000003
#define B134	0000004
#define B150	0000005
#define B200	0000006
#define B300	0000007
#define B600	0000010
#define B1200	0000011
#define B1800	0000012
#define B2400	0000013
#define B4800	0000014
#define B9600	0000015
#define B19200	0000016
#define B38400	0000017
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Function prototypes */

    extern speed_t cfgetispeed(const struct termios *__termios_p);
    extern speed_t cfgetospeed(const struct termios *__termios_p);
    extern void cfmakeraw(struct termios *__termios_p);
    extern int cfsetispeed(struct termios *__termios_p, speed_t __speed);
    extern int cfsetospeed(struct termios *__termios_p, speed_t __speed);
    extern int cfsetspeed(struct termios *__termios_p, speed_t __speed);
    extern int tcdrain(int __fd);
    extern int tcflow(int __fd, int __action);
    extern int tcflush(int __fd, int __queue_selector);
    extern int tcgetattr(int __fd, struct termios *__termios_p);
    extern pid_t tcgetsid(int __fd);
    extern int tcsendbreak(int __fd, int __duration);
    extern int tcsetattr(int __fd, int __optional_actions,
			 const struct termios *__termios_p);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
