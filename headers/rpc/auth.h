#ifndef _RPC_AUTH_H_
#define _RPC_AUTH_H_

#include <sys/types.h>


struct AUTH *authnone_create (void);
int key_decryptsession (char *, union des_block *);
xdr_opaque_auth (*, struct opaque_auth *);
#endif
