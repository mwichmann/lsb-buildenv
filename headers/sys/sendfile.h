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

#if __LSB_VERSION__ >= 40
    extern ssize_t sendfile(int, int, off_t *, size_t);
    extern ssize_t sendfile64(int, int, off64_t *, size_t);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
