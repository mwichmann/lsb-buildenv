#ifndef _RPC_AUTH_H_
#define _RPC_AUTH_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <sys/types.h>
#include <inttypes.h>




  extern struct AUTH *authnone_create (void);
  extern int key_decryptsession (char *, union des_block *);
  extern xdr_opaque_auth (*, struct opaque_auth *);
#ifdef __cplusplus
}
#endif
#endif
