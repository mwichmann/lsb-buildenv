#ifndef _RPC_AUTH_H_
#define _RPC_AUTH_H_

#include <sys/types.h>
#include <inttypes.h>
#include <rpc/types.h>
#include <rpc/xdr.h>

#ifdef __cplusplus
extern "C"
{
#endif





/* Status returned from authentication check*/


  enum auth_stat
  {
    AUTH_OK, AUTH_BADCRED = 1,	/* bogus credentials (seal broken) */
    AUTH_REJECTEDCRED = 2,	/* client should begin new session */
    AUTH_BADVERF = 3,		/* bogus verifier (seal broken) */
    AUTH_REJECTEDVERF = 4,	/* verifier expired or was replayed */
    AUTH_TOOWEAK = 5,		/* Rpc calls return an enum clnt_stat. */
    AUTH_INVALIDRESP = 6,	/* bogus response verifier */
    AUTH_FAILED = 7		/* some unknown reason */
  }
   ;




  union des_block
  {
    struct
    {
      u_int32_t high;
      u_int32_t low;
    }
    key;
    char c[8];
  }
   ;


/* Authentication info.  Opaque to client.opaque_auth*/


  struct opaque_auth
  {
    enum_t oa_flavor;		/* flavor of auth */
    caddr_t oa_base;		/* address of more auth stuff */
    u_int oa_length;		/* not to exceed MAX_AUTH_BYTES */
  }
   ;




  struct auth_ops
  {
    void (*ah_nextverf) (AUTH *);
    int (*ah_marshal) (AUTH *, struct XDR *);	/* nextverf & serialize */
    int (*ah_validate) (AUTH *, struct opaque_auth *);	/* validate verifier */
    int (*ah_refresh) (AUTH *);	/* refresh credentials */
    void (*ah_destroy) (AUTH *);	/* Rpc calls return an enum clnt_stat. */
  }
   ;


/* Auth handle, interface to client side authenticators.*/


  typedef struct AUTH
  {
    struct opaque_auth ah_cred;
    struct opaque_auth ah_verf;
    union des_block ah_key;
    struct auth_ops ah_ops;
    caddr_t ah_private;
  }
  AUTH;


  extern AUTH *authnone_create (void);
  extern int key_decryptsession (char *, union des_block *);
  extern bool_t xdr_opaque_auth (struct XDR *, struct opaque_auth *);
#ifdef __cplusplus
}
#endif
#endif
