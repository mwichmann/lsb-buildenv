#ifndef _RPC_SVC_H_
#define _RPC_SVC_H_

#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <inttypes.h>
#include <rpc/auth.h>
#include <rpc/types.h>
#include <rpc/xdr.h>
#include <rpc/rpc_msg.h>

#ifdef __cplusplus
extern "C"
{
#endif





/* Server side transport handle*/


  typedef struct SVCXPRT
  {
    int xp_sock;
    u_short xp_port;
    struct xp_ops *xp_ops;
    int xp_addrlen;
    struct sockaddr_in xp_raddr;
    struct opaque_auth xp_verf;
    caddr_t xp_p1;
    caddr_t xp_p2;
    char xp_pad[256];
  }
  SVCXPRT;




  struct xp_ops
  {
    bool_t (*xp_recv) (struct SVCXPRT * __xprt, struct rpc_msg * __msg);
    enum xprt_stat (*xp_stat) (struct SVCXPRT * __xprt);
      bool_t (*xp_getargs) (struct SVCXPRT * __xprt, xdrproc_t __xdr_args,
			    caddr_t args_ptr);
      bool_t (*xp_reply) (struct SVCXPRT * __xprt, struct rpc_msg * __msg);
      bool_t (*xp_freeargs) (struct SVCXPRT * __xprt, xdrproc_t __xdr_args,
			     caddr_t args_ptr);
    void (*xp_destroy) (struct SVCXPRT * __xprt);
  }
   ;


  extern void svc_getreqset (fd_set *);
  extern void svcerr_auth (struct SVCXPRT *, enum auth_stat);
  extern void svcerr_decode (struct SVCXPRT *);
  extern void svcerr_noproc (struct SVCXPRT *);
  extern void svcerr_noprog (struct SVCXPRT *);
  extern void svcerr_progvers (struct SVCXPRT *, rpcvers_t, rpcvers_t);
  extern void svcerr_systemerr (struct SVCXPRT *);
  extern void svcerr_weakauth (struct SVCXPRT *);
#ifdef __cplusplus
}
#endif
#endif
