#ifndef _FTW_H_
#define _FTW_H_





/* Values for the FLAG argument to the user function passed to `ftw' and 'nftw'.*/
#define FTW_D	FTW_D
#define FTW_DNR	FTW_DNR
#define FTW_DP	FTW_DP
#define FTW_F	FTW_F
#define FTW_NS	FTW_NS
#define FTW_SL	FTW_SL
#define FTW_SLN	FTW_SLN


enum
{
  FTW_F,
  FTW_D,
  FTW_DNR,
  FTW_NS,
  FTW_SL,
  FTW_DP,
  FTW_SLN
}
 ;


/* Flags for fourth argument of `nftw'.*/


enum
{
  FTW_PHYS,
  FTW_MOUNT,
  FTW_CHDIR,
  FTW_DEPTH
}
 ;


/* Structure used for fourth argument to callback function for `nftw'.*/


struct FTW
{
  int base;
  int level;
}
 ;


/* Convenient types for callback functions.*/


typedef int (*__ftw_func_t) (char *__filename, struct stat * __status,
			     int __flag);

typedef int (*__ftw64_func_t) (char *__filename, struct stat64 * __status,
			       int __flag);

typedef int (*__nftw_func_t) (char *__filename, struct stat * __status,
			      int __flag, struct FTW * __info);

typedef int (*__nftw64_func_t) (char *__filename, struct stat64 * __status,
				int __flag, struct FTW * __info);


extern int ftw (char *, __ftw_func_t, int);
extern int ftw64 (char *, __ftw64_func_t, int);
extern int nftw (char *, __nftw_func_t, int, int);
extern int nftw64 (char *, __nftw64_func_t, int, int);
#endif
