#if (__LSB_VERSION__ >= 10 )
#ifndef _PWD_H_
#define _PWD_H_

#include <sys/types.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif



/* The passwd structure.*/
#if __LSB_VERSION__ >= 12
    struct passwd {
	char *pw_name;
	char *pw_passwd;
	uid_t pw_uid;
	gid_t pw_gid;
	char *pw_gecos;
	char *pw_dir;
	char *pw_shell;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern void endpwent(void);
    extern struct passwd *getpwent(void);
    extern struct passwd *getpwnam(const char *__name);
    extern struct passwd *getpwuid(uid_t __uid);
    extern void setpwent(void);
#if __LSB_VERSION__ >= 11
    extern int getpwuid_r(uid_t __uid, struct passwd *__resultbuf,
			  char *__buffer, size_t __buflen,
			  struct passwd **__result);
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
    extern int getpwnam_r(const char *__name, struct passwd *__resultbuf,
			  char *__buffer, size_t __buflen,
			  struct passwd **__result);
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
    extern int getpwent_r(struct passwd *__resultbuf, char *__buffer,
			  size_t __buflen, struct passwd **__result);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
