#if (__LSB_VERSION__ >= 30 )
#ifndef _NETINET_IP_H_
#define _NETINET_IP_H_

#include <sys/types.h>
#include <netinet/in.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 40
#define IPOPT_EOL
#define IPOPT_OPTVAL
#define IPOPT_TS_TSONLY
#define IPOPT_CLASS(o)	((o) & IPOPT_CLASS_MASK)
#define IPOPT_COPIED(o)	((o) & IPOPT_COPY)
#define IPOPT_NUMBER(o)	((o) & IPOPT_NUMBER_MASK)
#define IPOPT_CONTROL	0x00
#define IPOPT_SECUR_UNCLASS	0x0000
#define IPOPT_NUMBER_MASK	0x1f
#define IP_OFFMASK	0x1fff
#define IPOPT_RESERVED1	0x20
#define IP_MF	0x2000
#define IPOPT_DEBMEAS	0x40
#define IP_DF	0x4000
#define IPOPT_CLASS_MASK	0x60
#define IPOPT_RESERVED2	0x60
#define IPOPT_SECUR_TOPSECRET	0x6bc5
#define IPOPT_SECUR_EFTO	0x789a
#define IPOPT_COPY	0x80
#define IP_RF	0x8000
#define IPOPT_SECUR_RESTR	0xaf13
#define IPOPT_SECUR_MMMM	0xbc4d
#define IPOPT_SECUR_SECRET	0xd788
#define IPOPT_SECUR_CONFID	0xf135
#define IPOPT_NOP	1
#define IPOPT_OLEN	1
#define IPOPT_TS_TSANDADDR	1
#define IPTTLDEC	1
#define IPOPT_SECURITY	130
#define IPOPT_LSRR	131
#define IPOPT_SATID	136
#define IPOPT_SSRR	137
#define IPOPT_RA	148
#define IPOPT_OFFSET	2
#define MAXTTL	255
#define IPOPT_TS_PRESPEC	3
#define IPOPT_MINOFF	4
#define IPVERSION	4
#define MAX_IPOPTLEN	40
#define IP_MSS	576
#define IPFRAGTTL	60
#define IPDEFTTL	64
#define IP_MAXPACKET	65535
#define IPOPT_TS	68
#define IPOPT_RR	7
#define IPOPT_MEASUREMENT	IPOPT_DEBMEAS
#define IPOPT_END	IPOPT_EOL
#define IPOPT_NOOP	IPOPT_NOP
#define IPOPT_SID	IPOPT_SATID
#define IPOPT_SEC	IPOPT_SECURITY
#define IPOPT_TIMESTAMP	IPOPT_TS
#endif				/* __LSB_VERSION__ >= 4.0 */



#if __LSB_VERSION__ >= 40
#if defined __i386__
/* IA32 */
    struct timestamp {
	u_int8_t len;
	u_int8_t ptr;
	unsigned int flags:4;
	unsigned int overflow:4;
	u_int32_t data[9];
    };

