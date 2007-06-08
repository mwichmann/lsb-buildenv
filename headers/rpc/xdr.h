#ifndef _RPC_XDR_H_
#define _RPC_XDR_H_

#include <stdio.h>
#include <sys/types.h>
#include <rpc/types.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct XDR XDR;

    enum xdr_op {
	XDR_ENCODE,
	XDR_DECODE,
	XDR_FREE
    };


    struct XDR {
	enum xdr_op x_op;
	struct xdr_ops *x_ops;
	caddr_t x_public;
	caddr_t x_private;
	caddr_t x_base;
	int x_handy;
    };


/* Contains operation which is being applied to the stream, an operations vector for the particular implementation and two private fields for the use of the particular implementation.*/



/*  XDR_ENCODE causes the type to be encoded into the stream.  XDR_DECODE causes the type to be extracted from the stream. XDR_FREE can be used to release the space allocated by an XDR_DECODE request.*/


    struct xdr_ops {
	bool_t(*x_getlong) (XDR * __xdrs, long int *__lp);
	bool_t(*x_putlong) (XDR * __xdrs, long int *__lp);
	bool_t(*x_getbytes) (XDR * __xdrs, caddr_t __addr, u_int __len);
	bool_t(*x_putbytes) (XDR * __xdrs, char *__addr, u_int __len);
	u_int(*x_getpostn) (XDR * __xdrs);
	bool_t(*x_setpostn) (XDR * __xdrs, u_int __pos);
	int32_t *(*x_inline) (XDR * __xdrs, int __len);
	void (*x_destroy) (XDR * __xdrs);
	 bool_t(*x_getint32) (XDR * __xdrs, int32_t * __ip);
	 bool_t(*x_putint32) (XDR * __xdrs, int32_t * __ip);
    };


/* A xdrproc_t exists for each data type which is to be encoded or decoded.*/


    typedef bool_t(*xdrproc_t) (XDR *, void *, ...);


/* Support struct for discriminated unions.*/


    struct xdr_discrim {
	int value;
	xdrproc_t proc;
    };


    extern void xdrstdio_create(XDR *, FILE *, enum xdr_op);
    extern bool_t xdr_array(XDR *, caddr_t *, u_int *, u_int, u_int,
			    xdrproc_t);
    extern bool_t xdr_bool(XDR *, bool_t *);
    extern bool_t xdr_bytes(XDR *, char **, u_int *, u_int);
    extern bool_t xdr_char(XDR *, char *);
    extern bool_t xdr_double(XDR *, double *);
    extern bool_t xdr_enum(XDR *, enum_t *);
    extern bool_t xdr_float(XDR *, float *);
    extern void xdr_free(xdrproc_t, char *);
    extern bool_t xdr_int(XDR *, int *);
    extern bool_t xdr_long(XDR *, long int *);
    extern bool_t xdr_opaque(XDR *, caddr_t, u_int);
    extern bool_t xdr_pointer(XDR *, char **, u_int, xdrproc_t);
    extern bool_t xdr_reference(XDR *, caddr_t *, u_int, xdrproc_t);
    extern bool_t xdr_short(XDR *, short *);
    extern bool_t xdr_string(XDR *, char **, u_int);
    extern bool_t xdr_u_char(XDR *, u_char *);
    extern bool_t xdr_u_int(XDR *, u_int *);
    extern bool_t xdr_u_long(XDR *, u_long *);
    extern bool_t xdr_u_short(XDR *, u_short *);
    extern bool_t xdr_union(XDR *, enum_t *, char *,
			    const struct xdr_discrim *, xdrproc_t);
    extern bool_t xdr_vector(XDR *, char *, u_int, u_int, xdrproc_t);
    extern bool_t xdr_void(void);
    extern bool_t xdr_wrapstring(XDR *, char **);
    extern void xdrmem_create(XDR *, caddr_t, u_int, enum xdr_op);
    extern void xdrrec_create(XDR *, u_int, u_int, caddr_t,
			      int (*)(char *, char *, int)
			      , int (*)(char *, char *, int)
	);
    extern bool_t xdrrec_eof(XDR *);
#ifdef __cplusplus
}
#endif
#endif
