#ifndef _NETINET_IN_H_
#define _NETINET_IN_H_

#include <sys/socket.h>
#include <inttypes.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define IN_MULTICAST(a)	((((in_addr_t)(a))&0xf0000000)==0xe0000000)
#define INADDR_NONE	((unsigned long int) 0xffffffff)
#define INADDR_BROADCAST	(0xffffffff)
#define INADDR_ANY	0
#define IPPROTO_IP	0
#define SOL_IP	0
#define INADDR_LOOPBACK	0x7f000001
#define IPPROTO_ICMP	1
#define IP_TOS	1
#define IPPROTO_UDP	17
#define IPPROTO_IGMP	2
#define IPPROTO_RAW	255
#define IPPROTO_TCP	6





  struct in_addr
  {
    uint32_t s_addr;
  }
   ;

  typedef uint32_t in_addr_t;




  struct sockaddr_in
  {
    sa_family_t sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    unsigned char sin_zero[8];
  }
   ;


  extern uint32_t htonl (uint32_t);
  extern uint16_t htons (uint16_t);
  extern uint32_t ntohl (uint32_t);
  extern uint16_t ntohs (uint16_t);
#ifdef __cplusplus
}
#endif
#endif
