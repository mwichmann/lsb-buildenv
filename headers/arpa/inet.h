#ifndef _ARPA_INET_H_
#define _ARPA_INET_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <inttypes.h>
#include <netinet/in.h>




  extern unsigned long inet_addr (char *);
  extern int inet_aton (char *, struct in_addr *);
  extern char *inet_ntoa (struct in_addr);
#ifdef __cplusplus
}
#endif
#endif
