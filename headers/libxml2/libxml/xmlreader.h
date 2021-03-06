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


/* Function prototypes */

    extern void xmlFreeTextReader(xmlTextReaderPtr reader);
    extern xmlTextReaderPtr xmlNewTextReader(xmlParserInputBufferPtr input,
					     const char *URI);
    extern xmlTextReaderPtr xmlNewTextReaderFilename(const char *URI);
    extern xmlTextReaderPtr xmlReaderForDoc(const xmlChar * cur,
					    const char *URL,
					    const char *encoding,
					    int options);
    extern xmlTextReaderPtr xmlReaderForFd(int fd, const char *URL,
					   const char *encoding,
					   int options);
    extern xmlTextReaderPtr xmlReaderForFile(const char *filename,
					     const char *encoding,
					     int options);
    extern xmlTextReaderPtr xmlReaderForIO(xmlInputReadCallback ioread,
					   xmlInputCloseCallback ioclose,
					   void *ioctx, const char *URL,
					   const char *encoding,
					   int options);
    extern xmlTextReaderPtr xmlReaderForMemory(const char *buffer,
					       int size, const char *URL,
					       const char *encoding,
					       int options);
    extern int xmlReaderNewDoc(xmlTextReaderPtr reader,
			       const xmlChar * cur, const char *URL,
			       const char *encoding, int options);
    extern int xmlReaderNewFd(xmlTextReaderPtr reader, int fd,
			      const char *URL, const char *encoding,
			      int options);
    extern int xmlReaderNewFile(xmlTextReaderPtr reader,
				const char *filename, const char *encoding,
				int options);
    extern int xmlReaderNewIO(xmlTextReaderPtr reader,
			      xmlInputReadCallback ioread,
			      xmlInputCloseCallback ioclose, void *ioctx,
			      const char *URL, const char *encoding,
			      int options);
    extern int xmlReaderNewMemory(xmlTextReaderPtr reader,
				  const char *buffer, int size,
				  const char *URL, const char *encoding,
				  int options);
    extern int xmlReaderNewWalker(xmlTextReaderPtr reader, xmlDocPtr doc);
    extern xmlTextReaderPtr xmlReaderWalker(xmlDocPtr doc);
    extern int xmlTextReaderAttributeCount(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderBaseUri(xmlTextReaderPtr reader);
    extern long int xmlTextReaderByteConsumed(xmlTextReaderPtr reader);
    extern int xmlTextReaderClose(xmlTextReaderPtr reader);
    extern const xmlChar *xmlTextReaderConstBaseUri(xmlTextReaderPtr
						    reader);
    extern const xmlChar *xmlTextReaderConstEncoding(xmlTextReaderPtr
						     reader);
    extern const xmlChar *xmlTextReaderConstLocalName(xmlTextReaderPtr
						      reader);
    extern const xmlChar *xmlTextReaderConstName(xmlTextReaderPtr reader);
    extern const xmlChar *xmlTextReaderConstNamespaceUri(xmlTextReaderPtr
							 reader);
    extern const xmlChar *xmlTextReaderConstPrefix(xmlTextReaderPtr
						   reader);
    extern const xmlChar *xmlTextReaderConstString(xmlTextReaderPtr reader,
						   const xmlChar * str);
    extern const xmlChar *xmlTextReaderConstValue(xmlTextReaderPtr reader);
    extern const xmlChar *xmlTextReaderConstXmlLang(xmlTextReaderPtr
						    reader);
    extern const xmlChar *xmlTextReaderConstXmlVersion(xmlTextReaderPtr
						       reader);
    extern xmlDocPtr xmlTextReaderCurrentDoc(xmlTextReaderPtr reader);
    extern xmlNodePtr xmlTextReaderCurrentNode(xmlTextReaderPtr reader);
    extern int xmlTextReaderDepth(xmlTextReaderPtr reader);
    extern xmlNodePtr xmlTextReaderExpand(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderGetAttribute(xmlTextReaderPtr reader,
					      const xmlChar * name);
    extern xmlChar *xmlTextReaderGetAttributeNo(xmlTextReaderPtr reader,
						int no);
    extern xmlChar *xmlTextReaderGetAttributeNs(xmlTextReaderPtr reader,
						const xmlChar * localName,
						const xmlChar *
						namespaceURI);
    extern void xmlTextReaderGetErrorHandler(xmlTextReaderPtr reader,
					     xmlTextReaderErrorFunc * f,
					     void **arg);
    extern int xmlTextReaderGetParserColumnNumber(xmlTextReaderPtr reader);
    extern int xmlTextReaderGetParserLineNumber(xmlTextReaderPtr reader);
    extern int xmlTextReaderGetParserProp(xmlTextReaderPtr reader,
					  int prop);
    extern xmlParserInputBufferPtr
	xmlTextReaderGetRemainder(xmlTextReaderPtr reader);
    extern int xmlTextReaderHasAttributes(xmlTextReaderPtr reader);
    extern int xmlTextReaderHasValue(xmlTextReaderPtr reader);
    extern int xmlTextReaderIsDefault(xmlTextReaderPtr reader);
    extern int xmlTextReaderIsEmptyElement(xmlTextReaderPtr reader);
    extern int xmlTextReaderIsNamespaceDecl(xmlTextReaderPtr reader);
    extern int xmlTextReaderIsValid(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderLocalName(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderLocatorBaseURI(xmlTextReaderLocatorPtr
						locator);
    extern int xmlTextReaderLocatorLineNumber(xmlTextReaderLocatorPtr
					      locator);
    extern xmlChar *xmlTextReaderLookupNamespace(xmlTextReaderPtr reader,
						 const xmlChar * prefix);
    extern int xmlTextReaderMoveToAttribute(xmlTextReaderPtr reader,
					    const xmlChar * name);
    extern int xmlTextReaderMoveToAttributeNo(xmlTextReaderPtr reader,
					      int no);
    extern int xmlTextReaderMoveToAttributeNs(xmlTextReaderPtr reader,
					      const xmlChar * localName,
					      const xmlChar *
					      namespaceURI);
    extern int xmlTextReaderMoveToElement(xmlTextReaderPtr reader);
    extern int xmlTextReaderMoveToFirstAttribute(xmlTextReaderPtr reader);
    extern int xmlTextReaderMoveToNextAttribute(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderName(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderNamespaceUri(xmlTextReaderPtr reader);
    extern int xmlTextReaderNext(xmlTextReaderPtr reader);
    extern int xmlTextReaderNextSibling(xmlTextReaderPtr reader);
    extern int xmlTextReaderNodeType(xmlTextReaderPtr reader);
    extern int xmlTextReaderNormalization(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderPrefix(xmlTextReaderPtr reader);
    extern xmlNodePtr xmlTextReaderPreserve(xmlTextReaderPtr reader);
    extern int xmlTextReaderPreservePattern(xmlTextReaderPtr reader,
					    const xmlChar * pattern,
					    const xmlChar * *namespaces);
    extern int xmlTextReaderQuoteChar(xmlTextReaderPtr reader);
    extern int xmlTextReaderRead(xmlTextReaderPtr reader);
    extern int xmlTextReaderReadAttributeValue(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderReadInnerXml(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderReadOuterXml(xmlTextReaderPtr reader);
    extern int xmlTextReaderReadState(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderReadString(xmlTextReaderPtr reader);
    extern int xmlTextReaderRelaxNGSetSchema(xmlTextReaderPtr reader,
					     xmlRelaxNGPtr schema);
    extern int xmlTextReaderRelaxNGValidate(xmlTextReaderPtr reader,
					    const char *rng);
    extern int xmlTextReaderSchemaValidate(xmlTextReaderPtr reader,
					   const char *xsd);
    extern void xmlTextReaderSetErrorHandler(xmlTextReaderPtr reader,
					     xmlTextReaderErrorFunc f,
					     void *arg);
    extern int xmlTextReaderSetParserProp(xmlTextReaderPtr reader,
					  int prop, int value);
    extern int xmlTextReaderSetSchema(xmlTextReaderPtr reader,
				      xmlSchemaPtr schema);
    extern void xmlTextReaderSetStructuredErrorHandler(xmlTextReaderPtr
						       reader,
						       xmlStructuredErrorFunc
						       f, void *arg);
    extern int xmlTextReaderStandalone(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderValue(xmlTextReaderPtr reader);
    extern xmlChar *xmlTextReaderXmlLang(xmlTextReaderPtr reader);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
