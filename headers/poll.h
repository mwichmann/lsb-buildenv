#ifndef _POLL_H_
#define _POLL_H_




struct pollfd
{
  int fd;			/* File descriptor to poll. */
  short events;			/* Types of events poller cares about. */
  short revents;		/* Types of events that actually occurred. */
}
 ;


#endif
