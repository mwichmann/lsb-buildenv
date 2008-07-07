#if (__LSB_VERSION__ >= 10 )
#ifndef _SYS_SOCKET_H_
#define _SYS_SOCKET_H_

#include <sys/types.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define SOL_SOCKET	1
#define SOL_RAW	255
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 21
#define SCM_RIGHTS	0x01
#define SOMAXCONN	128
#endif				/* __LSB_VERSION__ >= 2.1 */

#if __LSB_VERSION__ >= 30
#define CMSG_LEN(len)	(CMSG_ALIGN(sizeof(struct cmsghdr))+(len))
#define CMSG_ALIGN(len)	\
	(((len)+sizeof(size_t)-1)&(size_t)~(sizeof(size_t)-1))
#define CMSG_DATA(cmsg)	\
	((unsigned char *) (cmsg) + CMSG_ALIGN(sizeof(struct cmsghdr)))
#define CMSG_SPACE(len)	\
	(CMSG_ALIGN(sizeof(struct cmsghdr))+CMSG_ALIGN(len))
#define CMSG_FIRSTHDR(msg)	\
           ((msg)->msg_controllen >= sizeof(struct cmsghdr) ? \
            (struct cmsghdr *)(msg)->msg_control : \
            (struct cmsghdr *)NULL)
#define CMSG_NXTHDR(mhdr,cmsg)	\
        (((cmsg) == NULL) ? CMSG_FIRSTHDR(mhdr) : \
         (((u_char *)(cmsg) + CMSG_ALIGN((cmsg)->cmsg_len) \
                            + CMSG_ALIGN(sizeof(struct cmsghdr)) > \
           (u_char *)((mhdr)->msg_control) + (mhdr)->msg_controllen) ? \
          (struct cmsghdr *)NULL : \
          (struct cmsghdr *)((u_char *)(cmsg) + CMSG_ALIGN((cmsg)->cmsg_len))))
#endif				/* __LSB_VERSION__ >= 3.0 */



