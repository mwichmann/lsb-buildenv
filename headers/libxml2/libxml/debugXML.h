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

    extern const char *xmlBoolToText(int);
    extern int xmlDebugCheckDocument(FILE *, xmlDocPtr);
    extern void xmlDebugDumpAttr(FILE *, xmlAttrPtr, int);
    extern void xmlDebugDumpAttrList(FILE *, xmlAttrPtr, int);
    extern void xmlDebugDumpDTD(FILE *, xmlDtdPtr);
    extern void xmlDebugDumpDocument(FILE *, xmlDocPtr);
    extern void xmlDebugDumpDocumentHead(FILE *, xmlDocPtr);
    extern void xmlDebugDumpEntities(FILE *, xmlDocPtr);
    extern void xmlDebugDumpNode(FILE *, xmlNodePtr, int);
    extern void xmlDebugDumpNodeList(FILE *, xmlNodePtr, int);
    extern void xmlDebugDumpOneNode(FILE *, xmlNodePtr, int);
    extern void xmlDebugDumpString(FILE *, const xmlChar *);
    extern int xmlLsCountNode(xmlNodePtr);
    extern void xmlLsOneNode(FILE *, xmlNodePtr);
    extern void xmlShell(xmlDocPtr, char *, xmlShellReadlineFunc, FILE *);
    extern int xmlShellBase(xmlShellCtxtPtr, char *, xmlNodePtr,
			    xmlNodePtr);
    extern int xmlShellCat(xmlShellCtxtPtr, char *, xmlNodePtr,
			   xmlNodePtr);
    extern int xmlShellDir(xmlShellCtxtPtr, char *, xmlNodePtr,
			   xmlNodePtr);
    extern int xmlShellDu(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);
    extern int xmlShellList(xmlShellCtxtPtr, char *, xmlNodePtr,
			    xmlNodePtr);
    extern int xmlShellLoad(xmlShellCtxtPtr, char *, xmlNodePtr,
			    xmlNodePtr);
    extern void xmlShellPrintNode(xmlNodePtr);
    extern void xmlShellPrintXPathError(int, const char *);
    extern void xmlShellPrintXPathResult(xmlXPathObjectPtr);
    extern int xmlShellPwd(xmlShellCtxtPtr, char *, xmlNodePtr,
			   xmlNodePtr);
    extern int xmlShellSave(xmlShellCtxtPtr, char *, xmlNodePtr,
			    xmlNodePtr);
    extern int xmlShellValidate(xmlShellCtxtPtr, char *, xmlNodePtr,
				xmlNodePtr);
    extern int xmlShellWrite(xmlShellCtxtPtr, char *, xmlNodePtr,
			     xmlNodePtr);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
