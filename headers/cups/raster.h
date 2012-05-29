#if (__LSB_VERSION__ >= 32 )
#ifndef _CUPS_RASTER_H_
#define _CUPS_RASTER_H_


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


#define _CUPS_RASTER_H_
#define CUPS_RASTER_SYNC	0x52615374
#define CUPS_RASTER_REVSYNC	0x74536152
#define CUPS_RASTER_HAVE_COLORIMETRIC	1


    typedef enum {
	CUPS_RASTER_READ = 0,
	CUPS_RASTER_WRITE = 1
    } cups_mode_t;

    typedef enum {
	CUPS_ADVANCE_NONE = 0,
	CUPS_ADVANCE_FILE = 1,
	CUPS_ADVANCE_JOB = 2,
	CUPS_ADVANCE_SET = 3,
	CUPS_ADVANCE_PAGE = 4
    } cups_adv_t;

    typedef enum {
	CUPS_FALSE = 0,
	CUPS_TRUE = 1
    } cups_bool_t;

    typedef enum {
	CUPS_CUT_NONE = 0,
	CUPS_CUT_FILE = 1,
	CUPS_CUT_JOB = 2,
	CUPS_CUT_SET = 3,
	CUPS_CUT_PAGE = 4
    } cups_cut_t;

    typedef enum {
	CUPS_JOG_NONE = 0,
	CUPS_JOG_FILE = 1,
	CUPS_JOG_JOB = 2,
	CUPS_JOG_SET = 3
    } cups_jog_t;

    typedef enum {
	CUPS_EDGE_TOP = 0,
	CUPS_EDGE_RIGHT = 1,
	CUPS_EDGE_BOTTOM = 2,
	CUPS_EDGE_LEFT = 3
    } cups_edge_t;

    typedef enum {
	CUPS_ORIENT_0 = 0,
	CUPS_ORIENT_90 = 1,
	CUPS_ORIENT_180 = 2,
	CUPS_ORIENT_270 = 3
    } cups_orient_t;

    typedef enum {
	CUPS_ORDER_CHUNKED = 0,
	CUPS_ORDER_BANDED = 1,
	CUPS_ORDER_PLANAR = 2
    } cups_order_t;

    typedef enum {
	CUPS_CSPACE_W = 0,
	CUPS_CSPACE_RGB = 1,
	CUPS_CSPACE_RGBA = 2,
	CUPS_CSPACE_K = 3,
	CUPS_CSPACE_CMY = 4,
	CUPS_CSPACE_YMC = 5,
	CUPS_CSPACE_CMYK = 6,
	CUPS_CSPACE_YMCK = 7,
	CUPS_CSPACE_KCMY = 8,
	CUPS_CSPACE_KCMYcm = 9,
	CUPS_CSPACE_GMCK = 10,
	CUPS_CSPACE_GMCS = 11,
	CUPS_CSPACE_WHITE = 12,
	CUPS_CSPACE_GOLD = 13,
	CUPS_CSPACE_SILVER = 14,
	CUPS_CSPACE_CIEXYZ = 15,
	CUPS_CSPACE_CIELab = 16,
	CUPS_CSPACE_ICC1 = 32,
	CUPS_CSPACE_ICC2 = 33,
	CUPS_CSPACE_ICC3 = 34,
	CUPS_CSPACE_ICC4 = 35,
	CUPS_CSPACE_ICC5 = 36,
	CUPS_CSPACE_ICC6 = 37,
	CUPS_CSPACE_ICC7 = 38,
	CUPS_CSPACE_ICC8 = 39,
	CUPS_CSPACE_ICC9 = 40,
	CUPS_CSPACE_ICCA = 41,
	CUPS_CSPACE_ICCB = 42,
	CUPS_CSPACE_ICCC = 43,
	CUPS_CSPACE_ICCD = 44,
	CUPS_CSPACE_ICCE = 45,
	CUPS_CSPACE_ICCF = 46
    } cups_cspace_t;

    typedef struct {
	char MediaClass[64];
	char MediaColor[64];
	char MediaType[64];
	char OutputType[64];
	unsigned int AdvanceDistance;
	cups_adv_t AdvanceMedia;
	cups_bool_t Collate;
	cups_cut_t CutMedia;
	cups_bool_t Duplex;
	unsigned int HWResolution[2];
	unsigned int ImagingBoundingBox[4];
	cups_bool_t InsertSheet;
	cups_jog_t Jog;
	cups_edge_t LeadingEdge;
	unsigned int Margins[2];
	cups_bool_t ManualFeed;
	unsigned int MediaPosition;
	unsigned int MediaWeight;
	cups_bool_t MirrorPrint;
	cups_bool_t NegativePrint;
	unsigned int NumCopies;
	cups_orient_t Orientation;
	cups_bool_t OutputFaceUp;
	unsigned int PageSize[2];
	cups_bool_t Separations;
	cups_bool_t TraySwitch;
	cups_bool_t Tumble;
	unsigned int cupsWidth;
	unsigned int cupsHeight;
	unsigned int cupsMediaType;
	unsigned int cupsBitsPerColor;
	unsigned int cupsBitsPerPixel;
	unsigned int cupsBytesPerLine;
	cups_order_t cupsColorOrder;
	cups_cspace_t cupsColorSpace;
	unsigned int cupsCompression;
	unsigned int cupsRowCount;
	unsigned int cupsRowFeed;
	unsigned int cupsRowStep;
    } cups_page_header_t;

