#ifndef _TERMIOS_H_
#define _TERMIOS_H_

#include <sys/types.h>

#define TCSANOW	0
#define TCOOFF	0
#define TCIFLUSH	0
#define CR0	0000000
#define NL0	0000000
#define VT0	0000000
#define TAB0	0000000
#define FF0	0000000
#define BS0	0000000
#define OPOST	0000001
#define OLCUC	0000002
#define XCASE	0000004
#define ONLCR	0000004
#define OCRNL	0000010
#define ONOCR	0000020
#define ONLRET	0000040
#define OFILL	0000100
#define OFDEL	0000200
#define NLDLY	0000400
#define NL1	0000400
#define CR1	0001000
#define IUCLC	0001000
#define CR2	0002000
#define CRDLY	0003000
#define CR3	0003000
#define TAB1	0004000
#define TAB2	0010000
#define TABDLY	0014000
#define TAB3	0014000
#define BS1	0020000
#define BSDLY	0020000
#define VTDLY	0040000
#define VT1	0040000
#define FF1	0100000
#define FFDLY	0100000
#define TCSADRAIN	1
#define TCOON	1
#define TCOFLUSH	1
#define TCSAFLUSH	2
#define TCIOFF	2
#define TCIOFLUSH	2
#define TCION	3


typedef int speed_t;


#define VINTR	0
#define VQUIT	1
#define VSUSP	10
#define VEOL	11
#define VREPRINT	12
#define VDISCARD	13
#define VWERASE	14
#define VLNEXT	15
#define VEOL2	16
#define VERASE	2
#define VKILL	3
#define NCCS	32
#define VEOF	4
#define VMIN	6
#define VSWTC	7
#define VSTART	8
#define VSTOP	9



#define IGNBRK	0000001
#define BRKINT	0000002
#define IGNPAR	0000004
#define PARMRK	0000010
#define INPCK	0000020
#define ISTRIP	0000040
#define INLCR	0000100
#define IGNCR	0000200
#define ICRNL	0000400
#define IXON	0002000
#define IXANY	0004000
#define IXOFF	0010000
#define IMAXBEL	0020000






#define CS5	0000000
#define CS6	0000020
#define CS7	0000040
#define CSIZE	0000060
#define CS8	0000060
#define CSTOPB	0000100
#define PARENB	0000400
#define PARODD	0001000
#define HUPCL	0002000
#define CLOCAL	0004000



#define ISIG	0000001
#define ICANON	0000002
#define ECHO	0000010
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



speed_t cfgetispeed (struct termios *);
speed_t cfgetospeed (struct termios *);
int cfsetispeed (struct termios *, speed_t);
int cfsetospeed (struct termios *, speed_t);
int tcflow (int, int);
int tcflush (int, int);
__pid_t tcgetsid (int);
int tcsendbreak (int, int);
int tcsetattr (int, int, struct termios *);
int tcdrain (int);
int tcgetattr (int, struct termios *);
#endif
