#ifndef _DIRENT_H_
#define _DIRENT_H_

#include <sys/types.h>
#include <inttypes.h>




/* structure describing an open directory*/


typedef struct __dirstream DIR;


/* File types for `d_type'*/



/* structure describing a directory entry*/


struct dirent
{
  long d_ino;
  off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
}
 ;

struct dirent64
{
  uint64_t d_ino;
  int64_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
}
 ;


int alphasort (struct dirent **, struct dirent **);
void rewinddir (DIR *);
void seekdir (DIR *, long);
long telldir (DIR *);
int closedir (DIR *);
DIR *opendir (char *);
struct dirent *readdir (DIR *);
struct dirent64 *readdir64 (DIR *);
#endif
