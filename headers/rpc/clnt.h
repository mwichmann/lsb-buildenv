#ifndef _RPC_CLNT_H_
#define _RPC_CLNT_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define NULLPROC
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


  enum clnt_stat
  {
    RPC_SUCCESS,		/* call succeeded */
    RPC_CANTENCODEARGS = 1,	/* can't encode arguments */
    RPC_CANTDECODERES = 2,	/* can't decode results */
    RPC_CANTSEND = 3,		/* failure in sending call */
    RPC_CANTRECV = 4,		/* failure in receiving result */
    RPC_TIMEDOUT = 5,		/* call timed out */
    RPC_VERSMISMATCH = 6,	/* rpc versions not compatible */
    RPC_AUTHERROR = 7,		/* authentication error */
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
  }
   ;







  struct clnt_ops
  {
    enum clnt_stat (*cl_call) (CLIENT *, u_long, xdrproc_t, caddr_t,
			       xdrproc_t, caddr_t, struct timeval);
    void (*cl_abort) (void);
    void (*cl_geterr) (CLIENT *, struct rpc_err *);
      bool_t (*cl_freeres) (CLIENT *, xdrproc_t, caddr_t);
    void (*cl_destroy) (CLIENT *);
      bool_t (*cl_control) (CLIENT *, int, char *);
  }
   ;




  typedef struct CLIENT
  {
    AUTH *cl_auth;
    struct clnt_ops cl_ops;
    caddr_t cl_private;
  }
  CLIENT;


  extern CLIENT *clnt_create (char *, u_long, u_long, char *);
  extern void clnt_pcreateerror (char *);
  extern void clnt_perrno (,);
  extern void clnt_perror (CLIENT *, char *);
  extern char *clnt_spcreateerror (char *);
  extern char *clnt_sperrno (,);
  extern char *clnt_sperror (CLIENT *, char *);
#ifdef __cplusplus
}
#endif
#endif
