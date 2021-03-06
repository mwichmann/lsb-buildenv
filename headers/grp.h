#if (__LSB_VERSION__ >= 10 )
#ifndef _GRP_H_
#define _GRP_H_

#include <sys/types.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    struct group {
	char *gr_name;
	char *gr_passwd;
	gid_t gr_gid;
	char **gr_mem;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */



/* Function prototypes */

    extern void endgrent(void);
    extern struct group *getgrent(void);
    extern struct group *getgrgid(gid_t __gid);
    extern struct group *getgrnam(const char *__name);
    extern int initgroups(const char *__user, gid_t __group);
    extern void setgrent(void);
    extern int setgroups(size_t __n, const gid_t * __groups);
#if __LSB_VERSION__ >= 13
    extern int getgrgid_r(gid_t __gid, struct group *__resultbuf,
			  char *__buffer, size_t __buflen,
			  struct group **__result);
    extern int getgrnam_r(const char *__name, struct group *__resultbuf,
			  char *__buffer, size_t __buflen,
			  struct group **__result);
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 30
    extern int getgrouplist(const char *__user, gid_t __group,
			    gid_t * __groups, int *__ngroups);
#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 40
    extern int getgrent_r(struct group *__resultbuf, char *__buffer,
			  size_t __buflen, struct group **__result);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
