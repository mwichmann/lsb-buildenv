#if (__LSB_VERSION__ >= 12 )
#ifndef _SYS_POLL_H_
#define _SYS_POLL_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define POLLIN	0x0001		/* There is data to read */
#define POLLPRI	0x0002		/* There is urgent data to read */
#define POLLOUT	0x0004		/* Writing now will not block */
#define POLLERR	0x0008		/* Error condition */
#define POLLHUP	0x0010		/* Hung up */
#define POLLNVAL	0x0020	/* Invalid request: fd not open */
#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 32
#define POLLRDNORM	0x0040	/* Normal data may be read */
#define POLLRDBAND	0x0080	/* Priority data may be read */
#define POLLWRNORM	0x0100	/* Writing now will not block */
#define POLLWRBAND	0x0200	/* Priority data may be written */
#endif				// __LSB_VERSION__ >= 3.2



#if __LSB_VERSION__ >= 20
    typedef unsigned long int nfds_t;

#endif				// __LSB_VERSION__ >= 2.0

#if __LSB_VERSION__ >= 12
    struct pollfd {
	int fd;			/* File descriptor to poll. */
	short events;		/* Types of events poller cares about. */
	short revents;		/* Types of events that actually occurred. */
    };

#endif				// __LSB_VERSION__ >= 1.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
