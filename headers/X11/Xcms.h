#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_XCMS_H_
#define _X11_XCMS_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define ClientWhitePointOfCCC(ccc)	(&(ccc)->clientWhitePt)
#define ScreenWhitePointOfCCC(ccc)	(&(ccc)->pPerScrnInfo->screenWhitePt)
#define DisplayOfCCC(ccc)	((ccc)->dpy)
#define FunctionSetOfCCC(ccc)	((ccc)->pPerScrnInfo->functionSet)
#define ScreenNumberOfCCC(ccc)	((ccc)->screenNumber)
#define VisualOfCCC(ccc)	((ccc)->visual)
#define XcmsUndefinedFormat	(XcmsColorFormat)0x00000000
#define XcmsCIEXYZFormat	(XcmsColorFormat)0x00000001
#define XcmsCIEuvYFormat	(XcmsColorFormat)0x00000002
#define XcmsCIExyYFormat	(XcmsColorFormat)0x00000003
#define XcmsCIELabFormat	(XcmsColorFormat)0x00000004
#define XcmsCIELuvFormat	(XcmsColorFormat)0x00000005
#define XcmsTekHVCFormat	(XcmsColorFormat)0x00000006
#define XcmsRGBFormat	(XcmsColorFormat)0x80000000
#define XcmsRGBiFormat	(XcmsColorFormat)0x80000001
#define XcmsFailure	0
#define XcmsInitNone	0x00
#define XcmsInitSuccess	0x01
#define XcmsInitFailure	0xff
#define XcmsSuccess	1
#define XcmsSuccessWithCompression	2
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
    typedef struct _XcmsFunctionSet XcmsFunctionSet;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XcmsFunctionSet {
	XcmsColorSpace **DDColorSpaces;
	XcmsScreenInitProc screenInitProc;
	XcmsScreenFreeProc screenFreeProc;
    };

    int (*screenFreeProc) (void);

    int (*screenFreeProc) (void);

    int (*screenFreeProc) (void);

    void (*screenFreeProc) (void);

    int (*screenFreeProc) (void);

    int (*screenFreeProc) (void);

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef unsigned long int XcmsColorFormat;

    typedef double XcmsFloat;

    typedef struct {
	unsigned short red;
	unsigned short green;
	unsigned short blue;
    } XcmsRGB;

    typedef struct {
	XcmsFloat red;
	XcmsFloat green;
	XcmsFloat blue;
    } XcmsRGBi;

    typedef struct {
	XcmsFloat X;
	XcmsFloat Y;
	XcmsFloat Z;
    } XcmsCIEXYZ;

    typedef struct {
	XcmsFloat u_prime;
	XcmsFloat v_prime;
	XcmsFloat Y;
    } XcmsCIEuvY;

    typedef struct {
	XcmsFloat x;
	XcmsFloat y;
	XcmsFloat Y;
    } XcmsCIExyY;

    typedef struct {
	XcmsFloat L_star;
	XcmsFloat a_star;
	XcmsFloat b_star;
    } XcmsCIELab;

    typedef struct {
	XcmsFloat L_star;
	XcmsFloat u_star;
	XcmsFloat v_star;
    } XcmsCIELuv;

    typedef struct {
	XcmsFloat H;
	XcmsFloat V;
	XcmsFloat C;
    } XcmsTekHVC;

    typedef struct {
	XcmsFloat pad0;
	XcmsFloat pad1;
	XcmsFloat pad2;
	XcmsFloat pad3;
    } XcmsPad;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* XCMS Color Structure*/
#if __LSB_VERSION__ >= 12
    typedef union {
	XcmsRGB RGB;
	XcmsRGBi RGBi;
	XcmsCIEXYZ CIEXYZ;
	XcmsCIEuvY CIEuvY;
	XcmsCIExyY CIExyY;
	XcmsCIELab CIELab;
	XcmsCIELuv CIELuv;
	XcmsTekHVC TekHVC;
	XcmsPad Pad;
    } XcmsColor;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* XCMS Per Screen related data*/
