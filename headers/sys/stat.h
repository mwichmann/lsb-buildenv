
int __fxstat(int, int, struct stat *);
int __fxstat64(int, int, struct stat64 *);
int __lxstat(int, char *, struct stat *);
int __lxstat64(int, char *, struct stat64 *);
int __xmknod(int, char *, __mode_t, __dev_t *);
int __xstat(int, char *, struct stat *);
int __xstat64(int, char *, struct stat64 *);
int mkfifo(char *, __mode_t);
int chmod(char *, __mode_t);
int fchmod(int, __mode_t);
int mkdir(char *, __mode_t);
__mode_t umask(__mode_t);
