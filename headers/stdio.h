#ifndef _STDIO_H_
#define _STDIO_H_

#include <stddef.h>
#include <stdarg.h>
#include <sys/types.h>
#include <unistd.h>
#include <wctype.h>

#define EOF	(-1)
#define P_tmpdir	"/tmp"
#define FOPEN_MAX	16
#define L_tmpnam	20
#define FILENAME_MAX	4096
#define BUFSIZ	8192
#define L_ctermid	9
#define L_cuserid	9


typedef struct _IO_FILE *FILE;

typedef struct
{
  off_t __pos;
  mbstate_t __state;
}
fpos_t;

typedef struct
{
  off64_t __pos;
  mbstate_t __state;
}
fpos64_t;

struct
{
  off_t __pos;
  mbstate_t __state;
}
 ;

struct
{
  off64_t __pos;
  mbstate_t __state;
}
 ;


/* The opaque type of streams.*/



/* The possibilities for the third argument to `setvbuf'.*/
#define _IOFBF	0
#define _IOLBF	1
#define _IONBF	2



/* The possibilities for the third argument to `fseek'.*/



/* End of file character.*/



extern char **_sys_errlist;
extern void clearerr (FILE *);
extern int fclose (FILE *);
extern FILE *fdopen (int, char *);
extern int fileno (FILE *);
extern FILE *fopen (char *, char *);
extern int fprintf (FILE *, char *, ...);
extern int fputc (int, FILE *);
extern FILE *freopen (char *, char *, FILE *);
extern int fscanf (FILE *, char *, ...);
extern int fseek (FILE *, long, int);
extern int fseeko (FILE *, off_t, int);
extern int fseeko64 (FILE *, loff_t, int);
extern off_t ftello (FILE *);
extern loff_t ftello64 (FILE *);
extern int getchar (void);
extern int pclose (FILE *);
extern void perror (char *);
extern FILE *popen (char *, char *);
extern int printf (char *, ...);
extern int remove (char *);
extern void rewind (FILE *);
extern int scanf (char *, ...);
extern void setbuf (FILE *, char *);
extern int sprintf (char *, char *, ...);
extern int sscanf (char *, char *, ...);
extern FILE *stderr;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *tmpfile (void);
extern char *tmpnam (char *);
extern int vfprintf (FILE *, char *, va_list);
extern int vprintf (char *, va_list);
extern int feof (FILE *);
extern int ferror (FILE *);
extern int fflush (FILE *);
extern int fgetc (FILE *);
extern int fgetpos (FILE *, fpos_t *);
extern char *fgets (char *, int, FILE *);
extern int fputs (char *, FILE *);
extern size_t fread (void *, size_t, size_t, FILE *);
extern int fsetpos (FILE *, fpos_t *);
extern long ftell (FILE *);
extern size_t fwrite (void *, size_t, size_t, FILE *);
extern int getc (FILE *);
extern char *gets (char *);
extern int puts (char *);
extern int setvbuf (FILE *, char *, int, size_t);
extern int snprintf (char *, size_t, char *, ...);
extern int ungetc (int, FILE *);
extern int vsnprintf (char *, size_t, char *, va_list);
extern int vsprintf (char *, char *, va_list);
extern void flockfile (void);
extern void setbuffer (FILE *, char *, size_t);
#endif
