#ifndef _GRP_H_
#define _GRP_H_

#include <stddef.h>
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
#ifdef __cplusplus
}
#endif
#endif
