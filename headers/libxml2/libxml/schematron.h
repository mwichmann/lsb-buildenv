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











    extern xmlSchematronValidCtxtPtr
	xmlSchematronNewValidCtxt(xmlSchematronPtr, int);
    extern void xmlSchematronFreeValidCtxt(xmlSchematronValidCtxtPtr);
    extern int xmlSchematronValidateDoc(xmlSchematronValidCtxtPtr,
					xmlDocPtr);
    extern xmlSchematronParserCtxtPtr xmlSchematronNewMemParserCtxt(const
								    char *,
								    int);
    extern xmlSchematronParserCtxtPtr xmlSchematronNewParserCtxt(const char
								 *);
    extern xmlSchematronPtr xmlSchematronParse(xmlSchematronParserCtxtPtr);
    extern void xmlSchematronFree(xmlSchematronPtr);
    extern void xmlSchematronFreeParserCtxt(xmlSchematronParserCtxtPtr);
    extern xmlSchematronParserCtxtPtr
	xmlSchematronNewDocParserCtxt(xmlDocPtr);
#ifdef __cplusplus
}
#endif
#endif
