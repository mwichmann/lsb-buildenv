#ifndef _AIO_H_
#define _AIO_H_

#include <sys/time.h>
#include <stddef.h>
#include <sys/types.h>


enum
{
  AIO_CANCELED,
  AIO_NOTCANCELED,
  AIO_ALLDONE
}
 ;

#define AIO_ALLDONE	AIO_ALLDONE
#define AIO_CANCELED	AIO_CANCELED
#define AIO_NOTCANCELED	AIO_NOTCANCELED

enum
{
  LIO_READ,
  LIO_WRITE,
  LIO_NOP
}
 ;

#define LIO_NOP	LIO_NOP
#define LIO_READ	LIO_READ
#define LIO_WAIT	LIO_WAIT

enum
{
  LIO_WAIT,
  LIO_NOWAIT
}
 ;

#define LIO_NOWAIT	LIO_NOWAIT
#define LIO_WRITE	LIO_WRITE

struct aiocb
{
  int aio_fildes;
  int aio_lio_opcode;
  int aio_reqprio;
  void *aio_buf;
  size_t aio_nbytes;
  Unknown Type:".." aio_sigevent;
  struct aiocb *__next_prio;
  int __abs_prio;
  int __policy;
  int __error_code;
  __ssize_t __return_value;
  __off_t aio_offset;
  char __pad[1];
  char __unused[1];
}
 ;

struct aiocb64
{
  int aio_fildes;
  int aio_lio_opcode;
  int aio_reqprio;
  void *aio_buf;
  size_t aio_nbytes;
  Unknown Type:".." aio_sigevent;
  struct aiocb *__next_prio;
  int __abs_prio;
  int __policy;
  int __error_code;
  __ssize_t __return_value;
  __off64_t aio_offset;
  char __unused[1];
}
 ;


int aio_read (struct aiocb *);
int aio_write (struct aiocb *);
int lio_listio (int, struct aiocb *, int);
int aio_error (struct aiocb *);
__ssize_t aio_return (struct aiocb *);
int aio_cancel (int, struct aiocb *);
int aio_suspend (struct aiocb *, int, struct timespec *);
int aio_fsync (int, struct aiocb *);
int aio_cancel64 (int, struct aiocb64 *);
int aio_error64 (struct aiocb64 *);
int aio_fsync64 (int, struct aiocb64 *);
int aio_read64 (struct aiocb64 *);
__ssize_t aio_return64 (struct aiocb64 *);
int aio_suspend64 (struct aiocb64 *, int, struct timespec *);
int aio_write64 (struct aiocb64 *);
int lio_listio64 (int, struct aiocb64 *, int);
#endif
