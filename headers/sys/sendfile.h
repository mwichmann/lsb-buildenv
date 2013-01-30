#if (__LSB_VERSION__ >= 40 )
#ifndef _SYS_SENDFILE_H_
#define _SYS_SENDFILE_H_

#include <sys/types.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern ssize_t sendfile(int __out_fd, int __in_fd, off_t * __offset,
			    size_t __count);
    extern ssize_t sendfile64(int __out_fd, int __in_fd,
			      off64_t * __offset, size_t __count);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
