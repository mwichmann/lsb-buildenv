#ifndef _PWD_H_
#define _PWD_H_

#include <stddef.h>
#include <sys/types.h>




/* The passwd structure.*/


struct passwd
{
  char *pw_name;
  char *pw_passwd;
  uid_t pw_uid;
  gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
}
 ;


void endpwent (void);
struct passwd *getpwent (void);
struct passwd *getpwnam (char *);
struct passwd *getpwuid (uid_t);
void setpwent (void);
#endif
