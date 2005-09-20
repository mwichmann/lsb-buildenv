#ifndef _TERMIOS_H_
#define _TERMIOS_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


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
#if __i386__
#define OLCUC	0000002
#endif
#if __ia64__
#define OLCUC	0000002
#endif
#if __s390__ && !__s390x__
#define OLCUC	0000002
#endif
#if __x86_64__
#define OLCUC	0000002
#endif
#if __i386__
#define ONLCR	0000004
#endif
#if __ia64__
#define ONLCR	0000004
#endif
#if __s390__ && !__s390x__
#define ONLCR	0000004
#endif
#if __x86_64__
#define ONLCR	0000004
#endif
#if __i386__
#define XCASE	0000004
#endif
#if __ia64__
#define XCASE	0000004
#endif
#if __s390__ && !__s390x__
#define XCASE	0000004
#endif
#if __x86_64__
#define XCASE	0000004
#endif
#define OCRNL	0000010
#define ONOCR	0000020
#define ONLRET	0000040
#define OFILL	0000100
#define OFDEL	0000200
#define NL1	0000400
#if __i386__
#define NLDLY	0000400
#endif
#if __ia64__
#define NLDLY	0000400
#endif
#if __s390__ && !__s390x__
#define NLDLY	0000400
#endif
#if __x86_64__
#define NLDLY	0000400
#endif
#if __i386__
#define CR1	0001000
#endif
#if __ia64__
#define CR1	0001000
#endif
#if __s390__ && !__s390x__
#define CR1	0001000
#endif
#if __x86_64__
#define CR1	0001000
#endif
#if __i386__
#define IUCLC	0001000
#endif
#if __ia64__
#define IUCLC	0001000
#endif
#if __s390__ && !__s390x__
#define IUCLC	0001000
#endif
#if __x86_64__
#define IUCLC	0001000
#endif
#if __i386__
#define CR2	0002000
#endif
#if __ia64__
#define CR2	0002000
#endif
#if __s390__ && !__s390x__
#define CR2	0002000
#endif
#if __x86_64__
#define CR2	0002000
#endif
#if __i386__
#define CR3	0003000
#endif
#if __ia64__
#define CR3	0003000
#endif
#if __s390__ && !__s390x__
#define CR3	0003000
#endif
#if __x86_64__
#define CR3	0003000
#endif
#if __i386__
#define CRDLY	0003000
#endif
#if __ia64__
#define CRDLY	0003000
#endif
#if __s390__ && !__s390x__
#define CRDLY	0003000
#endif
#if __x86_64__
#define CRDLY	0003000
#endif
#if __i386__
#define TAB1	0004000
#endif
#if __ia64__
#define TAB1	0004000
#endif
#if __s390__ && !__s390x__
#define TAB1	0004000
#endif
#if __x86_64__
#define TAB1	0004000
#endif
#if __i386__
#define TAB2	0010000
#endif
#if __ia64__
#define TAB2	0010000
#endif
#if __s390__ && !__s390x__
#define TAB2	0010000
#endif
#if __x86_64__
#define TAB2	0010000
#endif
#if __i386__
#define TAB3	0014000
#endif
#if __ia64__
#define TAB3	0014000
#endif
#if __s390__ && !__s390x__
#define TAB3	0014000
#endif
#if __x86_64__
#define TAB3	0014000
#endif
#if __i386__
#define TABDLY	0014000
#endif
#if __ia64__
#define TABDLY	0014000
#endif
#if __s390__ && !__s390x__
#define TABDLY	0014000
#endif
#if __x86_64__
#define TABDLY	0014000
#endif
#if __i386__
#define BS1	0020000
#endif
#if __ia64__
#define BS1	0020000
#endif
#if __s390__ && !__s390x__
#define BS1	0020000
#endif
#if __x86_64__
#define BS1	0020000
#endif
#if __i386__
#define BSDLY	0020000
#endif
#if __ia64__
#define BSDLY	0020000
#endif
#if __s390__ && !__s390x__
#define BSDLY	0020000
#endif
#if __x86_64__
#define BSDLY	0020000
#endif
#if __i386__
#define VT1	0040000
#endif
#if __ia64__
#define VT1	0040000
#endif
#if __s390__ && !__s390x__
#define VT1	0040000
#endif
#if __x86_64__
#define VT1	0040000
#endif
#if __i386__
#define VTDLY	0040000
#endif
#if __ia64__
#define VTDLY	0040000
#endif
#if __s390__ && !__s390x__
#define VTDLY	0040000
#endif
#if __x86_64__
#define VTDLY	0040000
#endif
#if __i386__
#define FF1	0100000
#endif
#if __ia64__
#define FF1	0100000
#endif
#if __s390__ && !__s390x__
#define FF1	0100000
#endif
#if __x86_64__
#define FF1	0100000
#endif
#if __i386__
#define FFDLY	0100000
#endif
#if __ia64__
#define FFDLY	0100000
#endif
#if __s390__ && !__s390x__
#define FFDLY	0100000
#endif
#if __x86_64__
#define FFDLY	0100000
#endif
#define TCOFLUSH	1
#define TCOON	1
#define TCSADRAIN	1
#if __s390x__
#define CR2	1024
#endif
#if __powerpc__ && !__powerpc64__
#define TAB1	1024
#endif
#if __powerpc64__
#define TAB1	1024
#endif
#if __powerpc__ && !__powerpc64__
#define CR3	12288
#endif
#if __powerpc64__
#define CR3	12288
#endif
#if __powerpc__ && !__powerpc64__
#define CRDLY	12288
#endif
#if __powerpc64__
#define CRDLY	12288
#endif
#if __s390x__
#define CR3	1536
#endif
#if __s390x__
#define CRDLY	1536
#endif
#if __powerpc__ && !__powerpc64__
#define FF1	16384
#endif
#if __powerpc64__
#define FF1	16384
#endif
#if __powerpc__ && !__powerpc64__
#define FFDLY	16384
#endif
#if __powerpc64__
#define FFDLY	16384
#endif
#if __s390x__
#define VT1	16384
#endif
#if __s390x__
#define VTDLY	16384
#endif
#if __powerpc__ && !__powerpc64__
#define XCASE	16384
#endif
#if __powerpc64__
#define XCASE	16384
#endif
#if __s390x__
#define OLCUC	2
#endif
#if __powerpc__ && !__powerpc64__
#define ONLCR	2
#endif
#if __powerpc64__
#define ONLCR	2
#endif
#define TCIOFF	2
#define TCIOFLUSH	2
#define TCSAFLUSH	2
#if __s390x__
#define TAB1	2048
#endif
#if __powerpc__ && !__powerpc64__
#define TAB2	2048
#endif
#if __powerpc64__
#define TAB2	2048
#endif
#if __s390x__
#define NLDLY	256
#endif
#define TCION	3
#if __powerpc__ && !__powerpc64__
#define TAB3	3072
#endif
#if __powerpc64__
#define TAB3	3072
#endif
#if __powerpc__ && !__powerpc64__
#define TABDLY	3072
#endif
#if __powerpc64__
#define TABDLY	3072
#endif
#if __powerpc__ && !__powerpc64__
#define BS1	32768
#endif
#if __powerpc64__
#define BS1	32768
#endif
#if __powerpc__ && !__powerpc64__
#define BSDLY	32768
#endif
#if __powerpc64__
#define BSDLY	32768
#endif
#if __s390x__
#define FF1	32768
#endif
#if __s390x__
#define FFDLY	32768
#endif
#if __powerpc__ && !__powerpc64__
#define OLCUC	4
#endif
#if __powerpc64__
#define OLCUC	4
#endif
#if __s390x__
#define ONLCR	4
#endif
#if __s390x__
#define XCASE	4
#endif
#if __powerpc__ && !__powerpc64__
#define CR1	4096
#endif
#if __powerpc64__
#define CR1	4096
#endif
#if __powerpc__ && !__powerpc64__
#define IUCLC	4096
#endif
#if __powerpc64__
#define IUCLC	4096
#endif
#if __s390x__
#define TAB2	4096
#endif
#if __s390x__
#define CR1	512
#endif
#if __s390x__
#define IUCLC	512
#endif
#if __s390x__
#define TAB3	6144
#endif
#if __s390x__
#define TABDLY	6144
#endif
#if __powerpc__ && !__powerpc64__
#define VT1	65536
#endif
#if __powerpc64__
#define VT1	65536
#endif
#if __powerpc__ && !__powerpc64__
#define VTDLY	65536
#endif
#if __powerpc64__
#define VTDLY	65536
#endif
#if __powerpc__ && !__powerpc64__
#define NLDLY	768
#endif
#if __powerpc64__
#define NLDLY	768
#endif
#if __s390x__
#define BS1	8192
#endif
#if __s390x__
#define BSDLY	8192
#endif
#if __powerpc__ && !__powerpc64__
#define CR2	8192
#endif
#if __powerpc64__
#define CR2	8192
#endif





    typedef unsigned int speed_t;

    typedef unsigned char cc_t;

    typedef unsigned int tcflag_t;


