#ifndef _ZLIB_H_
#define _ZLIB_H_



int gzread (gzFile,, unsigned int);
int gzclose (gzFile);
gzFile gzopen (char *, char *);
gzFile gzdopen (int, char *);
int gzwrite (gzFile,, unsigned int);
int gzflush (gzFile, int);
char *gzerror (gzFile, int *);
adler32 (, *,);
int compress (*, *, *,);
int compress2 (*, *, *,, int);
crc32 (, *,);
int deflate (z_streamp, int);
int deflateCopy (z_streamp, z_streamp);
int deflateEnd (z_streamp);
int deflateInit2_ (z_streamp, int, int, int, int, int, char *, int);
int deflateInit_ (z_streamp, int, char *, int);
int deflateParams (z_streamp, int, int);
int deflateReset (z_streamp);
int deflateSetDictionary (z_streamp, *,);
*get_crc_table (void);
int gzeof (gzFile);
int gzgetc (gzFile);
char *gzgets (gzFile, char *, int);
int gzprintf (gzFile, char *, ...);
int gzputc (gzFile, int);
int gzputs (gzFile, char *);
int gzrewind (gzFile);
long gzseek (gzFile, long, int);
int gzsetparams (gzFile, int, int);
long gztell (gzFile);
int inflate (z_streamp, int);
int inflateEnd (z_streamp);
int inflateInit2_ (z_streamp, int, char *, int);
int inflateInit_ (z_streamp, char *, int);
int inflateReset (z_streamp);
int inflateSetDictionary (z_streamp, *,);
int inflateSync (z_streamp);
int inflateSyncPoint (z_streamp);
int uncompress (*, *, *,);
char *zError (int);
#endif
