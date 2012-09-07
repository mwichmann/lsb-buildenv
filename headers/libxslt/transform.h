#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_TRANSFORM_H_
#define _LIBXSLT_TRANSFORM_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/entities.h>
#include <libxml2/libxml/SAX2.h>
#include <libxml2/libxml/parser.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern void xslHandleDebugger(xmlNodePtr cur, xmlNodePtr node,
				  xsltTemplatePtr templ,
				  xsltTransformContextPtr ctxt);
    extern void xsltApplyImports(xsltTransformContextPtr ctxt,
				 xmlNodePtr node, xmlNodePtr inst,
				 xsltStylePreCompPtr comp);
    extern void xsltApplyOneTemplate(xsltTransformContextPtr ctxt,
				     xmlNodePtr node, xmlNodePtr list,
				     xsltTemplatePtr templ,
				     xsltStackElemPtr params);
    extern void xsltApplyStripSpaces(xsltTransformContextPtr ctxt,
				     xmlNodePtr node);
    extern xmlDocPtr xsltApplyStylesheet(xsltStylesheetPtr style,
					 xmlDocPtr doc,
					 const char **params);
    extern xmlDocPtr xsltApplyStylesheetUser(xsltStylesheetPtr style,
					     xmlDocPtr doc,
					     const char **params,
					     const char *output,
					     FILE * profile,
					     xsltTransformContextPtr
					     userCtxt);
    extern void xsltApplyTemplates(xsltTransformContextPtr ctxt,
				   xmlNodePtr node, xmlNodePtr inst,
				   xsltStylePreCompPtr comp);
    extern void xsltAttribute(xsltTransformContextPtr ctxt,
			      xmlNodePtr node, xmlNodePtr inst,
			      xsltStylePreCompPtr comp);
    extern void xsltCallTemplate(xsltTransformContextPtr ctxt,
				 xmlNodePtr node, xmlNodePtr inst,
				 xsltStylePreCompPtr comp);
    extern void xsltChoose(xsltTransformContextPtr ctxt, xmlNodePtr node,
			   xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern void xsltComment(xsltTransformContextPtr ctxt, xmlNodePtr node,
			    xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern void xsltCopy(xsltTransformContextPtr ctxt, xmlNodePtr node,
			 xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern void xsltCopyOf(xsltTransformContextPtr ctxt, xmlNodePtr node,
			   xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern xmlNodePtr xsltCopyTextString(xsltTransformContextPtr ctxt,
					 xmlNodePtr target,
					 const unsigned char *string,
					 int noescape);
    extern void xsltDocumentElem(xsltTransformContextPtr ctxt,
				 xmlNodePtr node, xmlNodePtr inst,
				 xsltStylePreCompPtr comp);
    extern void xsltElement(xsltTransformContextPtr ctxt, xmlNodePtr node,
			    xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern void xsltForEach(xsltTransformContextPtr ctxt, xmlNodePtr node,
			    xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern void xsltFreeTransformContext(xsltTransformContextPtr ctxt);
    extern int xsltGetXIncludeDefault(void);
    extern void xsltIf(xsltTransformContextPtr ctxt, xmlNodePtr node,
		       xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern void xsltLocalVariablePop(xsltTransformContextPtr ctxt,
				     int limitNr, int level);
    extern int xsltLocalVariablePush(xsltTransformContextPtr ctxt,
				     xsltStackElemPtr variable, int level);
    extern xsltTransformContextPtr
	xsltNewTransformContext(xsltStylesheetPtr style, xmlDocPtr doc);
    extern void xsltNumber(xsltTransformContextPtr ctxt, xmlNodePtr node,
			   xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern void xsltProcessOneNode(xsltTransformContextPtr ctxt,
				   xmlNodePtr node,
				   xsltStackElemPtr params);
    extern void xsltProcessingInstruction(xsltTransformContextPtr ctxt,
					  xmlNodePtr node, xmlNodePtr inst,
					  xsltStylePreCompPtr comp);
    extern xmlDocPtr xsltProfileStylesheet(xsltStylesheetPtr style,
					   xmlDocPtr doc,
					   const char **params,
					   FILE * output);
    extern void xsltRegisterAllElement(xsltTransformContextPtr ctxt);
    extern int xsltRunStylesheet(xsltStylesheetPtr style, xmlDocPtr doc,
				 const char **params, const char *output,
				 xmlSAXHandlerPtr SAX,
				 xmlOutputBufferPtr IObuf);
    extern int xsltRunStylesheetUser(xsltStylesheetPtr style,
				     xmlDocPtr doc, const char **params,
				     const char *output,
				     xmlSAXHandlerPtr SAX,
				     xmlOutputBufferPtr IObuf,
				     FILE * profile,
				     xsltTransformContextPtr userCtxt);
    extern void xsltSetXIncludeDefault(int xinclude);
    extern void xsltSort(xsltTransformContextPtr ctxt, xmlNodePtr node,
			 xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern void xsltText(xsltTransformContextPtr ctxt, xmlNodePtr node,
			 xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern void xsltValueOf(xsltTransformContextPtr ctxt, xmlNodePtr node,
			    xmlNodePtr inst, xsltStylePreCompPtr comp);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
