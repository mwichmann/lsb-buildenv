#ifndef _SYS_POLL_H_
#define _SYS_POLL_H_


#ifdef __cplusplus
extern "C" {
#endif


#define POLLIN	0x0001		/* There is data to read */
#define POLLPRI	0x0002		/* There is urgent data to read */
#define POLLOUT	0x0004		/* Writing now will not block */
#define POLLERR	0x0008		/* Error condition */
#define POLLHUP	0x0010		/* Hung up */
#define POLLNVAL	0x0020	/* Invalid request: fd not open */


    typedef unsigned long int nfds_t;

    struct pollfd {
	int fd;			/* File descriptor to poll. */
	short events;		/* Types of events poller cares about. */
	short revents;		/* Types of events that actually occurred. */
    };

#ifdef __cplusplus
}
#endif
#endif
