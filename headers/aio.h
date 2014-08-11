#if (__LSB_VERSION__ >= 50 )
#ifndef _AIO_H_
#define _AIO_H_

#include <signal.h>
#include <sys/types.h>
#include <time.h>
#include <stddef.h>
#include <stdint.h>
#include <lsb/types.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Returned by aio_cancel*/
#define AIO_CANCELED	0
#define AIO_NOTCANCELED	1
#define AIO_ALLDONE	2



/* LIO opcodes*/
#define LIO_READ	0
#define LIO_WRITE	1
#define LIO_NOP	2



/* LIO modes*/
#define LIO_WAIT	0
#define LIO_NOWAIT	1



/* I/O control block*/
    struct aiocb {
	int aio_fildes;		/* File desriptor */
	int aio_lio_opcode;	/* Operation to be performed */
	int aio_reqprio;	/* Request priority offset */
	void *aio_buf;		/* Location of buffer */
	size_t aio_nbytes;	/* Length of transfer */
	struct sigevent aio_sigevent;	/* Signal number and value */
	struct aiocb *__next_prio;	/* internal, do not use */
	int __abs_prio;		/* internal, do not use */
	int __policy;		/* internal, do not use */
	int __error_code;	/* internal, do not use */
	ssize_t __return_value;	/* internal, do not use */
	off_t aio_offset;	/* File offset */
	char __pad[sizeof(off64_t) - sizeof(off_t)];
	char __unused[32];
    };

    struct aiocb64 {
	int aio_fildes;		/* File desriptor */
	int aio_lio_opcode;	/* Operation to be performed */
	int aio_reqprio;	/* Request priority offset */
	void *aio_buf;		/* Location of buffer */
	size_t aio_nbytes;	/* Length of transfer */
	struct sigevent aio_sigevent;	/* Signal number and value */
	struct aiocb *__next_prio;	/* internal, do not use */
	int __abs_prio;		/* internal, do not use */
	int __policy;		/* internal, do not use */
	int __error_code;	/* internal, do not use */
	ssize_t __return_value;	/* internal, do not use */
	off64_t aio_offset;	/* File offset */
	char __unused[32];
    };


/* Function prototypes */

    extern int aio_cancel(int fildes, struct aiocb *aiocbp);
    extern int aio_cancel64(int fildes, struct aiocb64 *aiocbp);
    extern int aio_error(struct aiocb *aiocbp);
    extern int aio_error64(struct aiocb64 *aiocbp);
    extern int aio_fsync(int operation, struct aiocb *aiocbp);
    extern int aio_fsync64(int operation, struct aiocb64 *aiocbp);
    extern int aio_read(struct aiocb *aiocbp);
    extern int aio_read64(struct aiocb64 *aiocbp);
    extern int aio_return(struct aiocb *aiocbp);
    extern int aio_return64(struct aiocb64 *aiocbp);
    extern int aio_suspend(struct aiocb *list[], int nent,
			   struct timespec *timeout);
    extern int aio_suspend64(struct aiocb64 *list[], int nent,
			     struct timespec *timeout);
    extern int aio_write(struct aiocb *aiocbp);
    extern int aio_write64(struct aiocb64 *aiocbp);
    extern int lio_listio(int mode, struct aiocb *list[], int nent,
			  struct sigevent *sig);
    extern int lio_listio64(int mode, struct aiocb64 *list[], int nent,
			    struct sigevent *sig);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
