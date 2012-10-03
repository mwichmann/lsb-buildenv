#if (__LSB_VERSION__ >= 50 )
#ifndef _TIFFCONF_H_
#define _TIFFCONF_H_


#ifdef __cplusplus
extern "C" {
#endif


#define CMYK_SUPPORT
#define COLORIMETRY_SUPPORT
#define ICC_SUPPORT
#define IPTC_SUPPORT
#define PHOTOSHOP_SUPPORT
#define YCBCR_SUPPORT
#define HOST_BIGENDIAN	0
#define CCITT_SUPPORT	1
#define CHECK_JPEG_YCBCR_SUBSAMPLING	1
#define DEFAULT_EXTRASAMPLE_AS_ALPHA	1
#define HAVE_IEEEFP	1
#define JBIG_SUPPORT	1
#define JPEG_SUPPORT	1
#define LOGLUV_SUPPORT	1
#define LZW_SUPPORT	1
#define MDI_SUPPORT	1
#define NEXT_SUPPORT	1
#define OJPEG_SUPPORT	1
#define PACKBITS_SUPPORT	1
#define PIXARLOG_SUPPORT	1
#define SUBIFD_SUPPORT	1
#define THUNDER_SUPPORT	1
#define ZIP_SUPPORT	1
#define HOST_FILLORDER	FILLORDER_LSB2MSB
#define TIFF_PTRDIFF_T	ptrdiff_t
#define TIFF_INT8_T	signed char
#define TIFF_INT32_T	signed int
#define TIFF_SSIZE_T	signed long
#define TIFF_INT64_T	signed long long
#define TIFF_INT16_T	signed short
#define STRIPCHOP_DEFAULT	TIFF_STRIPCHOP
#define TIFF_UINT8_T	unsigned char
#define TIFF_UINT32_T	unsigned int
#define TIFF_UINT64_T	unsigned long long
#define TIFF_UINT16_T	unsigned short


#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
