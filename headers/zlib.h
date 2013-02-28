#if (__LSB_VERSION__ >= 11 )
#ifndef _ZLIB_H_
#define _ZLIB_H_

#include <sys/types.h>
#include <zconf.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ZLIB_VERSION	"1.2.2"
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

#if __LSB_VERSION__ >= 50
#define inflateBackInit(strm, windowBits, window)	\
        inflateBackInit_((strm), (windowBits), (window), \
                                            ZLIB_VERSION, sizeof(z_stream))
#endif				/* __LSB_VERSION__ >= 5.0 */



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

#if __LSB_VERSION__ >= 50
    typedef unsigned int (*in_func) (void *, unsigned char **);

    typedef int (*out_func) (void *, unsigned char *, unsigned int);

#endif				/* __LSB_VERSION__ >= 5.0 */

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

    extern uLong adler32(uLong adler, const Bytef * buf, uInt len);
    extern int compress(Bytef * dest, uLongf * destLen,
			const Bytef * source, uLong sourceLen);
    extern int compress2(Bytef * dest, uLongf * destLen,
			 const Bytef * source, uLong sourceLen, int level);
    extern uLong crc32(uLong crc, const Bytef * buf, uInt len);
    extern int deflate(z_streamp strm, int flush);
    extern int deflateCopy(z_streamp dest, z_streamp source);
    extern int deflateEnd(z_streamp strm);
    extern int deflateInit2_(z_streamp strm, int level, int method,
			     int windowBits, int memLevel, int strategy,
			     const char *version, int stream_size);
    extern int deflateInit_(z_streamp strm, int level, const char *version,
			    int stream_size);
    extern int deflateParams(z_streamp strm, int level, int strategy);
    extern int deflateReset(z_streamp strm);
    extern int deflateSetDictionary(z_streamp strm,
				    const Bytef * dictionary,
				    uInt dictLength);
    extern const uLongf *get_crc_table(void);
    extern int gzclose(gzFile file);
    extern gzFile gzdopen(int fd, const char *mode);
    extern int gzeof(gzFile file);
    extern const char *gzerror(gzFile file, int *errnum);
    extern int gzflush(gzFile file, int flush);
    extern int gzgetc(gzFile file);
    extern char *gzgets(gzFile file, char *buf, int len);
    extern gzFile gzopen(const char *path, const char *mode);
    extern int gzprintf(gzFile file, const char *format, ...);
    extern int gzputc(gzFile file, int c);
    extern int gzputs(gzFile file, const char *s);
    extern int gzread(gzFile file, voidp buf, unsigned int len);
    extern int gzrewind(gzFile file);
    extern z_off_t gzseek(gzFile file, z_off_t offset, int whence);
    extern int gzsetparams(gzFile file, int level, int strategy);
    extern z_off_t gztell(gzFile file);
    extern int gzwrite(gzFile file, voidpc buf, unsigned int len);
    extern int inflate(z_streamp strm, int flush);
    extern int inflateEnd(z_streamp strm);
    extern int inflateInit2_(z_streamp strm, int windowBits,
			     const char *version, int stream_size);
    extern int inflateInit_(z_streamp strm, const char *version,
			    int stream_size);
    extern int inflateReset(z_streamp strm);
    extern int inflateSetDictionary(z_streamp strm,
				    const Bytef * dictionary,
				    uInt dictLength);
    extern int inflateSync(z_streamp strm);
    extern int inflateSyncPoint(z_streamp z);
    extern int uncompress(Bytef * dest, uLongf * destLen,
			  const Bytef * source, uLong sourceLen);
    extern const char *zError(int);
#if __LSB_VERSION__ >= 30
    extern uLong compressBound(uLong sourceLen);
    extern uLong deflateBound(z_streamp strm, uLong sourceLen);
    extern const char *zlibVersion(void);
#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 50
    extern int deflatePrime(z_streamp strm, int bits, int value);
    extern void gzclearerr(gzFile file);
    extern int inflateBack(z_streamp strm, in_func in, void *in_desc,
			   out_func out, void *out_desc);
    extern int inflateBackEnd(z_streamp strm);
    extern int inflateBackInit_(z_streamp strm, int windowBits,
				unsigned char *window, const char *version,
				int stream_size);
    extern int inflateCopy(z_streamp dest, z_streamp source);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
