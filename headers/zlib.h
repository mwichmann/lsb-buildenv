#if (__LSB_VERSION__ >= 11 )
#ifndef _ZLIB_H_
#define _ZLIB_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define ZLIB_VERSION	"1.2.2"
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 13
#define Z_NULL	0
#define MAX_WBITS	15	/* 32K LZ77 window */
#define MAX_MEM_LEVEL	9	/* Maximum value for memLevel in deflateInit2 */
#define deflateInit2(strm,level,method,windowBits,memLevel,strategy)	\
	deflateInit2_((strm),(level),(method),(windowBits),(memLevel),(strategy),ZLIB_VERSION,sizeof(z_stream))
#define deflateInit(strm,level)	\
	deflateInit_((strm), (level),       ZLIB_VERSION, sizeof(z_stream))
#define inflateInit2(strm,windowBits)	\
	inflateInit2_((strm), (windowBits), ZLIB_VERSION, sizeof(z_stream))
#define inflateInit(strm)	\
	inflateInit_((strm),                ZLIB_VERSION, sizeof(z_stream))
#endif				/* __LSB_VERSION__ >= 1.3 */



#if __LSB_VERSION__ >= 13
    typedef int intf;

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 21
    typedef char charf;

#endif				/* __LSB_VERSION__ >= 2.1 */


#if __LSB_VERSION__ >= 12
    typedef void *voidpf;

    typedef unsigned int uInt;

    typedef unsigned long int uLong;

    typedef uLong uLongf;

    typedef void *voidp;

    typedef unsigned char Byte;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
    typedef off_t z_off_t;

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
    typedef void *const voidpc;

#endif				/* __LSB_VERSION__ >= 2.0 */


#if __LSB_VERSION__ >= 12
    typedef voidpf(*alloc_func) (voidpf opaque, uInt items, uInt size);

    typedef void (*free_func) (voidpf opaque, voidpf address);

    typedef Byte Bytef;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
    typedef uInt uIntf;

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 12
    struct internal_state {
	int dummy;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef struct z_stream_s z_stream;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12

    struct z_stream_s {
	Bytef *next_in;		/* next input byte */
	uInt avail_in;		/* number of bytes available at next_in */
	uLong total_in;		/* total nb of input bytes read so far */
	Bytef *next_out;	/* next output byte should be put there */
	uInt avail_out;		/* remaining free space at next_out */
	uLong total_out;	/* total nb of bytes output so far */
	char *msg;		/* last error message, NULL if no error */
	struct internal_state *state;	/* not visible by applications */
	alloc_func zalloc;	/* used to allocate the internal state */
	free_func zfree;	/* used to free the internal state */
	voidpf opaque;		/* private data object passed to zalloc and zfree */
	int data_type;		/* best guess about the data type: ascii or binary */
	uLong adler;		/* adler32 value of the uncompressed data */
	uLong reserved;		/* reserved for future use */
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef z_stream *z_streamp;

    typedef voidp gzFile;

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 13
#define Z_NO_FLUSH	0
#define Z_PARTIAL_FLUSH	1
#define Z_SYNC_FLUSH	2
#define Z_FULL_FLUSH	3
#define Z_FINISH	4
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 31
#define Z_BLOCK	5
#endif				/* __LSB_VERSION__ >= 3.1 */




/* Return status of flush operations*/
#if __LSB_VERSION__ >= 13
#define Z_ERRNO	(-1)
#define Z_STREAM_ERROR	(-2)
#define Z_DATA_ERROR	(-3)
#define Z_MEM_ERROR	(-4)
#define Z_BUF_ERROR	(-5)
#define Z_OK	0
#define Z_STREAM_END	1
#define Z_NEED_DICT	2
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 21
#define Z_VERSION_ERROR	(-6)
#endif				/* __LSB_VERSION__ >= 2.1 */




/* Return codes for the compression/decompression functions. Negative values are errors, positive values are used for special but normal events.*/
#if __LSB_VERSION__ >= 13
#define Z_DEFAULT_COMPRESSION	(-1)
#define Z_NO_COMPRESSION	0
#define Z_BEST_SPEED	1
#define Z_BEST_COMPRESSION	9
#endif				/* __LSB_VERSION__ >= 1.3 */




/* compression levels*/
#if __LSB_VERSION__ >= 13
#define Z_DEFAULT_STRATEGY	0
#define Z_FILTERED	1
#define Z_HUFFMAN_ONLY	2
#endif				/* __LSB_VERSION__ >= 1.3 */




/* compression strategy*/
#if __LSB_VERSION__ >= 13
#define Z_BINARY	0
#define Z_ASCII	1
#define Z_UNKNOWN	2
#endif				/* __LSB_VERSION__ >= 1.3 */




/* Possible values of the data_type field*/
#if __LSB_VERSION__ >= 13
#define Z_DEFLATED	8
#endif				/* __LSB_VERSION__ >= 1.3 */




/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern uLong adler32(uLong, const Bytef *, uInt);
    extern int compress(Bytef *, uLongf *, const Bytef *, uLong);
    extern int compress2(Bytef *, uLongf *, const Bytef *, uLong, int);
    extern uLong crc32(uLong, const Bytef *, uInt);
    extern int deflate(z_streamp, int);
    extern int deflateCopy(z_streamp, z_streamp);
    extern int deflateEnd(z_streamp);
    extern int deflateInit2_(z_streamp, int, int, int, int, int,
			     const char *, int);
    extern int deflateInit_(z_streamp, int, const char *, int);
    extern int deflateParams(z_streamp, int, int);
    extern int deflateReset(z_streamp);
    extern int deflateSetDictionary(z_streamp, const Bytef *, uInt);
    extern const uLongf *get_crc_table(void);
    extern int gzclose(gzFile);
    extern gzFile gzdopen(int, const char *);
    extern int gzeof(gzFile);
    extern const char *gzerror(gzFile, int *);
    extern int gzflush(gzFile, int);
    extern int gzgetc(gzFile);
    extern char *gzgets(gzFile, char *, int);
    extern gzFile gzopen(const char *, const char *);
    extern int gzprintf(gzFile, const char *, ...);
    extern int gzputc(gzFile, int);
    extern int gzputs(gzFile, const char *);
    extern int gzread(gzFile, voidp, unsigned int);
    extern int gzrewind(gzFile);
    extern z_off_t gzseek(gzFile, z_off_t, int);
    extern int gzsetparams(gzFile, int, int);
    extern z_off_t gztell(gzFile);
    extern int gzwrite(gzFile, voidpc, unsigned int);
    extern int inflate(z_streamp, int);
    extern int inflateEnd(z_streamp);
    extern int inflateInit2_(z_streamp, int, const char *, int);
    extern int inflateInit_(z_streamp, const char *, int);
    extern int inflateReset(z_streamp);
    extern int inflateSetDictionary(z_streamp, const Bytef *, uInt);
    extern int inflateSync(z_streamp);
    extern int inflateSyncPoint(z_streamp);
    extern int uncompress(Bytef *, uLongf *, const Bytef *, uLong);
    extern const char *zError(int);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 30
    extern uLong compressBound(uLong);
    extern uLong deflateBound(z_streamp, uLong);
    extern const char *zlibVersion(void);
#endif				/* __LSB_VERSION__ >= 3.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
