#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLREGEXP_H_
#define _LIBXML2_LIBXML_XMLREGEXP_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/dict.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
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

#endif				// __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31








#endif				// __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
    extern xmlExpNodePtr emptyExp;
    extern xmlExpNodePtr forbiddenExp;
    extern int xmlExpCtxtNbCons(xmlExpCtxtPtr);
    extern int xmlExpCtxtNbNodes(xmlExpCtxtPtr);
    extern void xmlExpDump(xmlBufferPtr, xmlExpNodePtr);
    extern xmlExpNodePtr xmlExpExpDerive(xmlExpCtxtPtr, xmlExpNodePtr,
					 xmlExpNodePtr);
    extern void xmlExpFree(xmlExpCtxtPtr, xmlExpNodePtr);
    extern void xmlExpFreeCtxt(xmlExpCtxtPtr);
    extern int xmlExpGetLanguage(xmlExpCtxtPtr, xmlExpNodePtr,
				 const xmlChar * *, int);
    extern int xmlExpGetStart(xmlExpCtxtPtr, xmlExpNodePtr,
			      const xmlChar * *, int);
    extern int xmlExpIsNillable(xmlExpNodePtr);
    extern int xmlExpMaxToken(xmlExpNodePtr);
    extern xmlExpNodePtr xmlExpNewAtom(xmlExpCtxtPtr, const xmlChar *,
				       int);
    extern xmlExpCtxtPtr xmlExpNewCtxt(int, xmlDictPtr);
    extern xmlExpNodePtr xmlExpNewOr(xmlExpCtxtPtr, xmlExpNodePtr,
				     xmlExpNodePtr);
    extern xmlExpNodePtr xmlExpNewRange(xmlExpCtxtPtr, xmlExpNodePtr, int,
					int);
    extern xmlExpNodePtr xmlExpNewSeq(xmlExpCtxtPtr, xmlExpNodePtr,
				      xmlExpNodePtr);
    extern xmlExpNodePtr xmlExpParse(xmlExpCtxtPtr, const char *);
    extern void xmlExpRef(xmlExpNodePtr);
    extern xmlExpNodePtr xmlExpStringDerive(xmlExpCtxtPtr, xmlExpNodePtr,
					    const xmlChar *, int);
    extern int xmlExpSubsume(xmlExpCtxtPtr, xmlExpNodePtr, xmlExpNodePtr);
    extern int xmlRegExecErrInfo(xmlRegExecCtxtPtr, const xmlChar * *,
				 int *, int *, xmlChar * *, int *);
    extern int xmlRegExecNextValues(xmlRegExecCtxtPtr, int *, int *,
				    xmlChar * *, int *);
    extern int xmlRegExecPushString(xmlRegExecCtxtPtr, const xmlChar *,
				    void *);
    extern int xmlRegExecPushString2(xmlRegExecCtxtPtr, const xmlChar *,
				     const xmlChar *, void *);
    extern void xmlRegFreeExecCtxt(xmlRegExecCtxtPtr);
    extern void xmlRegFreeRegexp(xmlRegexpPtr);
    extern xmlRegExecCtxtPtr xmlRegNewExecCtxt(xmlRegexpPtr,
					       xmlRegExecCallbacks,
					       void *);
    extern xmlRegexpPtr xmlRegexpCompile(const xmlChar *);
    extern int xmlRegexpExec(xmlRegexpPtr, const xmlChar *);
    extern int xmlRegexpIsDeterminist(xmlRegexpPtr);
    extern void xmlRegexpPrint(FILE *, xmlRegexpPtr);
#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
