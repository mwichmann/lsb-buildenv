#ifndef _UNISTD_H_
#define _UNISTD_H_

#include <stddef.h>
#include <sys/types.h>
#include <sys/time.h>

typedef int ssize_t;

typedef int pid_t;

typedef int *intptr_t;

#define SEEK_SET	0
#define STDIN_FILENO	0
#define STDOUT_FILENO	1
#define SEEK_CUR	1
#define _SC_CLK_TCK	2
#define SEEK_END	2
#define STDERR_FILENO	2
#define _SC_OPEN_MAX	4

#define F_OK	0
#define X_OK	1
#define W_OK	2
#define R_OK	4

extern char **__environ;
void _exit (int);
unsigned int alarm (unsigned int);
int chown (char *, uid_t, gid_t);
int chroot (char *);
size_t confstr (void);
int creat (char *, mode_t);
int creat64 (char *, mode_t);
char *ctermid (void);
char *cuserid (void);
int daemon (int, int);
int execl (char *, ...);
int execle (void);
int execlp (char *, char *, ...);
int execv (char *, char *);
int execvp (char *, char *);
char *getlogin (void);
int getopt (int, char *, char *);
pid_t getpgrp (void);
int mkstemp (char *);
int nice (int);
extern char *optarg;
extern int opterr;
extern int optind;
extern int optopt;
int rename (char *, char *);
int sethostname (char *, size_t);
int setpgrp (void);
void swab (void);
int sync (void);
pid_t tcgetpgrp (void);
int tcsetpgrp (void);
char *ttyname (int);
void usleep (unsigned long);
int close (int);
int fsync (int);
off_t lseek (int, off_t, int);
int open (char *, int, ...);
int pause (void);
int read (int, void *, size_t);
int write (int, void *, size_t);
char *crypt (char *, char *);
void encrypt (char, int);
void setkey (char *);
int access (char *, int);
int brk (void *);
int chdir (char *);
int dup (int);
int dup2 (int, int);
int execve (char *, char *, char *);
int fchdir (int);
int fchown (int, uid_t, gid_t);
pid_t fork (void);
gid_t getegid (void);
uid_t geteuid (void);
gid_t getgid (void);
int getgroups (int, gid_t);
int gethostname (char *, size_t);
pid_t getpgid (pid_t);
pid_t getpid (void);
uid_t getuid (void);
int lchown (char *, uid_t, gid_t);
int link (char *, char *);
int mkdir (char *, mode_t);
long pathconf (void);
int pipe (int);
int readlink (char *, char *, size_t);
int rmdir (char *);
void *sbrk (ptrdiff_t);
int select (int, fd_set *, fd_set *, fd_set *, struct timeval *);
int setgid (gid_t);
int setpgid (pid_t, pid_t);
int setregid (gid_t, gid_t);
int setreuid (uid_t, uid_t);
pid_t setsid (void);
int setuid (uid_t);
unsigned int sleep (unsigned int);
int symlink (char *, char *);
long sysconf (int);
int unlink (char *);
pid_t vfork (void);
int pread (int, void *, size_t, off_t);
int pwrite (int, void *, size_t, off_t);
extern char **_environ;
long fpathconf (void);
int ftruncate (int, off_t);
char *getcwd (char *, size_t);
size_t getpagesize (void);
pid_t getppid (void);
int isatty (int);
loff_t lseek64 (int, loff_t, int);
int open64 (char *, int, ...);
#endif
