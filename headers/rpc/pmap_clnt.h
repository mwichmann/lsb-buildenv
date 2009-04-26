#if (__LSB_VERSION__ >= 31 )
#ifndef _RPC_PMAP_CLNT_H_
#define _RPC_PMAP_CLNT_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <rpc/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern u_short pmap_getport(struct sockaddr_in *__address,
				const u_long __program,
				const u_long __version, u_int __protocol);
    extern bool_t pmap_set(const u_long __program, const u_long __vers,
			   int __protocol, u_short __port);
    extern bool_t pmap_unset(u_long __program, u_long __vers);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
