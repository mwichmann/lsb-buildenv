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


extern void endpwent (void);
extern struct passwd *getpwent (void);
extern struct passwd *getpwnam (char *);
extern struct passwd *getpwuid (uid_t);
extern void setpwent (void);
#endif