#endif
#if defined __ia64__
/* IA64 */
    struct timestamp {
	u_int8_t len;
	u_int8_t ptr;
	unsigned int flags:4;
	unsigned int overflow:4;
	u_int32_t data[9];
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct timestamp {
	u_int8_t len;
	u_int8_t ptr;
	unsigned int overflow:4;
	unsigned int flags:4;
	u_int32_t data[9];
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct timestamp {
	u_int8_t len;
	u_int8_t ptr;
	unsigned int overflow:4;
	unsigned int flags:4;
	u_int32_t data[9];
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct timestamp {
	u_int8_t len;
	u_int8_t ptr;
	unsigned int overflow:4;
	unsigned int flags:4;
	u_int32_t data[9];
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct timestamp {
	u_int8_t len;
	u_int8_t ptr;
	unsigned int flags:4;
	unsigned int overflow:4;
	u_int32_t data[9];
    };

#endif
#if defined __s390x__
/* S390X */
    struct timestamp {
	u_int8_t len;
	u_int8_t ptr;
	unsigned int overflow:4;
	unsigned int flags:4;
	u_int32_t data[9];
    };

#endif
#if defined __i386__
/* IA32 */
    struct iphdr {
	unsigned int ihl:4;
	unsigned int version:4;
	u_int8_t tos;
	u_int16_t tot_len;
	u_int16_t id;
	u_int16_t frag_off;
	u_int8_t ttl;
	u_int8_t protocol;
	u_int16_t check;
	u_int32_t saddr;
	u_int32_t daddr;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct iphdr {
	unsigned int ihl:4;
	unsigned int version:4;
	u_int8_t tos;
	u_int16_t tot_len;
	u_int16_t id;
	u_int16_t frag_off;
	u_int8_t ttl;
	u_int8_t protocol;
	u_int16_t check;
	u_int32_t saddr;
	u_int32_t daddr;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct iphdr {
	unsigned int version:4;
	unsigned int ihl:4;
	u_int8_t tos;
	u_int16_t tot_len;
	u_int16_t id;
	u_int16_t frag_off;
	u_int8_t ttl;
	u_int8_t protocol;
	u_int16_t check;
	u_int32_t saddr;
	u_int32_t daddr;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct iphdr {
	unsigned int version:4;
	unsigned int ihl:4;
	u_int8_t tos;
	u_int16_t tot_len;
	u_int16_t id;
	u_int16_t frag_off;
	u_int8_t ttl;
	u_int8_t protocol;
	u_int16_t check;
	u_int32_t saddr;
	u_int32_t daddr;
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct iphdr {
	unsigned int version:4;
	unsigned int ihl:4;
	u_int8_t tos;
	u_int16_t tot_len;
	u_int16_t id;
	u_int16_t frag_off;
	u_int8_t ttl;
	u_int8_t protocol;
	u_int16_t check;
	u_int32_t saddr;
	u_int32_t daddr;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct iphdr {
	unsigned int ihl:4;
	unsigned int version:4;
	u_int8_t tos;
	u_int16_t tot_len;
	u_int16_t id;
	u_int16_t frag_off;
	u_int8_t ttl;
	u_int8_t protocol;
	u_int16_t check;
	u_int32_t saddr;
	u_int32_t daddr;
    };

#endif
#if defined __s390x__
/* S390X */
    struct iphdr {
	unsigned int version:4;
	unsigned int ihl:4;
	u_int8_t tos;
	u_int16_t tot_len;
	u_int16_t id;
	u_int16_t frag_off;
	u_int8_t ttl;
	u_int8_t protocol;
	u_int16_t check;
	u_int32_t saddr;
	u_int32_t daddr;
    };

#endif
#if defined __i386__
/* IA32 */
    struct ip {
	unsigned int ip_hl:4;
	unsigned int ip_v:4;
	u_int8_t ip_tos;
	u_short ip_len;
	u_short ip_id;
	u_short ip_off;
	u_int8_t ip_ttl;
	u_int8_t ip_p;
	u_short ip_sum;
	struct in_addr ip_src;
	struct in_addr ip_dst;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct ip {
	unsigned int ip_hl:4;
	unsigned int ip_v:4;
	u_int8_t ip_tos;
	u_short ip_len;
	u_short ip_id;
	u_short ip_off;
	u_int8_t ip_ttl;
	u_int8_t ip_p;
	u_short ip_sum;
	struct in_addr ip_src;
	struct in_addr ip_dst;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct ip {
	unsigned int ip_v:4;
	unsigned int ip_hl:4;
	u_int8_t ip_tos;
	u_short ip_len;
	u_short ip_id;
	u_short ip_off;
	u_int8_t ip_ttl;
	u_int8_t ip_p;
	u_short ip_sum;
	struct in_addr ip_src;
	struct in_addr ip_dst;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct ip {
	unsigned int ip_v:4;
	unsigned int ip_hl:4;
	u_int8_t ip_tos;
	u_short ip_len;
	u_short ip_id;
	u_short ip_off;
	u_int8_t ip_ttl;
	u_int8_t ip_p;
	u_short ip_sum;
	struct in_addr ip_src;
	struct in_addr ip_dst;
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct ip {
	unsigned int ip_v:4;
	unsigned int ip_hl:4;
	u_int8_t ip_tos;
	u_short ip_len;
	u_short ip_id;
	u_short ip_off;
	u_int8_t ip_ttl;
	u_int8_t ip_p;
	u_short ip_sum;
	struct in_addr ip_src;
	struct in_addr ip_dst;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct ip {
	unsigned int ip_hl:4;
	unsigned int ip_v:4;
	u_int8_t ip_tos;
	u_short ip_len;
	u_short ip_id;
	u_short ip_off;
	u_int8_t ip_ttl;
	u_int8_t ip_p;
	u_short ip_sum;
	struct in_addr ip_src;
	struct in_addr ip_dst;
    };

#endif
#if defined __s390x__
/* S390X */
    struct ip {
	unsigned int ip_v:4;
	unsigned int ip_hl:4;
	u_int8_t ip_tos;
	u_short ip_len;
	u_short ip_id;
	u_short ip_off;
	u_int8_t ip_ttl;
	u_int8_t ip_p;
	u_short ip_sum;
	struct in_addr ip_src;
	struct in_addr ip_dst;
    };

#endif
#if defined __i386__
/* IA32 */
    struct ip_timestamp {
	u_int8_t ipt_code;
	u_int8_t ipt_len;
	u_int8_t ipt_ptr;
	unsigned int ipt_flg:4;
	unsigned int ipt_oflw:4;
	u_int32_t data[9];
    };

#endif
#if defined __ia64__
/* IA64 */
    struct ip_timestamp {
	u_int8_t ipt_code;
	u_int8_t ipt_len;
	u_int8_t ipt_ptr;
	unsigned int ipt_flg:4;
	unsigned int ipt_oflw:4;
	u_int32_t data[9];
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct ip_timestamp {
	u_int8_t ipt_len;
	u_int8_t ipt_code;
	u_int8_t ipt_ptr;
	unsigned int ipt_flg:4;
	unsigned int ipt_oflw:4;
	u_int32_t data[9];
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct ip_timestamp {
	u_int8_t ipt_len;
	u_int8_t ipt_code;
	u_int8_t ipt_ptr;
	unsigned int ipt_flg:4;
	unsigned int ipt_oflw:4;
	u_int32_t data[9];
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct ip_timestamp {
	u_int8_t ipt_len;
	u_int8_t ipt_code;
	u_int8_t ipt_ptr;
	unsigned int ipt_flg:4;
	unsigned int ipt_oflw:4;
	u_int32_t data[9];
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct ip_timestamp {
	u_int8_t ipt_code;
	u_int8_t ipt_len;
	u_int8_t ipt_ptr;
	unsigned int ipt_flg:4;
	unsigned int ipt_oflw:4;
	u_int32_t data[9];
    };

#endif
#if defined __s390x__
/* S390X */
    struct ip_timestamp {
	u_int8_t ipt_len;
	u_int8_t ipt_code;
	u_int8_t ipt_ptr;
	unsigned int ipt_flg:4;
	unsigned int ipt_oflw:4;
	u_int32_t data[9];
    };

#endif
#endif				/* __LSB_VERSION__ >= 4.0 */


/* Definitions for IP type of service*/
#define IPTOS_TOS(tos)	((tos) & IPTOS_TOS_MASK)
#define IPTOS_LOWCOST	0x02
#define IPTOS_RELIABILITY	0x04
#define IPTOS_THROUGHPUT	0x08
#define IPTOS_LOWDELAY	0x10
#define IPTOS_TOS_MASK	0x1e
#define IPTOS_MINCOST	IPTOS_LOWCOST



/* Definitions for IP precedence*/
#define IPTOS_PREC(tos)	((tos) & IPTOS_PREC_MASK)
#define IPTOS_PREC_MASK	0xe0


#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