#define NCCS	32


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


/* Special Control Characters*/
#define VINTR	0
#define VQUIT	1
#if __i386__
#define VSUSP	10
#endif
#if __ia64__
#define VSUSP	10
#endif
#if __s390__ && !__s390x__
#define VSUSP	10
#endif
#if __x86_64__
#define VSUSP	10
#endif
#if __s390x__
#define VSUSP	10
#endif
#if __powerpc__ && !__powerpc64__
#define VWERASE	10
#endif
#if __powerpc64__
#define VWERASE	10
#endif
#if __i386__
#define VEOL	11
#endif
#if __ia64__
#define VEOL	11
#endif
#if __s390__ && !__s390x__
#define VEOL	11
#endif
#if __x86_64__
#define VEOL	11
#endif
#if __s390x__
#define VEOL	11
#endif
#if __powerpc__ && !__powerpc64__
#define VREPRINT	11
#endif
#if __powerpc64__
#define VREPRINT	11
#endif
#if __i386__
#define VREPRINT	12
#endif
#if __ia64__
#define VREPRINT	12
#endif
#if __s390__ && !__s390x__
#define VREPRINT	12
#endif
#if __x86_64__
#define VREPRINT	12
#endif
#if __s390x__
#define VREPRINT	12
#endif
#if __powerpc__ && !__powerpc64__
#define VSUSP	12
#endif
#if __powerpc64__
#define VSUSP	12
#endif
#if __i386__
#define VDISCARD	13
#endif
#if __ia64__
#define VDISCARD	13
#endif
#if __s390__ && !__s390x__
#define VDISCARD	13
#endif
#if __x86_64__
#define VDISCARD	13
#endif
#if __s390x__
#define VDISCARD	13
#endif
#if __powerpc__ && !__powerpc64__
#define VSTART	13
#endif
#if __powerpc64__
#define VSTART	13
#endif
#if __powerpc__ && !__powerpc64__
#define VSTOP	14
#endif
#if __powerpc64__
#define VSTOP	14
#endif
#if __i386__
#define VWERASE	14
#endif
#if __ia64__
#define VWERASE	14
#endif
#if __s390__ && !__s390x__
#define VWERASE	14
#endif
#if __x86_64__
#define VWERASE	14
#endif
#if __s390x__
#define VWERASE	14
#endif
#define VLNEXT	15
#if __powerpc__ && !__powerpc64__
#define VDISCARD	16
#endif
#if __powerpc64__
#define VDISCARD	16
#endif
#if __i386__
#define VEOL2	16
#endif
#if __ia64__
#define VEOL2	16
#endif
#if __s390__ && !__s390x__
#define VEOL2	16
#endif
#if __x86_64__
#define VEOL2	16
#endif
#if __s390x__
#define VEOL2	16
#endif
#define VERASE	2
#define VKILL	3
#define VEOF	4
#if __powerpc__ && !__powerpc64__
#define VMIN	5
#endif
#if __powerpc64__
#define VMIN	5
#endif
#if __powerpc__ && !__powerpc64__
#define VEOL	6
#endif
#if __powerpc64__
#define VEOL	6
#endif
#if __i386__
#define VMIN	6
#endif
#if __ia64__
#define VMIN	6
#endif
#if __s390__ && !__s390x__
#define VMIN	6
#endif
#if __x86_64__
#define VMIN	6
#endif
#if __s390x__
#define VMIN	6
#endif
#if __i386__
#define VSWTC	7
#endif
#if __ia64__
#define VSWTC	7
#endif
#if __s390__ && !__s390x__
#define VSWTC	7
#endif
#if __x86_64__
#define VSWTC	7
#endif
#if __s390x__
#define VSWTC	7
#endif
#if __powerpc__ && !__powerpc64__
#define VEOL2	8
#endif
#if __powerpc64__
#define VEOL2	8
#endif
#if __i386__
#define VSTART	8
#endif
#if __ia64__
#define VSTART	8
#endif
#if __s390__ && !__s390x__
#define VSTART	8
#endif
#if __x86_64__
#define VSTART	8
#endif
#if __s390x__
#define VSTART	8
#endif
#if __i386__
#define VSTOP	9
#endif
#if __ia64__
#define VSTOP	9
#endif
#if __s390__ && !__s390x__
#define VSTOP	9
#endif
#if __x86_64__
#define VSTOP	9
#endif
#if __s390x__
#define VSTOP	9
#endif
#if __powerpc__ && !__powerpc64__
#define VSWTC	9
#endif
#if __powerpc64__
#define VSWTC	9
#endif



