#ifndef _STDIO_H_
#define _STDIO_H_

#include <stddef.h>
#include <stdarg.h>
#include <sys/types.h>
#include <unistd.h>

#define EOF	(-1)
#define P_tmpdir	"/tmp"
#define FOPEN_MAX	16
#define L_tmpnam	20
#define FILENAME_MAX	4096
#define BUFSIZ	8192
#define L_ctermid	9
#define L_cuserid	9


typedef struct _IO_FILE *FILE;

typedef off_t fpos_t;

typedef off64_t fpos64_t;


/* The opaque type of streams.*/



/* The possibilities for the third argument to `setvbuf'.*/
#define _IOFBF	0
#define _IOLBF	1
#define _IONBF	2



/* The possibilities for the third argument to `fseek'.*/



/* End of file character.*/



extern char **_sys_errlist;
void clearerr (FILE *);
int fclose (FILE *);
FILE *fdopen (int, char *);
int fileno (FILE *);
FILE *fopen (char *, char *);
int fprintf (FILE *, char *, ...);
int fputc (int, FILE *);
FILE *freopen (char *, char *, FILE *);
int fscanf (FILE *, char *, ...);
int fseek (FILE *, long, int);
int fseeko (FILE *, off_t, int);
int fseeko64 (FILE *, loff_t, int);
off_t ftello (FILE *);
loff_t ftello64 (FILE *);
int getchar (void);
int pclose (FILE *);
void perror (char *);
FILE *popen (char *, char *);
int printf (char *, ...);
int remove (char *);
void rewind (FILE *);
int scanf (char *, ...);
void setbuf (FILE *, char *);
int sprintf (char *, char *, ...);
int sscanf (char *, char *, ...);
extern FILE *stderr;
extern FILE *stdin;
extern FILE *stdout;
FILE *tmpfile (void);
char *tmpnam (char *);
int vfprintf (FILE *, char *, va_list);
int vprintf (char *, va_list);
int feof (FILE *);
int ferror (FILE *);
int fflush (FILE *);
int fgetc (FILE *);
int fgetpos (FILE *, fpos_t *);
char *fgets (char *, int, FILE *);
int fputs (char *, FILE *);
size_t fread (void *, size_t, size_t, FILE *);
int fsetpos (FILE *, fpos_t *);
long ftell (FILE *);
size_t fwrite (void *, size_t, size_t, FILE *);
int getc (FILE *);
char *gets (char *);
int puts (char *);
int setvbuf (FILE *, char *, int, size_t);
int snprintf (char *, size_t, char *, ...);
int ungetc (int, FILE *);
int vsnprintf (char *, size_t, char *, va_list);
int vsprintf (char *, char *, va_list);
void flockfile (void);
void setbuffer (FILE *, char *, size_t);
#endif
