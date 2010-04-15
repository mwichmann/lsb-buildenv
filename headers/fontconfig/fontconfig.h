#if (__LSB_VERSION__ >= 31 )
#ifndef _FONTCONFIG_FONTCONFIG_H_
#define _FONTCONFIG_FONTCONFIG_H_

#include <stdarg.h>

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


#define _FCFUNCPROTOBEGIN
#define _FCFUNCPROTOEND
#define FC_USER_CACHE_FILE	".fonts.cache-"FC_CACHE_VERSION
#define FC_DIR_CACHE_FILE	"fonts.cache-"FC_CACHE_VERSION
#define FcIsUpper(c)	((0101 <= (c) && (c) <= 0132))
#define FcIsLower(c)	((0141 <= (c) && (c) <= 0172))
#define FC_CHARSET_DONE	((FcChar32) -1)
#define FC_VERSION	((FC_MAJOR * 10000) + (FC_MINOR * 100) + (FC_REVISION))
#define FcMatrixInit(m)	((m)->xx = (m)->yy = 1, (m)->xy = (m)->yx = 0)
#define FC_CHARSET_MAP_SIZE	(256/32)
#define FcToLower(c)	(FcIsUpper(c) ? (c) - 0101 + 0141 : (c))
#define FC_HINT_NONE	0
#define FC_PROPORTIONAL	0
#define FC_RGBA_UNKNOWN	0
#define FC_SLANT_ROMAN	0
#define FC_WEIGHT_THIN	0
#define FcFalse	0
#define FC_CACHE_VERSION	"1"
#define FC_HINT_SLIGHT	1
#define FC_RGBA_RGB	1
#define FcTrue	1
#define FC_MONO	100
#define FC_SLANT_ITALIC	100
#define FC_WEIGHT_MEDIUM	100
#define FC_WIDTH_NORMAL	100
#define FC_CHARCELL	110
#define FC_SLANT_OBLIQUE	110
#define FC_WIDTH_SEMIEXPANDED	113
#define FC_WIDTH_EXPANDED	125
#define FC_WIDTH_EXTRAEXPANDED	150
#define FC_WEIGHT_DEMIBOLD	180
#define FC_HINT_MEDIUM	2
#define FC_MAJOR	2
#define FC_REVISION	2
#define FC_RGBA_BGR	2
#define FC_WEIGHT_BOLD	200
#define FC_WIDTH_ULTRAEXPANDED	200
#define FC_WEIGHT_EXTRABOLD	205
#define FC_WEIGHT_BLACK	210
#define FC_HINT_FULL	3
#define FC_MINOR	3
#define FC_RGBA_VRGB	3
#define FC_RGBA_VBGR	4
#define FC_WEIGHT_EXTRALIGHT	40
#define FC_RGBA_NONE	5
#define FC_WEIGHT_LIGHT	50
#define FC_WIDTH_ULTRACONDENSED	50
#define FC_UTF8_MAX_LEN	6
#define FC_WIDTH_EXTRACONDENSED	63
#define FC_WEIGHT_BOOK	75
#define FC_WIDTH_CONDENSED	75
#define FC_WEIGHT_REGULAR	80
#define FC_WIDTH_SEMICONDENSED	87
#define FC_DUAL	90
#define FC_ANTIALIAS	"antialias"
#define FC_ASPECT	"aspect"
#define FC_AUTOHINT	"autohint"
#define FC_CAPABILITY	"capability"
#define FC_CHAR_HEIGHT	"charheight"
#define FC_CHARSET	"charset"
#define FC_CHAR_WIDTH	"charwidth"
#define FC_DPI	"dpi"
#define FC_EMBOLDEN	"embolden"
#define FC_FAMILY	"family"
#define FC_FAMILYLANG	"familylang"
#define FC_WEIGHT_HEAVY	FC_WEIGHT_BLACK
#define FC_WEIGHT_SEMIBOLD	FC_WEIGHT_DEMIBOLD
#define FC_WEIGHT_ULTRABOLD	FC_WEIGHT_EXTRABOLD
#define FC_WEIGHT_ULTRALIGHT	FC_WEIGHT_EXTRALIGHT
#define FC_WEIGHT_NORMAL	FC_WEIGHT_REGULAR
#define FC_FILE	"file"
#define FC_FONTFORMAT	"fontformat"
#define FC_FONTVERSION	"fontversion"
#define FC_FOUNDRY	"foundry"
#define FC_FT_FACE	"ftface"
#define FC_FULLNAME	"fullname"
#define FC_FULLNAMELANG	"fullnamelang"
#define FC_GLOBAL_ADVANCE	"globaladvance"
#define FC_HINTING	"hinting"
#define FC_HINT_STYLE	"hintstyle"
#define FC_INDEX	"index"
#define FC_LANG	"lang"
#define FC_MATRIX	"matrix"
#define FC_MINSPACE	"minspace"
#define FC_OUTLINE	"outline"
#define FC_PIXEL_SIZE	"pixelsize"
#define FC_RASTERIZER	"rasterizer"
#define FC_RGBA	"rgba"
#define FC_SCALABLE	"scalable"
#define FC_SCALE	"scale"
#define FC_SIZE	"size"
#define FC_SLANT	"slant"
#define FC_SOURCE	"source"
#define FC_SPACING	"spacing"
#define FC_STYLE	"style"
#define FC_STYLELANG	"stylelang"
#define FC_VERTICAL_LAYOUT	"verticallayout"
#define FC_WEIGHT	"weight"
#define FC_WIDTH	"width"


    typedef int FcBool;

    typedef struct _FcPattern FcPattern;

    typedef enum _FcType {
	FcTypeVoid = 0,
	FcTypeInteger = 1,
	FcTypeDouble = 2,
	FcTypeString = 3,
	FcTypeBool = 4,
	FcTypeMatrix = 5,
	FcTypeCharSet = 6,
	FcTypeFTFace = 7,
	FcTypeLangSet = 8
    } FcType;

    typedef unsigned char FcChar8;

    typedef struct _FcMatrix FcMatrix;

    typedef struct _FcCharSet FcCharSet;

    typedef struct _FcLangSet FcLangSet;

    typedef struct _FcValue FcValue;

    typedef struct _FcStrList FcStrList;

    typedef struct _FcConfig FcConfig;

    typedef struct _FcStrSet FcStrSet;

    typedef unsigned int FcChar32;

    typedef enum _FcMatchKind {
	FcMatchPattern = 0,
	FcMatchFont = 1
    } FcMatchKind;

    typedef struct _FcObjectSet FcObjectSet;

    typedef enum {
	FcEndianBig = 0,
	FcEndianLittle = 1
    } FcEndian;

    typedef struct _FcAtomic FcAtomic;

    typedef struct _FcConstant FcConstant;

    typedef struct _FcFontSet FcFontSet;

    typedef enum _FcSetName {
	FcSetSystem = 0,
	FcSetApplication = 1
    } FcSetName;

    typedef struct _FcBlanks FcBlanks;

    typedef enum _FcResult {
	FcResultMatch = 0,
	FcResultNoMatch = 1,
	FcResultTypeMismatch = 2,
	FcResultNoId = 3,
	FcResultOutOfMemory = 4
    } FcResult;

    typedef struct _FcObjectType FcObjectType;

    typedef struct _FcGlobalCache FcGlobalCache;

    typedef enum _FcLangResult {
	FcLangEqual = 0,
	FcLangDifferentCountry = 1,
	FcLangDifferentLang = 2
    } FcLangResult;

    typedef short unsigned int FcChar16;

    struct _FcMatrix {
	double xx;
	double xy;
	double yx;
	double yy;
    };

    struct _FcValue {
	FcType type;
	union {
	    const FcChar8 *s;
	    int i;
	    FcBool b;
	    double d;
	    const FcMatrix *m;
	    const FcCharSet *c;
	    void *f;
	    const FcPattern *p;
	    const FcLangSet *l;
	} u;
    };

    struct _FcObjectSet {
	int nobject;
	int sobject;
	const char **objects;
    };

    struct _FcConstant {
	const FcChar8 *name;
	const char *object;
	int value;
    };

    struct _FcFontSet {
	int nfont;
	int sfont;
	FcPattern **fonts;
    };

    struct _FcObjectType {
	const char *object;
	FcType type;
    };


