#ifndef _GRP_H_
#define _GRP_H_

#include <sys/types.h>



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
extern void setgrent (void);
extern int setgroups (void);
#endif
