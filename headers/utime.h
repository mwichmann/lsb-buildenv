#ifndef _UTIME_H_
#define _UTIME_H_

#include <sys/types.h>

struct utimbuf
{
  __time_t actime;
  __time_t modtime;
}
 ;


int utime (char *, struct utimbuf *);
#endif
