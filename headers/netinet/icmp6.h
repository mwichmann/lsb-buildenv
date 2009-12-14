#if (__LSB_VERSION__ >= 40 )
#ifndef _NETINET_ICMP6_H_
#define _NETINET_ICMP6_H_

#include <netinet/in.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ICMP6_FILTER_WILLBLOCK(type,filterp)	((((filterp)->icmp6_filt[(type) >> 5]) & (1 << ((type) & 31))) != 0)
#define ICMP6_FILTER_WILLPASS(type,filterp)	((((filterp)->icmp6_filt[(type) >> 5]) & (1 << ((type) & 31))) == 0)
#define ICMP6_FILTER_SETPASS(type,filterp)	((((filterp)->icmp6_filt[(type) >> 5]) &= ~(1 << ((type) & 31))))
#define ICMP6_FILTER_SETBLOCK(type,filterp)	((((filterp)->icmp6_filt[(type) >> 5]) |= (1 << ((type) & 31))))
#define ICMP6_DST_UNREACH_NOROUTE	0
#define ICMP6_PARAMPROB_HEADER	0
#define ICMP6_TIME_EXCEED_TRANSIT	0
#if defined __i386__
#define ND_NA_FLAG_OVERRIDE	0x00000020
#endif
#if defined __ia64__
#define ND_NA_FLAG_OVERRIDE	0x00000020
#endif
#if defined __x86_64__
#define ND_NA_FLAG_OVERRIDE	0x00000020
#endif
#if defined __i386__
#define ND_NA_FLAG_SOLICITED	0x00000040
#endif
#if defined __ia64__
#define ND_NA_FLAG_SOLICITED	0x00000040
#endif
#if defined __x86_64__
#define ND_NA_FLAG_SOLICITED	0x00000040
#endif
#if defined __i386__
#define ND_NA_FLAG_ROUTER	0x00000080
#endif
#if defined __ia64__
#define ND_NA_FLAG_ROUTER	0x00000080
#endif
#if defined __x86_64__
#define ND_NA_FLAG_ROUTER	0x00000080
#endif
#if defined __i386__
#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN	0x0010
#endif
#if defined __ia64__
#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN	0x0010
#endif
#if defined __x86_64__
#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN	0x0010
#endif
#if defined __i386__
#define ICMP6_RR_RESULT_FLAGS_OOB	0x0020
#endif
#if defined __ia64__
#define ICMP6_RR_RESULT_FLAGS_OOB	0x0020
#endif
#if defined __x86_64__
#define ICMP6_RR_RESULT_FLAGS_OOB	0x0020
#endif
#define ICMP6_RR_FLAGS_PREVDONE	0x08
#define ICMP6_RR_FLAGS_SPECSITE	0x10
#define ICMP6_RR_PCOUSE_RAFLAGS_AUTO	0x10
#if defined __powerpc__ && !defined __powerpc64__
#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN	0x1000
#endif
#if defined __powerpc64__
#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN	0x1000
#endif
#if defined __s390__ && !defined __s390x__
#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN	0x1000
#endif
#if defined __s390x__
#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN	0x1000
#endif
#define ICMP6_RR_FLAGS_FORCEAPPLY	0x20
#define ICMP6_RR_PCOUSE_RAFLAGS_ONLINK	0x20
#define ND_OPT_PI_FLAG_RADDR	0x20
#define ND_RA_FLAG_HOME_AGENT	0x20
#if defined __powerpc__ && !defined __powerpc64__
#define ICMP6_RR_RESULT_FLAGS_OOB	0x2000
#endif
#if defined __powerpc64__
#define ICMP6_RR_RESULT_FLAGS_OOB	0x2000
#endif
#if defined __s390__ && !defined __s390x__
#define ICMP6_RR_RESULT_FLAGS_OOB	0x2000
#endif
#if defined __s390x__
#define ICMP6_RR_RESULT_FLAGS_OOB	0x2000
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define ND_NA_FLAG_OVERRIDE	0x20000000
#endif
#if defined __powerpc64__
#define ND_NA_FLAG_OVERRIDE	0x20000000
#endif
#if defined __s390__ && !defined __s390x__
#define ND_NA_FLAG_OVERRIDE	0x20000000
#endif
#if defined __s390x__
#define ND_NA_FLAG_OVERRIDE	0x20000000
#endif
#define ICMP6_RR_FLAGS_REQRESULT	0x40
#define ND_OPT_PI_FLAG_AUTO	0x40
#define ND_RA_FLAG_OTHER	0x40
#if defined __powerpc__ && !defined __powerpc64__
#define ND_NA_FLAG_SOLICITED	0x40000000
#endif
#if defined __powerpc64__
#define ND_NA_FLAG_SOLICITED	0x40000000
#endif
#if defined __s390__ && !defined __s390x__
#define ND_NA_FLAG_SOLICITED	0x40000000
#endif
#if defined __s390x__
#define ND_NA_FLAG_SOLICITED	0x40000000
#endif
#define ICMP6_INFOMSG_MASK	0x80
#define ICMP6_RR_FLAGS_TEST	0x80
#define ND_OPT_PI_FLAG_ONLINK	0x80
#define ND_RA_FLAG_MANAGED	0x80
#if defined __powerpc__ && !defined __powerpc64__
#define ND_NA_FLAG_ROUTER	0x80000000
#endif
#if defined __powerpc64__
#define ND_NA_FLAG_ROUTER	0x80000000
#endif
#if defined __s390__ && !defined __s390x__
#define ND_NA_FLAG_ROUTER	0x80000000
#endif
#if defined __s390x__
#define ND_NA_FLAG_ROUTER	0x80000000
#endif
#define ICMP6_DST_UNREACH	1
#define ICMP6_DST_UNREACH_ADMIN	1
#define ICMP6_FILTER	1
#define ICMP6_FILTER_BLOCK	1
#define ICMP6_PARAMPROB_NEXTHEADER	1
#define ICMP6_TIME_EXCEED_REASSEMBLY	1
#define ND_OPT_SOURCE_LINKADDR	1
#define RPM_PCO_ADD	1
#define ICMP6_ECHO_REQUEST	128
#define ICMP6_ECHO_REPLY	129
#define MLD_LISTENER_QUERY	130
#define MLD_LISTENER_REPORT	131
#define MLD_LISTENER_REDUCTION	132
#define ND_ROUTER_SOLICIT	133
#define ND_ROUTER_ADVERT	134
#define ND_NEIGHBOR_SOLICIT	135
#define ND_NEIGHBOR_ADVERT	136
#define ND_REDIRECT	137
#define ICMP6_ROUTER_RENUMBERING	138
#define ICMP6_DST_UNREACH_BEYONDSCOPE	2
#define ICMP6_FILTER_PASS	2
#define ICMP6_PACKET_TOO_BIG	2
#define ICMP6_PARAMPROB_OPTION	2
#define ND_OPT_TARGET_LINKADDR	2
#define RPM_PCO_CHANGE	2
#define ICMP6_DST_UNREACH_ADDR	3
#define ICMP6_FILTER_BLOCKOTHERS	3
#define ICMP6_TIME_EXCEEDED	3
#define ND_OPT_PREFIX_INFORMATION	3
#define RPM_PCO_SETGLOBAL	3
#define ICMP6_DST_UNREACH_NOPORT	4
#define ICMP6_FILTER_PASSONLY	4
#define ICMP6_PARAM_PROB	4
#define ND_OPT_REDIRECTED_HEADER	4
#define ND_OPT_MTU	5
#define ND_OPT_RTR_ADV_INTERVAL	7
#define ND_OPT_HOME_AGENT_INFO	8
#define icmp6_id	icmp6_data16[0]
#define icmp6_maxdelay	icmp6_data16[0]
#define icmp6_seq	icmp6_data16[1]
#define icmp6_mtu	icmp6_data32[0]
#define icmp6_pptr	icmp6_data32[0]
#define icmp6_data16	icmp6_dataun.icmp6_un_data16
#define icmp6_data32	icmp6_dataun.icmp6_un_data32
#define icmp6_data8	icmp6_dataun.icmp6_un_data8
#define ICMP6_FILTER_SETPASSALL(filterp)	memset (filterp, 0, sizeof (struct icmp6_filter));
#define ICMP6_FILTER_SETBLOCKALL(filterp)	memset (filterp, 0xFF, sizeof (struct icmp6_filter));
#define mld_cksum	mld_icmp6_hdr.icmp6_cksum
#define mld_code	mld_icmp6_hdr.icmp6_code
#define mld_maxdelay	mld_icmp6_hdr.icmp6_data16[0]
#define mld_reserved	mld_icmp6_hdr.icmp6_data16[1]
#define mld_type	mld_icmp6_hdr.icmp6_type
#define nd_na_cksum	nd_na_hdr.icmp6_cksum
#define nd_na_code	nd_na_hdr.icmp6_code
#define nd_na_flags_reserved	nd_na_hdr.icmp6_data32[0]
#define nd_na_type	nd_na_hdr.icmp6_type
#define nd_ns_cksum	nd_ns_hdr.icmp6_cksum
#define nd_ns_code	nd_ns_hdr.icmp6_code
#define nd_ns_reserved	nd_ns_hdr.icmp6_data32[0]
#define nd_ns_type	nd_ns_hdr.icmp6_type
#define nd_ra_cksum	nd_ra_hdr.icmp6_cksum
#define nd_ra_code	nd_ra_hdr.icmp6_code
#define nd_ra_router_lifetime	nd_ra_hdr.icmp6_data16[1]
#define nd_ra_curhoplimit	nd_ra_hdr.icmp6_data8[0]
#define nd_ra_flags_reserved	nd_ra_hdr.icmp6_data8[1]
#define nd_ra_type	nd_ra_hdr.icmp6_type
#define nd_rd_cksum	nd_rd_hdr.icmp6_cksum
#define nd_rd_code	nd_rd_hdr.icmp6_code
#define nd_rd_reserved	nd_rd_hdr.icmp6_data32[0]
#define nd_rd_type	nd_rd_hdr.icmp6_type
#define nd_rs_cksum	nd_rs_hdr.icmp6_cksum
#define nd_rs_code	nd_rs_hdr.icmp6_code
#define nd_rs_reserved	nd_rs_hdr.icmp6_data32[0]
#define nd_rs_type	nd_rs_hdr.icmp6_type
#define rr_cksum	rr_hdr.icmp6_cksum
#define rr_code	rr_hdr.icmp6_code
#define rr_seqnum	rr_hdr.icmp6_data32[0]
#define rr_type	rr_hdr.icmp6_type


    struct icmp6_filter {
	uint32_t icmp6_filt[8];
    };

    struct icmp6_hdr {
	uint8_t icmp6_type;
	uint8_t icmp6_code;
	uint16_t icmp6_cksum;
	union {
	    uint32_t icmp6_un_data32[1];
	    uint16_t icmp6_un_data16[2];
	    uint8_t icmp6_un_data8[4];
	} icmp6_dataun;
    };

    struct nd_router_solicit {
	struct icmp6_hdr nd_rs_hdr;
    };

    struct nd_router_advert {
	struct icmp6_hdr nd_ra_hdr;
	uint32_t nd_ra_reachable;
	uint32_t nd_ra_retransmit;
    };

    struct nd_neighbor_solicit {
	struct icmp6_hdr nd_ns_hdr;
	struct in6_addr nd_ns_target;
    };

    struct nd_neighbor_advert {
	struct icmp6_hdr nd_na_hdr;
	struct in6_addr nd_na_target;
    };

    struct nd_redirect {
	struct icmp6_hdr nd_rd_hdr;
	struct in6_addr nd_rd_target;
	struct in6_addr nd_rd_dst;
    };

    struct nd_opt_hdr {
	uint8_t nd_opt_type;
	uint8_t nd_opt_len;
    };

    struct nd_opt_prefix_info {
	uint8_t nd_opt_pi_type;
	uint8_t nd_opt_pi_len;
	uint8_t nd_opt_pi_prefix_len;
	uint8_t nd_opt_pi_flags_reserved;
	uint32_t nd_opt_pi_valid_time;
	uint32_t nd_opt_pi_preferred_time;
	uint32_t nd_opt_pi_reserved2;
	struct in6_addr nd_opt_pi_prefix;
    };

    struct nd_opt_rd_hdr {
	uint8_t nd_opt_rh_type;
	uint8_t nd_opt_rh_len;
	uint16_t nd_opt_rh_reserved1;
	uint32_t nd_opt_rh_reserved2;
    };

    struct nd_opt_mtu {
	uint8_t nd_opt_mtu_type;
	uint8_t nd_opt_mtu_len;
	uint16_t nd_opt_mtu_reserved;
	uint32_t nd_opt_mtu_mtu;
    };

    struct mld_hdr {
	struct icmp6_hdr mld_icmp6_hdr;
	struct in6_addr mld_addr;
    };

    struct icmp6_router_renum {
	struct icmp6_hdr rr_hdr;
	uint8_t rr_segnum;
	uint8_t rr_flags;
	uint16_t rr_maxdelay;
	uint32_t rr_reserved;
    };

    struct rr_pco_match {
	uint8_t rpm_code;
	uint8_t rpm_len;
	uint8_t rpm_ordinal;
	uint8_t rpm_matchlen;
	uint8_t rpm_minlen;
	uint8_t rpm_maxlen;
	uint16_t rpm_reserved;
	struct in6_addr rpm_prefix;
    };

    struct rr_pco_use {
	uint8_t rpu_uselen;
	uint8_t rpu_keeplen;
	uint8_t rpu_ramask;
	uint8_t rpu_raflags;
	uint32_t rpu_vltime;
	uint32_t rpu_pltime;
	uint32_t rpu_flags;
	struct in6_addr rpu_prefix;
    };

    struct rr_result {
	uint16_t rrr_flags;
	uint8_t rrr_ordinal;
	uint8_t rrr_matchedlen;
	uint32_t rrr_ifid;
	struct in6_addr rrr_prefix;
    };

    struct nd_opt_adv_interval {
	uint8_t nd_opt_adv_interval_type;
	uint8_t nd_opt_adv_interval_len;
	uint16_t nd_opt_adv_interval_reserved;
	uint32_t nd_opt_adv_interval_ival;
    };

    struct nd_opt_home_agent_info {
	uint8_t nd_opt_home_agent_info_type;
	uint8_t nd_opt_home_agent_info_len;
	uint16_t nd_opt_home_agent_info_reserved;
	int16_t nd_opt_home_agent_info_preference;
	uint16_t nd_opt_home_agent_info_lifetime;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */