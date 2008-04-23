#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLREADER_H_
#define _LIBXML2_LIBXML_XMLREADER_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/relaxng.h>
#include <libxml2/libxml/xmlschemas.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef struct _xmlTextReader xmlTextReader;

    typedef xmlTextReader *xmlTextReaderPtr;

    typedef enum {
	XML_PARSER_SEVERITY_VALIDITY_WARNING = 1,
	XML_PARSER_SEVERITY_VALIDITY_ERROR = 2,
	XML_PARSER_SEVERITY_WARNING = 3,
	XML_PARSER_SEVERITY_ERROR = 4
    } xmlParserSeverities;

    typedef void *xmlTextReaderLocatorPtr;

    typedef void (*xmlTextReaderErrorFunc) (void *, const char *,
					    xmlParserSeverities,
					    xmlTextReaderLocatorPtr);

    typedef enum {
	XML_PARSER_LOADDTD = 1,
	XML_PARSER_DEFAULTATTRS = 2,
	XML_PARSER_VALIDATE = 3,
	XML_PARSER_SUBST_ENTITIES = 4
    } xmlParserProperties;

    typedef enum {
	XML_READER_TYPE_NONE = 0,
	XML_READER_TYPE_ELEMENT = 1,
	XML_READER_TYPE_ATTRIBUTE = 2,
	XML_READER_TYPE_TEXT = 3,
	XML_READER_TYPE_CDATA = 4,
	XML_READER_TYPE_ENTITY_REFERENCE = 5,
	XML_READER_TYPE_ENTITY = 6,
	XML_READER_TYPE_PROCESSING_INSTRUCTION = 7,
	XML_READER_TYPE_COMMENT = 8,
	XML_READER_TYPE_DOCUMENT = 9,
	XML_READER_TYPE_DOCUMENT_TYPE = 10,
	XML_READER_TYPE_DOCUMENT_FRAGMENT = 11,
	XML_READER_TYPE_NOTATION = 12,
	XML_READER_TYPE_WHITESPACE = 13,
	XML_READER_TYPE_SIGNIFICANT_WHITESPACE = 14,
	XML_READER_TYPE_END_ELEMENT = 15,
	XML_READER_TYPE_END_ENTITY = 16,
	XML_READER_TYPE_XML_DECLARATION = 17
    } xmlReaderTypes;

    typedef enum {
	XML_TEXTREADER_MODE_INITIAL = 0,
	XML_TEXTREADER_MODE_INTERACTIVE = 1,
	XML_TEXTREADER_MODE_ERROR = 2,
	XML_TEXTREADER_MODE_EOF = 3,
	XML_TEXTREADER_MODE_CLOSED = 4,
	XML_TEXTREADER_MODE_READING = 5
    } xmlTextReaderMode;

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31


