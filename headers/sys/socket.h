#ifndef _SYS_SOCKET_H_
#define _SYS_SOCKET_H_

#include <inttypes.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define SHUT_RD	0
#define SCM_RIGHTS	0x01
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
#define SO_RCVLOWAT	18
#define SO_SNDLOWAT	19
#define MSG_PEEK	2
#define SHUT_RDWR	2
#define SO_RCVTIMEO	20
#define SO_SNDTIMEO	21
#define SO_ACCEPTCONN	30
#define MSG_DONTROUTE	4
#define MSG_CTRUNC	8
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

#if __i386__
/* IA32 */
  typedef uint32_t __ss_aligntype;

#endif
#if __ia64__
/* IA64 */
  typedef uint64_t __ss_aligntype;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef uint32_t __ss_aligntype;

#endif
#if __powerpc64__
/* PPC64 */
  typedef uint64_t __ss_aligntype;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef uint32_t __ss_aligntype;

#endif
#if __s390x__
/* S390X */
  typedef uint64_t __ss_aligntype;

#endif
#if __x86_64__
/* x86-64 */
  typedef uint64_t __ss_aligntype;

#endif



  struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  }
   ;

  struct sockaddr_storage
  {
    sa_family_t ss_family;
    __ss_aligntype __ss_align;
    char __ss_padding[(128 - (2 * sizeof (__ss_aligntype)))];
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
#define AF_INET6	10
#define AF_INET	2



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
  extern int getnameinfo (const struct sockaddr *, socklen_t, char *,
			  socklen_t, char *, socklen_t, unsigned int);
  extern int getsockname (int, struct sockaddr *, socklen_t *);
  extern int listen (int, int);
  extern int setsockopt (int, int, int, const void *, socklen_t);
  extern int accept (int, struct sockaddr *, socklen_t *);
  extern int connect (int, const struct sockaddr *, socklen_t);
  extern ssize_t recv (int, void *, size_t, int);
  extern ssize_t recvfrom (int, void *, size_t, int, struct sockaddr *,
			   socklen_t *);
  extern ssize_t recvmsg (int, struct msghdr *, int);
  extern ssize_t send (int, const void *, size_t, int);
  extern ssize_t sendmsg (int, const struct msghdr *, int);
  extern ssize_t sendto (int, const void *, size_t, int,
			 const struct sockaddr *, socklen_t);
  extern int getpeername (int, struct sockaddr *, socklen_t *);
  extern int getsockopt (int, int, int, void *, socklen_t *);
  extern int shutdown (int, int);
  extern int socket (int, int, int);
  extern int socketpair (int, int, int, int[2]);
  extern int sockatmark (int);
#ifdef __cplusplus
}
#endif
#endif
