#ifndef _RPC_AUTH_H_
#define _RPC_AUTH_H_

#include <sys/types.h>




extern struct AUTH *authnone_create (void);
extern int key_decryptsession (char *, union des_block *);
extern xdr_opaque_auth (*, struct opaque_auth *);
#endif
