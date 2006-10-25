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




    extern xmlChar *xmlTextReaderNamespaceUri(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderBaseUri(xmlTextReaderPtr);
    extern int xmlTextReaderMoveToFirstAttribute(xmlTextReaderPtr);
    extern void xmlTextReaderGetErrorHandler(xmlTextReaderPtr,
					     xmlTextReaderErrorFunc *,
					     void **);
    extern int xmlTextReaderSchemaValidate(xmlTextReaderPtr, const char *);
    extern int xmlTextReaderGetParserColumnNumber(xmlTextReaderPtr);
    extern xmlNodePtr xmlTextReaderCurrentNode(xmlTextReaderPtr);
    extern int xmlTextReaderReadState(xmlTextReaderPtr);
    extern int xmlTextReaderSetSchema(xmlTextReaderPtr, xmlSchemaPtr);
    extern int xmlTextReaderNext(xmlTextReaderPtr);
    extern int xmlTextReaderIsEmptyElement(xmlTextReaderPtr);
    extern xmlTextReaderPtr xmlNewTextReader(xmlParserInputBufferPtr,
					     const char *);
    extern int xmlTextReaderGetParserLineNumber(xmlTextReaderPtr);
    extern long int xmlTextReaderByteConsumed(xmlTextReaderPtr);
    extern int xmlReaderNewIO(xmlTextReaderPtr, xmlInputReadCallback,
			      xmlInputCloseCallback, void *, const char *,
			      const char *, int);
    extern xmlNodePtr xmlTextReaderPreserve(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderReadOuterXml(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstValue(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderGetAttribute(xmlTextReaderPtr,
					      const xmlChar *);
    extern xmlChar *xmlTextReaderPrefix(xmlTextReaderPtr);
    extern int xmlTextReaderMoveToAttribute(xmlTextReaderPtr,
					    const xmlChar *);
    extern int xmlTextReaderMoveToNextAttribute(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstNamespaceUri(xmlTextReaderPtr);
    extern int xmlTextReaderNextSibling(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderGetAttributeNs(xmlTextReaderPtr,
						const xmlChar *,
						const xmlChar *);
    extern xmlTextReaderPtr xmlReaderForFile(const char *, const char *,
					     int);
    extern xmlTextReaderPtr xmlReaderForDoc(const xmlChar *, const char *,
					    const char *, int);
    extern const xmlChar *xmlTextReaderConstBaseUri(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstXmlLang(xmlTextReaderPtr);
    extern int xmlTextReaderRelaxNGSetSchema(xmlTextReaderPtr,
					     xmlRelaxNGPtr);
    extern xmlChar *xmlTextReaderReadInnerXml(xmlTextReaderPtr);
    extern int xmlTextReaderQuoteChar(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstString(xmlTextReaderPtr,
						   const xmlChar *);
    extern int xmlReaderNewFile(xmlTextReaderPtr, const char *,
				const char *, int);
    extern int xmlTextReaderHasAttributes(xmlTextReaderPtr);
    extern void xmlFreeTextReader(xmlTextReaderPtr);
    extern int xmlReaderNewWalker(xmlTextReaderPtr, xmlDocPtr);
    extern int xmlTextReaderRead(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderLocatorBaseURI(xmlTextReaderLocatorPtr);
    extern int xmlTextReaderMoveToElement(xmlTextReaderPtr);
    extern int xmlTextReaderLocatorLineNumber(xmlTextReaderLocatorPtr);
    extern int xmlTextReaderRelaxNGValidate(xmlTextReaderPtr,
					    const char *);
    extern const xmlChar *xmlTextReaderConstEncoding(xmlTextReaderPtr);
    extern xmlTextReaderPtr xmlReaderForIO(xmlInputReadCallback,
					   xmlInputCloseCallback, void *,
					   const char *, const char *,
					   int);
    extern const xmlChar *xmlTextReaderConstPrefix(xmlTextReaderPtr);
    extern int xmlTextReaderIsDefault(xmlTextReaderPtr);
    extern xmlDocPtr xmlTextReaderCurrentDoc(xmlTextReaderPtr);
    extern int xmlTextReaderIsNamespaceDecl(xmlTextReaderPtr);
    extern xmlNodePtr xmlTextReaderExpand(xmlTextReaderPtr);
    extern int xmlTextReaderPreservePattern(xmlTextReaderPtr,
					    const xmlChar *,
					    const xmlChar * *);
    extern xmlChar *xmlTextReaderLocalName(xmlTextReaderPtr);
    extern int xmlReaderNewMemory(xmlTextReaderPtr, const char *, int,
				  const char *, const char *, int);
    extern xmlParserInputBufferPtr
	xmlTextReaderGetRemainder(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderGetAttributeNo(xmlTextReaderPtr, int);
    extern xmlChar *xmlTextReaderLookupNamespace(xmlTextReaderPtr,
						 const xmlChar *);
    extern int xmlTextReaderReadAttributeValue(xmlTextReaderPtr);
    extern xmlTextReaderPtr xmlReaderForFd(int, const char *, const char *,
					   int);
    extern int xmlTextReaderClose(xmlTextReaderPtr);
    extern int xmlTextReaderDepth(xmlTextReaderPtr);
    extern int xmlTextReaderGetParserProp(xmlTextReaderPtr, int);
    extern int xmlReaderNewFd(xmlTextReaderPtr, int, const char *,
			      const char *, int);
    extern xmlTextReaderPtr xmlReaderWalker(xmlDocPtr);
    extern int xmlTextReaderIsValid(xmlTextReaderPtr);
    extern void xmlTextReaderSetErrorHandler(xmlTextReaderPtr,
					     xmlTextReaderErrorFunc,
					     void *);
    extern xmlTextReaderPtr xmlNewTextReaderFilename(const char *);
    extern xmlChar *xmlTextReaderValue(xmlTextReaderPtr);
    extern xmlTextReaderPtr xmlReaderForMemory(const char *, int,
					       const char *, const char *,
					       int);
    extern int xmlTextReaderSetParserProp(xmlTextReaderPtr, int, int);
    extern const xmlChar *xmlTextReaderConstName(xmlTextReaderPtr);
    extern xmlChar *xmlTextReaderXmlLang(xmlTextReaderPtr);
    extern int xmlTextReaderMoveToAttributeNo(xmlTextReaderPtr, int);
    extern int xmlReaderNewDoc(xmlTextReaderPtr, const xmlChar *,
			       const char *, const char *, int);
    extern xmlChar *xmlTextReaderName(xmlTextReaderPtr);
    extern int xmlTextReaderMoveToAttributeNs(xmlTextReaderPtr,
					      const xmlChar *,
					      const xmlChar *);
    extern xmlChar *xmlTextReaderReadString(xmlTextReaderPtr);
    extern int xmlTextReaderNormalization(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstLocalName(xmlTextReaderPtr);
    extern int xmlTextReaderHasValue(xmlTextReaderPtr);
    extern int xmlTextReaderNodeType(xmlTextReaderPtr);
    extern int xmlTextReaderStandalone(xmlTextReaderPtr);
    extern void xmlTextReaderSetStructuredErrorHandler(xmlTextReaderPtr,
						       xmlStructuredErrorFunc,
						       void *);
    extern int xmlTextReaderAttributeCount(xmlTextReaderPtr);
    extern const xmlChar *xmlTextReaderConstXmlVersion(xmlTextReaderPtr);
#ifdef __cplusplus
}
#endif
#endif
