#ifndef _SYS_POLL_H_
#define _SYS_POLL_H_


#define POLLIN	0x0001
#define POLLPRI	0x0002
#define POLLOUT	0x0004
#define POLLERR	0x0008
#define POLLHUP	0x0010
#define POLLNVAL	0x0020


struct pollfd
{
  int fd;			/* File descriptor to poll. */
  short events;			/* Types of events poller cares about. */
  short revents;		/* Types of events that actually occurred. */
}
 ;


#endif
