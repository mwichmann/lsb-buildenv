#ifndef _SYS_UIO_H_
#define _SYS_UIO_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern int readv (int, struct iovec *const, size_t);
  extern int writev (int, struct iovec *const, size_t);
#ifdef __cplusplus
}
#endif
#endif
