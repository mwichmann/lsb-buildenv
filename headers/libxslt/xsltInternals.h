#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_XSLTINTERNALS_H_
#define _LIBXSLT_XSLTINTERNALS_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/numbersInternals.h>

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
    extern int xsltTransStorageAdd(xsltTransformContextPtr ctxt, void *id,
				   void *data);
    extern void *xsltTransStorageRemove(xsltTransformContextPtr ctxt,
					void *id);
    extern void xsltUninit(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
