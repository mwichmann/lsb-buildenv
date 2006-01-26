#ifndef _LIBXML2_LIBXML_XMLSCHEMAS_H_
#define _LIBXML2_LIBXML_XMLSCHEMAS_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/entities.h>
#include <libxml2/libxml/encoding.h>
#include <libxml2/libxml/SAX2.h>
#include <libxml2/libxml/parser.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct _xmlSchemaValidCtxt xmlSchemaValidCtxt;

    typedef xmlSchemaValidCtxt *xmlSchemaValidCtxtPtr;

    typedef struct _xmlSchemaSAXPlug xmlSchemaSAXPlugStruct;

    typedef xmlSchemaSAXPlugStruct *xmlSchemaSAXPlugPtr;

    typedef struct _xmlSchemaParserCtxt xmlSchemaParserCtxt;

    typedef xmlSchemaParserCtxt *xmlSchemaParserCtxtPtr;

    typedef void (*xmlSchemaValidityErrorFunc) (void *, const char *, ...);

    typedef void (*xmlSchemaValidityWarningFunc) (void *, const char *,
						  ...);

    typedef struct _xmlSchema xmlSchema;

    typedef xmlSchema *xmlSchemaPtr;

    typedef enum {
	XML_SCHEMA_VAL_VC_I_CREATE = 1 << 0
    } xmlSchemaValidOption;














    extern int xmlSchemaValidateFile(xmlSchemaValidCtxtPtr, const char *,
				     int);
    extern int xmlSchemaSAXUnplug(xmlSchemaSAXPlugPtr);
    extern xmlSchemaParserCtxtPtr xmlSchemaNewMemParserCtxt(const char *,
							    int);
    extern int xmlSchemaValidateOneElement(xmlSchemaValidCtxtPtr,
					   xmlNodePtr);
    extern int xmlSchemaIsValid(xmlSchemaValidCtxtPtr);
    extern xmlSchemaSAXPlugPtr xmlSchemaSAXPlug(xmlSchemaValidCtxtPtr,
						xmlSAXHandlerPtr *,
						void **);
    extern void xmlSchemaFreeParserCtxt(xmlSchemaParserCtxtPtr);
    extern int xmlSchemaValidateDoc(xmlSchemaValidCtxtPtr, xmlDocPtr);
    extern int xmlSchemaGetValidErrors(xmlSchemaValidCtxtPtr,
				       xmlSchemaValidityErrorFunc *,
				       xmlSchemaValidityWarningFunc *,
				       void **);
    extern void xmlSchemaDump(FILE *, xmlSchemaPtr);
    extern void xmlSchemaSetValidStructuredErrors(xmlSchemaValidCtxtPtr,
						  xmlStructuredErrorFunc,
						  void *);
    extern int xmlSchemaValidateStream(xmlSchemaValidCtxtPtr,
				       xmlParserInputBufferPtr,
				       xmlCharEncoding, xmlSAXHandlerPtr,
				       void *);
    extern xmlSchemaPtr xmlSchemaParse(xmlSchemaParserCtxtPtr);
    extern xmlSchemaValidCtxtPtr xmlSchemaNewValidCtxt(xmlSchemaPtr);
    extern int xmlSchemaGetParserErrors(xmlSchemaParserCtxtPtr,
					xmlSchemaValidityErrorFunc *,
					xmlSchemaValidityWarningFunc *,
					void **);
    extern void xmlSchemaFreeValidCtxt(xmlSchemaValidCtxtPtr);
    extern int xmlSchemaSetValidOptions(xmlSchemaValidCtxtPtr, int);
    extern int xmlSchemaValidCtxtGetOptions(xmlSchemaValidCtxtPtr);
    extern xmlSchemaParserCtxtPtr xmlSchemaNewParserCtxt(const char *);
    extern void xmlSchemaSetValidErrors(xmlSchemaValidCtxtPtr,
					xmlSchemaValidityErrorFunc,
					xmlSchemaValidityWarningFunc,
					void *);
    extern xmlSchemaParserCtxtPtr xmlSchemaNewDocParserCtxt(xmlDocPtr);
    extern void xmlSchemaSetParserErrors(xmlSchemaParserCtxtPtr,
					 xmlSchemaValidityErrorFunc,
					 xmlSchemaValidityWarningFunc,
					 void *);
    extern void xmlSchemaFree(xmlSchemaPtr);
#ifdef __cplusplus
}
#endif
#endif