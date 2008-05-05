#if (__LSB_VERSION__ >= 11 )
#ifndef _ARPA_INET_H_
#define _ARPA_INET_H_

#include <sys/socket.h>
#include <netinet/in.h>
#include <stdint.h>

#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern uint32_t htonl(uint32_t);
    extern uint16_t htons(uint16_t);
    extern in_addr_t inet_addr(const char *);
    extern char *inet_ntoa(struct in_addr);
    extern uint32_t ntohl(uint32_t);
    extern uint16_t ntohs(uint16_t);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 13
    extern const char *inet_ntop(int, const void *, char *, socklen_t);
    extern int inet_pton(int, const char *, void *);
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 32
    extern int inet_aton(const char *,
			 struct in_addr *) LSB_DECL_DEPRECATED;
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
