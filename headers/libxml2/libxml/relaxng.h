#ifndef _LIBXML2_LIBXML_RELAXNG_H_
#define _LIBXML2_LIBXML_RELAXNG_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlRelaxNGParserCtxt xmlRelaxNGParserCtxt;

    typedef xmlRelaxNGParserCtxt *xmlRelaxNGParserCtxtPtr;

    typedef struct _xmlRelaxNGValidCtxt xmlRelaxNGValidCtxt;

    typedef xmlRelaxNGValidCtxt *xmlRelaxNGValidCtxtPtr;

    typedef struct _xmlRelaxNG xmlRelaxNG;

    typedef xmlRelaxNG *xmlRelaxNGPtr;

    typedef void (*xmlRelaxNGValidityErrorFunc) (void *, const char *,
						 ...);

    typedef void (*xmlRelaxNGValidityWarningFunc) (void *, const char *,
						   ...);

    typedef enum {
	XML_RELAXNG_OK = 0,
	XML_RELAXNG_ERR_MEMORY,
	XML_RELAXNG_ERR_TYPE,
	XML_RELAXNG_ERR_TYPEVAL,
	XML_RELAXNG_ERR_DUPID,
	XML_RELAXNG_ERR_TYPECMP,
	XML_RELAXNG_ERR_NOSTATE,
	XML_RELAXNG_ERR_NODEFINE,
	XML_RELAXNG_ERR_LISTEXTRA,
	XML_RELAXNG_ERR_LISTEMPTY,
	XML_RELAXNG_ERR_INTERNODATA,
	XML_RELAXNG_ERR_INTERSEQ,
	XML_RELAXNG_ERR_INTEREXTRA,
	XML_RELAXNG_ERR_ELEMNAME,
	XML_RELAXNG_ERR_ATTRNAME,
	XML_RELAXNG_ERR_ELEMNONS,
	XML_RELAXNG_ERR_ATTRNONS,
	XML_RELAXNG_ERR_ELEMWRONGNS,
	XML_RELAXNG_ERR_ATTRWRONGNS,
	XML_RELAXNG_ERR_ELEMEXTRANS,
	XML_RELAXNG_ERR_ATTREXTRANS,
	XML_RELAXNG_ERR_ELEMNOTEMPTY,
	XML_RELAXNG_ERR_NOELEM,
	XML_RELAXNG_ERR_NOTELEM,
	XML_RELAXNG_ERR_ATTRVALID,
	XML_RELAXNG_ERR_CONTENTVALID,
	XML_RELAXNG_ERR_EXTRACONTENT,
	XML_RELAXNG_ERR_INVALIDATTR,
	XML_RELAXNG_ERR_DATAELEM,
	XML_RELAXNG_ERR_VALELEM,
	XML_RELAXNG_ERR_LISTELEM,
	XML_RELAXNG_ERR_DATATYPE,
	XML_RELAXNG_ERR_VALUE,
	XML_RELAXNG_ERR_LIST,
	XML_RELAXNG_ERR_NOGRAMMAR,
	XML_RELAXNG_ERR_EXTRADATA,
	XML_RELAXNG_ERR_LACKDATA,
	XML_RELAXNG_ERR_INTERNAL,
	XML_RELAXNG_ERR_ELEMWRONG,
	XML_RELAXNG_ERR_TEXTWRONG
    } xmlRelaxNGValidErr;

    typedef enum {
	XML_RELAXNGP_NONE = 0,
	XML_RELAXNGP_FREE_DOC = 1,
	XML_RELAXNGP_CRNG = 2
    } xmlRelaxNGParserFlag;











    extern xmlRelaxNGParserCtxtPtr xmlRelaxNGNewParserCtxt(const char *);
    extern void xmlRelaxNGSetValidStructuredErrors(xmlRelaxNGValidCtxtPtr,
						   xmlStructuredErrorFunc,
						   void *);
    extern int xmlRelaxParserSetFlag(xmlRelaxNGParserCtxtPtr, int);
    extern void xmlRelaxNGFreeValidCtxt(xmlRelaxNGValidCtxtPtr);
    extern void xmlRelaxNGFree(xmlRelaxNGPtr);
    extern void xmlRelaxNGSetParserErrors(xmlRelaxNGParserCtxtPtr,
					  xmlRelaxNGValidityErrorFunc,
					  xmlRelaxNGValidityWarningFunc,
					  void *);
    extern xmlRelaxNGPtr xmlRelaxNGParse(xmlRelaxNGParserCtxtPtr);
    extern xmlRelaxNGParserCtxtPtr xmlRelaxNGNewDocParserCtxt(xmlDocPtr);
    extern int xmlRelaxNGValidateFullElement(xmlRelaxNGValidCtxtPtr,
					     xmlDocPtr, xmlNodePtr);
    extern int xmlRelaxNGValidatePopElement(xmlRelaxNGValidCtxtPtr,
					    xmlDocPtr, xmlNodePtr);
    extern int xmlRelaxNGInitTypes(void);
    extern void xmlRelaxNGSetValidErrors(xmlRelaxNGValidCtxtPtr,
					 xmlRelaxNGValidityErrorFunc,
					 xmlRelaxNGValidityWarningFunc,
					 void *);
    extern void xmlRelaxNGDumpTree(FILE *, xmlRelaxNGPtr);
    extern void xmlRelaxNGDump(FILE *, xmlRelaxNGPtr);
    extern int xmlRelaxNGValidatePushElement(xmlRelaxNGValidCtxtPtr,
					     xmlDocPtr, xmlNodePtr);
    extern xmlRelaxNGValidCtxtPtr xmlRelaxNGNewValidCtxt(xmlRelaxNGPtr);
    extern void xmlRelaxNGCleanupTypes(void);
    extern void xmlRelaxNGFreeParserCtxt(xmlRelaxNGParserCtxtPtr);
    extern int xmlRelaxNGGetValidErrors(xmlRelaxNGValidCtxtPtr,
					xmlRelaxNGValidityErrorFunc *,
					xmlRelaxNGValidityWarningFunc *,
					void **);
    extern int xmlRelaxNGValidateDoc(xmlRelaxNGValidCtxtPtr, xmlDocPtr);
    extern int xmlRelaxNGGetParserErrors(xmlRelaxNGParserCtxtPtr,
					 xmlRelaxNGValidityErrorFunc *,
					 xmlRelaxNGValidityWarningFunc *,
					 void **);
    extern xmlRelaxNGParserCtxtPtr xmlRelaxNGNewMemParserCtxt(const char *,
							      int);
    extern int xmlRelaxNGValidatePushCData(xmlRelaxNGValidCtxtPtr,
					   const xmlChar *, int);
#ifdef __cplusplus
}
#endif
#endif
