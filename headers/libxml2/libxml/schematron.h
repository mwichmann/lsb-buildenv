#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_SCHEMATRON_H_
#define _LIBXML2_LIBXML_SCHEMATRON_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlSchematronValidCtxt xmlSchematronValidCtxt;

    typedef xmlSchematronValidCtxt *xmlSchematronValidCtxtPtr;

    typedef struct _xmlSchematron xmlSchematron;

    typedef xmlSchematron *xmlSchematronPtr;

    typedef struct _xmlSchematronParserCtxt xmlSchematronParserCtxt;

    typedef xmlSchematronParserCtxt *xmlSchematronParserCtxtPtr;

    typedef enum {
	XML_SCHEMATRON_OUT_QUIET = 1 << 0,
	XML_SCHEMATRON_OUT_TEXT = 1 << 1,
	XML_SCHEMATRON_OUT_XML = 1 << 2,
	XML_SCHEMATRON_OUT_FILE = 1 << 8,
	XML_SCHEMATRON_OUT_BUFFER = 1 << 9,
	XML_SCHEMATRON_OUT_IO = 1 << 10
    } xmlSchematronValidOptions;


/* Function prototypes */

    extern void xmlSchematronFree(xmlSchematronPtr schema);
    extern void xmlSchematronFreeParserCtxt(xmlSchematronParserCtxtPtr
					    ctxt);
    extern void xmlSchematronFreeValidCtxt(xmlSchematronValidCtxtPtr ctxt);
    extern xmlSchematronParserCtxtPtr
	xmlSchematronNewDocParserCtxt(xmlDocPtr doc);
    extern xmlSchematronParserCtxtPtr xmlSchematronNewMemParserCtxt(const
								    char
								    *buffer,
								    int
								    size);
    extern xmlSchematronParserCtxtPtr xmlSchematronNewParserCtxt(const char
								 *URL);
    extern xmlSchematronValidCtxtPtr
	xmlSchematronNewValidCtxt(xmlSchematronPtr schema, int options);
    extern xmlSchematronPtr xmlSchematronParse(xmlSchematronParserCtxtPtr
					       ctxt);
    extern int xmlSchematronValidateDoc(xmlSchematronValidCtxtPtr ctxt,
					xmlDocPtr instance);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
