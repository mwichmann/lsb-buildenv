#ifndef _ARPA_INET_H_
#define _ARPA_INET_H_

#include <inttypes.h>
#include <netinet/in.h>




unsigned long inet_addr (char *);
int inet_aton (char *, struct in_addr *);
char *inet_ntoa (struct in_addr);
#endif
