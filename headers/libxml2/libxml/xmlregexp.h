#ifndef _LIBXML2_LIBXML_XMLREGEXP_H_
#define _LIBXML2_LIBXML_XMLREGEXP_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/dict.h>

#ifdef __cplusplus
extern "C" {
#endif





    typedef struct _xmlRegexp xmlRegexp;

    typedef xmlRegexp *xmlRegexpPtr;

    typedef struct _xmlRegExecCtxt xmlRegExecCtxt;

    typedef xmlRegExecCtxt *xmlRegExecCtxtPtr;

    typedef struct _xmlExpNode xmlExpNode;

    typedef xmlExpNode *xmlExpNodePtr;

    typedef void (*xmlRegExecCallbacks) (xmlRegExecCtxtPtr,
					 const xmlChar *, void *, void *);

    typedef struct _xmlExpCtxt xmlExpCtxt;

    typedef xmlExpCtxt *xmlExpCtxtPtr;

    typedef enum {
	XML_EXP_EMPTY = 0,
	XML_EXP_FORBID = 1,
	XML_EXP_ATOM = 2,
	XML_EXP_SEQ = 3,
	XML_EXP_OR = 4,
	XML_EXP_COUNT = 5
    } xmlExpNodeType;














    extern void xmlRegexpPrint(FILE *, xmlRegexpPtr);
    extern void xmlRegFreeExecCtxt(xmlRegExecCtxtPtr);
    extern xmlExpNodePtr forbiddenExp;
    extern xmlRegExecCtxtPtr xmlRegNewExecCtxt(xmlRegexpPtr,
					       xmlRegExecCallbacks,
					       void *);
    extern int xmlExpMaxToken(xmlExpNodePtr);
    extern xmlExpNodePtr xmlExpStringDerive(xmlExpCtxtPtr, xmlExpNodePtr,
					    const xmlChar *, int);
    extern int xmlRegExecPushString(xmlRegExecCtxtPtr, const xmlChar *,
				    void *);
    extern void xmlExpDump(xmlBufferPtr, xmlExpNodePtr);
    extern int xmlExpSubsume(xmlExpCtxtPtr, xmlExpNodePtr, xmlExpNodePtr);
    extern xmlExpCtxtPtr xmlExpNewCtxt(int, xmlDictPtr);
    extern xmlExpNodePtr xmlExpParse(xmlExpCtxtPtr, const char *);
    extern int xmlRegExecNextValues(xmlRegExecCtxtPtr, int *, int *,
				    xmlChar * *, int *);
    extern xmlExpNodePtr emptyExp;
    extern void xmlExpFree(xmlExpCtxtPtr, xmlExpNodePtr);
    extern xmlExpNodePtr xmlExpNewSeq(xmlExpCtxtPtr, xmlExpNodePtr,
				      xmlExpNodePtr);
    extern void xmlExpRef(xmlExpNodePtr);
    extern int xmlExpGetStart(xmlExpCtxtPtr, xmlExpNodePtr,
			      const xmlChar * *, int);
    extern int xmlRegExecPushString2(xmlRegExecCtxtPtr, const xmlChar *,
				     const xmlChar *, void *);
    extern int xmlExpCtxtNbNodes(xmlExpCtxtPtr);
    extern int xmlExpIsNillable(xmlExpNodePtr);
    extern xmlExpNodePtr xmlExpNewOr(xmlExpCtxtPtr, xmlExpNodePtr,
				     xmlExpNodePtr);
    extern int xmlExpCtxtNbCons(xmlExpCtxtPtr);
    extern xmlExpNodePtr xmlExpNewRange(xmlExpCtxtPtr, xmlExpNodePtr, int,
					int);
    extern int xmlRegexpIsDeterminist(xmlRegexpPtr);
    extern xmlExpNodePtr xmlExpNewAtom(xmlExpCtxtPtr, const xmlChar *,
				       int);
    extern xmlRegexpPtr xmlRegexpCompile(const xmlChar *);
    extern void xmlRegFreeRegexp(xmlRegexpPtr);
    extern xmlExpNodePtr xmlExpExpDerive(xmlExpCtxtPtr, xmlExpNodePtr,
					 xmlExpNodePtr);
    extern int xmlExpGetLanguage(xmlExpCtxtPtr, xmlExpNodePtr,
				 const xmlChar * *, int);
    extern void xmlExpFreeCtxt(xmlExpCtxtPtr);
    extern int xmlRegExecErrInfo(xmlRegExecCtxtPtr, const xmlChar * *,
				 int *, int *, xmlChar * *, int *);
    extern int xmlRegexpExec(xmlRegexpPtr, const xmlChar *);
#ifdef __cplusplus
}
#endif
#endif
