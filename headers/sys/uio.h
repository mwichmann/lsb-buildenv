#ifndef _SYS_UIO_H_
#define _SYS_UIO_H_

#include <sys/socket.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern int readv (int, const struct iovec *, size_t);
  extern int writev (int, const struct iovec *, size_t);
#ifdef __cplusplus
}
#endif
#endif
