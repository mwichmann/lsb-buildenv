#if (__LSB_VERSION__ >= 10 )
#ifndef _STDIO_H_
#define _STDIO_H_

#include <sys/types.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include <lsb/types.h>
#include <lsb/wchar.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define EOF	(-1)
#ifndef SEEK_SET
#define SEEK_SET	0
#endif
#ifndef SEEK_CUR
#define SEEK_CUR	1
#endif
#ifndef SEEK_END
#define SEEK_END	2
#endif
#define BUFSIZ	8192
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#define P_tmpdir	"/tmp"
#define FOPEN_MAX	16
#define L_tmpnam	20
#define FILENAME_MAX	4096
#define L_ctermid	9
#define L_cuserid	9
#endif				/* __LSB_VERSION__ >= 1.2 */

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
#endif				/* __LSB_VERSION__ >= 2.1 */

#if __LSB_VERSION__ >= 40
#define TMP_MAX	238328
#endif				/* __LSB_VERSION__ >= 4.0 */



#if __LSB_VERSION__ >= 12
    typedef struct {
	off_t __pos;
	mbstate_t __state;
    } fpos_t;

    typedef struct {
	off64_t __pos;
	mbstate_t __state;
    } fpos64_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

    struct _IO_FILE {
	char dummy[__IO_FILE_SIZE];
    };


/* The opaque type of streams.*/
    typedef struct _IO_FILE FILE;


/* The possibilities for the third argument to `setvbuf'.*/
#if __LSB_VERSION__ >= 11
#define _IOFBF	0
#define _IOLBF	1
#define _IONBF	2
#endif				/* __LSB_VERSION__ >= 1.1 */




/* The possibilities for the third argument to `fseek'.*/

/* End of file character.*/

/* Function prototypes */

    extern size_t __fpending(FILE *);
    extern char *const _sys_errlist[];
    extern void clearerr(FILE * __stream);
    extern int fclose(FILE * __stream);
    extern FILE *fdopen(int __fd, const char *__modes);
    extern int feof(FILE * __stream);
    extern int ferror(FILE * __stream);
    extern int fflush(FILE * __stream);
    extern int fflush_unlocked(FILE * __stream);
    extern int fgetc(FILE * __stream);
    extern int fgetpos(FILE * __stream, fpos_t * __pos);
    extern int fgetpos64(FILE * __stream, fpos64_t * __pos);
    extern char *fgets(char *__s, int __n, FILE * __stream);
    extern int fileno(FILE * __stream);
    extern void flockfile(FILE * __stream);
    extern FILE *fopen(const char *__filename, const char *__modes);
    extern FILE *fopen64(const char *__filename, const char *__modes);
    extern int fprintf(FILE * __stream, const char *__format, ...);
    extern int fputc(int __c, FILE * __stream);
    extern int fputs(const char *__s, FILE * __stream);
    extern size_t fread(void *__ptr, size_t __size, size_t __n,
			FILE * __stream);
    extern FILE *freopen(const char *__filename, const char *__modes,
			 FILE * __stream);
    extern FILE *freopen64(const char *__filename, const char *__modes,
			   FILE * __stream);
    extern int fscanf(FILE * __stream, const char *__format, ...);
    extern int fseek(FILE * __stream, long int __off, int __whence);
    extern int fseeko(FILE * __stream, off_t __off, int __whence);
    extern int fseeko64(FILE * __stream, loff_t __off, int __whence);
    extern int fsetpos(FILE * __stream, const fpos_t * __pos);
    extern int fsetpos64(FILE * __stream, const fpos64_t * __pos);
    extern long int ftell(FILE * __stream);
    extern off_t ftello(FILE * __stream);
    extern loff_t ftello64(FILE * __stream);
    extern int ftrylockfile(FILE * __stream);
    extern void funlockfile(FILE * __stream);
    extern size_t fwrite(const void *__ptr, size_t __size, size_t __n,
			 FILE * __s);
    extern int getc(FILE * __stream);
    extern int getc_unlocked(FILE * __stream);
    extern int getchar(void);
    extern int getchar_unlocked(void);
    extern int getw(FILE * __stream);
    extern int pclose(FILE * __stream);
    extern void perror(const char *__s);
    extern FILE *popen(const char *__command, const char *__modes);
    extern int printf(const char *__format, ...);
    extern int putc(int __c, FILE * __stream);
    extern int putc_unlocked(int __c, FILE * __stream);
    extern int putchar(int __c);
    extern int putchar_unlocked(int __c);
    extern int puts(const char *__s);
    extern int putw(int __w, FILE * __stream);
    extern int remove(const char *__filename);
    extern int rename(const char *__old, const char *__new);
    extern void rewind(FILE * __stream);
    extern int scanf(const char *__format, ...);
    extern void setbuf(FILE * __stream, char *__buf);
    extern void setbuffer(FILE * __stream, char *__buf, size_t __size);
    extern int setvbuf(FILE * __stream, char *__buf, int __modes,
		       size_t __n);
    extern int snprintf(char *__s, size_t __maxlen, const char *__format,
			...);
    extern int sprintf(char *__s, const char *__format, ...);
    extern int sscanf(const char *__s, const char *__format, ...);
    extern FILE *stderr;
    extern FILE *stdin;
    extern FILE *stdout;
    /* Never use this function, use mkstemp or tmpfile instead. It is possible that between the time that tempnam returns a pathname, and the time that the program opens it, another program might create that pathname using open, or create it as a symbolic link. This can lead to security holes. */
    extern char *tempnam(const char *__dir, const char *__pfx)
