#ifndef _SYS_SOCKET_H_
#define _SYS_SOCKET_H_

#include <sys/types.h>

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