/* Input flags - software input processing*/
#define IGNBRK	0000001
#define BRKINT	0000002
#define IGNPAR	0000004
#define PARMRK	0000010
#define INPCK	0000020
#define ISTRIP	0000040
#define INLCR	0000100
#define IGNCR	0000200
#define ICRNL	0000400
#if __i386__
#define IXON	0002000
#endif
#if __ia64__
#define IXON	0002000
#endif
#if __s390__ && !__s390x__
#define IXON	0002000
#endif
#if __x86_64__
#define IXON	0002000
#endif
#define IXANY	0004000
#if __i386__
#define IXOFF	0010000
#endif
#if __ia64__
#define IXOFF	0010000
#endif
#if __s390__ && !__s390x__
#define IXOFF	0010000
#endif
#if __x86_64__
#define IXOFF	0010000
#endif
#define IMAXBEL	0020000
#if __powerpc__ && !__powerpc64__
#define IXOFF	1024
#endif
#if __powerpc64__
#define IXOFF	1024
#endif
#if __s390x__
#define IXON	1024
#endif
#if __s390x__
#define IXOFF	4096
#endif
#if __powerpc__ && !__powerpc64__
#define IXON	512
#endif
#if __powerpc64__
#define IXON	512
#endif



/* Output flags - software output processing*/