#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern void xmlFreeTextReader(xmlTextReaderPtr);
    extern xmlTextReaderPtr xmlNewTextReader(xmlParserInputBufferPtr,
					     const char *);
    extern xmlTextReaderPtr xmlNewTextReaderFilename(const char *);
    extern xmlTextReaderPtr xmlReaderForDoc(const xmlChar *, const char *,
					    const char *, int);
    extern xmlTextReaderPtr xmlReaderForFd(int, const char *, const char *,
					   int);
    extern xmlTextReaderPtr xmlReaderForFile(const char *, const char *,
					     int);
    extern xmlTextReaderPtr xmlReaderForIO(xmlInputReadCallback,
					   xmlInputCloseCallback, void *,
					   const char *, const char *,
					   int);
    extern xmlTextReaderPtr xmlReaderForMemory(const char *, int,
					       const char *, const char *,
					       int);
    extern int xmlReaderNewDoc(xmlTextReaderPtr, const xmlChar *,
			       const char *, const char *, int);
    extern int xmlReaderNewFd(xmlTextReaderPtr, int, const char *,
			      const char *, int);
    extern int xmlReaderNewFile(xmlTextReaderPtr, const char *,
				const char *, int);
    extern int xmlReaderNewIO(xmlTextReaderPtr, xmlInputReadCallback,
			      xmlInputCloseCallback, void *, const char *,
			      const char *, int);
    extern int xmlReaderNewMemory(xmlTextReaderPtr, const char *, int,
				  const char *, const char *, int);
    extern int xmlReaderNewWalker(xmlTextReaderPtr, xmlDocPtr);
    extern xmlTextReaderPtr xmlReaderWalker(xmlDocPtr);
    extern int xmlTextReaderAttributeCount(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderBaseUri(xmlTextReaderPtr);
    extern long int xmlTextReaderByteConsumed(xmlTextReaderPtr);
    extern int xmlTextReaderClose(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstBaseUri(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstEncoding(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstLocalName(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstName(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstNamespaceUri(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstPrefix(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstString(xmlTextReaderPtr,
						   const xmlChar *);
    extern const xmlChar *xmlTextReaderConstValue(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstXmlLang(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstXmlVersion(xmlTextReaderPtr);
    extern xmlDocPtr xmlTextReaderCurrentDoc(xmlTextReaderPtr);
    extern xmlNodePtr xmlTextReaderCurrentNode(xmlTextReaderPtr);
    extern int xmlTextReaderDepth(xmlTextReaderPtr);
    extern xmlNodePtr xmlTextReaderExpand(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderGetAttribute(xmlTextReaderPtr,
					      const xmlChar *);
    extern xmlChar *xmlTextReaderGetAttributeNo(xmlTextReaderPtr, int);
    extern xmlChar *xmlTextReaderGetAttributeNs(xmlTextReaderPtr,
						const xmlChar *,
						const xmlChar *);
    extern void xmlTextReaderGetErrorHandler(xmlTextReaderPtr,
					     xmlTextReaderErrorFunc *,
					     void **);
    extern int xmlTextReaderGetParserColumnNumber(xmlTextReaderPtr);
    extern int xmlTextReaderGetParserLineNumber(xmlTextReaderPtr);
    extern int xmlTextReaderGetParserProp(xmlTextReaderPtr, int);
    extern xmlParserInputBufferPtr
	xmlTextReaderGetRemainder(xmlTextReaderPtr);
    extern int xmlTextReaderHasAttributes(xmlTextReaderPtr);
    extern int xmlTextReaderHasValue(xmlTextReaderPtr);
    extern int xmlTextReaderIsDefault(xmlTextReaderPtr);
    extern int xmlTextReaderIsEmptyElement(xmlTextReaderPtr);
    extern int xmlTextReaderIsNamespaceDecl(xmlTextReaderPtr);
    extern int xmlTextReaderIsValid(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderLocalName(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderLocatorBaseURI(xmlTextReaderLocatorPtr);
    extern int xmlTextReaderLocatorLineNumber(xmlTextReaderLocatorPtr);
    extern xmlChar *xmlTextReaderLookupNamespace(xmlTextReaderPtr,
						 const xmlChar *);
    extern int xmlTextReaderMoveToAttribute(xmlTextReaderPtr,
					    const xmlChar *);
    extern int xmlTextReaderMoveToAttributeNo(xmlTextReaderPtr, int);
    extern int xmlTextReaderMoveToAttributeNs(xmlTextReaderPtr,
					      const xmlChar *,
					      const xmlChar *);
    extern int xmlTextReaderMoveToElement(xmlTextReaderPtr);
    extern int xmlTextReaderMoveToFirstAttribute(xmlTextReaderPtr);
    extern int xmlTextReaderMoveToNextAttribute(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderName(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderNamespaceUri(xmlTextReaderPtr);
    extern int xmlTextReaderNext(xmlTextReaderPtr);
    extern int xmlTextReaderNextSibling(xmlTextReaderPtr);
    extern int xmlTextReaderNodeType(xmlTextReaderPtr);
    extern int xmlTextReaderNormalization(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderPrefix(xmlTextReaderPtr);
    extern xmlNodePtr xmlTextReaderPreserve(xmlTextReaderPtr);
    extern int xmlTextReaderPreservePattern(xmlTextReaderPtr,
					    const xmlChar *,
					    const xmlChar * *);
    extern int xmlTextReaderQuoteChar(xmlTextReaderPtr);
    extern int xmlTextReaderRead(xmlTextReaderPtr);
    extern int xmlTextReaderReadAttributeValue(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderReadInnerXml(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderReadOuterXml(xmlTextReaderPtr);
    extern int xmlTextReaderReadState(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderReadString(xmlTextReaderPtr);
    extern int xmlTextReaderRelaxNGSetSchema(xmlTextReaderPtr,
					     xmlRelaxNGPtr);
    extern int xmlTextReaderRelaxNGValidate(xmlTextReaderPtr,
					    const char *);
    extern int xmlTextReaderSchemaValidate(xmlTextReaderPtr, const char *);
    extern void xmlTextReaderSetErrorHandler(xmlTextReaderPtr,
					     xmlTextReaderErrorFunc,
					     void *);
    extern int xmlTextReaderSetParserProp(xmlTextReaderPtr, int, int);
    extern int xmlTextReaderSetSchema(xmlTextReaderPtr, xmlSchemaPtr);
    extern void xmlTextReaderSetStructuredErrorHandler(xmlTextReaderPtr,
						       xmlStructuredErrorFunc,
						       void *);
    extern int xmlTextReaderStandalone(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderValue(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderXmlLang(xmlTextReaderPtr);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
