#ifndef _SYS_UIO_H_
#define _SYS_UIO_H_

#include <sys/types.h>
#include <sys/socket.h>


int readv (int, struct iovec *, size_t);
int writev (int, struct iovec *, size_t);
#endif