#if __LSB_VERSION__ >= 12
    typedef struct _XcmsPerScrnInfo XcmsPerScrnInfo;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XcmsPerScrnInfo {
	XcmsColor screenWhitePt;
	XPointer functionSet;
	XPointer screenData;
	unsigned char state;
	char pad[1];
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef int (*XcmsCompressionProc) (void);

    typedef int (*XcmsWhiteAdjustProc) (void);

    typedef int (*XcmsScreenInitProc) (void);

    typedef void (*XcmsScreenFreeProc) (void);

    typedef int (*XcmsConversionProc) (void);

    typedef int (*XcmsParseStringProc) (void);

#endif				/* __LSB_VERSION__ >= 1.2 */


/* XCMS Color Conversion Context*/
#if __LSB_VERSION__ >= 12
    typedef struct _XcmsCCC XcmsCCCRec;

    typedef struct _XcmsCCC *XcmsCCC;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XcmsCCC {
	Display *dpy;
	int screenNumber;
	Visual *visual;
	XcmsColor clientWhitePt;
	XcmsCompressionProc gamutCompProc;
	XPointer gamutCompClientData;
	XcmsWhiteAdjustProc whitePtAdjProc;
	XPointer whitePtAdjClientData;
	XcmsPerScrnInfo *pPerScrnInfo;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef XcmsConversionProc *XcmsFuncListPtr;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Color Space -- per Color Space related data (Device-Independent or Device-Dependent)*/
#if __LSB_VERSION__ >= 12
    typedef struct _XcmsColorSpace XcmsColorSpace;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XcmsColorSpace {
	char *prefix;
	XcmsColorFormat id;
	XcmsParseStringProc parseString;
	XcmsFuncListPtr to_CIEXYZ;
	XcmsFuncListPtr from_CIEXYZ;
	int inverse_flag;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int XcmsAddColorSpace(XcmsColorSpace *);
    extern int XcmsAddFunctionSet(XcmsFunctionSet *);
    extern int XcmsAllocColor(Display *, Colormap, XcmsColor *,
			      XcmsColorFormat);
    extern int XcmsAllocNamedColor(Display *, Colormap, const char *,
				   XcmsColor *, XcmsColor *,
				   XcmsColorFormat);
    extern XcmsCCC XcmsCCCOfColormap(Display *, Colormap);
    extern int XcmsCIELabClipL(XcmsCCC, XcmsColor *, unsigned int,
			       unsigned int, int *);
    extern int XcmsCIELabClipLab(XcmsCCC, XcmsColor *, unsigned int,
				 unsigned int, int *);
    extern int XcmsCIELabClipab(XcmsCCC, XcmsColor *, unsigned int,
				unsigned int, int *);
    extern int XcmsCIELabQueryMaxC(XcmsCCC, XcmsFloat, XcmsFloat,
				   XcmsColor *);
    extern int XcmsCIELabQueryMaxL(XcmsCCC, XcmsFloat, XcmsFloat,
				   XcmsColor *);
    extern int XcmsCIELabQueryMaxLC(XcmsCCC, XcmsFloat, XcmsColor *);
    extern int XcmsCIELabQueryMinL(XcmsCCC, XcmsFloat, XcmsFloat,
				   XcmsColor *);
    extern int XcmsCIELabToCIEXYZ(XcmsCCC, XcmsColor *, XcmsColor *,
				  unsigned int);
    extern int XcmsCIELabWhiteShiftColors(XcmsCCC, XcmsColor *,
					  XcmsColor *, XcmsColorFormat,
					  XcmsColor *, unsigned int,
					  int *);
    extern int XcmsCIELuvClipL(XcmsCCC, XcmsColor *, unsigned int,
			       unsigned int, int *);
    extern int XcmsCIELuvClipLuv(XcmsCCC, XcmsColor *, unsigned int,
				 unsigned int, int *);
    extern int XcmsCIELuvClipuv(XcmsCCC, XcmsColor *, unsigned int,
				unsigned int, int *);
    extern int XcmsCIELuvQueryMaxC(XcmsCCC, XcmsFloat, XcmsFloat,
				   XcmsColor *);
    extern int XcmsCIELuvQueryMaxL(XcmsCCC, XcmsFloat, XcmsFloat,
				   XcmsColor *);
    extern int XcmsCIELuvQueryMaxLC(XcmsCCC, XcmsFloat, XcmsColor *);
    extern int XcmsCIELuvQueryMinL(XcmsCCC, XcmsFloat, XcmsFloat,
				   XcmsColor *);
    extern int XcmsCIELuvToCIEuvY(XcmsCCC, XcmsColor *, XcmsColor *,
				  unsigned int);
    extern int XcmsCIELuvWhiteShiftColors(XcmsCCC, XcmsColor *,
					  XcmsColor *, XcmsColorFormat,
					  XcmsColor *, unsigned int,
					  int *);
    extern int XcmsCIEXYZToCIELab(XcmsCCC, XcmsColor *, XcmsColor *,
				  unsigned int);
    extern int XcmsCIEXYZToCIEuvY(XcmsCCC, XcmsColor *, XcmsColor *,
				  unsigned int);
    extern int XcmsCIEXYZToCIExyY(XcmsCCC, XcmsColor *, XcmsColor *,
				  unsigned int);
    extern int XcmsCIEXYZToRGBi(XcmsCCC, XcmsColor *, unsigned int, int *);
    extern int XcmsCIEuvYToCIELuv(XcmsCCC, XcmsColor *, XcmsColor *,
				  unsigned int);
    extern int XcmsCIEuvYToCIEXYZ(XcmsCCC, XcmsColor *, XcmsColor *,
				  unsigned int);
    extern int XcmsCIEuvYToTekHVC(XcmsCCC, XcmsColor *, XcmsColor *,
				  unsigned int);
    extern int XcmsCIExyYToCIEXYZ(XcmsCCC, XcmsColor *, XcmsColor *,
				  unsigned int);
    extern XcmsColor *XcmsClientWhitePointOfCCC(XcmsCCC);
    extern int XcmsConvertColors(XcmsCCC, XcmsColor *, unsigned int,
				 XcmsColorFormat, int *);
    extern XcmsCCC XcmsCreateCCC(Display *, int, Visual *, XcmsColor *,
				 XcmsCompressionProc, XPointer,
				 XcmsWhiteAdjustProc, XPointer);
    extern XcmsCCC XcmsDefaultCCC(Display *, int);
    extern Display *XcmsDisplayOfCCC(XcmsCCC);
    extern XcmsColorFormat XcmsFormatOfPrefix(char *);
    extern void XcmsFreeCCC(XcmsCCC);
    extern int XcmsLookupColor(Display *, Colormap, const char *,
			       XcmsColor *, XcmsColor *, XcmsColorFormat);
    extern char *XcmsPrefixOfFormat(XcmsColorFormat);
    extern int XcmsQueryBlack(XcmsCCC, XcmsColorFormat, XcmsColor *);
    extern int XcmsQueryBlue(XcmsCCC, XcmsColorFormat, XcmsColor *);
    extern int XcmsQueryColor(Display *, Colormap, XcmsColor *,
			      XcmsColorFormat);
    extern int XcmsQueryColors(Display *, Colormap, XcmsColor *,
			       unsigned int, XcmsColorFormat);
    extern int XcmsQueryGreen(XcmsCCC, XcmsColorFormat, XcmsColor *);
    extern int XcmsQueryRed(XcmsCCC, XcmsColorFormat, XcmsColor *);
    extern int XcmsQueryWhite(XcmsCCC, XcmsColorFormat, XcmsColor *);
    extern int XcmsRGBToRGBi(XcmsCCC, XcmsColor *, unsigned int, int *);
    extern int XcmsRGBiToCIEXYZ(XcmsCCC, XcmsColor *, unsigned int, int *);
    extern int XcmsRGBiToRGB(XcmsCCC, XcmsColor *, unsigned int, int *);
    extern int XcmsScreenNumberOfCCC(XcmsCCC);
    extern XcmsColor *XcmsScreenWhitePointOfCCC(XcmsCCC);
    extern XcmsCCC XcmsSetCCCOfColormap(Display *, Colormap, XcmsCCC);
    extern XcmsCompressionProc XcmsSetCompressionProc(XcmsCCC,
						      XcmsCompressionProc,
						      XPointer);
    extern XcmsWhiteAdjustProc XcmsSetWhiteAdjustProc(XcmsCCC,
						      XcmsWhiteAdjustProc,
						      XPointer);
    extern int XcmsSetWhitePoint(XcmsCCC, XcmsColor *);
    extern int XcmsStoreColor(Display *, Colormap, XcmsColor *);
    extern int XcmsStoreColors(Display *, Colormap, XcmsColor *,
			       unsigned int, int *);
    extern int XcmsTekHVCClipC(XcmsCCC, XcmsColor *, unsigned int,
			       unsigned int, int *);
    extern int XcmsTekHVCClipV(XcmsCCC, XcmsColor *, unsigned int,
			       unsigned int, int *);
    extern int XcmsTekHVCClipVC(XcmsCCC, XcmsColor *, unsigned int,
				unsigned int, int *);
    extern int XcmsTekHVCQueryMaxC(XcmsCCC, XcmsFloat, XcmsFloat,
				   XcmsColor *);
    extern int XcmsTekHVCQueryMaxV(XcmsCCC, XcmsFloat, XcmsFloat,
				   XcmsColor *);
    extern int XcmsTekHVCQueryMaxVC(XcmsCCC, XcmsFloat, XcmsColor *);
    extern int XcmsTekHVCQueryMaxVSamples(XcmsCCC, XcmsFloat, XcmsColor *,
					  unsigned int);
    extern int XcmsTekHVCQueryMinV(XcmsCCC, XcmsFloat, XcmsFloat,
				   XcmsColor *);
    extern int XcmsTekHVCToCIEuvY(XcmsCCC, XcmsColor *, XcmsColor *,
				  unsigned int);
    extern int XcmsTekHVCWhiteShiftColors(XcmsCCC, XcmsColor *,
					  XcmsColor *, XcmsColorFormat,
					  XcmsColor *, unsigned int,
					  int *);
    extern Visual *XcmsVisualOfCCC(XcmsCCC);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
