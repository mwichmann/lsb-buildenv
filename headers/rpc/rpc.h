#ifndef _RPC_RPC_H_
#define _RPC_RPC_H_

#include <netinet/in.h>
#include <sys/types.h>
#include <inttypes.h>

#ifdef __cplusplus
extern "C"
{
#endif




  struct opaque_auth
  {
    Unknown Type:".." oa_flavor;
    caddr_t oa_base;
    u_int oa_length;
  }
   ;

  struct AUTH
  {
    struct opaque_auth ah_cred;
    struct opaque_auth ah_verf;
    union des_block ah_key;
    struct auth_ops ah_ops;
    caddr_t ah_private;
  }
   ;

  enum clnt_stat
  {
    RPC_SUCCESS,
    RPC_CANTENCODEARGS,
    RPC_CANTDECODERES,
    RPC_CANTSEND,
    RPC_CANTRECV,
    RPC_TIMEDOUT,
    RPC_VERSMISMATCH,
    RPC_AUTHERROR,
    RPC_PROGUNAVAIL,
    RPC_PROGVERSMISMATCH,
    RPC_PROCUNAVAIL,
    RPC_CANTDECODEARGS,
    RPC_SYSTEMERROR,
    RPC_NOBROADCAST,
    RPC_UNKNOWNHOST,
    RPC_UNKNOWNPROTO,
    RPC_UNKNOWNADDR,
    RPC_RPCBFAILURE,
    RPC_PROGNOTREGISTERED,
    RPC_N2AXLATEFAILURE,
    RPC_FAILED,
    RPC_INTR,
    RPC_TLIERROR,
    RPC_UDERROR,
    RPC_INPROGRESS,
    RPC_STALERACHANDLE
  }
   ;

  struct XDR
  {
    enum xdr_op x_op;
    struct xdr_ops x_ops;
    caddr_t x_public;
    caddr_t x_private;
    caddr_t x_base;
    int x_handy;
  }
   ;

  struct SVCXPRT
  {
    int xp_sock;
    u_short xp_port;
    struct xp_ops xp_ops;
    int xp_addrlen;
    struct sockaddr_in xp_raddr;
    struct opaque_auth xp_verf;
    caddr_t xp_p1;
    caddr_t xp_p2;
    char xp_pad;
  }
   ;


#ifdef __cplusplus
}
#endif
#endif
