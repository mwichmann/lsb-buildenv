#ifndef _GRP_H_
#define _GRP_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C"
{
#endif




  struct group
  {
    char *gr_name;
    char *gr_passwd;
    gid_t gr_gid;
    char **gr_mem;
  }
   ;





  extern void endgrent (void);
  extern struct group *getgrent (void);
  extern struct group *getgrgid (gid_t);
  extern struct group *getgrnam (const char *);
  extern int initgroups (const char *, gid_t);
  extern void setgrent (void);
  extern int setgroups (size_t, gid_t *);
  extern int getgrgid_r (gid_t, struct group *, char *, size_t,
			 struct group **);
  extern int getgrnam_r (char *, struct group *, char *, size_t,
			 struct group **);
#ifdef __cplusplus
}
#endif
#endif
