#if (__LSB_VERSION__ >= 11 )
#ifndef _RPC_XDR_H_
#define _RPC_XDR_H_

#include <stdio.h>
#include <sys/types.h>
#include <rpc/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 40
#define XDR_DESTROY(xdrs)	 \
   do { if ((xdrs)->x_ops->x_destroy) (*(xdrs)->x_ops->x_destroy)(xdrs); \
      } while (0)
#define xdr_destroy(xdrs)	 \
   do { if ((xdrs)->x_ops->x_destroy) (*(xdrs)->x_ops->x_destroy)(xdrs); \
      } while (0)
#define XDR_GETBYTES(xdrs,addr,len)	(*(xdrs)->x_ops->x_getbytes)(xdrs, addr, len)
#define xdr_getbytes(xdrs,addr,len)	(*(xdrs)->x_ops->x_getbytes)(xdrs, addr, len)
#define XDR_GETINT32(xdrs,int32p)	(*(xdrs)->x_ops->x_getint32)(xdrs, int32p)
#define xdr_getint32(xdrs,int32p)	(*(xdrs)->x_ops->x_getint32)(xdrs, int32p)
#define XDR_GETLONG(xdrs,longp)	(*(xdrs)->x_ops->x_getlong)(xdrs, longp)
#define xdr_getlong(xdrs,longp)	(*(xdrs)->x_ops->x_getlong)(xdrs, longp)
#define XDR_GETPOS(xdrs)	(*(xdrs)->x_ops->x_getpostn)(xdrs)
#define xdr_getpos(xdrs)	(*(xdrs)->x_ops->x_getpostn)(xdrs)
#define XDR_INLINE(xdrs,len)	(*(xdrs)->x_ops->x_inline)(xdrs, len)
#define xdr_inline(xdrs,len)	(*(xdrs)->x_ops->x_inline)(xdrs, len)
#define XDR_PUTBYTES(xdrs,addr,len)	(*(xdrs)->x_ops->x_putbytes)(xdrs, addr, len)
#define xdr_putbytes(xdrs,addr,len)	(*(xdrs)->x_ops->x_putbytes)(xdrs, addr, len)
#define XDR_PUTINT32(xdrs,int32p)	(*(xdrs)->x_ops->x_putint32)(xdrs, int32p)
#define xdr_putint32(xdrs,int32p)	(*(xdrs)->x_ops->x_putint32)(xdrs, int32p)
#define XDR_PUTLONG(xdrs,longp)	(*(xdrs)->x_ops->x_putlong)(xdrs, longp)
#define xdr_putlong(xdrs,longp)	(*(xdrs)->x_ops->x_putlong)(xdrs, longp)
#define XDR_SETPOS(xdrs,pos)	(*(xdrs)->x_ops->x_setpostn)(xdrs, pos)
#define xdr_setpos(xdrs,pos)	(*(xdrs)->x_ops->x_setpostn)(xdrs, pos)
#endif				/* __LSB_VERSION__ >= 4.0 */



#if __LSB_VERSION__ >= 13
    typedef struct XDR XDR;

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 13
    enum xdr_op {
	XDR_ENCODE,
	XDR_DECODE,
	XDR_FREE
    };

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 13

    struct XDR {
	enum xdr_op x_op;
	struct xdr_ops *x_ops;
	caddr_t x_public;
	caddr_t x_private;
	caddr_t x_base;
	int x_handy;
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Contains operation which is being applied to the stream, an operations vector for the particular implementation and two private fields for the use of the particular implementation.*/

/*  XDR_ENCODE causes the type to be encoded into the stream.  XDR_DECODE causes the type to be extracted from the stream. XDR_FREE can be used to release the space allocated by an XDR_DECODE request.*/
#if __LSB_VERSION__ >= 13
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

#endif				/* __LSB_VERSION__ >= 1.3 */


/* A xdrproc_t exists for each data type which is to be encoded or decoded.*/
#if __LSB_VERSION__ >= 13
    typedef bool_t(*xdrproc_t) (XDR *, void *, ...);

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Support struct for discriminated unions.*/
#if __LSB_VERSION__ >= 13
    struct xdr_discrim {
	int value;
	xdrproc_t proc;
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Function prototypes */

#if __LSB_VERSION__ >= 11
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
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 13
    extern bool_t xdr_u_int(XDR *, u_int *);
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 32
    extern void xdrstdio_create(XDR *, FILE *, enum xdr_op);
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
    extern bool_t xdrrec_endofrecord(XDR *, bool_t);
    extern bool_t xdrrec_skiprecord(XDR *);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