#if __LSB_VERSION__ >= 12
    struct linger {
	int l_onoff;
	int l_linger;
    };

    struct cmsghdr {
	size_t cmsg_len;
	int cmsg_level;
	int cmsg_type;
    };

    struct iovec {
	void *iov_base;
	size_t iov_len;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef unsigned short sa_family_t;

    typedef unsigned int socklen_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    typedef uint32_t __ss_aligntype;

#endif
#if defined __ia64__
/* IA64 */
    typedef uint64_t __ss_aligntype;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef uint32_t __ss_aligntype;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef uint64_t __ss_aligntype;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef uint32_t __ss_aligntype;

#endif
#if defined __s390x__
/* S390X */
    typedef uint64_t __ss_aligntype;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef uint64_t __ss_aligntype;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


#if __LSB_VERSION__ >= 12
    struct sockaddr {
	sa_family_t sa_family;
	char sa_data[14];
    };

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
    struct sockaddr_storage {
	sa_family_t ss_family;
	__ss_aligntype __ss_align;
	char __ss_padding[(128 - (2 * sizeof(__ss_aligntype)))];
    };

#endif				/* __LSB_VERSION__ >= 2.0 */


#if __LSB_VERSION__ >= 12
    struct msghdr {
	void *msg_name;
	int msg_namelen;
	struct iovec *msg_iov;
	size_t msg_iovlen;
	void *msg_control;
	size_t msg_controllen;
	unsigned int msg_flags;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Address Families*/
#if __LSB_VERSION__ >= 11
#define AF_UNSPEC	0
#define AF_UNIX	1
#define AF_INET6	10
#define AF_INET	2
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Protocol Families*/
#if __LSB_VERSION__ >= 12
#define PF_INET	AF_INET
#define PF_INET6	AF_INET6
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#define PF_UNIX	AF_UNIX
#define PF_UNSPEC	AF_UNSPEC
#endif				/* __LSB_VERSION__ >= 1.3 */




#if __LSB_VERSION__ >= 11
#define SOCK_STREAM	1
#define SOCK_PACKET	10
#define SOCK_DGRAM	2
#define SOCK_RAW	3
#define SOCK_RDM	4
#define SOCK_SEQPACKET	5
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Socket Options*/
#if __LSB_VERSION__ >= 10
#define SO_BSDCOMPAT	14
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 11
#define SO_DEBUG	1
#define SO_OOBINLINE	10
#define SO_NO_CHECK	11
#define SO_PRIORITY	12
#define SO_LINGER	13
#define SO_REUSEADDR	2
#define SO_TYPE	3
#define SO_ERROR	4
#define SO_DONTROUTE	5
#define SO_BROADCAST	6
#define SO_SNDBUF	7
#define SO_RCVBUF	8
#define SO_KEEPALIVE	9
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 21
#if defined __powerpc__ && !defined __powerpc64__
#define SO_RCVLOWAT	16
#endif
#if defined __powerpc64__
#define SO_RCVLOWAT	16
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define SO_SNDLOWAT	17
#endif
#if defined __powerpc64__
#define SO_SNDLOWAT	17
#endif
#if defined __i386__
#define SO_RCVLOWAT	18
#endif
#if defined __ia64__
#define SO_RCVLOWAT	18
#endif
#if defined __s390__ && !defined __s390x__
#define SO_RCVLOWAT	18
#endif
#if defined __x86_64__
#define SO_RCVLOWAT	18
#endif
#if defined __s390x__
#define SO_RCVLOWAT	18
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define SO_RCVTIMEO	18
#endif
#if defined __powerpc64__
#define SO_RCVTIMEO	18
#endif
#if defined __i386__
#define SO_SNDLOWAT	19
#endif
#if defined __ia64__
#define SO_SNDLOWAT	19
#endif
#if defined __s390__ && !defined __s390x__
#define SO_SNDLOWAT	19
#endif
#if defined __x86_64__
#define SO_SNDLOWAT	19
#endif
#if defined __s390x__
#define SO_SNDLOWAT	19
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define SO_SNDTIMEO	19
#endif
#if defined __powerpc64__
#define SO_SNDTIMEO	19
#endif
#if defined __i386__
#define SO_RCVTIMEO	20
#endif
#if defined __ia64__
#define SO_RCVTIMEO	20
#endif
#if defined __s390__ && !defined __s390x__
#define SO_RCVTIMEO	20
#endif
#if defined __x86_64__
#define SO_RCVTIMEO	20
#endif
#if defined __s390x__
#define SO_RCVTIMEO	20
#endif
#if defined __i386__
#define SO_SNDTIMEO	21
#endif
#if defined __ia64__
#define SO_SNDTIMEO	21
#endif
#if defined __s390__ && !defined __s390x__
#define SO_SNDTIMEO	21
#endif
#if defined __x86_64__
#define SO_SNDTIMEO	21
#endif
#if defined __s390x__
#define SO_SNDTIMEO	21
#endif
#define SO_ACCEPTCONN	30
#endif				/* __LSB_VERSION__ >= 2.1 */




/* ioctl() commands which are permitted on sockets.*/
#if __LSB_VERSION__ >= 13
#define SIOCGIFFLAGS	0x8913
#define SIOCGIFADDR	0x8915
#define SIOCGIFNETMASK	0x891b
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 31
#define SIOCGIFNAME	0x8910
#define SIOCGIFCONF	0x8912
#define SIOCGIFDSTADDR	0x8917
#define SIOCGIFBRDADDR	0x8919
#define SIOCGIFMTU	0x8921
#define SIOCGIFHWADDR	0x8927
#endif				/* __LSB_VERSION__ >= 3.1 */




/* Flags for the 'how' argument to shutdown()*/
#if __LSB_VERSION__ >= 12
#define SHUT_RD	0
#define SHUT_WR	1
#define SHUT_RDWR	2
#endif				/* __LSB_VERSION__ >= 1.2 */




/* flags used in recvmsg()*/
#if __LSB_VERSION__ >= 12
#define MSG_WAITALL	0x100
#define MSG_TRUNC	0x20
#define MSG_EOR	0x80
#define MSG_OOB	1
#define MSG_PEEK	2
#define MSG_DONTROUTE	4
#define MSG_CTRUNC	8
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
#define MSG_NOSIGNAL	0x4000
#endif				/* __LSB_VERSION__ >= 4.0 */




/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int accept(int, struct sockaddr *, socklen_t *);
    extern int bind(int, const struct sockaddr *, socklen_t);
    extern int connect(int, const struct sockaddr *, socklen_t);
    extern int getpeername(int, struct sockaddr *, socklen_t *);
    extern int getsockname(int, struct sockaddr *, socklen_t *);
    extern int getsockopt(int, int, int, void *, socklen_t *);
    extern int listen(int, int);
    extern ssize_t recv(int, void *, size_t, int);
    extern ssize_t recvfrom(int, void *, size_t, int, struct sockaddr *,
			    socklen_t *);
    extern ssize_t recvmsg(int, struct msghdr *, int);
    extern ssize_t send(int, const void *, size_t, int);
    extern ssize_t sendmsg(int, const struct msghdr *, int);
    extern ssize_t sendto(int, const void *, size_t, int,
			  const struct sockaddr *, socklen_t);
    extern int setsockopt(int, int, int, const void *, socklen_t);
    extern int shutdown(int, int);
    extern int socket(int, int, int);
    extern int socketpair(int, int, int, int[2]);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 13
    extern int getnameinfo(const struct sockaddr *, socklen_t, char *,
			   socklen_t, char *, socklen_t, unsigned int);
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 30
    extern int sockatmark(int);
#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 40
    extern ssize_t __recv_chk(int, void *, size_t, size_t, int);
    extern ssize_t __recvfrom_chk(int, void *, size_t, size_t, int,
				  struct sockaddr *, socklen_t *);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
