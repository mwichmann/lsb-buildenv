#ifndef _RPC_XDR_H_
#define _RPC_XDR_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <sys/types.h>
#include <inttypes.h>




  extern xdr_array (*, caddr_t *, u_int *, u_int, u_int, xdrproc_t);
  extern xdr_bool (*, *);
  extern xdr_bytes (*, char **, u_int *, u_int);
  extern xdr_char (*, char *);
  extern xdr_double (*, double *);
  extern xdr_enum (*, *);
  extern xdr_float (*, float *);
  extern void xdr_free (xdrproc_t, char *);
  extern xdr_int (*, int *);
  extern xdr_long (*, long *);
  extern xdr_opaque (*, caddr_t, u_int);
  extern xdr_pointer (*, char **, u_int, xdrproc_t);
  extern xdr_reference (*, caddr_t *, u_int, xdrproc_t);
  extern xdr_short (*, short *);
  extern xdr_string (*, char **, u_int);
  extern xdr_u_char (*, u_char *);
  extern xdr_u_long (*, u_long *);
  extern xdr_u_short (*, u_short *);
  extern xdr_union (*, *, char *, struct xdr_discrim *, xdrproc_t);
  extern xdr_vector (*, char *, u_int, u_int, xdrproc_t);
  extern xdr_void (void);
  extern xdr_wrapstring (*, char **);
  extern void xdrmem_create (*, caddr_t, u_int,,);
  extern void xdrrec_create (*, u_int, u_int, caddr_t, int, int);
  extern xdrrec_eof (*);
#ifdef __cplusplus
}
#endif
#endif
