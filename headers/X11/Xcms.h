
typedef struct _XcmsFunctionSet
{
  XcmsColorSpace **DDColorSpaces;
  XcmsScreenInitProc screenInitProc;
  XcmsScreenFreeProc screenFreeProc;
}
XcmsFunctionSet;


typedef unsigned long XcmsColorFormat;

typedef double XcmsFloat;

typedef struct
{
  unsigned short red;
  unsigned short green;
  unsigned short blue;
}
XcmsRGB;

typedef struct
{
  XcmsFloat red;
  XcmsFloat green;
  XcmsFloat blue;
}
XcmsRGBi;

typedef struct
{
  XcmsFloat X;
  XcmsFloat Y;
  XcmsFloat Z;
}
XcmsCIEXYZ;

typedef struct
{
  XcmsFloat u_prime;
  XcmsFloat v_prime;
  XcmsFloat Y;
}
XcmsCIEuvY;

typedef struct
{
  XcmsFloat x;
  XcmsFloat y;
  XcmsFloat Y;
}
XcmsCIExyY;

typedef struct
{
  XcmsFloat L_star;
  XcmsFloat a_star;
  XcmsFloat b_star;
}
XcmsCIELab;

typedef struct
{
  XcmsFloat L_star;
  XcmsFloat u_star;
  XcmsFloat v_star;
}
XcmsCIELuv;

typedef struct
{
  XcmsFloat H;
  XcmsFloat V;
  XcmsFloat C;
}
XcmsTekHVC;

typedef struct
{
  XcmsFloat pad0;
  XcmsFloat pad1;
  XcmsFloat pad2;
  XcmsFloat pad3;
}
XcmsPad;


typedef union
{
  XcmsRGB RGB;
  XcmsRGBi RGBi;
  XcmsCIEXYZ CIEXYZ;
  XcmsCIEuvY CIEuvY;
  XcmsCIExyY CIExyY;
  XcmsCIELab CIELab;
  XcmsCIELuv CIELuv;
  XcmsTekHVC TekHVC;
  XcmsPad Pad;
}
XcmsColor;


typedef struct _XcmsPerScrnInfo
{
  XcmsColor screenWhitePt;
  XPointer functionSet;
  XPointer screenData;
  unsigned char state;
  char pad[1];
}
XcmsPerScrnInfo;


typedef int (*XcmsCompressionProc) ();

typedef int (*XcmsWhiteAdjustProc) ();

typedef int (*XcmsScreenInitProc) ();

typedef void (*XcmsScreenFreeProc) ();

typedef int (*XcmsConversionProc) ();

typedef int (*XcmsParseStringProc) ();


typedef struct _XcmsCCC
{
  Display *dpy;
  int screenNumber;
  Visual *visual;
  XcmsColor clientWhitePt;
  XcmsCompressionProc gamutCompProc;
  XPointer gamutCompClientData;
  XcmsWhiteAdjustProc whitePtAdjProc;
  XPointer whitePtAdjClientData;
  XcmsPerScrnInfo *pPerScrnInfo;
}
 *XcmsCCC;


typedef XcmsConversionProc *XcmsFuncListPtr;


typedef struct _XcmsColorSpace
{
  char *prefix;
  XcmsColorFormat id;
  XcmsParseStringProc parseString;
  XcmsFuncListPtr to_CIEXYZ;
  XcmsFuncListPtr from_CIEXYZ;
  int inverse_flag;
}
XcmsColorSpace;

int XcmsAddColorSpace (XcmsColorSpace *);
int XcmsAddFunctionSet (XcmsFunctionSet *);
int XcmsAllocColor (Display *, Colormap, XcmsColor *, XcmsColorFormat);
int XcmsAllocNamedColor (Display *, Colormap, char *, XcmsColor *,
			 XcmsColor *, XcmsColorFormat);
