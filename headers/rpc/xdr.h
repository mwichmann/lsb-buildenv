#ifndef _RPC_XDR_H_
#define _RPC_XDR_H_

#include <sys/types.h>




xdr_array (*, caddr_t *, u_int *, u_int, u_int, xdrproc_t);
xdr_bool (*, *);
xdr_bytes (*, char **, u_int *, u_int);
xdr_char (*, char *);
xdr_double (*, double *);
xdr_enum (*, *);
xdr_float (*, float *);
void xdr_free (xdrproc_t, char *);
xdr_int (*, int *);
xdr_long (*, long *);
xdr_opaque (*, caddr_t, u_int);
xdr_pointer (*, char **, u_int, xdrproc_t);
xdr_reference (*, caddr_t *, u_int, xdrproc_t);
xdr_short (*, short *);
xdr_string (*, char **, u_int);
xdr_u_char (*, u_char *);
xdr_u_long (*, u_long *);
xdr_u_short (*, u_short *);
xdr_union (*, *, char *, struct xdr_discrim *, xdrproc_t);
xdr_vector (*, char *, u_int, u_int, xdrproc_t);
xdr_void (void);
xdr_wrapstring (*, char **);
void xdrmem_create (*, caddr_t, u_int,,);
void xdrrec_create (*, u_int, u_int, caddr_t, int, int);
xdrrec_eof (*);
#endif
