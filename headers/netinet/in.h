#ifndef _NETINET_IN_H_
#define _NETINET_IN_H_

#include <sys/socket.h>
#include <inttypes.h>

#define INADDR_BROADCAST	(0xffffffff)
#define INADDR_ANY	0





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
#endif
