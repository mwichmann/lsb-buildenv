#ifndef _ARPA_INET_H_
#define _ARPA_INET_H_

#include <inttypes.h>
#include <netinet/in.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern unsigned long inet_addr (const char *);
  extern int inet_aton (char *, struct in_addr *);
  extern char *inet_ntoa (struct in_addr);
  extern char *inet_ntop (int, void *, char *, size_t);
  extern int inet_pton (int, char *, void *);
#ifdef __cplusplus
}
#endif
#endif
