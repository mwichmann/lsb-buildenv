#if (__LSB_VERSION__ >= 13 )
#ifndef _RPC_RPC_MSG_H_
#define _RPC_RPC_MSG_H_

#include <sys/types.h>
#include <rpc/auth.h>
#include <rpc/xdr.h>
#include <rpc/types.h>

#ifdef __cplusplus
extern "C" {
#endif



#if __LSB_VERSION__ >= 13
    enum msg_type {
	CALL = 0,
	REPLY = 1
    };

    enum reply_stat {
	MSG_ACCEPTED = 0,
	MSG_DENIED = 1
    };

    enum accept_stat {
	SUCCESS = 0,
	PROG_UNAVAIL = 1,
	PROG_MISMATCH = 2,
	PROC_UNAVAIL = 3,
	GARBAGE_ARGS = 4,
	SYSTEM_ERR = 5
    };

    enum reject_stat {
	RPC_MISMATCH = 0,
	AUTH_ERROR = 1
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Reply to an rpc request that was accepted by the server.*/
#if __LSB_VERSION__ >= 13
#define ar_results	ru.AR_results
#define ar_vers	ru.AR_versions
#endif				/* __LSB_VERSION__ >= 1.3 */



#if __LSB_VERSION__ >= 13
    struct accepted_reply {
	struct opaque_auth ar_verf;
	enum accept_stat ar_stat;
	union {
	    struct {
		unsigned long int low;
		unsigned long int high;
	    } AR_versions;
	    struct {
		caddr_t where;
		xdrproc_t proc;
	    } AR_results;
	} ru;
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Reply to an rpc request that was rejected by the server.*/
#if __LSB_VERSION__ >= 13
#define rj_vers	ru.RJ_versions
#define rj_why	ru.RJ_why
#endif				/* __LSB_VERSION__ >= 1.3 */



#if __LSB_VERSION__ >= 13
    struct rejected_reply {
	enum reject_stat rj_stat;
	union {
	    struct {
		unsigned long int low;
		unsigned long int high;
	    } RJ_versions;
	    enum auth_stat RJ_why;	/* why authentication did not work */
	} ru;
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Body of a reply to an rpc request.*/
#if __LSB_VERSION__ >= 13
#define rp_acpt	ru.RP_ar
#define rp_rjct	ru.RP_dr
#endif				/* __LSB_VERSION__ >= 1.3 */



#if __LSB_VERSION__ >= 13
    struct reply_body {
	enum reply_stat rp_stat;
	union {
	    struct accepted_reply RP_ar;
	    struct rejected_reply RP_dr;
	} ru;
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Body of an rpc request call.*/
#if __LSB_VERSION__ >= 13
    struct call_body {
	unsigned long int cb_rpcvers;	/* must be equal to two */
	unsigned long int cb_prog;
	unsigned long int cb_vers;
	unsigned long int cb_proc;
	struct opaque_auth cb_cred;
	struct opaque_auth cb_verf;	/* protocol specific - provided by client */
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* The rpc message*/
#if __LSB_VERSION__ >= 13
#define rm_call	ru.RM_cmb
#define rm_reply	ru.RM_rmb
#define acpted_rply	ru.RM_rmb.ru.RP_ar
#define rjcted_rply	ru.RM_rmb.ru.RP_dr
#endif				/* __LSB_VERSION__ >= 1.3 */



#if __LSB_VERSION__ >= 13
    struct rpc_msg {
	unsigned long int rm_xid;
	enum msg_type rm_direction;
	union {
	    struct call_body RM_cmb;
	    struct reply_body RM_rmb;
	} ru;
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Function prototypes */

#if __LSB_VERSION__ >= 11
    extern bool_t xdr_accepted_reply(XDR *, struct accepted_reply *);
    extern bool_t xdr_callhdr(XDR *, struct rpc_msg *);
    extern bool_t xdr_callmsg(XDR *, struct rpc_msg *);
    extern bool_t xdr_rejected_reply(XDR *, struct rejected_reply *);
    extern bool_t xdr_replymsg(XDR *, struct rpc_msg *);
#endif				/* __LSB_VERSION__ >= 1.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
