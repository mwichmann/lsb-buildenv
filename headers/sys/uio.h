#ifndef _SYS_UIO_H_
#define _SYS_UIO_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <stddef.h>
#include <sys/socket.h>




  extern int readv (int, struct iovec *, size_t);
  extern int writev (int, struct iovec *, size_t);
#ifdef __cplusplus
}
#endif
#endif
