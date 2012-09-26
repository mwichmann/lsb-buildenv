#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_XSLTUTILS_H_
#define _LIBXSLT_XSLTUTILS_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif


#define IS_XSLT_REAL_NODE(n)	(((n) != NULL) && (((n)->type == XML_ELEMENT_NODE) || ((n)->type == XML_TEXT_NODE) || ((n)->type == XML_CDATA_SECTION_NODE) || ((n)->type == XML_ATTRIBUTE_NODE) || ((n)->type == XML_DOCUMENT_NODE) || ((n)->type == XML_HTML_DOCUMENT_NODE) || ((n)->type == XML_COMMENT_NODE) || ((n)->type == XML_PI_NODE)))
#define IS_XSLT_ELEM(n)	(((n) != NULL) && ((n)->ns != NULL) && (xmlStrEqual((n)->ns->href, XSLT_NAMESPACE)))
#define IS_XSLT_NAME(n,val)	(xmlStrEqual((n)->name, (const xmlChar *) (val)))
#define XSLT_TIMESTAMP_TICS_PER_SEC	100000l
#define XSLT_TRACE(ctxt,code,call)	if (ctxt->traceCode && (*(ctxt->traceCode) & code)) call
#define XSLT_STRANGE	xsltGenericError(xsltGenericErrorContext, "Internal error at %s:%d\n", __FILE__, __LINE__);
#define XSLT_TODO	xsltGenericError(xsltGenericErrorContext, "Unimplemented block at %s:%d\n", __FILE__, __LINE__);


    typedef enum {
	XSLT_TRACE_ALL,
	XSLT_TRACE_NONE,
	XSLT_TRACE_COPY_TEXT,
	XSLT_TRACE_PROCESS_NODE,
	XSLT_TRACE_APPLY_TEMPLATE,
	XSLT_TRACE_COPY,
	XSLT_TRACE_COMMENT,
	XSLT_TRACE_PI,
	XSLT_TRACE_COPY_OF,
	XSLT_TRACE_VALUE_OF,
	XSLT_TRACE_CALL_TEMPLATE,
	XSLT_TRACE_APPLY_TEMPLATES,
	XSLT_TRACE_CHOOSE,
	XSLT_TRACE_IF,
	XSLT_TRACE_FOR_EACH,
	XSLT_TRACE_STRIP_SPACES,
	XSLT_TRACE_TEMPLATES,
	XSLT_TRACE_KEYS,
	XSLT_TRACE_VARIABLES
    } xsltDebugTraceCodes;


/* Function prototypes */

    extern int xslAddCall(xsltTemplatePtr templ, xmlNode * source);
    extern int xslDebugStatus;
    extern void xslDropCall(void);
    extern void xsltCalibrateAdjust(long int delta);
    extern xmlXPathObject **xsltComputeSortResult(xsltTransformContextPtr
						  ctxt, xmlNode * sort);
    extern xsltDebugTraceCodes xsltDebugGetDefaultTrace(void);
    extern void xsltDebugSetDefaultTrace(xsltDebugTraceCodes val);
    extern void xsltDefaultSortFunction(xsltTransformContextPtr ctxt,
					xmlNode * *sorts, int nbsorts);
    extern void xsltDoSortFunction(xsltTransformContextPtr ctxt,
				   xmlNode * *sorts, int nbsorts);
    extern void xsltDocumentSortFunction(xmlNodeSetPtr list);
    extern xmlGenericErrorFunc xsltGenericDebug;
    extern void *xsltGenericDebugContext;
    extern xmlGenericErrorFunc xsltGenericError;
    extern void *xsltGenericErrorContext;
    extern const unsigned char *xsltGetCNsProp(xsltStylesheetPtr style,
					       xmlNodePtr node,
					       const unsigned char *name,
					       const unsigned char
					       *nameSpace);
    extern int xsltGetDebuggerStatus(void);
    extern xmlChar *xsltGetNsProp(xmlNodePtr node,
				  const unsigned char *name,
				  const unsigned char *nameSpace);
    extern xmlDocPtr xsltGetProfileInformation(xsltTransformContextPtr
					       ctxt);
    extern const unsigned char *xsltGetQNameURI(xmlNode * node,
						xmlChar * *name);
    extern const unsigned char *xsltGetQNameURI2(xsltStylesheetPtr style,
						 xmlNode * node,
						 const unsigned char
						 **name);
    extern int xsltGetUTF8Char(const unsigned char *utf, int *len);
    extern void xsltMessage(xsltTransformContextPtr ctxt, xmlNodePtr node,
			    xmlNodePtr inst);
    extern void xsltPrintErrorContext(xsltTransformContextPtr ctxt,
				      xsltStylesheetPtr style,
				      xmlNodePtr node);
    extern void xsltSaveProfiling(xsltTransformContextPtr ctxt,
				  FILE * output);
    extern int xsltSaveResultTo(xmlOutputBufferPtr buf, xmlDocPtr result,
				xsltStylesheetPtr style);
    extern int xsltSaveResultToFd(int fd, xmlDocPtr result,
				  xsltStylesheetPtr style);
    extern int xsltSaveResultToFile(FILE * file, xmlDocPtr result,
				    xsltStylesheetPtr style);
    extern int xsltSaveResultToFilename(const char *URI, xmlDocPtr result,
					xsltStylesheetPtr style,
					int compression);
    extern int xsltSaveResultToString(xmlChar * *doc_txt_ptr,
				      int *doc_txt_len, xmlDocPtr result,
				      xsltStylesheetPtr style);
    extern int xsltSetCtxtParseOptions(xsltTransformContextPtr ctxt,
				       int options);
    extern void xsltSetCtxtSortFunc(xsltTransformContextPtr ctxt,
				    xsltSortFunc handler);
    extern int xsltSetDebuggerCallbacks(int no, void *block);
    extern void xsltSetDebuggerStatus(int value);
    extern void xsltSetGenericDebugFunc(void *ctx,
					xmlGenericErrorFunc handler);
    extern void xsltSetGenericErrorFunc(void *ctx,
					xmlGenericErrorFunc handler);
    extern void xsltSetSortFunc(xsltSortFunc handler);
    extern void xsltSetTransformErrorFunc(xsltTransformContextPtr ctxt,
					  void *ctx,
					  xmlGenericErrorFunc handler);
    extern const unsigned char *xsltSplitQName(xmlDictPtr dict,
					       const unsigned char *name,
					       const unsigned char
					       **prefix);
    extern long int xsltTimestamp(void);
    extern void xsltTransformError(xsltTransformContextPtr ctxt,
				   xsltStylesheetPtr style,
				   xmlNodePtr node, const char *msg, ...);
    extern xmlXPathCompExprPtr xsltXPathCompile(xsltStylesheetPtr style,
						const unsigned char *str);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
