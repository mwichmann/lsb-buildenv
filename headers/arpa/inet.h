#ifndef _ARPA_INET_H_
#define _ARPA_INET_H_

#include <inttypes.h>
#include <stddef.h>
#include <netinet/in.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern in_addr_t inet_addr (const char *);
  extern char *inet_ntoa (struct in_addr);
  extern const char *inet_ntop (int, const void *, char *, size_t);
  extern int inet_pton (int, const char *, void *);
#ifdef __cplusplus
}
#endif
#endif
