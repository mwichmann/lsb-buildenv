#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_DEBUGXML_H_
#define _LIBXML2_LIBXML_DEBUGXML_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xpath.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef char *(*xmlShellReadlineFunc) (char *);

    typedef struct _xmlShellCtxt xmlShellCtxt;

    typedef xmlShellCtxt *xmlShellCtxtPtr;

    typedef int (*xmlShellCmd) (xmlShellCtxtPtr, char *, xmlNodePtr,
				xmlNodePtr);

    struct _xmlShellCtxt {
	char *filename;
	xmlDocPtr doc;
	xmlNodePtr node;
	xmlXPathContextPtr pctxt;
	int loaded;
	FILE *output;
	xmlShellReadlineFunc input;
    };


/* Function prototypes */

    extern const char *xmlBoolToText(int boolval);
    extern int xmlDebugCheckDocument(FILE * output, xmlDocPtr doc);
    extern void xmlDebugDumpAttr(FILE * output, xmlAttrPtr attr,
				 int depth);
    extern void xmlDebugDumpAttrList(FILE * output, xmlAttrPtr attr,
				     int depth);
    extern void xmlDebugDumpDTD(FILE * output, xmlDtdPtr dtd);
    extern void xmlDebugDumpDocument(FILE * output, xmlDocPtr doc);
    extern void xmlDebugDumpDocumentHead(FILE * output, xmlDocPtr doc);
    extern void xmlDebugDumpEntities(FILE * output, xmlDocPtr doc);
    extern void xmlDebugDumpNode(FILE * output, xmlNodePtr node,
				 int depth);
    extern void xmlDebugDumpNodeList(FILE * output, xmlNodePtr node,
				     int depth);
    extern void xmlDebugDumpOneNode(FILE * output, xmlNodePtr node,
				    int depth);
    extern void xmlDebugDumpString(FILE * output, const xmlChar * str);
    extern int xmlLsCountNode(xmlNodePtr node);
    extern void xmlLsOneNode(FILE * output, xmlNodePtr node);
    extern void xmlShell(xmlDocPtr doc, char *filename,
			 xmlShellReadlineFunc input, FILE * output);
    extern int xmlShellBase(xmlShellCtxtPtr ctxt, char *arg,
			    xmlNodePtr node, xmlNodePtr node2);
    extern int xmlShellCat(xmlShellCtxtPtr ctxt, char *arg,
			   xmlNodePtr node, xmlNodePtr node2);
    extern int xmlShellDir(xmlShellCtxtPtr ctxt, char *arg,
			   xmlNodePtr node, xmlNodePtr node2);
    extern int xmlShellDu(xmlShellCtxtPtr ctxt, char *arg, xmlNodePtr tree,
			  xmlNodePtr node2);
    extern int xmlShellList(xmlShellCtxtPtr ctxt, char *arg,
			    xmlNodePtr node, xmlNodePtr node2);
    extern int xmlShellLoad(xmlShellCtxtPtr ctxt, char *filename,
			    xmlNodePtr node, xmlNodePtr node2);
    extern void xmlShellPrintNode(xmlNodePtr node);
    extern void xmlShellPrintXPathError(int errorType, const char *arg);
    extern void xmlShellPrintXPathResult(xmlXPathObjectPtr list);
    extern int xmlShellPwd(xmlShellCtxtPtr ctxt, char *buffer,
			   xmlNodePtr node, xmlNodePtr node2);
    extern int xmlShellSave(xmlShellCtxtPtr ctxt, char *filename,
			    xmlNodePtr node, xmlNodePtr node2);
    extern int xmlShellValidate(xmlShellCtxtPtr ctxt, char *dtd,
				xmlNodePtr node, xmlNodePtr node2);
    extern int xmlShellWrite(xmlShellCtxtPtr ctxt, char *filename,
			     xmlNodePtr node, xmlNodePtr node2);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
