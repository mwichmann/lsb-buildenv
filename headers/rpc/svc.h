#ifndef _RPC_SVC_H_
#define _RPC_SVC_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <rpc/auth.h>
#include <rpc/xdr.h>
#include <netinet/in.h>
#include <rpc/types.h>
#include <rpc/rpc_msg.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define RPC_ANYSOCK	-1
#define svc_freeargs(xprt,xargs, argsp)	\
	(*(xprt)->xp_ops->xp_freeargs)((xprt), (xargs), (argsp))
#define svc_getargs(xprt,xargs, argsp)	\
	(*(xprt)->xp_ops->xp_getargs)((xprt), (xargs), (argsp))


  enum xprt_stat
  {
    XPRT_DIED,
    XPRT_MOREREQS,
    XPRT_IDLE
  }
   ;


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




  struct svc_req
  {
    rpcprog_t rq_prog;
    rpcvers_t rq_vers;
    rpcproc_t rq_proc;
    struct opaque_auth rq_cred;
    caddr_t rq_clntcred;
    SVCXPRT *rq_xprt;
  }
   ;




  typedef void (*__dispatch_fn_t) (struct svc_req *, SVCXPRT *);




  struct xp_ops
  {
    bool_t (*xp_recv) (SVCXPRT * __xprt, struct rpc_msg * __msg);
    enum xprt_stat (*xp_stat) (SVCXPRT * __xprt);
      bool_t (*xp_getargs) (SVCXPRT * __xprt, xdrproc_t __xdr_args,
			    caddr_t args_ptr);
      bool_t (*xp_reply) (SVCXPRT * __xprt, struct rpc_msg * __msg);
      bool_t (*xp_freeargs) (SVCXPRT * __xprt, xdrproc_t __xdr_args,
			     caddr_t args_ptr);
    void (*xp_destroy) (SVCXPRT * __xprt);
  }
   ;


  extern void svc_getreqset (fd_set *);
  extern bool_t svc_register (SVCXPRT *, rpcprog_t, rpcvers_t,
			      __dispatch_fn_t, rpcprot_t);
  extern void svc_run (void);
  extern bool_t svc_sendreply (SVCXPRT *, xdrproc_t, caddr_t);
  extern void svcerr_auth (SVCXPRT *, enum auth_stat);
  extern void svcerr_decode (SVCXPRT *);
  extern void svcerr_noproc (SVCXPRT *);
  extern void svcerr_noprog (SVCXPRT *);
  extern void svcerr_progvers (SVCXPRT *, rpcvers_t, rpcvers_t);
  extern void svcerr_systemerr (SVCXPRT *);
  extern void svcerr_weakauth (SVCXPRT *);
  extern SVCXPRT *svctcp_create (int, u_int, u_int);
  extern SVCXPRT *svcudp_create (int);
#ifdef __cplusplus
}
#endif
#endif
