#ifndef _SYS_STATFS_H_
#define _SYS_STATFS_H_

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern int fstatfs64 (int, struct statfs64 *);
  extern int statfs64 (const char *, struct stat64 *);
  extern int fstatfs (int, struct statfs *);
  extern int statfs (const char *, struct statfs *);
#ifdef __cplusplus
}
#endif
#endif
