#if (__LSB_VERSION__ >= 11 )
#ifndef _RPC_CLNT_H_
#define _RPC_CLNT_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <rpc/auth.h>
#include <rpc/xdr.h>
#include <netinet/in.h>
#include <rpc/types.h>
#include <stdint.h>
#include <lsb/time.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 13
#define NULLPROC	((u_long)0)	/* By convention, procedure 0 takes null arguments and returns */
#define CLSET_TIMEOUT	1	/* set timeout (timeval) */
#define CLGET_XID	10	/* Get xid */
#define CLSET_XID	11	/* Set xid */
#define CLGET_VERS	12	/* Get version number */
#define CLSET_VERS	13	/* Set version number */
#define CLGET_PROG	14	/* Get program number */
#define CLSET_PROG	15	/* Set program number */
#define CLGET_TIMEOUT	2	/* get timeout (timeval) */
#define CLGET_SERVER_ADDR	3	/* get server's address (sockaddr) */
#define CLSET_RETRY_TIMEOUT	4	/* set retry timeout (timeval) */
#define CLGET_RETRY_TIMEOUT	5	/* get retry timeout (timeval) */
#define CLGET_FD	6	/* get connections file descriptor */
#define CLGET_SVC_ADDR	7	/* get server's address (netbuf) */
#define CLSET_FD_CLOSE	8	/* close fd while clnt_destroy */
#define CLSET_FD_NCLOSE	9	/* Do not close fd while clnt_destroy */
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#define clnt_control(cl,rq,in)	((*(cl)->cl_ops->cl_control)(cl,rq,in))
#define clnt_abort(rh)	((*(rh)->cl_ops->cl_abort)(rh))
#define clnt_destroy(rh)	((*(rh)->cl_ops->cl_destroy)(rh))
#define clnt_freeres(rh,xres,resp)	((*(rh)->cl_ops->cl_freeres)(rh,xres,resp))
#define clnt_geterr(rh,errp)	((*(rh)->cl_ops->cl_geterr)(rh, errp))
#define clnt_call(rh, proc, xargs, argsp, xres, resp, secs)	\
	((*(rh)->cl_ops->cl_call)(rh, proc, xargs, argsp, xres, resp, secs))
#endif				/* __LSB_VERSION__ >= 2.0 */



#if __LSB_VERSION__ >= 13
    enum clnt_stat {
	RPC_SUCCESS = 0,	/* call succeeded */
	RPC_CANTENCODEARGS = 1,	/* can't encode arguments */
	RPC_CANTDECODERES = 2,	/* can't decode results */
	RPC_CANTSEND = 3,	/* failure in sending call */
	RPC_CANTRECV = 4,	/* failure in receiving result */
	RPC_TIMEDOUT = 5,	/* call timed out */
	RPC_VERSMISMATCH = 6,	/* rpc versions not compatible */
	RPC_AUTHERROR = 7,	/* authentication error */
	RPC_PROGUNAVAIL = 8,	/* program not available */
	RPC_PROGVERSMISMATCH = 9,	/* program version mismatched */
	RPC_PROCUNAVAIL = 10,	/* procedure unavailable */
	RPC_CANTDECODEARGS = 11,	/* decode arguments error */
	RPC_SYSTEMERROR = 12,	/* generic "other problem" */
	RPC_NOBROADCAST = 21,	/* Broadcasting not supported */
	RPC_UNKNOWNHOST = 13,	/* unknown host name */
	RPC_UNKNOWNPROTO = 17,	/* unknown protocol */
	RPC_UNKNOWNADDR = 19,	/* Remote address unknown */
	RPC_RPCBFAILURE = 14,	/* portmapper failed in its call */
	RPC_PROGNOTREGISTERED = 15,	/* remote program is not registered */
	RPC_N2AXLATEFAILURE = 22,	/* Name to addr translation failed */
	RPC_FAILED = 16,
	RPC_INTR = 18,
	RPC_TLIERROR = 20,
	RPC_UDERROR = 23,
	RPC_INPROGRESS = 24,
	RPC_STALERACHANDLE = 25
    };

    struct rpc_err {
	enum clnt_stat re_status;
	union {
	    int RE_errno;
	    enum auth_stat RE_why;
	    struct {
		u_long low;
		u_long high;
	    } RE_vers;
	    struct {
		long int s1;
		long int s2;
	    } RE_lb;
	} ru;
    };

#endif				/* __LSB_VERSION__ >= 1.3 */



#if __LSB_VERSION__ >= 13
    typedef struct CLIENT CLIENT;

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 40
    struct CLIENT {
	struct AUTH *cl_auth;
	struct clnt_ops *cl_ops;
	caddr_t cl_private;
    };

#endif				/* __LSB_VERSION__ >= 4.0 */


#if __LSB_VERSION__ >= 13
    struct clnt_ops {
	enum clnt_stat (*cl_call) (struct CLIENT *, u_long, xdrproc_t,
				   caddr_t, xdrproc_t, caddr_t,
				   struct timeval);
	void (*cl_abort) (void);
	void (*cl_geterr) (struct CLIENT *, struct rpc_err *);
	 bool_t(*cl_freeres) (struct CLIENT *, xdrproc_t, caddr_t);
	void (*cl_destroy) (struct CLIENT *);
	 bool_t(*cl_control) (struct CLIENT *, int, char *);
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Function prototypes */

    extern struct CLIENT *clnt_create(const char *__host,
				      const u_long __prog,
				      const u_long __vers,
				      const char *__prot);
    extern void clnt_pcreateerror(const char *__msg);
    extern void clnt_perrno(enum clnt_stat __num);
    extern void clnt_perror(struct CLIENT *__clnt, const char *__msg);
    extern char *clnt_spcreateerror(const char *__msg);
    extern char *clnt_sperrno(enum clnt_stat __num);
    extern char *clnt_sperror(struct CLIENT *__clnt, const char *__msg);
#if __LSB_VERSION__ >= 40
    extern int callrpc(const char *__host, const u_long __prognum,
		       const u_long __versnum, const u_long __procnum,
		       const xdrproc_t __inproc, const char *__in,
		       const xdrproc_t __outproc, char *__out);
    extern struct CLIENT *clntraw_create(u_long __prog, u_long __vers);
    extern struct CLIENT *clnttcp_create(struct sockaddr_in *__raddr,
					 u_long __prog, u_long __version,
					 int *__sockp, u_int __sendsz,
					 u_int __recvsz);
    extern struct CLIENT *clntudp_bufcreate(struct sockaddr_in *__raddr,
					    u_long __program,
					    u_long __version,
					    struct timeval __wait_resend,
					    int *__sockp, u_int __sendsz,
					    u_int __recvsz);
    extern struct CLIENT *clntudp_create(struct sockaddr_in *__raddr,
					 u_long __program,
					 u_long __version,
					 struct timeval __wait_resend,
					 int *__sockp);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
