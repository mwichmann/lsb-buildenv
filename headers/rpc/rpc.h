#ifndef _RPC_RPC_H_
#define _RPC_RPC_H_

#include <sys/socket.h>
#include <netinet/in.h>
#include <inttypes.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern int bindresvport (int, struct sockaddr_in *);
#ifdef __cplusplus
}
#endif
#endif
