typedef struct _IO_FILE FILE;

typedef __off_t fpos_t;

typedef __off64_t fpos64_t;

void clearerr(FILE *);
int fclose(FILE *);
FILE *fdopen(int, char *);
int fileno(FILE *);
FILE *fopen(char *, char *);
int fprintf(FILE *, char *, ...);
int fputc(int, FILE *);
FILE *freopen(char *, char *, FILE *);
FILE *freopen64(char *, char *, FILE *);
int fscanf(FILE *, char *, ...);
int fseek(FILE *, long, int);
int fseeko(FILE *, __off_t, int);
int fseeko64(FILE *, __off64_t, int);
__off_t ftello(FILE *);
__off64_t ftello64(FILE *);
int getchar(void);
int getchar_unlocked(void);
int getw(FILE *);
int pclose(FILE *);
void perror(char *);
FILE *popen(char *, char *);
int printf(char *, ...);
int putc_unlocked(int, FILE *);
int putchar(int);
int putchar_unlocked(int);
int putw(int, FILE *);
int remove(char *);
void rewind(FILE *);
int scanf(char *, ...);
void setbuf(FILE *, char *);
int sprintf(char *, char *, ...);
int sscanf(char *, char *, ...);
FILE *stderr;
FILE *stdin;
FILE *stdout;
char *tempnam(char *, char *);
FILE *tmpfile64(void);
FILE *tmpfile(void);
char *tmpnam(char *);
int vfprintf(FILE *, char *, __gnuc_va_list);
int vprintf(char *, __gnuc_va_list);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE *, fpos_t *);
char *fgets(char *, int, FILE *);
int fputs(char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *);
int fsetpos(FILE *, fpos_t *);
long ftell(FILE *);
size_t fwrite(void *, size_t, size_t, FILE *);
int getc(FILE *);
char *gets(char *);
int putc(int, FILE *);
int puts(char *);
int setvbuf(FILE *, char *, int, size_t);
int snprintf(char *, size_t, char *, ...);
int ungetc(int, FILE *);
int vsnprintf(char *, size_t, char *, __gnuc_va_list);
int vsprintf(char *, char *, __gnuc_va_list);
void flockfile(FILE *);
int fgetpos64(FILE *, fpos64_t *);
FILE *fopen64(char *, char *);
int fsetpos64(FILE *, fpos64_t *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
