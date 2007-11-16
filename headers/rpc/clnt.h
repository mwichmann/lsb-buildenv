#ifndef _RPC_CLNT_H_
#define _RPC_CLNT_H_

#include <sys/types.h>
#include <sys/time.h>
#include <rpc/auth.h>
#include <rpc/xdr.h>
#include <rpc/types.h>

#ifdef __cplusplus
extern "C" {
#endif



#define clnt_control(cl,rq,in)	((*(cl)->cl_ops->cl_control)(cl,rq,in))
#define clnt_abort(rh)	((*(rh)->cl_ops->cl_abort)(rh))
#define clnt_destroy(rh)	((*(rh)->cl_ops->cl_destroy)(rh))
#define clnt_freeres(rh,xres,resp)	((*(rh)->cl_ops->cl_freeres)(rh,xres,resp))
#define clnt_geterr(rh,errp)	((*(rh)->cl_ops->cl_geterr)(rh, errp))
#define NULLPROC	((u_long)0)
#define CLSET_TIMEOUT	1
#define CLGET_XID	10
#define CLSET_XID	11
#define CLGET_VERS	12
#define CLSET_VERS	13
#define CLGET_PROG	14
#define CLSET_PROG	15
#define CLGET_TIMEOUT	2
#define CLGET_SERVER_ADDR	3
#define CLSET_RETRY_TIMEOUT	4
#define CLGET_RETRY_TIMEOUT	5
#define CLGET_FD	6
#define CLGET_SVC_ADDR	7
#define CLSET_FD_CLOSE	8
#define CLSET_FD_NCLOSE	9
#define clnt_call(rh, proc, xargs, argsp, xres, resp, secs)	\
	((*(rh)->cl_ops->cl_call)(rh, proc, xargs, argsp, xres, resp, secs))


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







    typedef struct CLIENT CLIENT;


    struct CLIENT {
	struct AUTH *cl_auth;
	struct clnt_ops *cl_ops;
	caddr_t cl_private;
    };




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


    extern struct CLIENT *clnt_create(const char *, const u_long,
				      const u_long, const char *);
    extern void clnt_pcreateerror(const char *);
    extern void clnt_perrno(enum clnt_stat);
    extern void clnt_perror(struct CLIENT *, const char *);
    extern char *clnt_spcreateerror(const char *);
    extern char *clnt_sperrno(enum clnt_stat);
    extern char *clnt_sperror(struct CLIENT *, const char *);
#ifdef __cplusplus
}
#endif
#endif
