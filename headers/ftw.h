#if (__LSB_VERSION__ >= 10 )
#ifndef _FTW_H_
#define _FTW_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Values for the FLAG argument to the user function passed to `ftw' and 'nftw'.*/
#if __LSB_VERSION__ >= 11
#define FTW_D	FTW_D
#define FTW_DNR	FTW_DNR
#define FTW_DP	FTW_DP
#define FTW_F	FTW_F
#define FTW_NS	FTW_NS
#define FTW_SL	FTW_SL
#define FTW_SLN	FTW_SLN
#endif				/* __LSB_VERSION__ >= 1.1 */



#if __LSB_VERSION__ >= 12
    enum {
	FTW_F,
	FTW_D,
	FTW_DNR,
	FTW_NS,
	FTW_SL,
	FTW_DP,
	FTW_SLN
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Flags for fourth argument of `nftw'.*/
#if __LSB_VERSION__ >= 12
    enum {
	FTW_PHYS = 1,
	FTW_MOUNT = 2,
	FTW_CHDIR = 4,
	FTW_DEPTH = 8
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Structure used for fourth argument to callback function for `nftw'.*/
#if __LSB_VERSION__ >= 12
    struct FTW {
	int base;
	int level;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Convenient types for callback functions.*/
    typedef int (*__ftw_func_t) (const char *__filename,
				 const struct stat * __status, int __flag);

    typedef int (*__ftw64_func_t) (const char *__filename,
				   const struct stat64 * __status,
				   int __flag);

    typedef int (*__nftw_func_t) (const char *__filename,
				  const struct stat * __status, int __flag,
				  struct FTW * __info);

    typedef int (*__nftw64_func_t) (const char *__filename,
				    const struct stat64 * __status,
				    int __flag, struct FTW * __info);


/* Function prototypes */

    extern int ftw(const char *__dir, __ftw_func_t __func,
		   int __descriptors);
    extern int ftw64(const char *__dir, __ftw64_func_t __func,
		     int __descriptors);
    extern int nftw(const char *__dir, __nftw_func_t __func,
		    int __descriptors, int __flag);
    extern int nftw64(const char *__dir, __nftw64_func_t __func,
		      int __descriptors, int __flag);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
