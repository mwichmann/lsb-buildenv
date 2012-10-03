#if (__LSB_VERSION__ >= 50 )
#ifndef _TIFFIO_H_
#define _TIFFIO_H_

#include <stdio.h>
#include <stdarg.h>
#include <tiffvers.h>
#include <tiff.h>

#ifdef __cplusplus
extern "C" {
#endif


#define TIFFGetB(abgr)	(((abgr) >> 16) & 0xff)
#define TIFFGetA(abgr)	(((abgr) >> 24) & 0xff)
#define TIFFGetG(abgr)	(((abgr) >> 8) & 0xff)
#define TIFFGetR(abgr)	((abgr) & 0xff)
#define D50_Y0	(100.0F)
#define D65_Y0	(100.0F)
#define D65_Z0	(108.8827F)
#define D50_Z0	(82.4680F)
#define D65_X0	(95.0470F)
#define D50_X0	(96.4250F)
#define TIFF_VARIABLE	-1
#define TIFF_SPP	-2
#define TIFF_VARIABLE2	-3
#define U_NEU	0.210526316
#define V_NEU	0.473684211
#define TIFFPRINT_NONE	0x0
#define TIFFPRINT_STRIPS	0x1
#define TIFFPRINT_JPEGQTABLES	0x100
#define TIFFPRINT_CURVES	0x2
#define TIFFPRINT_JPEGACTABLES	0x200
#define TIFFPRINT_JPEGDCTABLES	0x200
#define TIFFPRINT_COLORMAP	0x4
#define LOGLUV_PUBLIC	1
#define CIELABTORGB_TABLE_RANGE	1500
#define UVSCALE	410.
#define FIELD_CUSTOM	65
#define TIFF_ANY	TIFF_NOTYPE


    typedef struct tiff TIFF;

    typedef TIFF_SSIZE_T tmsize_t;

    typedef uint64 toff_t;

    typedef uint32 ttag_t;

    typedef uint16 tdir_t;

    typedef uint16 tsample_t;

    typedef uint32 tstrile_t;

    typedef tstrile_t tstrip_t;

    typedef tstrile_t ttile_t;

    typedef tmsize_t tsize_t;

    typedef void *tdata_t;

    typedef void *thandle_t;

    typedef unsigned char TIFFRGBValue;

    typedef struct {
	float d_mat[3][3];
	float d_YCR;
	float d_YCG;
	float d_YCB;
	uint32 d_Vrwr;
	uint32 d_Vrwg;
	uint32 d_Vrwb;
	float d_Y0R;
	float d_Y0G;
	float d_Y0B;
	float d_gammaR;
	float d_gammaG;
	float d_gammaB;
    } TIFFDisplay;

    typedef struct {
	TIFFRGBValue *clamptab;
	int *Cr_r_tab;
	int *Cb_b_tab;
	int32 *Cr_g_tab;
	int32 *Cb_g_tab;
	int32 *Y_tab;
    } TIFFYCbCrToRGB;

    typedef struct {
	int range;
	float rstep;
	float gstep;
	float bstep;
	float X0;
	float Y0;
	float Z0;
	TIFFDisplay display;
	float Yr2r[1501];
	float Yg2g[1501];
	float Yb2b[1501];
    } TIFFCIELabToRGB;

    typedef struct _TIFFRGBAImage TIFFRGBAImage;

    typedef void (*tileContigRoutine) (TIFFRGBAImage *, uint32 *, uint32,
				       uint32, uint32, uint32, int32,
				       int32, unsigned char *);

    typedef void (*tileSeparateRoutine) (TIFFRGBAImage *, uint32 *, uint32,
					 uint32, uint32, uint32, int32,
					 int32, unsigned char *,
					 unsigned char *, unsigned char *,
					 unsigned char *);

    typedef int (*TIFFInitMethod) (TIFF *, int);

    typedef struct {
	char *name;
	uint16 scheme;
	TIFFInitMethod init;
    } TIFFCodec;

    typedef void (*TIFFErrorHandler) (const char *, const char *, va_list);

    typedef void (*TIFFErrorHandlerExt) (thandle_t, const char *,
					 const char *, va_list);

    typedef tmsize_t(*TIFFReadWriteProc) (thandle_t, void *, tmsize_t);

    typedef toff_t(*TIFFSeekProc) (thandle_t, toff_t, int);

    typedef int (*TIFFCloseProc) (thandle_t);

    typedef toff_t(*TIFFSizeProc) (thandle_t);

    typedef int (*TIFFMapFileProc) (thandle_t, void **, toff_t *);

    typedef void (*TIFFUnmapFileProc) (thandle_t, void *, toff_t);

    typedef void (*TIFFExtendProc) (TIFF *);

    typedef struct _TIFFField TIFFField;

    typedef struct _TIFFFieldArray TIFFFieldArray;

    typedef int (*TIFFVSetMethod) (TIFF *, uint32, va_list);

    typedef int (*TIFFVGetMethod) (TIFF *, uint32, va_list);

    typedef void (*TIFFPrintMethod) (TIFF *, FILE *, long int);

    typedef struct {
	TIFFVSetMethod vsetfield;
	TIFFVGetMethod vgetfield;
	TIFFPrintMethod printdir;
    } TIFFTagMethods;

    struct _TIFFRGBAImage {
	TIFF *tif;
	int stoponerr;
	int isContig;
	int alpha;
	uint32 width;
	uint32 height;
	uint16 bitspersample;
	uint16 samplesperpixel;
	uint16 orientation;
	uint16 req_orientation;
	uint16 photometric;
	uint16 *redcmap;
	uint16 *greencmap;
	uint16 *bluecmap;
	int (*get) (TIFFRGBAImage *, uint32 *, uint32, uint32);
	union {
	    void (*any) (TIFFRGBAImage *);
	    tileContigRoutine contig;
	    tileSeparateRoutine separate;
	} put;
	TIFFRGBValue *Map;
	uint32 **BWmap;
	uint32 **PALmap;
	TIFFYCbCrToRGB *ycbcr;
	TIFFCIELabToRGB *cielab;
	uint8 *UaToAa;
	uint8 *Bitdepth16To8;
	int row_offset;
	int col_offset;
    };


/* Function prototypes */

    extern int LogL10fromY(double, int);
    extern double LogL10toY(int);
    extern int LogL16fromY(double, int);
    extern double LogL16toY(int);
    extern uint32 LogLuv24fromXYZ(float *, int);
    extern void LogLuv24toXYZ(uint32, float *);
    extern uint32 LogLuv32fromXYZ(float *, int);
    extern void LogLuv32toXYZ(uint32, float *);
    extern TIFFTagMethods *TIFFAccessTagMethods(TIFF *);
    extern int TIFFCIELabToRGBInit(TIFFCIELabToRGB *, const TIFFDisplay *,
				   float *);
    extern void TIFFCIELabToXYZ(TIFFCIELabToRGB *, uint32, int32, int32,
				float *, float *, float *);
    extern int TIFFCheckTile(TIFF * tif, uint32 x, uint32 y, uint32 z,
			     uint16 s);
    extern int TIFFCheckpointDirectory(TIFF *);
    extern void TIFFCleanup(TIFF * tif);
    extern TIFF *TIFFClientOpen(const char *, const char *, thandle_t,
				TIFFReadWriteProc, TIFFReadWriteProc,
				TIFFSeekProc, TIFFCloseProc, TIFFSizeProc,
				TIFFMapFileProc, TIFFUnmapFileProc);
    extern thandle_t TIFFClientdata(TIFF *);
    extern void TIFFClose(TIFF * tif);
    extern uint32 TIFFComputeStrip(TIFF *, uint32, uint16);
    extern uint32 TIFFComputeTile(TIFF * tif, uint32 x, uint32 y, uint32 z,
				  uint16 s);
    extern int TIFFCreateCustomDirectory(TIFF *, const TIFFFieldArray *);
    extern int TIFFCreateDirectory(TIFF *);
    extern int TIFFCreateEXIFDirectory(TIFF *);
    extern uint64 TIFFCurrentDirOffset(TIFF *);
    extern uint16 TIFFCurrentDirectory(TIFF *);
    extern uint32 TIFFCurrentRow(TIFF *);
    extern uint32 TIFFCurrentStrip(TIFF *);
    extern uint32 TIFFCurrentTile(TIFF * tif);
    extern int TIFFDataWidth(TIFFDataType);
    extern uint32 TIFFDefaultStripSize(TIFF * tif, uint32 request);
    extern void TIFFDefaultTileSize(TIFF *, uint32 *, uint32 *);
    extern void TIFFError(const char *, const char *, ...);
    extern void TIFFErrorExt(thandle_t, const char *, const char *, ...);
    extern TIFF *TIFFFdOpen(int, const char *, const char *);
    extern const TIFFField *TIFFFieldWithName(TIFF *, const char *);
    extern const TIFFField *TIFFFieldWithTag(TIFF *, uint32);
    extern const char *TIFFFileName(TIFF *);
    extern int TIFFFileno(TIFF *);
    extern const TIFFCodec *TIFFFindCODEC(uint16);
    extern const TIFFField *TIFFFindField(TIFF *, uint32, TIFFDataType);
    extern int TIFFFlush(TIFF * tif);
    extern int TIFFFlushData(TIFF * tif);
    extern void TIFFFreeDirectory(TIFF *);
    extern const unsigned char *TIFFGetBitRevTable(int);
    extern void *TIFFGetClientInfo(TIFF *, const char *);
    extern TIFFCloseProc TIFFGetCloseProc(TIFF *);
    extern TIFFCodec *TIFFGetConfiguredCODECs(void);
    extern int TIFFGetField(TIFF * tif, uint32 tag, ...);
    extern int TIFFGetFieldDefaulted(TIFF * tif, uint32 tag, ...);
    extern TIFFMapFileProc TIFFGetMapFileProc(TIFF *);
    extern int TIFFGetMode(TIFF *);
    extern TIFFReadWriteProc TIFFGetReadProc(TIFF *);
    extern TIFFSeekProc TIFFGetSeekProc(TIFF *);
    extern TIFFSizeProc TIFFGetSizeProc(TIFF *);
    extern int TIFFGetTagListCount(TIFF *);
    extern uint32 TIFFGetTagListEntry(TIFF *, int tag_index);
    extern TIFFUnmapFileProc TIFFGetUnmapFileProc(TIFF *);
    extern const char *TIFFGetVersion(void);
    extern TIFFReadWriteProc TIFFGetWriteProc(TIFF *);
    extern int TIFFIsBigEndian(TIFF *);
    extern int TIFFIsByteSwapped(TIFF *);
    extern int TIFFIsCODECConfigured(uint16);
    extern int TIFFIsMSB2LSB(TIFF *);
    extern int TIFFIsTiled(TIFF *);
    extern int TIFFIsUpSampled(TIFF *);
    extern int TIFFLastDirectory(TIFF *);
    extern uint16 TIFFNumberOfDirectories(TIFF *);
    extern uint32 TIFFNumberOfStrips(TIFF *);
    extern uint32 TIFFNumberOfTiles(TIFF *);
    extern TIFF *TIFFOpen(const char *, const char *);
    extern void TIFFPrintDirectory(TIFF *, FILE *, long int);
    extern int TIFFRGBAImageBegin(TIFFRGBAImage *, TIFF *, int, char *);
    extern void TIFFRGBAImageEnd(TIFFRGBAImage *);
    extern int TIFFRGBAImageGet(TIFFRGBAImage *, uint32 *, uint32, uint32);
    extern int TIFFRGBAImageOK(TIFF *, char *);
    extern tmsize_t TIFFRasterScanlineSize(TIFF * tif);
    extern uint64 TIFFRasterScanlineSize64(TIFF * tif);
    extern tmsize_t TIFFRawStripSize(TIFF * tif, uint32 strip);
    extern uint64 TIFFRawStripSize64(TIFF * tif, uint32 strip);
    extern int TIFFReadBufferSetup(TIFF * tif, void *bp, tmsize_t size);
    extern int TIFFReadCustomDirectory(TIFF * tif, toff_t diroff,
				       const TIFFFieldArray * infoarray);
    extern int TIFFReadDirectory(TIFF * tif);
    extern int TIFFReadEXIFDirectory(TIFF * tif, toff_t diroff);
    extern tmsize_t TIFFReadEncodedStrip(TIFF * tif, uint32 strip,
					 void *buf, tmsize_t size);
    extern tmsize_t TIFFReadEncodedTile(TIFF * tif, uint32 tile, void *buf,
					tmsize_t size);
    extern int TIFFReadRGBAImage(TIFF *, uint32, uint32, uint32 *, int);
    extern int TIFFReadRGBAImageOriented(TIFF *, uint32, uint32, uint32 *,
					 int, int);
    extern int TIFFReadRGBAStrip(TIFF *, uint32, uint32 *);
    extern int TIFFReadRGBATile(TIFF *, uint32, uint32, uint32 *);
    extern tmsize_t TIFFReadRawStrip(TIFF * tif, uint32 strip, void *buf,
				     tmsize_t size);
    extern tmsize_t TIFFReadRawTile(TIFF * tif, uint32 tile, void *buf,
				    tmsize_t size);
    extern int TIFFReadScanline(TIFF * tif, void *buf, uint32 row,
				uint16 sample);
    extern tmsize_t TIFFReadTile(TIFF * tif, void *buf, uint32 x, uint32 y,
				 uint32 z, uint16 s);
    extern TIFFCodec *TIFFRegisterCODEC(uint16, const char *,
					TIFFInitMethod);
    extern void TIFFReverseBits(uint8 * cp, tmsize_t n);
    extern int TIFFRewriteDirectory(TIFF *);
    extern tmsize_t TIFFScanlineSize(TIFF * tif);
    extern uint64 TIFFScanlineSize64(TIFF * tif);
    extern void TIFFSetClientInfo(TIFF *, void *, const char *);
    extern thandle_t TIFFSetClientdata(TIFF *, thandle_t);
    extern int TIFFSetDirectory(TIFF *, uint16);
    extern TIFFErrorHandler TIFFSetErrorHandler(TIFFErrorHandler);
    extern TIFFErrorHandlerExt TIFFSetErrorHandlerExt(TIFFErrorHandlerExt);
    extern int TIFFSetField(TIFF *, uint32, ...);
    extern const char *TIFFSetFileName(TIFF *, const char *);
    extern int TIFFSetFileno(TIFF *, int);
    extern int TIFFSetMode(TIFF *, int);
    extern int TIFFSetSubDirectory(TIFF *, uint64);
    extern TIFFExtendProc TIFFSetTagExtender(TIFFExtendProc);
    extern TIFFErrorHandler TIFFSetWarningHandler(TIFFErrorHandler);
    extern TIFFErrorHandlerExt
	TIFFSetWarningHandlerExt(TIFFErrorHandlerExt);
    extern void TIFFSetWriteOffset(TIFF * tif, toff_t off);
    extern int TIFFSetupStrips(TIFF *);
    extern tmsize_t TIFFStripSize(TIFF * tif);
    extern uint64 TIFFStripSize64(TIFF * tif);
    extern void TIFFSwabArrayOfDouble(double *dp, tmsize_t n);
    extern void TIFFSwabArrayOfFloat(float *fp, tmsize_t n);
    extern void TIFFSwabArrayOfLong(uint32 * lp, tmsize_t n);
    extern void TIFFSwabArrayOfLong8(uint64 * lp, tmsize_t n);
    extern void TIFFSwabArrayOfShort(uint16 * wp, tmsize_t n);
    extern void TIFFSwabArrayOfTriples(uint8 * tp, tmsize_t n);
    extern void TIFFSwabDouble(double *);
    extern void TIFFSwabFloat(float *);
    extern void TIFFSwabLong(uint32 *);
    extern void TIFFSwabLong8(uint64 *);
    extern void TIFFSwabShort(uint16 *);
    extern tmsize_t TIFFTileRowSize(TIFF * tif);
    extern uint64 TIFFTileRowSize64(TIFF * tif);
    extern tmsize_t TIFFTileSize(TIFF * tif);
    extern uint64 TIFFTileSize64(TIFF * tif);
    extern void TIFFUnRegisterCODEC(TIFFCodec *);
    extern int TIFFUnlinkDirectory(TIFF *, uint16);
    extern int TIFFUnsetField(TIFF *, uint32);
    extern int TIFFVGetField(TIFF * tif, uint32 tag, va_list ap);
    extern int TIFFVGetFieldDefaulted(TIFF * tif, uint32 tag, va_list ap);
    extern int TIFFVSetField(TIFF *, uint32, va_list);
    extern tmsize_t TIFFVStripSize(TIFF * tif, uint32 nrows);
    extern uint64 TIFFVStripSize64(TIFF * tif, uint32 nrows);
    extern tmsize_t TIFFVTileSize(TIFF * tif, uint32 nrows);
    extern uint64 TIFFVTileSize64(TIFF * tif, uint32 nrows);
    extern void TIFFWarning(const char *, const char *, ...);
    extern void TIFFWarningExt(thandle_t, const char *, const char *, ...);
    extern int TIFFWriteBufferSetup(TIFF * tif, void *bp, tmsize_t size);
    extern int TIFFWriteCheck(TIFF *, int, const char *);
    extern int TIFFWriteCustomDirectory(TIFF *, uint64 *);
    extern int TIFFWriteDirectory(TIFF *);
    extern tmsize_t TIFFWriteEncodedStrip(TIFF * tif, uint32 strip,
					  void *data, tmsize_t cc);
    extern tmsize_t TIFFWriteEncodedTile(TIFF * tif, uint32 tile,
					 void *data, tmsize_t cc);
    extern tmsize_t TIFFWriteRawStrip(TIFF * tif, uint32 strip, void *data,
				      tmsize_t cc);
    extern tmsize_t TIFFWriteRawTile(TIFF * tif, uint32 tile, void *data,
				     tmsize_t cc);
    extern int TIFFWriteScanline(TIFF * tif, void *buf, uint32 row,
				 uint16 sample);
    extern tmsize_t TIFFWriteTile(TIFF * tif, void *buf, uint32 x,
				  uint32 y, uint32 z, uint16 s);
    extern void TIFFXYZToRGB(TIFFCIELabToRGB *, float, float, float,
			     uint32 *, uint32 *, uint32 *);
    extern int TIFFYCbCrToRGBInit(TIFFYCbCrToRGB *, float *, float *);
    extern void TIFFYCbCrtoRGB(TIFFYCbCrToRGB *, uint32, int32, int32,
			       uint32 *, uint32 *, uint32 *);
    extern void XYZtoRGB24(float *, uint8 *);
    extern void _TIFFfree(void *p);
    extern void *_TIFFmalloc(tmsize_t s);
    extern int _TIFFmemcmp(const void *p1, const void *p2, tmsize_t c);
    extern void _TIFFmemcpy(void *d, const void *s, tmsize_t c);
    extern void _TIFFmemset(void *p, int v, tmsize_t c);
    extern void *_TIFFrealloc(void *p, tmsize_t s);
    extern int uv_decode(double *, double *, int);
    extern int uv_encode(double, double, int);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
