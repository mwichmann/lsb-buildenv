#ifndef _NETINET_IP_H_
#define _NETINET_IP_H_


#ifdef __cplusplus
extern "C"
{
#endif





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
#endif