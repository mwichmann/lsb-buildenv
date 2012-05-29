#if (__LSB_VERSION__ >= 11 )
#ifndef _RPC_SVC_H_
#define _RPC_SVC_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <rpc/auth.h>
#include <rpc/xdr.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <rpc/types.h>
#include <rpc/rpc_msg.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 20
#define RPC_ANYSOCK	-1
#define svc_freeargs(xprt,xargs, argsp)	\
	(*(xprt)->xp_ops->xp_freeargs)((xprt), (xargs), (argsp))
#define svc_getargs(xprt,xargs, argsp)	\
	(*(xprt)->xp_ops->xp_getargs)((xprt), (xargs), (argsp))
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 32
#define svc_getcaller(x)	(&(x)->xp_raddr)
#define svc_destroy(xprt)	(*(xprt)->xp_ops->xp_destroy)(xprt)
#define svc_recv(xprt,msg)	(*(xprt)->xp_ops->xp_recv)((xprt), (msg))
#define svc_reply(xprt,msg)	(*(xprt)->xp_ops->xp_reply) ((xprt), (msg))
#define svc_stat(xprt)	(*(xprt)->xp_ops->xp_stat)(xprt)
#endif				/* __LSB_VERSION__ >= 3.2 */



#if __LSB_VERSION__ >= 31
    enum xprt_stat {
	XPRT_DIED,
	XPRT_MOREREQS,
	XPRT_IDLE
    };

#endif				/* __LSB_VERSION__ >= 3.1 */


/* Server side transport handle*/
#if __LSB_VERSION__ >= 13
    typedef struct SVCXPRT SVCXPRT;

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 13
    struct SVCXPRT {
	int xp_sock;
	u_short xp_port;
	struct xp_ops *xp_ops;
	int xp_addrlen;
	struct sockaddr_in xp_raddr;
	struct opaque_auth xp_verf;
	caddr_t xp_p1;
	caddr_t xp_p2;
	char xp_pad[256];
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


#if __LSB_VERSION__ >= 20
    struct svc_req {
	rpcprog_t rq_prog;
	rpcvers_t rq_vers;
	rpcproc_t rq_proc;
	struct opaque_auth rq_cred;
	caddr_t rq_clntcred;
	SVCXPRT *rq_xprt;
    };

#endif				/* __LSB_VERSION__ >= 2.0 */


#if __LSB_VERSION__ >= 20
    typedef void (*__dispatch_fn_t) (struct svc_req *, SVCXPRT *);

#endif				/* __LSB_VERSION__ >= 2.0 */


#if __LSB_VERSION__ >= 13
    struct xp_ops {
	bool_t(*xp_recv) (SVCXPRT * __xprt, struct rpc_msg * __msg);
	enum xprt_stat (*xp_stat) (SVCXPRT * __xprt);
	 bool_t(*xp_getargs) (SVCXPRT * __xprt, xdrproc_t __xdr_args,
			      caddr_t args_ptr);
	 bool_t(*xp_reply) (SVCXPRT * __xprt, struct rpc_msg * __msg);
	 bool_t(*xp_freeargs) (SVCXPRT * __xprt, xdrproc_t __xdr_args,
			       caddr_t args_ptr);
	void (*xp_destroy) (SVCXPRT * __xprt);
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Function prototypes */

    extern void svc_getreqset(fd_set * __readfds);
    extern void svcerr_auth(SVCXPRT * __xprt, enum auth_stat __why);
    extern void svcerr_decode(SVCXPRT * __xprt);
    extern void svcerr_noproc(SVCXPRT * __xprt);
    extern void svcerr_noprog(SVCXPRT * __xprt);
    extern void svcerr_progvers(SVCXPRT * __xprt, rpcvers_t __low_vers,
				rpcvers_t __high_vers);
    extern void svcerr_systemerr(SVCXPRT * __xprt);
    extern void svcerr_weakauth(SVCXPRT * __xprt);
#if __LSB_VERSION__ >= 20
    extern bool_t svc_register(SVCXPRT * __xprt, rpcprog_t __prog,
			       rpcvers_t __vers,
			       __dispatch_fn_t __dispatch,
			       rpcprot_t __protocol);
    extern void svc_run(void);
    extern bool_t svc_sendreply(SVCXPRT * xprt, xdrproc_t __xdr_results,
				caddr_t __xdr_location);
    extern SVCXPRT *svctcp_create(int __sock, u_int __sendsize,
				  u_int __recvsize);
    extern SVCXPRT *svcudp_create(int __sock);
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 40
    extern SVCXPRT *svcfd_create(int, unsigned int, unsigned int);
    extern SVCXPRT *svcraw_create(void);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