XcmsCCC XcmsCCCOfColormap (Display *, Colormap);
int XcmsCIELabClipL (XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
int XcmsCIELabClipLab (XcmsCCC, XcmsColor *, unsigned int, unsigned int,
		       int *);
int XcmsCIELabClipab (XcmsCCC, XcmsColor *, unsigned int, unsigned int,
		      int *);
int XcmsCIELabQueryMaxC (XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
int XcmsCIELabQueryMaxL (XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
int XcmsCIELabQueryMaxLC (XcmsCCC, XcmsFloat, XcmsColor *);
int XcmsCIELabQueryMinL (XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
int XcmsCIELabToCIEXYZ (XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
int XcmsCIELabWhiteShiftColors (XcmsCCC, XcmsColor *, XcmsColor *,
				XcmsColorFormat, XcmsColor *, unsigned int,
				int *);
int XcmsCIELuvClipL (XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
int XcmsCIELuvClipLuv (XcmsCCC, XcmsColor *, unsigned int, unsigned int,
		       int *);
int XcmsCIELuvClipuv (XcmsCCC, XcmsColor *, unsigned int, unsigned int,
		      int *);
int XcmsCIELuvQueryMaxC (XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
int XcmsCIELuvQueryMaxL (XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
int XcmsCIELuvQueryMaxLC (XcmsCCC, XcmsFloat, XcmsColor *);
int XcmsCIELuvQueryMinL (XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
int XcmsCIELuvToCIEuvY (XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
int XcmsCIELuvWhiteShiftColors (XcmsCCC, XcmsColor *, XcmsColor *,
				XcmsColorFormat, XcmsColor *, unsigned int,
				int *);
int XcmsCIEXYZToCIELab (XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
int XcmsCIEXYZToCIEuvY (XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
int XcmsCIEXYZToCIExyY (XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
int XcmsCIEXYZToRGBi (XcmsCCC, XcmsColor *, unsigned int, int *);
int XcmsCIEuvYToCIELuv (XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
int XcmsCIEuvYToCIEXYZ (XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
int XcmsCIEuvYToTekHVC (XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
int XcmsCIExyYToCIEXYZ (XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
XcmsColor *XcmsClientWhitePointOfCCC (XcmsCCC);
int XcmsConvertColors (XcmsCCC, XcmsColor *, unsigned int, XcmsColorFormat,
		       int *);
XcmsCCC XcmsCreateCCC (Display *, int, Visual *, XcmsColor *,
		       XcmsCompressionProc, XPointer, XcmsWhiteAdjustProc,
		       XPointer);
XcmsCCC XcmsDefaultCCC (Display *, int);
Display *XcmsDisplayOfCCC (XcmsCCC);
XcmsColorFormat XcmsFormatOfPrefix (char *);
void XcmsFreeCCC (XcmsCCC);
int XcmsLookupColor (Display *, Colormap, char *, XcmsColor *, XcmsColor *,
		     XcmsColorFormat);
char *XcmsPrefixOfFormat (XcmsColorFormat);
int XcmsQueryBlack (XcmsCCC, XcmsColorFormat, XcmsColor *);
int XcmsQueryBlue (XcmsCCC, XcmsColorFormat, XcmsColor *);
int XcmsQueryColor (Display *, Colormap, XcmsColor *, XcmsColorFormat);
int XcmsQueryColors (Display *, Colormap, XcmsColor *, unsigned int,
		     XcmsColorFormat);
int XcmsQueryGreen (XcmsCCC, XcmsColorFormat, XcmsColor *);
int XcmsQueryRed (XcmsCCC, XcmsColorFormat, XcmsColor *);
int XcmsQueryWhite (XcmsCCC, XcmsColorFormat, XcmsColor *);
int XcmsRGBToRGBi (XcmsCCC, XcmsColor *, unsigned int, int *);
int XcmsRGBiToCIEXYZ (XcmsCCC, XcmsColor *, unsigned int, int *);
int XcmsRGBiToRGB (XcmsCCC, XcmsColor *, unsigned int, int *);
int XcmsScreenNumberOfCCC (XcmsCCC);
XcmsColor *XcmsScreenWhitePointOfCCC (XcmsCCC);
XcmsCCC XcmsSetCCCOfColormap (Display *, Colormap, XcmsCCC);
XcmsCompressionProc XcmsSetCompressionProc (XcmsCCC, XcmsCompressionProc,
					    XPointer);
XcmsWhiteAdjustProc XcmsSetWhiteAdjustProc (XcmsCCC, XcmsWhiteAdjustProc,
					    XPointer);
int XcmsSetWhitePoint (XcmsCCC, XcmsColor *);
int XcmsStoreColor (Display *, Colormap, XcmsColor *);
int XcmsStoreColors (Display *, Colormap, XcmsColor *, unsigned int, int *);
int XcmsTekHVCClipC (XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
int XcmsTekHVCClipV (XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
int XcmsTekHVCClipVC (XcmsCCC, XcmsColor *, unsigned int, unsigned int,
		      int *);
int XcmsTekHVCQueryMaxC (XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
int XcmsTekHVCQueryMaxV (XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
int XcmsTekHVCQueryMaxVC (XcmsCCC, XcmsFloat, XcmsColor *);
int XcmsTekHVCQueryMaxVSamples (XcmsCCC, XcmsFloat, XcmsColor *,
				unsigned int);
int XcmsTekHVCQueryMinV (XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
int XcmsTekHVCToCIEuvY (XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
int XcmsTekHVCWhiteShiftColors (XcmsCCC, XcmsColor *, XcmsColor *,
				XcmsColorFormat, XcmsColor *, unsigned int,
				int *);
Visual *XcmsVisualOfCCC (XcmsCCC);
