#if (__LSB_VERSION__ >= 40 )
#ifndef _NETINET_IP_ICMP_H_
#define _NETINET_IP_ICMP_H_

#include <sys/types.h>
#include <netinet/in.h>
#include <netinet/ip.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ICMP_INFOTYPE(type)	((type) == ICMP_ECHOREPLY || (type) == ICMP_ECHO || (type) == ICMP_ROUTERADVERT || (type) == ICMP_ROUTERSOLICIT || (type) == ICMP_TSTAMP || (type) == ICMP_TSTAMPREPLY || (type) == ICMP_IREQ || (type) == ICMP_IREQREPLY || (type) == ICMP_MASKREQ || (type) == ICMP_MASKREPLY)
#define ICMP_ADVLEN(p)	(8 + ((p)->icmp_ip.ip_hl << 2) + 8)
#define ICMP_TSLEN	(8 + 3 * sizeof (n_time))
#define ICMP_ADVLENMIN	(8 + sizeof (struct ip) + 8)
#define ICMP_ECHOREPLY	0
#define ICMP_EXC_TTL	0
#define ICMP_NET_UNREACH	0
#define ICMP_REDIRECT_NET	0
#define ICMP_REDIR_NET	0
#define ICMP_TIMXCEED_INTRANS	0
#define ICMP_UNREACH_NET	0
#define ICMP_EXC_FRAGTIME	1
#define ICMP_HOST_UNREACH	1
#define ICMP_PARAMPROB_OPTABSENT	1
#define ICMP_REDIRECT_HOST	1
#define ICMP_REDIR_HOST	1
#define ICMP_TIMXCEED_REASS	1
#define ICMP_UNREACH_HOST	1
#define ICMP_HOST_ANO	10
#define ICMP_ROUTERSOLICIT	10
#define ICMP_UNREACH_HOST_PROHIB	10
#define ICMP_NET_UNR_TOS	11
#define ICMP_TIME_EXCEEDED	11
#define ICMP_TIMXCEED	11
#define ICMP_UNREACH_TOSNET	11
#define ICMP_HOST_UNR_TOS	12
#define ICMP_MASKLEN	12
#define ICMP_PARAMETERPROB	12
#define ICMP_PARAMPROB	12
#define ICMP_UNREACH_TOSHOST	12
#define ICMP_PKT_FILTERED	13
#define ICMP_TIMESTAMP	13
#define ICMP_TSTAMP	13
#define ICMP_UNREACH_FILTER_PROHIB	13
#define ICMP_PREC_VIOLATION	14
#define ICMP_TIMESTAMPREPLY	14
#define ICMP_TSTAMPREPLY	14
#define ICMP_UNREACH_HOST_PRECEDENCE	14
#define ICMP_INFO_REQUEST	15
#define ICMP_IREQ	15
#define ICMP_PREC_CUTOFF	15
#define ICMP_UNREACH_PRECEDENCE_CUTOFF	15
#define NR_ICMP_UNREACH	15
#define ICMP_INFO_REPLY	16
#define ICMP_IREQREPLY	16
#define ICMP_ADDRESS	17
#define ICMP_MASKREQ	17
#define ICMP_ADDRESSREPLY	18
#define ICMP_MASKREPLY	18
#define ICMP_MAXTYPE	18
#define NR_ICMP_TYPES	18
#define ICMP_PROT_UNREACH	2
#define ICMP_REDIRECT_TOSNET	2
#define ICMP_REDIR_NETTOS	2
#define ICMP_UNREACH_PROTOCOL	2
#define ICMP_DEST_UNREACH	3
#define ICMP_PORT_UNREACH	3
#define ICMP_REDIRECT_TOSHOST	3
#define ICMP_REDIR_HOSTTOS	3
#define ICMP_UNREACH	3
#define ICMP_UNREACH_PORT	3
#define ICMP_FRAG_NEEDED	4
#define ICMP_SOURCEQUENCH	4
#define ICMP_SOURCE_QUENCH	4
#define ICMP_UNREACH_NEEDFRAG	4
#define ICMP_REDIRECT	5
#define ICMP_SR_FAILED	5
#define ICMP_UNREACH_SRCFAIL	5
#define ICMP_NET_UNKNOWN	6
#define ICMP_UNREACH_NET_UNKNOWN	6
#define ICMP_HOST_UNKNOWN	7
#define ICMP_UNREACH_HOST_UNKNOWN	7
#define ICMP_ECHO	8
#define ICMP_HOST_ISOLATED	8
#define ICMP_MINLEN	8
#define ICMP_UNREACH_ISOLATED	8
#define ICMP_NET_ANO	9
#define ICMP_ROUTERADVERT	9
#define ICMP_UNREACH_NET_PROHIB	9
#define icmp_data	icmp_dun.id_data
#define icmp_ip	icmp_dun.id_ip.idi_ip
#define icmp_mask	icmp_dun.id_mask
#define icmp_radv	icmp_dun.id_radv
#define icmp_otime	icmp_dun.id_ts.its_otime
#define icmp_rtime	icmp_dun.id_ts.its_rtime
#define icmp_ttime	icmp_dun.id_ts.its_ttime
#define icmp_gwaddr	icmp_hun.ih_gwaddr
#define icmp_id	icmp_hun.ih_idseq.icd_id
#define icmp_seq	icmp_hun.ih_idseq.icd_seq
#define icmp_nextmtu	icmp_hun.ih_pmtu.ipm_nextmtu
#define icmp_pmvoid	icmp_hun.ih_pmtu.ipm_void
#define icmp_pptr	icmp_hun.ih_pptr
#define icmp_lifetime	icmp_hun.ih_rtradv.irt_lifetime
#define icmp_num_addrs	icmp_hun.ih_rtradv.irt_num_addrs
#define icmp_wpa	icmp_hun.ih_rtradv.irt_wpa
#define icmp_void	icmp_hun.ih_void


    struct icmphdr {
	u_int8_t type;
	u_int8_t code;
	u_int16_t checksum;
	union {
	    struct {
		u_int16_t id;
		u_int16_t sequence;
	    } echo;
	    u_int32_t gateway;
	    struct {
		u_int16_t __unused;
		u_int16_t mtu;
	    } frag;
	} un;
    };

    struct icmp_ra_addr {
	u_int32_t ira_addr;
	u_int32_t ira_preference;
    };

    struct ih_idseq {
	u_int16_t icd_id;
	u_int16_t icd_seq;
    };

    struct ih_pmtu {
	u_int16_t ipm_void;
	u_int16_t ipm_nextmtu;
    };

    struct ih_rtradv {
	u_int8_t irt_num_addrs;
	u_int8_t irt_wpa;
	u_int16_t irt_lifetime;
    };

    struct icmp {
	u_int8_t icmp_type;
	u_int8_t icmp_code;
	u_int16_t icmp_cksum;
	union {
	    u_int16_t ih_pptr;
	    struct in_addr ih_gwaddr;
	    struct ih_idseq ih_idseq;
	    u_int32_t ih_void;
	    struct ih_pmtu ih_pmtu;
	    struct ih_rtradv ih_rtradv;
	} icmp_hun;
	union {
	    struct {
		u_int32_t its_otime;
		u_int32_t its_rtime;
		u_int32_t its_ttime;
	    } id_ts;
	    struct {
		struct ip idi_ip;
	    } id_ip;
	    struct icmp_ra_addr id_radv;
	    u_int32_t id_mask;
	    u_int8_t id_data[1];
	} icmp_dun;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
