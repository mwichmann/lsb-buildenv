#ifndef _NETINET_IN_H_
#define _NETINET_IN_H_

#include <sys/socket.h>
#include <sys/types.h>

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
  unsigned char __pad[1];
}
 ;


unsigned long htonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntohl (unsigned long);
unsigned short ntohs (unsigned short);
#endif
