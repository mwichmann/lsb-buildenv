#ifndef _TERMIOS_H_
#define _TERMIOS_H_

#include <sys/types.h>


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
#define VTIME	5
#define VMIN	6
#define VSWTC	7
#define VSTART	8
#define VSTOP	9

#define IGNBRK	0000001
#define BRKINT	0000002
#define IGNPAR	0000004
#define PARMRK	0000010
#define OCRNL	0000010
#define INPCK	0000020
#define ISTRIP	0000040
#define INLCR	0000100
#define IGNCR	0000200
#define ICRNL	0000400
#define IXON	0002000
#define IXANY	0004000
#define IXOFF	0010000
#define IMAXBEL	0020000

#define OPOST	0000001
#define ONLCR	0000004
#define ONOCR	0000020
#define ONLRET	0000040

#define CS5	0000000
#define CS6	0000020
#define CS7	0000040
#define CSIZE	0000060
#define CS8	0000060
#define CSTOPB	0000100
#define CREAD	0000200
#define PARENB	0000400
#define PARODD	0001000
#define HUPCL	0002000
#define CLOCAL	0004000
#define CRTSCTS	020000000000

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

cfgetispeed (struct termios *);
cfgetospeed (struct termios *);
int cfsetispeed (struct termios *,);
int cfsetospeed (struct termios *,);
int tcflow (int, int);
int tcflush (int, int);
__pid_t tcgetsid (int);
int tcsendbreak (int, int);
int tcsetattr (int, int, struct termios *);
int tcdrain (int);
int tcgetattr (int, struct termios *);
#endif
