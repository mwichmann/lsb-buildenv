#if (__LSB_VERSION__ >= 40 )
#ifndef _NETINET_IP6_H_
#define _NETINET_IP6_H_

#include <netinet/in.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define IP6OPT_TYPE(o)	((o) & 0xc0)
#define IP6OPT_PAD1	0
#define IP6OPT_TYPE_SKIP	0x00
#if defined __i386__
#define IP6_ALERT_MLD	0x0000
#endif
#if defined __ia64__
#define IP6_ALERT_MLD	0x0000
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define IP6_ALERT_MLD	0x0000
#endif
#if defined __powerpc64__
#define IP6_ALERT_MLD	0x0000
#endif
#if defined __s390__ && !defined __s390x__
#define IP6_ALERT_MLD	0x0000
#endif
#if defined __x86_64__
#define IP6_ALERT_MLD	0x0000
#endif
#if defined __s390x__
#define IP6_ALERT_MLD	0x0000
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define IP6F_MORE_FRAG	0x0001
#endif
#if defined __powerpc64__
#define IP6F_MORE_FRAG	0x0001
#endif
#if defined __s390__ && !defined __s390x__
#define IP6F_MORE_FRAG	0x0001
#endif
#if defined __s390x__
#define IP6F_MORE_FRAG	0x0001
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define IP6_ALERT_RSVP	0x0001
#endif
#if defined __powerpc64__
#define IP6_ALERT_RSVP	0x0001
#endif
#if defined __s390__ && !defined __s390x__
#define IP6_ALERT_RSVP	0x0001
#endif
#if defined __s390x__
#define IP6_ALERT_RSVP	0x0001
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define IP6_ALERT_AN	0x0002
#endif
#if defined __powerpc64__
#define IP6_ALERT_AN	0x0002
#endif
#if defined __s390__ && !defined __s390x__
#define IP6_ALERT_AN	0x0002
#endif
#if defined __s390x__
#define IP6_ALERT_AN	0x0002
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define IP6F_RESERVED_MASK	0x0006
#endif
#if defined __powerpc64__
#define IP6F_RESERVED_MASK	0x0006
#endif
#if defined __s390__ && !defined __s390x__
#define IP6F_RESERVED_MASK	0x0006
#endif
#if defined __s390x__
#define IP6F_RESERVED_MASK	0x0006
#endif
#if defined __i386__
#define IP6F_MORE_FRAG	0x0100
#endif
#if defined __ia64__
#define IP6F_MORE_FRAG	0x0100
#endif
#if defined __x86_64__
#define IP6F_MORE_FRAG	0x0100
#endif
#if defined __i386__
#define IP6_ALERT_RSVP	0x0100
#endif
#if defined __ia64__
#define IP6_ALERT_RSVP	0x0100
#endif
#if defined __x86_64__
#define IP6_ALERT_RSVP	0x0100
#endif
#if defined __i386__
#define IP6_ALERT_AN	0x0200
#endif
#if defined __ia64__
#define IP6_ALERT_AN	0x0200
#endif
#if defined __x86_64__
#define IP6_ALERT_AN	0x0200
#endif
#define IP6OPT_TUNNEL_LIMIT	0x04
#define IP6OPT_ROUTER_ALERT	0x05
#if defined __i386__
#define IP6F_RESERVED_MASK	0x0600
#endif
#if defined __ia64__
#define IP6F_RESERVED_MASK	0x0600
#endif
#if defined __x86_64__
#define IP6F_RESERVED_MASK	0x0600
#endif
#define IP6OPT_TYPE_MUTABLE	0x20
#define IP6OPT_TYPE_DISCARD	0x40
#define IP6OPT_TYPE_FORCEICMP	0x80
#define IP6OPT_TYPE_ICMP	0xc0
#define IP6OPT_JUMBO	0xc2
#define IP6OPT_NSAP_ADDR	0xc3
#if defined __i386__
#define IP6F_OFF_MASK	0xf8ff
#endif
#if defined __ia64__
#define IP6F_OFF_MASK	0xf8ff
#endif
#if defined __x86_64__
#define IP6F_OFF_MASK	0xf8ff
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define IP6F_OFF_MASK	0xfff8
#endif
#if defined __powerpc64__
#define IP6F_OFF_MASK	0xfff8
#endif
#if defined __s390__ && !defined __s390x__
#define IP6F_OFF_MASK	0xfff8
#endif
#if defined __s390x__
#define IP6F_OFF_MASK	0xfff8
#endif
#define IP6OPT_PADN	1
#define IP6OPT_JUMBO_LEN	6
#define ip6_flow	ip6_ctlun.ip6_un1.ip6_un1_flow
#define ip6_hlim	ip6_ctlun.ip6_un1.ip6_un1_hlim
#define ip6_hops	ip6_ctlun.ip6_un1.ip6_un1_hlim
#define ip6_nxt	ip6_ctlun.ip6_un1.ip6_un1_nxt
#define ip6_plen	ip6_ctlun.ip6_un1.ip6_un1_plen
#define ip6_vfc	ip6_ctlun.ip6_un2_vfc


    struct ip6_hdrctl {
	uint32_t ip6_un1_flow;
	uint16_t ip6_un1_plen;
	uint8_t ip6_un1_nxt;
	uint8_t ip6_un1_hlim;
    };

    struct ip6_hdr {
	struct in6_addr ip6_src;
	struct in6_addr ip6_dst;
    };

    struct ip6_ext {
	uint8_t ip6e_nxt;
	uint8_t ip6e_len;
    };

    struct ip6_hbh {
	uint8_t ip6h_nxt;
	uint8_t ip6h_len;
    };

    struct ip6_dest {
	uint8_t ip6d_nxt;
	uint8_t ip6d_len;
    };

    struct ip6_rthdr {
	uint8_t ip6r_nxt;
	uint8_t ip6r_len;
	uint8_t ip6r_type;
	uint8_t ip6r_segleft;
    };

    struct ip6_frag {
	uint8_t ip6f_nxt;
	uint8_t ip6f_reserved;
	uint16_t ip6f_offlg;
	uint32_t ip6f_ident;
    };

    struct ip6_opt {
	uint8_t ip6o_type;
	uint8_t ip6o_len;
    };

    struct ip6_opt_jumbo {
	uint8_t ip6oj_type;
	uint8_t ip6oj_len;
	uint8_t ip6oj_jumbo_len[4];
    };

    struct ip6_opt_nsap {
	uint8_t ip6on_type;
	uint8_t ip6on_len;
	uint8_t ip6on_src_nsap_len;
	uint8_t ip6on_dst_nsap_len;
    };

    struct ip6_opt_tunnel {
	uint8_t ip6ot_type;
	uint8_t ip6ot_len;
	uint8_t ip6ot_encap_limit;
    };

    struct ip6_opt_router {
	uint8_t ip6or_type;
	uint8_t ip6or_len;
	uint8_t ip6or_value[2];
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
