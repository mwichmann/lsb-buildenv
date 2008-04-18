#if (__LSB_VERSION__ >= 10 )
#ifndef _STDIO_H_
#define _STDIO_H_

#include <sys/types.h>
#include <unistd.h>
#include <wctype.h>
#include <stddef.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define EOF	(-1)
#define BUFSIZ	8192
#endif				// __LSB_VERSION__ >= 1.1

#if __LSB_VERSION__ >= 12
#define P_tmpdir	"/tmp"
#define FOPEN_MAX	16
#define L_tmpnam	20
#define FILENAME_MAX	4096
#define L_ctermid	9
#define L_cuserid	9
#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 21
#if defined __i386__
#define __IO_FILE_SIZE	148
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __IO_FILE_SIZE	152
#endif
#if defined __s390__ && !defined __s390x__
#define __IO_FILE_SIZE	152
#endif
#if defined __ia64__
#define __IO_FILE_SIZE	216
#endif
#if defined __powerpc64__
#define __IO_FILE_SIZE	216
#endif
#if defined __x86_64__
#define __IO_FILE_SIZE	216
#endif
#if defined __s390x__
#define __IO_FILE_SIZE	216
#endif
#endif				// __LSB_VERSION__ >= 2.1



#if __LSB_VERSION__ >= 12
    typedef struct {
	off_t __pos;
	mbstate_t __state;
    } fpos_t;

    typedef struct {
	off64_t __pos;
	mbstate_t __state;
    } fpos64_t;

#endif				// __LSB_VERSION__ >= 1.2

    struct _IO_FILE {
	char dummy[__IO_FILE_SIZE];
    };


/* The opaque type of streams.*/
#if __LSB_VERSION__ >= 10
    typedef struct _IO_FILE FILE;

#endif				// __LSB_VERSION__ >= 1.0


/* The possibilities for the third argument to `setvbuf'.*/
#if __LSB_VERSION__ >= 11
#define _IOFBF	0
#define _IOLBF	1
#define _IONBF	2
#endif				// __LSB_VERSION__ >= 1.1




/* The possibilities for the third argument to `fseek'.*/

/* End of file character.*/

// Function prototypes

#if __LSB_VERSION__ >= 10
    extern size_t __fpending(FILE *);
    extern char *const _sys_errlist[128];
    extern void clearerr(FILE *);
    extern int fclose(FILE *);
    extern FILE *fdopen(int, const char *);
    extern int feof(FILE *);
    extern int ferror(FILE *);
    extern int fflush(FILE *);
    extern int fflush_unlocked(FILE *);
    extern int fgetc(FILE *);
    extern int fgetpos(FILE *, fpos_t *);
    extern int fgetpos64(FILE *, fpos64_t *);
    extern char *fgets(char *, int, FILE *);
    extern int fileno(FILE *);
    extern void flockfile(FILE *);
    extern FILE *fopen(const char *, const char *);
    extern FILE *fopen64(const char *, const char *);
    extern int fprintf(FILE *, const char *, ...);
    extern int fputc(int, FILE *);
    extern int fputs(const char *, FILE *);
    extern size_t fread(void *, size_t, size_t, FILE *);
    extern FILE *freopen(const char *, const char *, FILE *);
    extern FILE *freopen64(const char *, const char *, FILE *);
    extern int fscanf(FILE *, const char *, ...);
    extern int fseek(FILE *, long int, int);
    extern int fseeko(FILE *, off_t, int);
    extern int fseeko64(FILE *, loff_t, int);
    extern int fsetpos(FILE *, const fpos_t *);
    extern int fsetpos64(FILE *, const fpos64_t *);
    extern long int ftell(FILE *);
    extern off_t ftello(FILE *);
    extern loff_t ftello64(FILE *);
    extern int ftrylockfile(FILE *);
    extern void funlockfile(FILE *);
    extern size_t fwrite(const void *, size_t, size_t, FILE *);
    extern int getc(FILE *);
    extern int getc_unlocked(FILE *);
    extern int getchar(void);
    extern int getchar_unlocked(void);
    extern int getw(FILE *);
    extern int pclose(FILE *);
    extern void perror(const char *);
    extern FILE *popen(const char *, const char *);
    extern int printf(const char *, ...);
    extern int putc(int, FILE *);
    extern int putc_unlocked(int, FILE *);
    extern int putchar(int);
    extern int putchar_unlocked(int);
    extern int puts(const char *);
    extern int putw(int, FILE *);
    extern int remove(const char *);
    extern void rewind(FILE *);
    extern int scanf(const char *, ...);
    extern void setbuf(FILE *, char *);
    extern void setbuffer(FILE *, char *, size_t);
    extern int setvbuf(FILE *, char *, int, size_t);
    extern int snprintf(char *, size_t, const char *, ...);
    extern int sprintf(char *, const char *, ...);
    extern int sscanf(const char *, const char *, ...);
    extern FILE *stderr;
    extern FILE *stdin;
    extern FILE *stdout;
    extern char *tempnam(const char *, const char *);
    extern FILE *tmpfile(void);
    extern FILE *tmpfile64(void);
    extern char *tmpnam(char *);
    extern int ungetc(int, FILE *);
    extern int vasprintf(char **, const char *, va_list);
    extern int vdprintf(int, const char *, va_list);
    extern int vfprintf(FILE *, const char *, va_list);
    extern int vprintf(const char *, va_list);
    extern int vsnprintf(char *, size_t, const char *, va_list);
    extern int vsprintf(char *, const char *, va_list);
#if __LSB_VERSION__ < 20
    extern char *gets(char *);
#endif				// __LSB_VERSION__ < 2.0

#endif				// __LSB_VERSION__ >= 1.0

#if __LSB_VERSION__ >= 13
    extern int asprintf(char **, const char *, ...);
    extern int vfscanf(FILE *, const char *, va_list);
    extern int vscanf(const char *, va_list);
    extern int vsscanf(const char *, const char *, va_list);
#endif				// __LSB_VERSION__ >= 1.3

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
