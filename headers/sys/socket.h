#ifndef _SYS_SOCKET_H_
#define _SYS_SOCKET_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define SHUT_RD	0
#define MSG_WAITALL	0x100
#define MSG_TRUNC	0x20
#define MSG_EOR	0x80
#define SIOCGIFCONF	0x8912
#define SIOCGIFFLAGS	0x8913
#define SIOCGIFADDR	0x8915
#define SIOCGIFNETMASK	0x891b
#define MSG_OOB	1
#define SHUT_WR	1
#define SO_BSDCOMPAT	14
#define MSG_PEEK	2
#define SHUT_RDWR	2
#define MSG_DONTROUTE	4
#define MSG_CTRUNC	8
#define PF_LOCAL	AF_LOCAL
#define PF_UNSPEC	AF_UNSPEC


  struct linger
  {
    int l_onoff;
    int l_linger;
  }
   ;

  struct cmsghdr
  {
    size_t cmsg_len;
    int cmsg_level;
    int cmsg_type;
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
    char sa_data[14];
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
#define AF_LOCAL	1
#define AF_UNIX	1
#define AF_INET6	10
#define AF_INET	2
#define AF_AX25	3
#define AF_IPX	4
#define AF_APPLETALK	5
#define AF_NETROM	6
#define AF_BRIDGE	7
#define AF_ATMPVC	8
#define AF_X25	9



#define PF_INET	AF_INET
#define PF_INET6	AF_INET6
#define PF_UNIX	AF_UNIX



#define SOCK_STREAM	1
#define SOCK_PACKET	10
#define SOCK_DGRAM	2
#define SOCK_RAW	3
#define SOCK_RDM	4
#define SOCK_SEQPACKET	5



#define SOL_SOCKET	1
#define SO_DEBUG	1
#define SO_OOBINLINE	10
#define SO_NO_CHECK	11
#define SO_PRIORITY	12
#define SO_LINGER	13
#define SO_REUSEADDR	2
#define SOL_RAW	255
#define SO_TYPE	3
#define SO_ERROR	4
#define SO_DONTROUTE	5
#define SO_BROADCAST	6
#define SO_SNDBUF	7
#define SO_RCVBUF	8
#define SO_KEEPALIVE	9



  extern int bind (int, const struct sockaddr *, socklen_t);
  extern int getnameinfo (struct sockaddr *, socklen_t, char *, size_t,
			  char *, size_t, int);
  extern int getsockname (int, struct sockaddr *, socklen_t *);
  extern int listen (int, int);
  extern int setsockopt (int, int, int, const void *, socklen_t);
  extern int accept (int, struct sockaddr *, socklen_t *);
  extern int connect (int, const struct sockaddr *, socklen_t);
  extern int recv (int, void *, size_t, int);
  extern int recvfrom (int, void *, size_t, int, struct sockaddr *,
		       socklen_t *);
  extern int recvmsg (int, struct msghdr *, int);
  extern int send (int, const void *, size_t, int);
  extern int sendmsg (int, const struct msghdr *, int);
  extern int sendto (int, const void *, size_t, int, const struct sockaddr *,
		     socklen_t);
  extern int getpeername (int, struct sockaddr *, socklen_t *);
  extern int getsockopt (int, int, int, void *, socklen_t *);
  extern int shutdown (int, int);
  extern int socket (int, int, int);
  extern int socketpair (int, int, int, int[2]);
#ifdef __cplusplus
}
#endif
#endif
