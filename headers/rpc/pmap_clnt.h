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





    extern u_short pmap_getport(struct sockaddr_in *, const u_long,
				const u_long, u_int);
    extern bool_t pmap_set(const u_long, const u_long, int, u_short);
    extern bool_t pmap_unset(u_long, u_long);
#ifdef __cplusplus
}
#endif
#endif
