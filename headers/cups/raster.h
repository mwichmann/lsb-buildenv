#ifndef _CUPS_RASTER_H_
#define _CUPS_RASTER_H_


#ifdef __cplusplus
extern "C" {
#endif



#define _CUPS_RASTER_H_
#define CUPS_RASTER_SYNC	0x52615374
#define CUPS_RASTER_REVSYNC	0x74536152
#define CUPS_RASTER_HAVE_COLORIMETRIC	1


    typedef enum {
	CUPS_RASTER_READ,
	CUPS_RASTER_WRITE
    } cups_mode_t;

    typedef struct {
	unsigned int sync;
	int fd;
	cups_mode_t mode;
    } cups_raster_t;

    typedef enum {
	CUPS_ADVANCE_NONE,
	CUPS_ADVANCE_FILE,
	CUPS_ADVANCE_JOB,
	CUPS_ADVANCE_SET,
	CUPS_ADVANCE_PAGE
    } cups_adv_t;

    typedef enum {
	CUPS_FALSE,
	CUPS_TRUE
    } cups_bool_t;

    typedef enum {
	CUPS_CUT_NONE,
	CUPS_CUT_FILE,
	CUPS_CUT_JOB,
	CUPS_CUT_SET,
	CUPS_CUT_PAGE
    } cups_cut_t;

    typedef enum {
	CUPS_JOG_NONE,
	CUPS_JOG_FILE,
	CUPS_JOG_JOB,
	CUPS_JOG_SET
    } cups_jog_t;

    typedef enum {
	CUPS_EDGE_TOP,
	CUPS_EDGE_RIGHT,
	CUPS_EDGE_BOTTOM,
	CUPS_EDGE_LEFT
    } cups_edge_t;

    typedef enum {
	CUPS_ORIENT_0,
	CUPS_ORIENT_90,
	CUPS_ORIENT_180,
	CUPS_ORIENT_270
    } cups_orient_t;

    typedef enum {
	CUPS_ORDER_CHUNKED,
	CUPS_ORDER_BANDED,
	CUPS_ORDER_PLANAR
    } cups_order_t;

    typedef enum {
	CUPS_CSPACE_W,
	CUPS_CSPACE_RGB,
	CUPS_CSPACE_RGBA,
	CUPS_CSPACE_K,
	CUPS_CSPACE_CMY,
	CUPS_CSPACE_YMC,
	CUPS_CSPACE_CMYK,
	CUPS_CSPACE_YMCK,
	CUPS_CSPACE_KCMY,
	CUPS_CSPACE_KCMYcm,
	CUPS_CSPACE_GMCK,
	CUPS_CSPACE_GMCS,
	CUPS_CSPACE_WHITE,
	CUPS_CSPACE_GOLD,
	CUPS_CSPACE_SILVER,
	CUPS_CSPACE_CIEXYZ,
	CUPS_CSPACE_CIELab,
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


    extern void cupsRasterClose(cups_raster_t *);
    extern unsigned int cupsRasterWritePixels(cups_raster_t *,
					      unsigned char *,
					      unsigned int);
    extern unsigned int cupsRasterReadHeader(cups_raster_t *,
					     cups_page_header_t *);
    extern unsigned int cupsRasterReadPixels(cups_raster_t *,
					     unsigned char *,
					     unsigned int);
    extern cups_raster_t *cupsRasterOpen(int, cups_mode_t);
    extern unsigned int cupsRasterWriteHeader(cups_raster_t *,
					      cups_page_header_t *);
#ifdef __cplusplus
}
#endif
#endif
