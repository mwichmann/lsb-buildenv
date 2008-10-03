#if (__LSB_VERSION__ >= 11 )
#ifndef _NETINET_TCP_H_
#define _NETINET_TCP_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 40
#define TCPOLEN_TSTAMP_APPA	(TCPOLEN_TIMESTAMP+2)
#define TCPOPT_TSTAMP_HDR	(TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define TCPOPT_EOL	0
#define TCPI_OPT_TIMESTAMPS	1
#define TCPOPT_NOP	1
#define TCP_NODELAY	1
#define TCPOLEN_TIMESTAMP	10
#define TCP_WINDOW_CLAMP	10
#define TCP_INFO	11
#define TCP_QUICKACK	12
#define TCP_CONGESTION	13
#define TCP_MAX_WINSHIFT	14
#define TCP_MD5SIG	14
#define TCPI_OPT_SACK	2
#define TCPOLEN_SACK_PERMITTED	2
#define TCPOPT_MAXSEG	2
#define TCP_MAXSEG	2
#define TCPOLEN_WINDOW	3
#define TCPOPT_WINDOW	3
#define TCP_CORK	3
#define TCPI_OPT_WSCALE	4
#define TCPOLEN_MAXSEG	4
#define TCPOPT_SACK_PERMITTED	4
#define TCP_KEEPIDLE	4
#define TCPOPT_SACK	5
#define TCP_KEEPINTVL	5
#define TCP_MSS	512
#define SOL_TCP	6
#define TCP_KEEPCNT	6
#define TCP_MAXWIN	65535
#define TCP_SYNCNT	7
#define TCPI_OPT_ECN	8
#define TCPOPT_TIMESTAMP	8
#define TCP_LINGER2	8
#define TCP_MD5SIG_MAXKEYLEN	80
#define TCP_DEFER_ACCEPT	9
#endif				/* __LSB_VERSION__ >= 4.0 */



