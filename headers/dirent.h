#if (__LSB_VERSION__ >= 10 )
#ifndef _DIRENT_H_
#define _DIRENT_H_

#include <sys/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



/* structure describing an open directory*/
#if __LSB_VERSION__ >= 11
    typedef struct __dirstream DIR;

#endif				/* __LSB_VERSION__ >= 1.1 */


/* File types for `d_type'*/

/* structure describing a directory entry*/
#if __LSB_VERSION__ >= 11
    struct dirent {
	long int d_ino;
	off_t d_off;
	unsigned short d_reclen;
	unsigned char d_type;
	char d_name[256];
    };

    struct dirent64 {
	uint64_t d_ino;
	int64_t d_off;
	unsigned short d_reclen;
	unsigned char d_type;
	char d_name[256];
    };

#endif				/* __LSB_VERSION__ >= 1.1 */


/* Function prototypes */

    extern int closedir(DIR * __dirp);
    extern DIR *opendir(const char *__name);
    extern struct dirent *readdir(DIR * __dirp);
    extern struct dirent64 *readdir64(DIR * __dirp);
    extern void rewinddir(DIR * __dirp);
    extern void seekdir(DIR * __dirp, long int __pos);
    extern long int telldir(DIR * __dirp);
#if __LSB_VERSION__ >= 11
    extern int readdir_r(DIR * __dirp, struct dirent *__entry,
			 struct dirent **__result);
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 32
    extern int readdir64_r(DIR * __dirp, struct dirent64 *__entry,
			   struct dirent64 **__result);
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
    extern int alphasort(const struct dirent **__e1,
			 const struct dirent **__e2);
    extern int alphasort64(const struct dirent64 **__e1,
			   const struct dirent64 **__e2);
    extern int dirfd(DIR * __dirp);
    extern DIR *fdopendir(int __fd);
    extern int scandir(const char *__dir, struct dirent ***__namelist,
		       int (*__selector) (const struct dirent *),
		       int (*__cmp) (const struct dirent * *,
				     const struct dirent * *));
    extern int scandir64(const char *__dir, struct dirent64 ***__namelist,
			 int (*__selector) (const struct dirent64 *),
			 int (*__cmp) (const struct dirent64 * *,
				       const struct dirent64 * *));
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
