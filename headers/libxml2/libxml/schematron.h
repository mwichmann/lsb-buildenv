#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_SCHEMATRON_H_
#define _LIBXML2_LIBXML_SCHEMATRON_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
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

#endif				// __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31






#endif				// __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
    extern void xmlSchematronFree(xmlSchematronPtr);
    extern void xmlSchematronFreeParserCtxt(xmlSchematronParserCtxtPtr);
    extern void xmlSchematronFreeValidCtxt(xmlSchematronValidCtxtPtr);
    extern xmlSchematronParserCtxtPtr
	xmlSchematronNewDocParserCtxt(xmlDocPtr);
    extern xmlSchematronParserCtxtPtr xmlSchematronNewMemParserCtxt(const
								    char *,
								    int);
    extern xmlSchematronParserCtxtPtr xmlSchematronNewParserCtxt(const char
								 *);
    extern xmlSchematronValidCtxtPtr
	xmlSchematronNewValidCtxt(xmlSchematronPtr, int);
    extern xmlSchematronPtr xmlSchematronParse(xmlSchematronParserCtxtPtr);
    extern int xmlSchematronValidateDoc(xmlSchematronValidCtxtPtr,
					xmlDocPtr);
#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
