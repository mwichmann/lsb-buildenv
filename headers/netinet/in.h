#if (__LSB_VERSION__ >= 11 )
#ifndef _NETINET_IN_H_
#define _NETINET_IN_H_

#include <sys/socket.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Standard well-defined IP protocols.*/
#if __LSB_VERSION__ >= 12
#define IPPROTO_IP	0
#define IPPROTO_ICMP	1
#define IPPROTO_UDP	17
#define IPPROTO_IGMP	2
#define IPPROTO_RAW	255
#define IPPROTO_TCP	6
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#define IPPROTO_IPV6	41
#define IPPROTO_ICMPV6	58
#endif				/* __LSB_VERSION__ >= 2.0 */




/* Type to represent a port.*/
#if __LSB_VERSION__ >= 20
    typedef uint16_t in_port_t;

#endif				/* __LSB_VERSION__ >= 2.0 */


/* Standard well-known ports.*/

/* Address structures for IPv4*/
#if __LSB_VERSION__ >= 13
    typedef uint32_t in_addr_t;

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 11
    struct in_addr {
	uint32_t s_addr;
    };

#include <arpa/inet.h>
#endif				/* __LSB_VERSION__ >= 1.1 */


/* Well Know IPv4 addresses*/
#if __LSB_VERSION__ >= 11
#define INADDR_ANY	0
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#define INADDR_NONE	((in_addr_t) 0xffffffff)
#define INADDR_BROADCAST	(0xffffffff)
#endif				/* __LSB_VERSION__ >= 1.2 */




/* Address structures for IPv6*/
#if __LSB_VERSION__ >= 20
#define s6_addr16	in6_u.u6_addr16
#define s6_addr32	in6_u.u6_addr32
#define s6_addr	in6_u.u6_addr8
#endif				/* __LSB_VERSION__ >= 2.0 */



#if __LSB_VERSION__ >= 20
    struct in6_addr {
	union {
	    uint8_t u6_addr8[16];
	    uint16_t u6_addr16[8];
	    uint32_t u6_addr32[4];
	} in6_u;
    };

#endif				/* __LSB_VERSION__ >= 2.0 */


/* Well known IPV6 addresses*/
#if __LSB_VERSION__ >= 20
#define IN6ADDR_ANY_INIT	{ { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define IN6ADDR_LOOPBACK_INIT	{ { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#endif				/* __LSB_VERSION__ >= 2.0 */




/* Structure describing an Internet socket V4 address.*/
#if __LSB_VERSION__ >= 20
#define INET_ADDRSTRLEN	16
#endif				/* __LSB_VERSION__ >= 2.0 */



#if __LSB_VERSION__ >= 11
    struct sockaddr_in {
	sa_family_t sin_family;
	unsigned short sin_port;
	struct in_addr sin_addr;
	unsigned char sin_zero[8];
    };

#endif				/* __LSB_VERSION__ >= 1.1 */


/* Structure describing an Internet socket V6 address.*/
#if __LSB_VERSION__ >= 20
#define INET6_ADDRSTRLEN	46
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 31
#define IN6_ARE_ADDR_EQUAL(a,b)	((((const uint32_t *) (a))[0] == ((const uint32_t *) (b))[0]) && (((const uint32_t *) (a))[1] == ((const uint32_t *) (b))[1]) && (((const uint32_t *) (a))[2] == ((const uint32_t *) (b))[2]) && (((const uint32_t *) (a))[3] == ((const uint32_t *) (b))[3]))
#endif				/* __LSB_VERSION__ >= 3.1 */



#if __LSB_VERSION__ >= 20
    struct sockaddr_in6 {
	unsigned short sin6_family;	/* AF_INET6 */
	uint16_t sin6_port;	/* Transport layer port # */
	uint32_t sin6_flowinfo;	/* IPv6 flow information */
	struct in6_addr sin6_addr;	/* IPv6 address */
	uint32_t sin6_scope_id;	/* scope id (new in RFC2553) */
    };

#endif				/* __LSB_VERSION__ >= 2.0 */


/* IP Socket options*/
#if __LSB_VERSION__ >= 11
#define SOL_IP	0
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#define IP_TOS	1		/* IP type of service and precedence */
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#define IPV6_UNICAST_HOPS	16
#define IPV6_MULTICAST_IF	17
#define IPV6_MULTICAST_HOPS	18
#define IPV6_MULTICAST_LOOP	19
#define IPV6_JOIN_GROUP	20
#define IPV6_LEAVE_GROUP	21
#define IPV6_V6ONLY	26
#define IP_MULTICAST_IF	32	/* set/get IP multicast i/f */
#define IP_MULTICAST_TTL	33	/* set/get IP multicast ttl */
#define IP_MULTICAST_LOOP	34	/* set/get IP multicast loopback */
#define IP_ADD_MEMBERSHIP	35	/* add an IP group membership */
#define IP_DROP_MEMBERSHIP	36	/* drop an IP group membership */
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 30
#define IP_TTL	2		/* IP time to live */
#define IP_OPTIONS	4	/* IP per-packet options */
#endif				/* __LSB_VERSION__ >= 3.0 */




/* Multicast interfaces to setsockopt()*/
#if __LSB_VERSION__ >= 20
    struct ipv6_mreq {
	struct in6_addr ipv6mr_multiaddr;	/* IPv6 multicast address of group */
	int ipv6mr_interface;	/* local IPv6 address of interface */
    };

    struct ip_mreq {
	struct in_addr imr_multiaddr;	/* IP multicast address of group */
	struct in_addr imr_interface;	/* local IP address of interface */
    };

#endif				/* __LSB_VERSION__ >= 2.0 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int bindresvport(int, struct sockaddr_in *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 32
    extern const struct in6_addr in6addr_any;
    extern const struct in6_addr in6addr_loopback;
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