#if __LSB_VERSION__ < 40
    typedef struct {
	unsigned int sync;
	int fd;
	cups_mode_t mode;
    } cups_raster_t;

#endif				/* __LSB_VERSION__ < 4.0 */

#if __LSB_VERSION__ >= 40
    typedef struct _cups_raster_s cups_raster_t;

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 50
    typedef struct cups_page_header2_s cups_page_header2_t;

    typedef int (*cups_interpret_cb_t) (cups_page_header2_t *, int);

#endif				/* __LSB_VERSION__ >= 5.0 */

#if __LSB_VERSION__ >= 50
    struct cups_page_header2_s {
	char MediaClass[64];
	char MediaColor[64];
	char MediaType[64];
	char OutputType[64];
	unsigned int AdvanceDistance;
	cups_adv_t AdvanceMedia;
	cups_bool_t Collate;
	cups_cut_t CutMedia;
	cups_bool_t Duplex;
	unsigned int HWResolution[3];
	unsigned int ImagingBoundingBox[4];
	cups_bool_t InsertSheet;
	cups_jog_t Jog;
	cups_edge_t LeadingEdge;
	unsigned int Margins[3];
	cups_bool_t ManualFeed;
	unsigned int MediaPosition;
	unsigned int MediaWeight;
	cups_bool_t MirrorPrint;
	cups_bool_t NegativePrint;
	unsigned int NumCopies;
	cups_orient_t Orientation;
	cups_bool_t OutputFaceUp;
	unsigned int PageSize[3];
	cups_bool_t Separations;
	cups_bool_t TraySwitch;
	cups_bool_t Tumble;
	unsigned int cupsWidth;
	unsigned int cupsHeight;
	unsigned int cupsMediaType;
	unsigned int cupsBitsPerColor;
	unsigned int cupsBitsPerPixel;
	unsigned int cupsBytesPerLine;
	cups_order_t cupsColorOrder;
	cups_cspace_t cupsColorSpace;
	unsigned int cupsCompression;
	unsigned int cupsRowCount;
	unsigned int cupsRowFeed;
	unsigned int cupsRowStep;
	unsigned int cupsNumColors;
	float cupsBorderlessScalingFactor;
	float cupsPageSize[2];
	float cupsImagingBBox[4];
	unsigned int cupsInteger[16];
	float cupsReal[16];
	char cupsString[16][64];
	char cupsMarkerType[64];
	char cupsRenderingIntent[64];
	char cupsPageSizeName[64];
    };

#endif				/* __LSB_VERSION__ >= 5.0 */


/* Function prototypes */

    extern void cupsRasterClose(cups_raster_t * r);
    extern cups_raster_t *cupsRasterOpen(int fd, cups_mode_t mode);
    /* This function is deprecated. Use cupsRasterReadHeader2 instead. */
    extern unsigned int cupsRasterReadHeader(cups_raster_t * r,
					     cups_page_header_t * h)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern unsigned int cupsRasterReadPixels(cups_raster_t * r,
					     unsigned char *p,
					     unsigned int len);
    /* This function is deprecated. Use cupsRasterWriteHeader2 instead. */
    extern unsigned int cupsRasterWriteHeader(cups_raster_t * r,
					      cups_page_header_t * h)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern unsigned int cupsRasterWritePixels(cups_raster_t * r,
					      unsigned char *p,
					      unsigned int len);
#if __LSB_VERSION__ >= 50
    extern unsigned int cupsRasterReadHeader2(cups_raster_t * r,
					      cups_page_header2_t * h);
    extern unsigned int cupsRasterWriteHeader2(cups_raster_t * r,
					       cups_page_header2_t * h);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
