#if (__LSB_VERSION__ >= 13 )
#ifndef _NETINET_UDP_H_
#define _NETINET_UDP_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


#define SOL_UDP	17


#if __LSB_VERSION__ >= 40
    struct udphdr {
	u_int16_t source;
	u_int16_t dest;
	u_int16_t len;
	u_int16_t check;
    };

#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