#if __LSB_VERSION__ >= 40
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 40 */
    ;
    extern FILE *tmpfile(void);
    extern FILE *tmpfile64(void);
    /* Never use this function, use mkstemp or tmpfile instead. It is possible that between the time that tmpnam returns a pathname, and the time that the program opens it, another program might create that pathname using open, or create it as a symbolic link. This can lead to security holes. */
    extern char *tmpnam(char *__s)
#if __LSB_VERSION__ >= 40
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 40 */
    ;
    extern int ungetc(int __c, FILE * __stream);
    extern int vasprintf(char **__ptr, const char *__f, va_list __arg);
    extern int vdprintf(int __fd, const char *__fmt, va_list __arg);
    extern int vfprintf(FILE * __s, const char *__format, va_list __arg);
    extern int vprintf(const char *__format, va_list __arg);
    extern int vsnprintf(char *__s, size_t __maxlen, const char *__format,
			 va_list __arg);
    extern int vsprintf(char *__s, const char *__format, va_list __arg);
#if __LSB_VERSION__ >= 13
    extern int asprintf(char **__ptr, const char *__fmt, ...);
    extern int vfscanf(FILE * __s, const char *__format, va_list __arg);
    extern int vscanf(const char *__format, va_list __arg);
#undef vsscanf
    extern int vsscanf(const char *__s, const char *__format,
		       va_list __arg);
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 40
    extern char *__fgets_chk(char *, size_t, int, FILE *);
    extern char *__fgets_unlocked_chk(char *, size_t, int, FILE *);
    extern int __printf_chk(int, const char *, ...);
    extern int __snprintf_chk(char *, size_t, int, size_t, const char *,
			      ...);
    extern int __sprintf_chk(char *, int, size_t, const char *, ...);
    extern int __vprintf_chk(int, const char *, va_list);
    extern int __vsnprintf_chk(char *, size_t, int, size_t, const char *,
			       va_list);
    extern int __vsprintf_chk(char *, int, size_t, const char *, va_list);
    extern void clearerr_unlocked(FILE * __stream);
    extern int dprintf(int __fd, const char *__fmt, ...);
    extern int feof_unlocked(FILE * __stream);
    extern int ferror_unlocked(FILE * __stream);
    extern int fgetc_unlocked(FILE * __stream);
    extern char *fgets_unlocked(char *__s, int __n, FILE * __stream);
    extern int fileno_unlocked(FILE * __stream);
    extern FILE *fmemopen(void *__s, size_t __len, const char *__modes);
    extern int fputc_unlocked(int __c, FILE * __stream);
    extern int fputs_unlocked(const char *__s, FILE * __stream);
    extern size_t fread_unlocked(void *__ptr, size_t __size, size_t __n,
				 FILE * __stream);
    extern size_t fwrite_unlocked(const void *__ptr, size_t __size,
				  size_t __n, FILE * __stream);
    extern ssize_t getdelim(char **__lineptr, size_t * __n,
			    int __delimiter, FILE * __stream);
    extern ssize_t getline(char **__lineptr, size_t * __n,
			   FILE * __stream);
    extern FILE *open_memstream(char **__bufloc, size_t * __sizeloc);
    extern int renameat(int __oldfd, const char *__old, int __newfd,
			const char *__new);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