/* Control flags - hardware control of terminal*/
#define CS5	0000000
#if __i386__
#define CS6	0000020
#endif
#if __ia64__
#define CS6	0000020
#endif
#if __s390__ && !__s390x__
#define CS6	0000020
#endif
#if __x86_64__
#define CS6	0000020
#endif
#if __i386__
#define CS7	0000040
#endif
#if __ia64__
#define CS7	0000040
#endif
#if __s390__ && !__s390x__
#define CS7	0000040
#endif
#if __x86_64__
#define CS7	0000040
#endif
#if __i386__
#define CS8	0000060
#endif
#if __ia64__
#define CS8	0000060
#endif
#if __s390__ && !__s390x__
#define CS8	0000060
#endif
#if __x86_64__
#define CS8	0000060
#endif
#if __i386__
#define CSIZE	0000060
#endif
#if __ia64__
#define CSIZE	0000060
#endif
#if __s390__ && !__s390x__
#define CSIZE	0000060
#endif
#if __x86_64__
#define CSIZE	0000060
#endif
#if __i386__
#define CSTOPB	0000100
#endif
#if __ia64__
#define CSTOPB	0000100
#endif
#if __s390__ && !__s390x__
#define CSTOPB	0000100
#endif
#if __x86_64__
#define CSTOPB	0000100
#endif
#if __i386__
#define CREAD	0000200
#endif
#if __ia64__
#define CREAD	0000200
#endif
#if __s390__ && !__s390x__
#define CREAD	0000200
#endif
#if __x86_64__
#define CREAD	0000200
#endif
#if __i386__
#define PARENB	0000400
#endif
#if __ia64__
#define PARENB	0000400
#endif
#if __s390__ && !__s390x__
#define PARENB	0000400
#endif
#if __x86_64__
#define PARENB	0000400
#endif
#if __i386__
#define PARODD	0001000
#endif
#if __ia64__
#define PARODD	0001000
#endif
#if __s390__ && !__s390x__
#define PARODD	0001000
#endif
#if __x86_64__
#define PARODD	0001000
#endif
#if __i386__
#define HUPCL	0002000
#endif
#if __ia64__
#define HUPCL	0002000
#endif
#if __s390__ && !__s390x__
#define HUPCL	0002000
#endif
#if __x86_64__
#define HUPCL	0002000
#endif
#if __i386__
#define CLOCAL	0004000
#endif
#if __ia64__
#define CLOCAL	0004000
#endif
#if __s390__ && !__s390x__
#define CLOCAL	0004000
#endif
#if __x86_64__
#define CLOCAL	0004000
#endif
#if __powerpc__ && !__powerpc64__
#define CSTOPB	1024
#endif
#if __powerpc64__
#define CSTOPB	1024
#endif
#if __s390x__
#define HUPCL	1024
#endif
#if __s390x__
#define CREAD	128
#endif
#if __s390x__
#define CS6	16
#endif
#if __powerpc__ && !__powerpc64__
#define HUPCL	16384
#endif
#if __powerpc64__
#define HUPCL	16384
#endif
#if __s390x__
#define CLOCAL	2048
#endif
#if __powerpc__ && !__powerpc64__
#define CREAD	2048
#endif
#if __powerpc64__
#define CREAD	2048
#endif
#if __powerpc__ && !__powerpc64__
#define CS6	256
#endif
#if __powerpc64__
#define CS6	256
#endif
#if __s390x__
#define PARENB	256
#endif
#if __s390x__
#define CS7	32
#endif
#if __powerpc__ && !__powerpc64__
#define CLOCAL	32768
#endif
#if __powerpc64__
#define CLOCAL	32768
#endif
#if __powerpc__ && !__powerpc64__
#define PARENB	4096
#endif
#if __powerpc64__
#define PARENB	4096
#endif
#if __s390x__
#define CS8	48
#endif
#if __s390x__
#define CSIZE	48
#endif
#if __i386__
#define VTIME	5
#endif
#if __ia64__
#define VTIME	5
#endif
#if __s390__ && !__s390x__
#define VTIME	5
#endif
#if __x86_64__
#define VTIME	5
#endif
#if __s390x__
#define VTIME	5
#endif
#if __powerpc__ && !__powerpc64__
#define CS7	512
#endif
#if __powerpc64__
#define CS7	512
#endif
#if __s390x__
#define PARODD	512
#endif
#if __s390x__
#define CSTOPB	64
#endif
#if __powerpc__ && !__powerpc64__
#define VTIME	7
#endif
#if __powerpc64__
#define VTIME	7
#endif
#if __powerpc__ && !__powerpc64__
#define CS8	768
#endif
#if __powerpc64__
#define CS8	768
#endif
#if __powerpc__ && !__powerpc64__
#define CSIZE	768
#endif
#if __powerpc64__
#define CSIZE	768
#endif
#if __powerpc__ && !__powerpc64__
#define PARODD	8192
#endif
#if __powerpc64__
#define PARODD	8192
#endif