#if __LSB_VERSION__ >= 40
#if defined __i386__
/* IA32 */
    struct tcphdr {
	uint16_t source;
	uint16_t dest;
	uint32_t seq;
	uint32_t ack_seq;
	uint16_t res1:4;
	uint16_t doff:4;
	uint16_t fin:1;
	uint16_t syn:1;
	uint16_t rst:1;
	uint16_t psh:1;
	uint16_t ack:1;
	uint16_t urg:1;
	uint16_t res2:2;
	uint16_t window;
	uint16_t check;
	uint16_t urg_ptr;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct tcphdr {
	uint16_t source;
	uint16_t dest;
	uint32_t seq;
	uint32_t ack_seq;
	uint16_t res1:4;
	uint16_t doff:4;
	uint16_t fin:1;
	uint16_t syn:1;
	uint16_t rst:1;
	uint16_t psh:1;
	uint16_t ack:1;
	uint16_t urg:1;
	uint16_t res2:2;
	uint16_t window;
	uint16_t check;
	uint16_t urg_ptr;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct tcphdr {
	uint16_t source;
	uint16_t dest;
	uint32_t seq;
	uint32_t ack_seq;
	uint16_t doff:4;
	uint16_t res1:4;
	uint16_t res2:2;
	uint16_t urg:1;
	uint16_t ack:1;
	uint16_t psh:1;
	uint16_t rst:1;
	uint16_t syn:1;
	uint16_t fin:1;
	uint16_t window;
	uint16_t check;
	uint16_t urg_ptr;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct tcphdr {
	uint16_t source;
	uint16_t dest;
	uint32_t seq;
	uint32_t ack_seq;
	uint16_t doff:4;
	uint16_t res1:4;
	uint16_t res2:2;
	uint16_t urg:1;
	uint16_t ack:1;
	uint16_t psh:1;
	uint16_t rst:1;
	uint16_t syn:1;
	uint16_t fin:1;
	uint16_t window;
	uint16_t check;
	uint16_t urg_ptr;
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct tcphdr {
	uint16_t source;
	uint16_t dest;
	uint32_t seq;
	uint32_t ack_seq;
	uint16_t doff:4;
	uint16_t res1:4;
	uint16_t res2:2;
	uint16_t urg:1;
	uint16_t ack:1;
	uint16_t psh:1;
	uint16_t rst:1;
	uint16_t syn:1;
	uint16_t fin:1;
	uint16_t window;
	uint16_t check;
	uint16_t urg_ptr;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct tcphdr {
	uint16_t source;
	uint16_t dest;
	uint32_t seq;
	uint32_t ack_seq;
	uint16_t res1:4;
	uint16_t doff:4;
	uint16_t fin:1;
	uint16_t syn:1;
	uint16_t rst:1;
	uint16_t psh:1;
	uint16_t ack:1;
	uint16_t urg:1;
	uint16_t res2:2;
	uint16_t window;
	uint16_t check;
	uint16_t urg_ptr;
    };

#endif
#if defined __s390x__
/* S390X */
    struct tcphdr {
	uint16_t source;
	uint16_t dest;
	uint32_t seq;
	uint32_t ack_seq;
	uint16_t doff:4;
	uint16_t res1:4;
	uint16_t res2:2;
	uint16_t urg:1;
	uint16_t ack:1;
	uint16_t psh:1;
	uint16_t rst:1;
	uint16_t syn:1;
	uint16_t fin:1;
	uint16_t window;
	uint16_t check;
	uint16_t urg_ptr;
    };

#endif
    enum tcp_ca_state {
	TCP_CA_Open,
	TCP_CA_Disorder,
	TCP_CA_CWR,
	TCP_CA_Recovery,
	TCP_CA_Loss
    };

    struct tcp_info {
	uint8_t tcpi_state;
	uint8_t tcpi_ca_state;
	uint8_t tcpi_retransmits;
	uint8_t tcpi_probes;
	uint8_t tcpi_backoff;
	uint8_t tcpi_options;
	uint8_t tcpi_snd_wscale:4;
	uint8_t tcpi_rcv_wscale:4;
	uint32_t tcpi_rto;
	uint32_t tcpi_ato;
	uint32_t tcpi_snd_mss;
	uint32_t tcpi_rcv_mss;
	uint32_t tcpi_unacked;
	uint32_t tcpi_sacked;
	uint32_t tcpi_lost;
	uint32_t tcpi_retrans;
	uint32_t tcpi_fackets;
	uint32_t tcpi_last_data_sent;
	uint32_t tcpi_last_ack_sent;
	uint32_t tcpi_last_data_recv;
	uint32_t tcpi_last_ack_recv;
	uint32_t tcpi_pmtu;
	uint32_t tcpi_rcv_ssthresh;
	uint32_t tcpi_rtt;
	uint32_t tcpi_rttvar;
	uint32_t tcpi_snd_ssthresh;
	uint32_t tcpi_snd_cwnd;
	uint32_t tcpi_advmss;
	uint32_t tcpi_reordering;
    };

    enum {
	TCP_ESTABLISHED = 1,
	TCP_SYN_SENT = 2,
	TCP_SYN_RECV = 3,
	TCP_FIN_WAIT1 = 4,
	TCP_FIN_WAIT2 = 5,
	TCP_TIME_WAIT = 6,
	TCP_CLOSE = 7,
	TCP_CLOSE_WAIT = 8,
	TCP_LAST_ACK = 9,
	TCP_LISTEN = 10,
	TCP_CLOSING = 11
    };

    struct tcp_md5sig {
	struct sockaddr_storage tcpm_addr;
	u_int16_t __tcpm_pad1;
	u_int16_t tcpm_keylen;
	u_int32_t __tcpm_pad2;
	u_int8_t tcpm_key[TCP_MD5SIG_MAXKEYLEN];
    };

#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
