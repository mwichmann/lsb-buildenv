

#define S_IROTH	(S_IRGRP>>3)
#define S_IRGRP	(S_IRUSR>>3)
#define S_IRWXG	(S_IRWXU>>3)
#define S_IWOTH	(S_IWGRP>>3)
#define S_IWGRP	(S_IWUSR>>3)
#define S_IXOTH	(S_IXGRP>>3)
#define S_IXGRP	(S_IXUSR>>3)
#define S_IRWXU	(__S_IREAD|__S_IWRITE|__S_IEXEC)
#define S_IXUSR	__S_IEXEC
#define S_IFBLK	__S_IFBLK
#define S_IFCHR	__S_IFCHR
#define S_IFDIR	__S_IFDIR
#define S_IFIFO	__S_IFIFO
#define S_IFLNK	__S_IFLNK
#define S_IFMT	__S_IFMT
#define S_IFREG	__S_IFREG
#define S_IFSOCK	__S_IFSOCK
#define S_IRUSR	__S_IREAD
#define S_ISGID	__S_ISGID
#define S_ISUID	__S_ISUID
#define S_IWUSR	__S_IWRITE
int __fxstat (int, int, struct stat *);
int __fxstat64 (int, int, struct stat64 *);
int __lxstat (int, char *, struct stat *);
int __lxstat64 (int, char *, struct stat64 *);
int __xmknod (int, char *, __mode_t, __dev_t *);
int __xstat (int, char *, struct stat *);
int __xstat64 (int, char *, struct stat64 *);
int mkfifo (char *, __mode_t);
int chmod (char *, __mode_t);
int fchmod (int, __mode_t);
int mkdir (char *, __mode_t);
__mode_t umask (__mode_t);
