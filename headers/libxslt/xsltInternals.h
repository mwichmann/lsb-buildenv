#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_XSLTINTERNALS_H_
#define _LIBXSLT_XSLTINTERNALS_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/entities.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/numbersInternals.h>
#include <libxslt/xsltlocale.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XSLT_FAST_IF
#define XSLT_REFACTORED_KEYCOMP
#define XSLT_REFACTORED_VARS
#define XSLT_IS_TEXT_NODE(n)	((n != NULL) && (((n)->type == XML_TEXT_NODE) || ((n)->type == XML_CDATA_SECTION_NODE)))
#define XSLT_IS_RES_TREE_FRAG(n)	((n != NULL) && ((n)->type == XML_DOCUMENT_NODE) && ((n)->name != NULL) && ((n)->name[0] == ' '))
#define XSLT_RUNTIME_EXTRA_FREE(ctxt,nr)	(ctxt)->extras[(nr)].deallocate
#define XSLT_RUNTIME_EXTRA_LST(ctxt,nr)	(ctxt)->extras[(nr)].info
#define XSLT_RUNTIME_EXTRA(ctxt,nr,typ)	(ctxt)->extras[(nr)].val.typ
#define XSLT_MARK_RES_TREE_FRAG(n)	(n)->name = (char *) xmlStrdup(BAD_CAST " fake node libxslt");
#define XSLT_PAT_NO_PRIORITY	-12345789
#define XSLT_MAX_SORT	15
#define CHECK_STOPPEDE	if (ctxt->state == XSLT_STATE_STOPPED) goto error;
#define CHECK_STOPPED0	if (ctxt->state == XSLT_STATE_STOPPED) return(0);
#define CHECK_STOPPED	if (ctxt->state == XSLT_STATE_STOPPED) return;


    typedef struct _xsltRuntimeExtra xsltRuntimeExtra;

    typedef xsltRuntimeExtra *xsltRuntimeExtraPtr;

    typedef struct _xsltTemplate xsltTemplate;

    typedef xsltTemplate *xsltTemplatePtr;

    typedef struct _xsltDecimalFormat xsltDecimalFormat;

    typedef xsltDecimalFormat *xsltDecimalFormatPtr;

    typedef struct _xsltDocument xsltDocument;

    typedef xsltDocument *xsltDocumentPtr;

    typedef struct _xsltKeyDef xsltKeyDef;

    typedef xsltKeyDef *xsltKeyDefPtr;

    typedef struct _xsltKeyTable xsltKeyTable;

    typedef struct _xsltStylesheet xsltStylesheet;

    typedef xsltStylesheet *xsltStylesheetPtr;

    typedef struct _xsltTransformContext xsltTransformContext;

    typedef xsltTransformContext *xsltTransformContextPtr;

    typedef struct _xsltElemPreComp xsltElemPreComp;

    typedef xsltElemPreComp *xsltElemPreCompPtr;

    typedef void (*xsltTransformFunction) (void);

    typedef void (*xsltSortFunc) (void);

    typedef enum {
	XSLT_FUNC_COPY,
	XSLT_FUNC_SORT,
	XSLT_FUNC_TEXT,
	XSLT_FUNC_ELEMENT,
	XSLT_FUNC_ATTRIBUTE,
	XSLT_FUNC_COMMENT,
	XSLT_FUNC_PI,
	XSLT_FUNC_COPYOF,
	XSLT_FUNC_VALUEOF,
	XSLT_FUNC_NUMBER,
	XSLT_FUNC_APPLYIMPORTS,
	XSLT_FUNC_CALLTEMPLATE,
	XSLT_FUNC_APPLYTEMPLATES,
	XSLT_FUNC_CHOOSE,
	XSLT_FUNC_IF,
	XSLT_FUNC_FOREACH,
	XSLT_FUNC_DOCUMENT,
	XSLT_FUNC_WITHPARAM,
	XSLT_FUNC_PARAM,
	XSLT_FUNC_VARIABLE,
	XSLT_FUNC_WHEN,
	XSLT_FUNC_EXTENSION
    } xsltStyleType;

    typedef void (*xsltElemPreCompDeallocator) (void);

    typedef struct _xsltStylePreComp xsltStylePreComp;

    typedef xsltStylePreComp *xsltStylePreCompPtr;

    typedef struct _xsltStackElem xsltStackElem;

    typedef xsltStackElem *xsltStackElemPtr;

    typedef struct _xsltTransformCache xsltTransformCache;

    typedef xsltTransformCache *xsltTransformCachePtr;

    typedef enum {
	XSLT_OUTPUT_XML,
	XSLT_OUTPUT_HTML,
	XSLT_OUTPUT_TEXT
    } xsltOutputType;

    typedef enum {
	XSLT_STATE_OK,
	XSLT_STATE_ERROR,
	XSLT_STATE_STOPPED
    } xsltTransformState;

    struct _xsltRuntimeExtra {
	void *info;
	xmlFreeFunc deallocate;
	union {
	    void *ptr;
	    int ival;
	} val;
    };

    struct _xsltTemplate {
	struct _xsltTemplate *next;
	struct _xsltStylesheet *style;
	xmlChar *match;
	float priority;
	const unsigned char *name;
	const unsigned char *nameURI;
	const unsigned char *mode;
	const unsigned char *modeURI;
	xmlNodePtr content;
	xmlNodePtr elem;
	int inheritedNsNr;
	xmlNs **inheritedNs;
	int nbCalls;
	unsigned long int time;
	void *params;
    };

    struct _xsltDecimalFormat {
	struct _xsltDecimalFormat *next;
	xmlChar *name;
	xmlChar *digit;
	xmlChar *patternSeparator;
	xmlChar *minusSign;
	xmlChar *infinity;
	xmlChar *noNumber;
	xmlChar *decimalPoint;
	xmlChar *grouping;
	xmlChar *percent;
	xmlChar *permille;
	xmlChar *zeroDigit;
    };

    struct _xsltDocument {
	struct _xsltDocument *next;
	int main;
	xmlDocPtr doc;
	void *keys;
	struct _xsltDocument *includes;
	int preproc;
	int nbKeysComputed;
    };

    struct _xsltKeyDef {
	struct _xsltKeyDef *next;
	xmlNodePtr inst;
	xmlChar *name;
	xmlChar *nameURI;
	xmlChar *match;
	xmlChar *use;
	xmlXPathCompExprPtr comp;
	xmlXPathCompExprPtr usecomp;
	xmlNs **nsList;
	int nsNr;
    };

    struct _xsltKeyTable {
	struct _xsltKeyTable *next;
	xmlChar *name;
	xmlChar *nameURI;
	xmlHashTablePtr keys;
    };

    struct _xsltElemPreComp {
	xsltElemPreCompPtr next;
	xsltStyleType type;
	xsltTransformFunction func;
	xmlNode *inst;
	xsltElemPreCompDeallocator free;
    };

    struct _xsltStylePreComp {
	xsltElemPreCompPtr next;
	xsltStyleType type;
	xsltTransformFunction func;
	xmlNode *inst;
	const unsigned char *stype;
	int has_stype;
	int number;
	const unsigned char *order;
	int has_order;
	int descending;
	const unsigned char *lang;
	int has_lang;
	xsltLocale locale;
	const unsigned char *case_order;
	int lower_first;
	const unsigned char *use;
	int has_use;
	int noescape;
	const unsigned char *name;
	int has_name;
	const unsigned char *ns;
	int has_ns;
	const unsigned char *mode;
	const unsigned char *modeURI;
	const unsigned char *test;
	xsltTemplatePtr templ;
	const unsigned char *select;
	int ver11;
	const unsigned char *filename;
	int has_filename;
	xsltNumberData numdata;
	xmlXPathCompExprPtr comp;
	xmlNs **nsList;
	int nsNr;
    };

    struct _xsltStackElem {
	struct _xsltStackElem *next;
	xsltStylePreCompPtr comp;
	int computed;
	const unsigned char *name;
	const unsigned char *nameURI;
	const unsigned char *select;
	xmlNode *tree;
	xmlXPathObjectPtr value;
	xmlDocPtr fragment;
	int level;
	xsltTransformContextPtr context;
	int flags;
    };

    struct _xsltStylesheet {
	struct _xsltStylesheet *parent;
	struct _xsltStylesheet *next;
	struct _xsltStylesheet *imports;
	xsltDocumentPtr docList;
	xmlDocPtr doc;
	xmlHashTablePtr stripSpaces;
	int stripAll;
	xmlHashTablePtr cdataSection;
	xsltStackElemPtr variables;
	xsltTemplatePtr templates;
	void *templatesHash;
	void *rootMatch;
	void *keyMatch;
	void *elemMatch;
	void *attrMatch;
	void *parentMatch;
	void *textMatch;
	void *piMatch;
	void *commentMatch;
	xmlHashTablePtr nsAliases;
	xmlHashTablePtr attributeSets;
	xmlHashTablePtr nsHash;
	void *nsDefs;
	void *keys;
	xmlChar *method;
	xmlChar *methodURI;
	xmlChar *version;
	xmlChar *encoding;
	int omitXmlDeclaration;
	xsltDecimalFormatPtr decimalFormat;
	int standalone;
	xmlChar *doctypePublic;
	xmlChar *doctypeSystem;
	int indent;
	xmlChar *mediaType;
	xsltElemPreCompPtr preComps;
	int warnings;
	int errors;
	xmlChar *exclPrefix;
	xmlChar **exclPrefixTab;
	int exclPrefixNr;
	int exclPrefixMax;
	void *_private;
	xmlHashTablePtr extInfos;
	int extrasNr;
	xsltDocumentPtr includes;
	xmlDictPtr dict;
	void *attVTs;
	const unsigned char *defaultAlias;
	int nopreproc;
	int internalized;
	int literal_result;
	xsltStylesheetPtr principal;
    };

    struct _xsltTransformCache {
	xmlDocPtr RVT;
	int nbRVT;
	xsltStackElemPtr stackItems;
	int nbStackItems;
    };

    struct _xsltTransformContext {
	xsltStylesheetPtr style;
	xsltOutputType type;
	xsltTemplatePtr templ;
	int templNr;
	int templMax;
	xsltTemplatePtr *templTab;
	xsltStackElemPtr vars;
	int varsNr;
	int varsMax;
	xsltStackElemPtr *varsTab;
	int varsBase;
	xmlHashTablePtr extFunctions;
	xmlHashTablePtr extElements;
	xmlHashTablePtr extInfos;
	const unsigned char *mode;
	const unsigned char *modeURI;
	xsltDocumentPtr docList;
	xsltDocumentPtr document;
	xmlNode *node;
	xmlNodeSetPtr nodeList;
	xmlDocPtr output;
	xmlNode *insert;
	xmlXPathContextPtr xpathCtxt;
	xsltTransformState state;
	xmlHashTablePtr globalVars;
	xmlNode *inst;
	int xinclude;
	const char *outputFile;
	int profile;
	long int prof;
	int profNr;
	int profMax;
	long int *profTab;
	void *_private;
	int extrasNr;
	int extrasMax;
	xsltRuntimeExtraPtr extras;
	xsltDocumentPtr styleList;
	void *sec;
	xmlGenericErrorFunc error;
	void *errctx;
	xsltSortFunc sortfunc;
	xmlDocPtr tmpRVT;
	xmlDocPtr persistRVT;
	int ctxtflags;
	const unsigned char *lasttext;
	unsigned int lasttsize;
	unsigned int lasttuse;
	int debugStatus;
	unsigned long int *traceCode;
	int parserOptions;
	xmlDictPtr dict;
	xmlDocPtr tmpDoc;
	int internalized;
	int nbKeys;
	int hasTemplKeyPatterns;
	xsltTemplatePtr currentTemplateRule;
	xmlNode *initialContextNode;
	xmlDocPtr initialContextDoc;
	xsltTransformCachePtr cache;
	void *contextVariable;
	xmlDocPtr localRVT;
	xmlDocPtr localRVTBase;
	int keyInitLevel;
	int funcLevel;
    };


