#ifndef _SYS_UIO_H_
#define _SYS_UIO_H_

#include <sys/socket.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern ssize_t readv (int, const struct iovec *, int);
  extern ssize_t writev (int, const struct iovec *, int);
#ifdef __cplusplus
}
#endif
#endif
