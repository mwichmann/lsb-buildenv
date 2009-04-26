#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLSCHEMAS_H_
#define _LIBXML2_LIBXML_XMLSCHEMAS_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
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


/* Function prototypes */

    extern void xmlSchemaDump(FILE * output, xmlSchemaPtr schema);
    extern void xmlSchemaFree(xmlSchemaPtr schema);
    extern void xmlSchemaFreeParserCtxt(xmlSchemaParserCtxtPtr ctxt);
    extern void xmlSchemaFreeValidCtxt(xmlSchemaValidCtxtPtr ctxt);
    extern int xmlSchemaGetParserErrors(xmlSchemaParserCtxtPtr ctxt,
					xmlSchemaValidityErrorFunc * err,
					xmlSchemaValidityWarningFunc *
					warn, void **ctx);
    extern int xmlSchemaGetValidErrors(xmlSchemaValidCtxtPtr ctxt,
				       xmlSchemaValidityErrorFunc * err,
				       xmlSchemaValidityWarningFunc * warn,
				       void **ctx);
    extern int xmlSchemaIsValid(xmlSchemaValidCtxtPtr ctxt);
    extern xmlSchemaParserCtxtPtr xmlSchemaNewDocParserCtxt(xmlDocPtr doc);
    extern xmlSchemaParserCtxtPtr xmlSchemaNewMemParserCtxt(const char
							    *buffer,
							    int size);
    extern xmlSchemaParserCtxtPtr xmlSchemaNewParserCtxt(const char *URL);
    extern xmlSchemaValidCtxtPtr xmlSchemaNewValidCtxt(xmlSchemaPtr
						       schema);
    extern xmlSchemaPtr xmlSchemaParse(xmlSchemaParserCtxtPtr ctxt);
    extern xmlSchemaSAXPlugPtr xmlSchemaSAXPlug(xmlSchemaValidCtxtPtr ctxt,
						xmlSAXHandlerPtr * sax,
						void **user_data);
    extern int xmlSchemaSAXUnplug(xmlSchemaSAXPlugPtr plug);
    extern void xmlSchemaSetParserErrors(xmlSchemaParserCtxtPtr ctxt,
					 xmlSchemaValidityErrorFunc err,
					 xmlSchemaValidityWarningFunc warn,
					 void *ctx);
    extern void xmlSchemaSetValidErrors(xmlSchemaValidCtxtPtr ctxt,
					xmlSchemaValidityErrorFunc err,
					xmlSchemaValidityWarningFunc warn,
					void *ctx);
    extern int xmlSchemaSetValidOptions(xmlSchemaValidCtxtPtr ctxt,
					int options);
    extern void xmlSchemaSetValidStructuredErrors(xmlSchemaValidCtxtPtr
						  ctxt,
						  xmlStructuredErrorFunc
						  serror, void *ctx);
    extern int xmlSchemaValidCtxtGetOptions(xmlSchemaValidCtxtPtr ctxt);
    extern int xmlSchemaValidateDoc(xmlSchemaValidCtxtPtr ctxt,
				    xmlDocPtr instance);
    extern int xmlSchemaValidateFile(xmlSchemaValidCtxtPtr ctxt,
				     const char *filename, int options);
    extern int xmlSchemaValidateOneElement(xmlSchemaValidCtxtPtr ctxt,
					   xmlNodePtr elem);
    extern int xmlSchemaValidateStream(xmlSchemaValidCtxtPtr ctxt,
				       xmlParserInputBufferPtr input,
				       xmlCharEncoding enc,
				       xmlSAXHandlerPtr sax,
				       void *user_data);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