/* Function prototypes */

    extern FcAtomic *FcAtomicCreate(const FcChar8 * file);
    extern void FcAtomicDeleteNew(FcAtomic * atomic);
    extern void FcAtomicDestroy(FcAtomic * atomic);
    extern FcBool FcAtomicLock(FcAtomic * atomic);
    extern FcChar8 *FcAtomicNewFile(FcAtomic * atomic);
    extern FcChar8 *FcAtomicOrigFile(FcAtomic * atomic);
    extern FcBool FcAtomicReplaceOrig(FcAtomic * atomic);
    extern void FcAtomicUnlock(FcAtomic * atomic);
    extern FcBool FcBlanksAdd(FcBlanks * b, FcChar32 ucs4);
    extern FcBlanks *FcBlanksCreate(void);
    extern void FcBlanksDestroy(FcBlanks * b);
    extern FcBool FcBlanksIsMember(FcBlanks * b, FcChar32 ucs4);
    extern FcBool FcCharSetAddChar(FcCharSet * fcs, FcChar32 ucs4);
    extern FcCharSet *FcCharSetCopy(FcCharSet * src);
    extern FcChar32 FcCharSetCount(const FcCharSet * a);
    extern FcCharSet *FcCharSetCreate(void);
    extern void FcCharSetDestroy(FcCharSet * fcs);
    extern FcBool FcCharSetEqual(const FcCharSet * a, const FcCharSet * b);
    extern FcChar32 FcCharSetFirstPage(const FcCharSet * a, FcChar32 * map,
				       FcChar32 * next);
    extern FcBool FcCharSetHasChar(const FcCharSet * fcs, FcChar32 ucs4);
    extern FcCharSet *FcCharSetIntersect(const FcCharSet * a,
					 const FcCharSet * b);
    extern FcChar32 FcCharSetIntersectCount(const FcCharSet * a,
					    const FcCharSet * b);
    extern FcBool FcCharSetIsSubset(const FcCharSet * a,
				    const FcCharSet * b);
    extern FcChar32 FcCharSetNextPage(const FcCharSet * a, FcChar32 * map,
				      FcChar32 * next);
    extern FcCharSet *FcCharSetSubtract(const FcCharSet * a,
					const FcCharSet * b);
    extern FcChar32 FcCharSetSubtractCount(const FcCharSet * a,
					   const FcCharSet * b);
    extern FcCharSet *FcCharSetUnion(const FcCharSet * a,
				     const FcCharSet * b);
    extern FcBool FcConfigAppFontAddDir(FcConfig * config,
					const FcChar8 * dir);
    extern FcBool FcConfigAppFontAddFile(FcConfig * config,
					 const FcChar8 * file);
    extern void FcConfigAppFontClear(FcConfig * config);
    extern FcBool FcConfigBuildFonts(FcConfig * config);
    extern void FcConfigDestroy(FcConfig * config);
    extern FcBool FcConfigEnableHome(FcBool enable);
    extern FcChar8 *FcConfigFilename(const FcChar8 * url);
    extern FcBlanks *FcConfigGetBlanks(FcConfig * config);
    /* With fontconfig no longer using per-user cache files, this function now simply returns NULL to indicate that no per-user file exists. */
    extern FcChar8 *FcConfigGetCache(FcConfig * config)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern FcStrList *FcConfigGetConfigDirs(FcConfig * config);
    extern FcStrList *FcConfigGetConfigFiles(FcConfig * config);
    extern FcConfig *FcConfigGetCurrent(void);
    extern FcStrList *FcConfigGetFontDirs(FcConfig * config);
    extern FcFontSet *FcConfigGetFonts(FcConfig * config, FcSetName set);
    extern int FcConfigGetRescanInverval(FcConfig * config);
    extern FcChar8 *FcConfigHome(void);
    extern FcBool FcConfigParseAndLoad(FcConfig * config,
				       const FcChar8 * file,
				       FcBool complain);
    extern FcBool FcConfigSetCurrent(FcConfig * config);
    extern FcBool FcConfigSetRescanInverval(FcConfig * config,
					    int rescanInterval);
    extern FcBool FcConfigSubstitute(FcConfig * config, FcPattern * p,
				     FcMatchKind kind);
    extern FcBool FcConfigSubstituteWithPat(FcConfig * config,
					    FcPattern * p,
					    FcPattern * p_pat,
					    FcMatchKind kind);
    extern FcBool FcConfigUptoDate(FcConfig * config);
    extern void FcDefaultSubstitute(FcPattern * pattern);
    extern FcBool FcDirCacheValid(const FcChar8 * cache_file);
    /* This function is obsolete. In modern fontconfig, it does nothing aside from returning FcFalse. */
    extern FcBool FcDirSave(FcFontSet * set, FcStrSet * dirs,
			    const FcChar8 * dir)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This function is obsolete. In modern fontconfig, it does nothing aside from returning FcFalse. */
    extern FcBool FcDirScan(FcFontSet * set, FcStrSet * dirs,
			    FcGlobalCache * cache, FcBlanks * blanks,
			    const FcChar8 * dir, FcBool force)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern FcBool FcFileScan(FcFontSet * set, FcStrSet * dirs,
			     FcGlobalCache * cache, FcBlanks * blanks,
			     const FcChar8 * file, FcBool force);
    extern FcFontSet *FcFontList(FcConfig * config, FcPattern * p,
				 FcObjectSet * os);
    extern FcPattern *FcFontMatch(FcConfig * config, FcPattern * p,
				  FcResult * result);
    extern FcPattern *FcFontRenderPrepare(FcConfig * config,
					  FcPattern * pat,
					  FcPattern * font);
    extern FcBool FcFontSetAdd(FcFontSet * s, FcPattern * font);
    extern FcFontSet *FcFontSetCreate(void);
    extern void FcFontSetDestroy(FcFontSet * s);
    extern FcFontSet *FcFontSetList(FcConfig * config, FcFontSet * *sets,
				    int nsets, FcPattern * p,
				    FcObjectSet * os);
    extern FcPattern *FcFontSetMatch(FcConfig * config, FcFontSet * *sets,
				     int nsets, FcPattern * p,
				     FcResult * result);
    extern void FcFontSetPrint(const FcFontSet * s);
    extern FcFontSet *FcFontSetSort(FcConfig * config, FcFontSet * *sets,
				    int nsets, FcPattern * p, FcBool trim,
				    FcCharSet * *csp, FcResult * result);
    /* This function is deprecated. Applications should use FcFontSetDestroy directly instead. */
    extern void FcFontSetSortDestroy(FcFontSet * fs)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern FcFontSet *FcFontSort(FcConfig * config, FcPattern * p,
				 FcBool trim, FcCharSet * *csp,
				 FcResult * result);
    extern FcPattern *FcFreeTypeQuery(const FcChar8 * file, int id,
				      FcBlanks * blanks, int *count);
    extern int FcGetVersion(void);
    extern FcBool FcInit(void);
    extern FcBool FcInitBringUptoDate(void);
    extern FcConfig *FcInitLoadConfig(void);
    extern FcConfig *FcInitLoadConfigAndFonts(void);
    extern FcBool FcInitReinitialize(void);
    extern FcBool FcLangSetAdd(FcLangSet * ls, const FcChar8 * lang);
    extern FcLangResult FcLangSetCompare(const FcLangSet * lsa,
					 const FcLangSet * lsb);
    extern FcBool FcLangSetContains(const FcLangSet * lsa,
				    const FcLangSet * lsb);
    extern FcLangSet *FcLangSetCopy(const FcLangSet * ls);
    extern FcLangSet *FcLangSetCreate(void);
    extern void FcLangSetDestroy(FcLangSet * ls);
    extern FcBool FcLangSetEqual(const FcLangSet * lsa,
				 const FcLangSet * lsb);
    extern FcLangResult FcLangSetHasLang(const FcLangSet * ls,
					 const FcChar8 * lang);
    extern FcChar32 FcLangSetHash(const FcLangSet * ls);
    extern FcMatrix *FcMatrixCopy(const FcMatrix * mat);
    extern FcBool FcMatrixEqual(const FcMatrix * mat1,
				const FcMatrix * mat2);
    extern void FcMatrixMultiply(FcMatrix * result, const FcMatrix * a,
				 const FcMatrix * b);
    extern void FcMatrixRotate(FcMatrix * m, double c, double s);
    extern void FcMatrixScale(FcMatrix * m, double sx, double sy);
    extern void FcMatrixShear(FcMatrix * m, double sh, double sv);
    extern FcBool FcNameConstant(FcChar8 * string, int *result);
    extern const FcConstant *FcNameGetConstant(FcChar8 * string);
    extern const FcObjectType *FcNameGetObjectType(const char *object);
    extern FcPattern *FcNameParse(const FcChar8 * name);
    extern FcBool FcNameRegisterConstants(const FcConstant * consts,
					  int nconsts);
    extern FcBool FcNameRegisterObjectTypes(const FcObjectType * types,
					    int ntype);
    extern FcChar8 *FcNameUnparse(FcPattern * pat);
    extern FcBool FcNameUnregisterConstants(const FcConstant * consts,
					    int nconsts);
    extern FcBool FcNameUnregisterObjectTypes(const FcObjectType * types,
					      int ntype);
    extern FcBool FcObjectSetAdd(FcObjectSet * os, const char *object);
    extern FcObjectSet *FcObjectSetBuild(const char *first, ...);
    extern FcObjectSet *FcObjectSetCreate(void);
    extern void FcObjectSetDestroy(FcObjectSet * os);
    extern FcObjectSet *FcObjectSetVaBuild(const char *first, va_list va);
    extern FcBool FcPatternAdd(FcPattern * p, const char *object,
			       FcValue value, FcBool append);
    extern FcBool FcPatternAddBool(FcPattern * p, const char *object,
				   FcBool b);
    extern FcBool FcPatternAddCharSet(FcPattern * p, const char *object,
				      const FcCharSet * c);
    extern FcBool FcPatternAddDouble(FcPattern * p, const char *object,
				     double d);
    extern FcBool FcPatternAddInteger(FcPattern * p, const char *object,
				      int i);
    extern FcBool FcPatternAddLangSet(FcPattern * p, const char *object,
				      const FcLangSet * ls);
    extern FcBool FcPatternAddMatrix(FcPattern * p, const char *object,
				     const FcMatrix * s);
    extern FcBool FcPatternAddString(FcPattern * p, const char *object,
				     const FcChar8 * s);
    extern FcBool FcPatternAddWeak(FcPattern * p, const char *object,
				   FcValue value, FcBool append);
    extern FcPattern *FcPatternBuild(FcPattern * orig, ...);
    extern FcPattern *FcPatternCreate(void);
    extern FcBool FcPatternDel(FcPattern * p, const char *object);
    extern void FcPatternDestroy(FcPattern * p);
    extern FcPattern *FcPatternDuplicate(const FcPattern * p);
    extern FcBool FcPatternEqual(const FcPattern * pa,
				 const FcPattern * pb);
    extern FcBool FcPatternEqualSubset(const FcPattern * pa,
				       const FcPattern * pb,
				       const FcObjectSet * os);
    extern FcResult FcPatternGet(const FcPattern * p, const char *object,
				 int id, FcValue * v);
    extern FcResult FcPatternGetBool(const FcPattern * p,
				     const char *object, int n,
				     FcBool * b);
    extern FcResult FcPatternGetCharSet(const FcPattern * p,
					const char *object, int n,
					FcCharSet * *c);
    extern FcResult FcPatternGetDouble(const FcPattern * p,
				       const char *object, int n,
				       double *d);
    extern FcResult FcPatternGetInteger(const FcPattern * p,
					const char *object, int n, int *i);
    extern FcResult FcPatternGetLangSet(const FcPattern * p,
					const char *object, int n,
					FcLangSet * *ls);
    extern FcResult FcPatternGetMatrix(const FcPattern * p,
				       const char *object, int n,
				       FcMatrix * *s);
    extern FcResult FcPatternGetString(const FcPattern * p,
				       const char *object, int n,
				       FcChar8 * *s);
    extern FcChar32 FcPatternHash(const FcPattern * p);
    extern void FcPatternPrint(const FcPattern * p);
    extern void FcPatternReference(FcPattern * p);
    extern FcPattern *FcPatternVaBuild(FcPattern * orig, va_list va);
    extern FcChar8 *FcStrBasename(const FcChar8 * file);
    extern int FcStrCmp(const FcChar8 * s1, const FcChar8 * s2);
    extern int FcStrCmpIgnoreCase(const FcChar8 * s1, const FcChar8 * s2);
    extern FcChar8 *FcStrCopy(const FcChar8 * s);
    extern FcChar8 *FcStrCopyFilename(const FcChar8 * s);
    extern FcChar8 *FcStrDirname(const FcChar8 * file);
    extern FcStrList *FcStrListCreate(FcStrSet * set);
    extern void FcStrListDone(FcStrList * list);
    extern FcChar8 *FcStrListNext(FcStrList * list);
    extern FcBool FcStrSetAdd(FcStrSet * set, const FcChar8 * s);
    extern FcBool FcStrSetAddFilename(FcStrSet * set, const FcChar8 * s);
    extern FcStrSet *FcStrSetCreate(void);
    extern FcBool FcStrSetDel(FcStrSet * set, const FcChar8 * s);
    extern void FcStrSetDestroy(FcStrSet * set);
    extern FcBool FcStrSetEqual(FcStrSet * sa, FcStrSet * sb);
    extern FcBool FcStrSetMember(FcStrSet * set, const FcChar8 * s);
    extern int FcUcs4ToUtf8(FcChar32 ucs4, FcChar8 * dest);
    extern FcBool FcUtf16Len(const FcChar8 * string, FcEndian endian,
			     int len, int *nchar, int *wchar);
    extern int FcUtf16ToUcs4(const FcChar8 * src_orig, FcEndian endian,
			     FcChar32 * dst, int len);
    extern FcBool FcUtf8Len(const FcChar8 * string, int len, int *nchar,
			    int *wchar);
    extern int FcUtf8ToUcs4(const FcChar8 * src_orig, FcChar32 * dst,
			    int len);
    extern void FcValueDestroy(FcValue v);
    extern FcBool FcValueEqual(FcValue va, FcValue vb);
    extern void FcValuePrint(const FcValue v);
    extern FcValue FcValueSave(FcValue v);
#if __LSB_VERSION__ >= 40
    extern void FcFini(void);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
