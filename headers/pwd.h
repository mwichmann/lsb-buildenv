#ifndef _PWD_H_
#define _PWD_H_

#include <sys/types.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif





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
  extern struct passwd *getpwnam (const char *);
  extern struct passwd *getpwuid (uid_t);
  extern void setpwent (void);
  extern int getpwnam_r (const char *, struct passwd *, char *, size_t,
			 struct passwd **);
  extern int getpwuid_r (uid_t, struct passwd *, char *, size_t,
			 struct passwd **);
#ifdef __cplusplus
}
#endif
#endif
