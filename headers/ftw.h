typedef int (*__ftw_func_t) (char *__filename, struct stat * __status,

			     int __flag);

typedef int (*__ftw64_func_t) (char *__filename, struct stat64 * __status,
			       int __flag);

typedef int (*__nftw_func_t) (char *__filename, struct stat * __status,
			      int __flag, struct FTW * __info);

typedef int (*__nftw64_func_t) (char *__filename, struct stat64 * __status,
				int __flag, struct FTW * __info);

int ftw(char *, __ftw_func_t, int);
int ftw64(char *, __ftw64_func_t, int);
int nftw(char *, __nftw_func_t, int, int);
int nftw64(char *, __nftw64_func_t, int, int);
