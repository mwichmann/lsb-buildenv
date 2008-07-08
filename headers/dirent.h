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

    extern int closedir(DIR *);
    extern DIR *opendir(const char *);
    extern struct dirent *readdir(DIR *);
    extern struct dirent64 *readdir64(DIR *);
    extern void rewinddir(DIR *);
    extern void seekdir(DIR *, long int);
    extern long int telldir(DIR *);
#if __LSB_VERSION__ >= 11
    extern int readdir_r(DIR *, struct dirent *, struct dirent **);
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 32
    extern int readdir64_r(DIR *, struct dirent64 *, struct dirent64 **);
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
    extern int alphasort(const struct dirent **, const struct dirent **);
    extern int alphasort64(const struct dirent64 **,
			   const struct dirent64 **);
    extern int dirfd(DIR *);
    extern DIR *fdopendir(int);
    extern int scandir(const char *, struct dirent ***,
		       int (*)(const struct dirent *)
		       , int (*)(const struct dirent *,
				 const struct dirent *)
	);
    extern int scandir64(const char *, struct dirent64 ***,
			 int (*)(const struct dirent64 *)
			 , int (*)(const struct dirent64 *,
				   const struct dirent64 *)
	);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
