#ifndef _ZLIB_H_
#define _ZLIB_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define Z_NULL	0
#define ZLIB_VERSION	"1.1.4"
#define deflateInit2(strm,level, method, windowBits, memLevel, strat	deflateInit2_((strm),(level),(method),(windowBits),(memLevel),(strategy),           ZLIB_VERSION, sizeof(z_stream))
#define deflateInit(strm,level)	deflateInit_((strm), (level),       ZLIB_VERSION, sizeof(z_stream))
#define inflateInit2(strm,windowBits)	inflateInit2_((strm), (windowBits), ZLIB_VERSION, sizeof(z_stream))
#define inflateInit(strm)	inflateInit_((strm),                ZLIB_VERSION, sizeof(z_stream))


  typedef int intf;

  typedef uInt uIntf;




  typedef void *voidpf;

  typedef unsigned int uInt;

  typedef unsigned long uLong;

  typedef uLong uLongf;

  typedef void *voidp;

  typedef unsigned char Byte;




  typedef voidpf (*alloc_func) (voidpf opaque, uInt items, uInt size);

  typedef void (*free_func) (voidpf opaque, voidpf address);

  struct internal_state
  {
    int dummy;
  }
   ;

  typedef Byte Bytef;




  typedef struct z_stream_s
  {
    Bytef *next_in;
    uInt avail_in;
    uLong total_in;
    Bytef *next_out;
    uInt avail_out;
    uLong total_out;
    char *msg;
    struct internal_state *state;
    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;
    int data_type;
    uLong adler;
    uLong reserved;
  }
  z_stream;




  typedef z_stream *z_streamp;

  typedef voidp gzFile;


#define Z_NO_FLUSH	0
#define Z_PARTIAL_FLUSH	1
#define Z_SYNC_FLUSH	2
#define Z_FULL_FLUSH	3
#define Z_FINISH	4



#define Z_ERRNO	(-1)
#define Z_STREAM_ERROR	(-2)
#define Z_DATA_ERROR	(-3)
#define Z_MEM_ERROR	(-4)
#define Z_BUF_ERROR	(-5)
#define Z_OK	0
#define Z_STREAM_END	1



/* Return codes for the compression/decompression functions. Negative values are errors, positive values are used for special but normal events.*/
#define Z_DEFAULT_COMPRESSION	(-1)
#define Z_NO_COMPRESSION	0
#define Z_BEST_SPEED	1
#define Z_BEST_COMPRESSION	9



/* compression levels*/
#define Z_DEFAULT_STRATEGY	0
#define Z_FILTERED	1
#define Z_HUFFMAN_ONLY	2



/* compression strategy*/
#define Z_BINARY	0
#define Z_ASCII	1
#define Z_UNKNOWN	2



/* Possible values of the data_type field*/
#define Z_DEFLATED	8



  extern int gzread (gzFile, voidp, unsigned int);
  extern int gzclose (gzFile);
  extern gzFile gzopen (char *, char *);
  extern gzFile gzdopen (int, char *);
  extern int gzwrite (gzFile, voidp, unsigned int);
  extern int gzflush (gzFile, int);
  extern char *gzerror (gzFile, int *);
  extern uLong adler32 (uLong, Bytef *, uInt);
  extern int compress (Bytef *, uLongf *, Bytef *, uLong);
  extern int compress2 (Bytef *, uLongf *, Bytef *, uLong, int);
  extern uLong crc32 (uLong, Bytef *, uInt);
  extern int deflate (z_streamp, int);
  extern int deflateCopy (z_streamp, z_streamp);
  extern int deflateEnd (z_streamp);
  extern int deflateInit2_ (z_streamp, int, int, int, int, int, char *, int);
  extern int deflateInit_ (z_streamp, int, char *, int);
  extern int deflateParams (z_streamp, int, int);
  extern int deflateReset (z_streamp);
  extern int deflateSetDictionary (z_streamp, Bytef *, uInt);
  extern uLongf *get_crc_table (void);
  extern int gzeof (gzFile);
  extern int gzgetc (gzFile);
  extern char *gzgets (gzFile, char *, int);
  extern int gzprintf (gzFile, char *, ...);
  extern int gzputc (gzFile, int);
  extern int gzputs (gzFile, char *);
  extern int gzrewind (gzFile);
  extern long gzseek (gzFile, long, int);
  extern int gzsetparams (gzFile, int, int);
  extern long gztell (gzFile);
  extern int inflate (z_streamp, int);
  extern int inflateEnd (z_streamp);
  extern int inflateInit2_ (z_streamp, int, char *, int);
  extern int inflateInit_ (z_streamp, char *, int);
  extern int inflateReset (z_streamp);
  extern int inflateSetDictionary (z_streamp, Bytef *, uInt);
  extern int inflateSync (z_streamp);
  extern int inflateSyncPoint (z_streamp);
  extern int uncompress (Bytef *, uLongf *, Bytef *, uLong);
  extern char *zError (int);
#ifdef __cplusplus
}
#endif
#endif
