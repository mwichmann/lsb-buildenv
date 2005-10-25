#ifndef _ARPA_INET_H_
#define _ARPA_INET_H_

#include <inttypes.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern uint32_t htonl(uint32_t);
    extern uint16_t htons(uint16_t);
    extern in_addr_t inet_addr(const char *);
    extern char *inet_ntoa(struct in_addr);
    extern const char *inet_ntop(int, const void *, char *, socklen_t);
    extern int inet_pton(int, const char *, void *);
    extern uint32_t ntohl(uint32_t);
    extern uint16_t ntohs(uint16_t);
#ifdef __cplusplus
}
#endif
#endif
