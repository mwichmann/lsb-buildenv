#ifndef _SYS_UIO_H_
#define _SYS_UIO_H_

#include <stddef.h>
#include <sys/socket.h>




extern int readv (int, struct iovec *, size_t);
extern int writev (int, struct iovec *, size_t);
#endif
