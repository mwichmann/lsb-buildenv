#ifndef _NETINET_IN_H_
#define _NETINET_IN_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <sys/socket.h>
#include <inttypes.h>

#define INADDR_NONE	((unsigned long int) 0xffffffff)
#define INADDR_BROADCAST	(0xffffffff)
#define INADDR_ANY	0
#define IPPROTO_IP	0
#define IP_TOS	1
#define IPPROTO_ICMP	1
#define IPPROTO_UDP	17
#define IPPROTO_IGMP	2
#define IPPROTO_RAW	255
#define IPPROTO_TCP	6





  struct in_addr
  {
    uint32_t s_addr;
  }
   ;




  struct sockaddr_in
  {
    sa_family_t sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    unsigned char __pad[8];
  }
   ;


  extern unsigned long htonl (unsigned long);
  extern unsigned short htons (unsigned short);
  extern unsigned long ntohl (unsigned long);
  extern unsigned short ntohs (unsigned short);
#ifdef __cplusplus
}
#endif
#endif
