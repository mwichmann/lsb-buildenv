#if (__LSB_VERSION__ >= 11 )
#ifndef _SYS_UIO_H_
#define _SYS_UIO_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern ssize_t readv(int, const struct iovec *, int);
    extern ssize_t writev(int, const struct iovec *, int);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
