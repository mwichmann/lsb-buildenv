#if (__LSB_VERSION__ >= 40 )
#ifndef _SYS_SENDFILE_H_
#define _SYS_SENDFILE_H_

#include <sys/types.h>
#include <unistd.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern ssize_t sendfile(int, int, off_t *, size_t);
    extern ssize_t sendfile64(int, int, off64_t *, size_t);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