/* Function prototypes */

    extern int xsltAllocateExtra(xsltStylesheetPtr style);
    extern int xsltAllocateExtraCtxt(xsltTransformContextPtr ctxt);
    extern void xsltCompileAttr(xsltStylesheetPtr style, xmlAttrPtr attr);
    extern xmlDocPtr xsltCreateRVT(xsltTransformContextPtr ctxt);
    extern xsltDecimalFormatPtr
	xsltDecimalFormatGetByName(xsltStylesheetPtr style,
				   xmlChar * name);
    extern xmlChar *xsltEvalAVT(xsltTransformContextPtr ctxt, void *avt,
				xmlNode * node);
    extern int
	xsltExtensionInstructionResultFinalize(xsltTransformContextPtr
					       ctxt);
    extern int
	xsltExtensionInstructionResultRegister(xsltTransformContextPtr
					       ctxt,
					       xmlXPathObjectPtr obj);
    extern xmlXPathError xsltFormatNumberConversion(xsltDecimalFormatPtr
						    self, xmlChar * format,
						    double number,
						    xmlChar * *result);
    extern void xsltFreeAVTList(void *avt);
    extern void xsltFreeRVTs(xsltTransformContextPtr ctxt);
    extern void xsltFreeStackElemList(xsltStackElemPtr elem);
    extern void xsltFreeStylesheet(xsltStylesheetPtr style);
    extern int xsltInitAllDocKeys(xsltTransformContextPtr ctxt);
    extern int xsltInitCtxtKey(xsltTransformContextPtr ctxt,
			       xsltDocumentPtr doc, xsltKeyDefPtr keyd);
    extern int xsltIsBlank(xmlChar * str);
    extern xsltStylesheetPtr xsltLoadStylesheetPI(xmlDocPtr doc);
    extern xsltStylesheetPtr xsltNewStylesheet(void);
    extern void xsltNumberFormat(xsltTransformContextPtr ctxt,
				 xsltNumberDataPtr data, xmlNode * node);
    extern xsltStylesheetPtr xsltParseStylesheetDoc(xmlDocPtr doc);
    extern xsltStylesheetPtr xsltParseStylesheetFile(const unsigned char
						     *filename);
    extern xsltStylesheetPtr xsltParseStylesheetImportedDoc(xmlDocPtr doc,
							    xsltStylesheetPtr
							    style);
    extern void xsltParseStylesheetOutput(xsltStylesheetPtr style,
					  xmlNode * cur);
    extern xsltStylesheetPtr xsltParseStylesheetProcess(xsltStylesheetPtr
							ret,
							xmlDocPtr doc);
    extern void xsltParseTemplateContent(xsltStylesheetPtr style,
					 xmlNode * templ);
    extern int xsltRegisterLocalRVT(xsltTransformContextPtr ctxt,
				    xmlDocPtr RVT);
    extern int xsltRegisterPersistRVT(xsltTransformContextPtr ctxt,
				      xmlDocPtr RVT);
    extern int xsltRegisterTmpRVT(xsltTransformContextPtr ctxt,
				  xmlDocPtr RVT);
    extern void xsltReleaseRVT(xsltTransformContextPtr ctxt,
			       xmlDocPtr RVT);
    extern void xsltUninit(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
