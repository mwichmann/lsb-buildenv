#ifndef _UNISTD_H_
#define _UNISTD_H_

#include <sys/types.h>

typedef __ssize_t ssize_t;

typedef __pid_t pid_t;

typedef __off_t off_t;


#define F_OK	0
#define X_OK	1
#define W_OK	2
#define R_OK	4

char **__environ;
__pid_t __getpgid (__pid_t);
void _exit (int);
int acct (char *);
unsigned int alarm (unsigned int);
int chown (char *, __uid_t, __gid_t);
int chroot (char *);
size_t confstr (int, char *, size_t);
char *ctermid (char *);
char *cuserid (char *);
int daemon (int, int);
int execl (char *, char *, ...);
int execle (char *, char *, ...);
int execlp (char *, char *, ...);
int execv (char *, char *);
int execvp (char *, char *);
int fdatasync (int);
int ftruncate64 (int, __off64_t);
long gethostid (void);
char *getlogin (void);
__pid_t getpgrp (void);
__pid_t getsid (__pid_t);
char *getwd (char *);
int lockf (int, int, __off_t);
int lockf64 (int, int, __off64_t);
int nice (int);
int rename (char *, char *);
int sethostid (long);
int sethostname (char *, size_t);
int setpgrp (void);
void swab (void *, void *, ssize_t);
int sync (void);
__pid_t tcgetpgrp (int);
int tcsetpgrp (int, __pid_t);
int truncate (char *, __off_t);
int truncate64 (char *, __off64_t);
char *ttyname (int);
unsigned int ualarm (unsigned int, unsigned int);
void usleep (unsigned int);
int close (int);
int fsync (int);
__off_t lseek (int, __off_t, int);
int pause (void);
ssize_t read (int, void *, size_t);
ssize_t write (int, void *, size_t);
char *crypt (char *, char *);
void encrypt (char *, int);
void setkey (char *);
int access (char *, int);
int brk (void *);
int chdir (char *);
int dup (int);
int dup2 (int, int);
int execve (char *, char *, char *);
int fchdir (int);
int fchown (int, __uid_t, __gid_t);
__pid_t fork (void);
__gid_t getegid (void);
__uid_t geteuid (void);
__gid_t getgid (void);
int getgroups (int, __gid_t);
int gethostname (char *, size_t);
__pid_t getpgid (__pid_t);
__pid_t getpid (void);
__uid_t getuid (void);
int lchown (char *, __uid_t, __gid_t);
int link (char *, char *);
long pathconf (char *, int);
int pipe (int);
int readlink (char *, char *, size_t);
int rmdir (char *);
void *sbrk (ptrdiff_t);
int setgid (__gid_t);
int setpgid (__pid_t, __pid_t);
int setregid (__gid_t, __gid_t);
int setreuid (__uid_t, __uid_t);
__pid_t setsid (void);
int setuid (__uid_t);
unsigned int sleep (unsigned int);
int symlink (char *, char *);
long sysconf (int);
int unlink (char *);
__pid_t vfork (void);
ssize_t pread (int, void *, size_t, __off_t);
ssize_t pwrite (int, void *, size_t, __off_t);
long fpathconf (int, int);
int ftruncate (int, __off_t);
char *getcwd (char *, size_t);
int getpagesize (void);
__pid_t getppid (void);
int isatty (int);
__off64_t lseek64 (int, __off64_t, int);
ssize_t pwrite64 (int, void *, size_t, __off64_t);
int ttyname_r (int, char *, size_t);
#endif
