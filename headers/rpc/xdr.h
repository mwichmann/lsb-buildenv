#ifndef _RPC_XDR_H_
#define _RPC_XDR_H_

#include <sys/types.h>
#include <inttypes.h>
#include <rpc/types.h>

#ifdef __cplusplus
extern "C"
{
#endif




  enum xdr_op
  {
    XDR_ENCODE,
    XDR_DECODE,
    XDR_FREE
  }
   ;

  typedef struct XDR
  {
    enum xdr_op x_op;
    struct xdr_ops *x_ops;
    caddr_t x_public;
    caddr_t x_private;
    caddr_t x_base;
    int x_handy;
  }
  XDR;


/* Contains operation which is being applied to the stream, an operations vector for the particular implementation and two private fields for the use of the particular implementation.*/



/*  XDR_ENCODE causes the type to be encoded into the stream.  XDR_DECODE causes the type to be extracted from the stream. XDR_FREE can be used to release the space allocated by an XDR_DECODE request.*/


  struct xdr_ops
  {
    bool_t (*x_getlong) (struct XDR * __xdrs, long *__lp);
    bool_t (*x_putlong) (struct XDR * __xdrs, long *__lp);
    bool_t (*x_getbytes) (struct XDR * __xdrs, caddr_t __addr, u_int __len);
    bool_t (*x_putbytes) (struct XDR * __xdrs, char *__addr, u_int __len);
    u_int (*x_getpostn) (struct XDR * __xdrs);
    bool_t (*x_setpostn) (struct XDR * __xdrs, u_int __pos);
    int32_t *(*x_inline) (struct XDR * __xdrs, int __len);
    void (*x_destroy) (struct XDR * __xdrs);
      bool_t (*x_getint32) (struct XDR * __xdrs, int32_t * __ip);
      bool_t (*x_putint32) (struct XDR * __xdrs, int32_t * __ip);
  }
   ;


/* A xdrproc_t exists for each data type which is to be encoded or decoded.*/


  typedef bool_t (*xdrproc_t) (struct XDR *, void *, ...);


/* Support struct for discriminated unions.*/


  struct xdr_discrim
  {
    int value;
    xdrproc_t proc;
  }
   ;


  extern bool_t xdr_array (struct XDR *, caddr_t *, u_int *, u_int, u_int,
			   xdrproc_t);
  extern bool_t xdr_bool (struct XDR *, bool_t *);
  extern bool_t xdr_bytes (struct XDR *, char **, u_int *, u_int);
  extern bool_t xdr_char (struct XDR *, char *);
  extern bool_t xdr_double (struct XDR *, double *);
  extern bool_t xdr_enum (struct XDR *, enum_t *);
  extern bool_t xdr_float (struct XDR *, float *);
  extern void xdr_free (xdrproc_t, char *);
  extern bool_t xdr_int (struct XDR *, int *);
  extern bool_t xdr_long (struct XDR *, long *);
  extern bool_t xdr_opaque (struct XDR *, caddr_t, u_int);
  extern bool_t xdr_pointer (struct XDR *, char **, u_int, xdrproc_t);
  extern bool_t xdr_reference (struct XDR *, caddr_t *, u_int, xdrproc_t);
  extern bool_t xdr_short (struct XDR *, short *);
  extern bool_t xdr_string (struct XDR *, char **, u_int);
  extern bool_t xdr_u_char (struct XDR *, u_char *);
  extern bool_t xdr_u_long (struct XDR *, u_long *);
  extern bool_t xdr_u_short (struct XDR *, u_short *);
  extern bool_t xdr_union (struct XDR *, enum_t *, char *,
			   struct xdr_discrim *, xdrproc_t);
  extern bool_t xdr_vector (struct XDR *, char *, u_int, u_int, xdrproc_t);
  extern bool_t xdr_void (void);
  extern bool_t xdr_wrapstring (struct XDR *, char **);
  extern void xdrmem_create (struct XDR *, caddr_t, u_int, enum xdr_op);
  extern void xdrrec_create (struct XDR *, u_int, u_int, caddr_t, int, int);
  extern bool_t xdrrec_eof (struct XDR *);
#ifdef __cplusplus
}
#endif
#endif
