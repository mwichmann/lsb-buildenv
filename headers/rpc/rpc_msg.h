#ifndef _RPC_RPC_MSG_H_
#define _RPC_RPC_MSG_H_

#include <sys/types.h>
#include <inttypes.h>
#include <rpc/auth.h>
#include <rpc/types.h>
#include <rpc/xdr.h>

#ifdef __cplusplus
extern "C"
{
#endif







  enum msg_type
  {
    CALL,
    REPLY = 1
  }
   ;

  enum reply_stat
  {
    MSG_ACCEPTED,
    MSG_DENIED = 1
  }
   ;

  enum accept_stat
  {
    SUCCESS,
    PROG_UNAVAIL = 1,
    PROG_MISMATCH = 2,
    PROC_UNAVAIL = 3,
    GARBAGE_ARGS = 4,
    SYSTEM_ERR = 5
  }
   ;

  enum reject_stat
  {
    RPC_MISMATCH,
    AUTH_ERROR = 1
  }
   ;


/* Reply to an rpc request that was accepted by the server.*/
#define ar_results	ru.AR_results
#define ar_vers	ru.AR_versions


  struct accepted_reply
  {
    struct opaque_auth ar_verf;
    enum accept_stat ar_stat;
    union
    {
      struct
      {
	unsigned long low;
	unsigned long high;
      }
      AR_versions;
      struct
      {
	caddr_t where;
	xdrproc_t proc;
      }
      AR_results;
    }
    ru;
  }
   ;


/* Reply to an rpc request that was rejected by the server.*/
#define rj_vers	ru.RJ_versions
#define rj_why	ru.RJ_why


  struct rejected_reply
  {
    enum reject_stat rj_stat;
    union
    {
      struct
      {
	unsigned long low;
	unsigned long high;
      }
      RJ_versions;
      enum auth_stat RJ_why;	/* why authentication did not work */
    }
    ru;
  }
   ;


/* Body of a reply to an rpc request.*/
#define rp_acpt	ru.RP_ar
#define rp_rjct	ru.RP_dr


  struct reply_body
  {
    enum reply_stat rp_stat;
    union
    {
      struct accepted_reply RP_ar;
      struct rejected_reply RP_dr;
    }
    ru;
  }
   ;


/* Body of an rpc request call.*/


  struct call_body
  {
    unsigned long cb_rpcvers;	/* must be equal to two */
    unsigned long cb_prog;
    unsigned long cb_vers;
    unsigned long cb_proc;
    struct opaque_auth cb_cred;
    struct opaque_auth cb_verf;	/* protocol specific - provided by client */
  }
   ;


/* The rpc message*/
#define rm_call	ru.RM_cmb
#define rm_reply	ru.RM_rmb
#define acpted_rply	ru.RM_rmb.ru.RP_ar
#define rjcted_rply	ru.RM_rmb.ru.RP_dr


  struct rpc_msg
  {
    unsigned long rm_xid;
    enum msg_type rm_direction;
    union
    {
      struct call_body RM_cmb;
      struct reply_body RM_rmb;
    }
    ru;
  }
   ;


#ifdef __cplusplus
}
#endif
#endif
