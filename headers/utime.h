#ifndef _UTIME_H_
#define _UTIME_H_

#include <sys/types.h>



struct utimbuf
{
  time_t actime;
  time_t modtime;
}
 ;


extern int utime (char *, struct utimbuf *);
#endif
