#ifndef _SYS_SOCKET_H_
#define _SYS_SOCKET_H_

#include <sys/types.h>



struct linger
{
  int l_onoff;
  int l_linger;
}
 ;

struct iovec
{
  void *iov_base;
  size_t iov_len;
}
 ;




typedef unsigned short sa_family_t;

typedef unsigned int socklen_t;




struct sockaddr
{
  sa_family_t sa_family;
  char sa_data[1];
}
 ;




struct msghdr
{
  void *msg_name;
  int msg_namelen;
  struct iovec *msg_iov;
  size_t msg_iovlen;
  void *msg_control;
  size_t msg_controllen;
  unsigned int msg_flags;
}
 ;


#define AF_UNSPEC	0
#define AF_UNIX	1
#define AF_LOCAL	1
#define AF_INET6	10
#define AF_INET	2
#define AF_AX25	3
#define AF_IPX	4
#define AF_APPLETALK	5
#define AF_NETROM	6
#define AF_BRIDGE	7
#define AF_ATMPVC	8
#define AF_X25	9



#define SOCK_STREAM	1
#define SOCK_PACKET	10
#define SOCK_DGRAM	2
#define SOCK_RAW	3
#define SOCK_RDM	4
#define SOCK_SEQPACKET	5



#define SOL_IP	0
#define SOL_SOCKET	1
#define SO_DEBUG	1
#define SO_OOBINLINE	10
#define SO_NO_CHECK	11
#define SO_PRIORITY	12
#define SO_LINGER	13
#define SOL_UDP	17
#define SO_REUSEADDR	2
#define SOL_RAW	255
#define SO_TYPE	3
#define SO_ERROR	4
#define SO_DONTROUTE	5
#define SO_BROADCAST	6
#define SOL_TCP	6
#define SO_SNDBUF	7
#define SO_RCVBUF	8
#define SO_KEEPALIVE	9



int bind (int, struct sockaddr *, socklen_t);
int getsockname (int, struct sockaddr *, socklen_t *);
int listen (int, int);
int setsockopt (int, int, int, void *, socklen_t);
int accept (int, struct sockaddr *, socklen_t *);
int connect (int, struct sockaddr *, socklen_t);
int recv (int, void *, size_t, int);
int recvfrom (int, void *, size_t, int, struct sockaddr *, socklen_t *);
int recvmsg (int, struct msghdr *, int);
int send (int, void *, size_t, int);
int sendmsg (int, struct msghdr *, int);
int sendto (int, void *, size_t, int, struct sockaddr *, socklen_t);
int getpeername (int, struct sockaddr *, socklen_t *);
int getsockopt (int, int, int, void *, socklen_t *);
int shutdown (int, int);
int socket (int, int, int);
#endif