/* "Local" flags - dumping ground for other state*/
#if __i386__
#define ISIG	0000001
#endif
#if __ia64__
#define ISIG	0000001
#endif
#if __s390__ && !__s390x__
#define ISIG	0000001
#endif
#if __x86_64__
#define ISIG	0000001
#endif
#if __i386__
#define ICANON	0000002
#endif
#if __ia64__
#define ICANON	0000002
#endif
#if __s390__ && !__s390x__
#define ICANON	0000002
#endif
#if __x86_64__
#define ICANON	0000002
#endif
#define ECHO	0000010
#if __i386__
#define ECHOE	0000020
#endif
#if __ia64__
#define ECHOE	0000020
#endif
#if __s390__ && !__s390x__
#define ECHOE	0000020
#endif
#if __x86_64__
#define ECHOE	0000020
#endif
#if __i386__
#define ECHOK	0000040
#endif
#if __ia64__
#define ECHOK	0000040
#endif
#if __s390__ && !__s390x__
#define ECHOK	0000040
#endif
#if __x86_64__
#define ECHOK	0000040
#endif
#if __i386__
#define ECHONL	0000100
#endif
#if __ia64__
#define ECHONL	0000100
#endif
#if __s390__ && !__s390x__
#define ECHONL	0000100
#endif
#if __x86_64__
#define ECHONL	0000100
#endif
#if __i386__
#define NOFLSH	0000200
#endif
#if __ia64__
#define NOFLSH	0000200
#endif
#if __s390__ && !__s390x__
#define NOFLSH	0000200
#endif
#if __x86_64__
#define NOFLSH	0000200
#endif
#if __i386__
#define TOSTOP	0000400
#endif
#if __ia64__
#define TOSTOP	0000400
#endif
#if __s390__ && !__s390x__
#define TOSTOP	0000400
#endif
#if __x86_64__
#define TOSTOP	0000400
#endif
#if __i386__
#define ECHOCTL	0001000
#endif
#if __ia64__
#define ECHOCTL	0001000
#endif
#if __s390__ && !__s390x__
#define ECHOCTL	0001000
#endif
#if __x86_64__
#define ECHOCTL	0001000
#endif
#if __i386__
#define ECHOPRT	0002000
#endif
#if __ia64__
#define ECHOPRT	0002000
#endif
#if __s390__ && !__s390x__
#define ECHOPRT	0002000
#endif
#if __x86_64__
#define ECHOPRT	0002000
#endif
#if __i386__
#define ECHOKE	0004000
#endif
#if __ia64__
#define ECHOKE	0004000
#endif
#if __s390__ && !__s390x__
#define ECHOKE	0004000
#endif
#if __x86_64__
#define ECHOKE	0004000
#endif
#if __i386__
#define FLUSHO	0010000
#endif
#if __ia64__
#define FLUSHO	0010000
#endif
#if __s390__ && !__s390x__
#define FLUSHO	0010000
#endif
#if __x86_64__
#define FLUSHO	0010000
#endif
#if __i386__
#define PENDIN	0040000
#endif
#if __ia64__
#define PENDIN	0040000
#endif
#if __s390__ && !__s390x__
#define PENDIN	0040000
#endif
#if __x86_64__
#define PENDIN	0040000
#endif
#if __i386__
#define IEXTEN	0100000
#endif
#if __ia64__
#define IEXTEN	0100000
#endif
#if __s390__ && !__s390x__
#define IEXTEN	0100000
#endif
#if __x86_64__
#define IEXTEN	0100000
#endif
#if __powerpc__ && !__powerpc64__
#define NOFLSH	0x80000000
#endif
#if __powerpc64__
#define NOFLSH	0x80000000
#endif
#if __powerpc__ && !__powerpc64__
#define ECHOKE	1
#endif
#if __powerpc64__
#define ECHOKE	1
#endif
#if __s390x__
#define ISIG	1
#endif
#if __s390x__
#define ECHOPRT	1024
#endif
#if __powerpc__ && !__powerpc64__
#define IEXTEN	1024
#endif
#if __powerpc64__
#define IEXTEN	1024
#endif
#if __powerpc__ && !__powerpc64__
#define ISIG	128
#endif
#if __powerpc64__
#define ISIG	128
#endif
#if __s390x__
#define NOFLSH	128
#endif
#if __s390x__
#define ECHOE	16
#endif
#if __powerpc__ && !__powerpc64__
#define ECHONL	16
#endif
#if __powerpc64__
#define ECHONL	16
#endif
#if __s390x__
#define PENDIN	16384
#endif
#if __powerpc__ && !__powerpc64__
#define ECHOE	2
#endif
#if __powerpc64__
#define ECHOE	2
#endif
#if __s390x__
#define ICANON	2
#endif
#if __s390x__
#define ECHOKE	2048
#endif
#if __powerpc__ && !__powerpc64__
#define ICANON	256
#endif
#if __powerpc64__
#define ICANON	256
#endif
#if __s390x__
#define TOSTOP	256
#endif
#if __s390x__
#define ECHOK	32
#endif
#if __powerpc__ && !__powerpc64__
#define ECHOPRT	32
#endif
#if __powerpc64__
#define ECHOPRT	32
#endif
#if __s390x__
#define IEXTEN	32768
#endif
#if __powerpc__ && !__powerpc64__
#define ECHOK	4
#endif
#if __powerpc64__
#define ECHOK	4
#endif
#if __s390x__
#define FLUSHO	4096
#endif
#if __powerpc__ && !__powerpc64__
#define TOSTOP	4194304
#endif
#if __powerpc64__
#define TOSTOP	4194304
#endif
#if __s390x__
#define ECHOCTL	512
#endif
#if __powerpc__ && !__powerpc64__
#define PENDIN	536870912
#endif
#if __powerpc64__
#define PENDIN	536870912
#endif
#if __powerpc__ && !__powerpc64__
#define ECHOCTL	64
#endif
#if __powerpc64__
#define ECHOCTL	64
#endif
#if __s390x__
#define ECHONL	64
#endif
#if __powerpc__ && !__powerpc64__
#define FLUSHO	8388608
#endif
#if __powerpc64__
#define FLUSHO	8388608
#endif



/* Standard speeds*/
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



    extern speed_t cfgetispeed(const struct termios *);
    extern speed_t cfgetospeed(const struct termios *);
    extern void cfmakeraw(struct termios *);
    extern int cfsetispeed(struct termios *, speed_t);
    extern int cfsetospeed(struct termios *, speed_t);
    extern int cfsetspeed(struct termios *, speed_t);
    extern int tcflow(int, int);
    extern int tcflush(int, int);
    extern pid_t tcgetsid(int);
    extern int tcsendbreak(int, int);
    extern int tcsetattr(int, int, const struct termios *);
    extern int tcdrain(int);
    extern int tcgetattr(int, struct termios *);
#ifdef __cplusplus
}
#endif
#endif
