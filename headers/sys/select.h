#ifndef _SYS_SELECT_H_
#define _SYS_SELECT_H_


#define FD_ISSET(d,set)	((set)->fds_bits[0]&(1<<d))
#define FD_SET(d,set)	((set)->fds_bits[0]&=(1<<d))
#define FD_ZERO(fdsetp) /**/
#define FD_CLR(d,set) /**/
#define FD_SETSIZE	1024
#endif
