

#define O_RDONLY	00
#define O_WRONLY	01
#define O_CREAT	0100
#define O_TRUNC	01000
#define O_SYNC	010000
#define O_RDWR	02
#define O_EXCL	0200
#define O_APPEND	02000
#define O_NOCTTY	0400
#define O_NONBLOCK	04000

#define O_ACCMODE	0003
#define O_ASYNC	020000
int creat (char *, __mode_t);
int creat64 (char *, __mode_t);
int fcntl (int, int, ...);
int open (char *, int, ...);
int open64 (char *, int, ...);
