#ifndef _RPC_AUTH_H_
#define _RPC_AUTH_H_

#include <sys/types.h>
#include <inttypes.h>
#include <rpc/rpc.h>
#include <rpc/xdr.h>

#ifdef __cplusplus
extern "C"
{
#endif




  union des_block
  {
    struct
    {
      u_int32_t high;
      u_int32_t low;
    }
    key;
    char c;
  }
   ;

  struct auth_ops
  {
    void (*ah_nextverf) (void);
    int (*ah_marshal) (void);
    int (*ah_validate) (void);
    int (*ah_refresh) (void);
    void (*ah_destroy) (void);
  }
   ;


  extern struct AUTH *authnone_create (void);
  extern int key_decryptsession (char *, union des_block *);
  extern bool_t xdr_opaque_auth (struct XDR *, struct opaque_auth *);
#ifdef __cplusplus
}
#endif
#endif
