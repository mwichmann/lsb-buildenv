#ifndef _NETINET_IN_H_
#define _NETINET_IN_H_

#include <inttypes.h>
#include <sys/socket.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define IN6_IS_ADDR_LINKLOCAL(a)	((((const uint32_t *) (a))[0] & htonl (0xffc00000)) == htonl (0xfe800000))
#define IN6_IS_ADDR_SITELOCAL(a)	((((const uint32_t *) (a))[0] & htonl (0xffc00000)) == htonl (0xfec00000))
#define IN6_IS_ADDR_V4COMPAT(a)	((((const uint32_t *) (a))[0] == 0) && (((const uint32_t *) (a))[1] == 0) && (((const uint32_t *) (a))[2] == 0) && (ntohl (((const uint32_t *) (a))[3]) > 1))
#define IN6_IS_ADDR_V4MAPPED(a)	((((const uint32_t *) (a))[0] == 0) && (((const uint32_t *) (a))[1] == 0) && (((const uint32_t *) (a))[2] == htonl (0xffff)))
#define IN_MULTICAST(a)	((((in_addr_t)(a))&0xf0000000)==0xe0000000)
#define IN6_IS_ADDR_UNSPECIFIED(a)	(((const uint32_t *) (a))[0] == 0 && ((const uint32_t *) (a))[1] == 0 && ((const uint32_t *) (a))[2] == 0 && ((const uint32_t *) (a))[3] == 0)
#define IN6_IS_ADDR_LOOPBACK(a)	(((const uint32_t *) (a))[0] == 0 && ((const uint32_t *) (a))[1] == 0 && ((const uint32_t *) (a))[2] == 0 && ((const uint32_t *) (a))[3] == htonl (1))
#define IN6_IS_ADDR_MULTICAST(a)	(((const uint8_t *) (a))[0] == 0xff)
#define INADDR_NONE	((unsigned long int) 0xffffffff)
#define INADDR_BROADCAST	(0xffffffff)
#define IN6_IS_ADDR_MC_NODELOCAL(a)	(IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define IN6_IS_ADDR_MC_LINKLOCAL(a)	(IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define IN6_IS_ADDR_MC_SITELOCAL(a)	(IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define IN6_IS_ADDR_MC_ORGLOCAL(a)	(IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define IN6_IS_ADDR_MC_GLOBAL(a)	(IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#define INADDR_ANY	0
#define IPPROTO_IP	0
#define SOL_IP	0
#define INADDR_LOOPBACK	0x7f000001
#define IPPROTO_ICMP	1
#define IP_TOS	1
#define INET_ADDRSTRLEN	16
#define IPV6_UNICAST_HOPS	16
#define IPPROTO_UDP	17
#define IPV6_MULTICAST_IF	17
#define IPV6_MULTICAST_HOPS	18
#define IPV6_MULTICAST_LOOP	19
#define IPPROTO_IGMP	2
#define IPV6_JOIN_GROUP	20
#define IPV6_LEAVE_GROUP	21
#define IPPROTO_RAW	255
#define INET6_ADDRSTRLEN	46
#define IPPROTO_IPV6	58
#define IPPROTO_TCP	6
#define IPV6_ADD_MEMBERSHIP	IPV6_JOIN_GROUP
#define IPV6_DROP_MEMBERSHIP	IPV6_LEAVE_GROUP
#define IN6ADDR_ANY_INIT	{ { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define IN6ADDR_LOOPBACK_INIT	{ { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }


  struct in6_addr
  {
    union
    {
      uint8_t u6_addr8;
      uint16_t u6_addr16;
      uint32_t u6_addr32;
    }
    in6_u;
  }
   ;

  struct in6_ifreq
  {
    struct in6_addr ifr6_addr;
    uint32_t ifr6_prefixlen;
    int ifr6_ifindex;
  }
   ;




  struct in_addr
  {
    uint32_t s_addr;
  }
   ;

  typedef uint32_t in_addr_t;

  typedef uint16_t in_port_t;




  struct sockaddr_in
  {
    sa_family_t sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    unsigned char sin_zero[8];
  }
   ;


/* Multicast interfaces to setsockopt()*/
#define IP_MULTICAST_IF	32
#define IP_MULTICAST_TTL	33
#define IP_MULTICAST_LOOP	34
#define IP_ADD_MEMBERSHIP	35
#define IP_DROP_MEMBERSHIP	36


  struct ip_mreq
  {
    struct in_addr imr_multiaddr;	/* IP multicast address of group */
    struct in_addr imr_interface;	/* local IP address of interface */
  }
   ;


  extern int bindresvport (int, struct sockaddr_in *);
  extern uint32_t htonl (uint32_t);
  extern uint16_t htons (uint16_t);
  extern uint32_t ntohl (uint32_t);
  extern uint16_t ntohs (uint16_t);
#ifdef __cplusplus
}
#endif
#endif
