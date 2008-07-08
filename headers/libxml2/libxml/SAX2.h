#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_SAX2_H_
#define _LIBXML2_LIBXML_SAX2_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/entities.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef void (*internalSubsetSAXFunc) (void *, const xmlChar *,
					   const xmlChar *,
					   const xmlChar *);

    typedef int (*isStandaloneSAXFunc) (void *);

    typedef int (*hasInternalSubsetSAXFunc) (void *);

    typedef int (*hasExternalSubsetSAXFunc) (void *);

    typedef xmlParserInputPtr(*resolveEntitySAXFunc) (void *,
						      const xmlChar *,
						      const xmlChar *);

    typedef xmlEntityPtr(*getEntitySAXFunc) (void *, const xmlChar *);

    typedef void (*entityDeclSAXFunc) (void *, const xmlChar *, int,
				       const xmlChar *, const xmlChar *,
				       xmlChar *);

    typedef void (*notationDeclSAXFunc) (void *, const xmlChar *,
					 const xmlChar *, const xmlChar *);

    typedef struct _xmlEnumeration xmlEnumeration;

    typedef xmlEnumeration *xmlEnumerationPtr;

    typedef void (*attributeDeclSAXFunc) (void *, const xmlChar *,
					  const xmlChar *, int, int,
					  const xmlChar *,
					  xmlEnumerationPtr);

    typedef enum {
	XML_ELEMENT_CONTENT_PCDATA = 1,
	XML_ELEMENT_CONTENT_ELEMENT = 2,
	XML_ELEMENT_CONTENT_SEQ = 3,
	XML_ELEMENT_CONTENT_OR = 4
    } xmlElementContentType;

    typedef enum {
	XML_ELEMENT_CONTENT_ONCE = 1,
	XML_ELEMENT_CONTENT_OPT = 2,
	XML_ELEMENT_CONTENT_MULT = 3,
	XML_ELEMENT_CONTENT_PLUS = 4
    } xmlElementContentOccur;

    typedef struct _xmlElementContent xmlElementContent;

    typedef xmlElementContent *xmlElementContentPtr;

    typedef void (*elementDeclSAXFunc) (void *, const xmlChar *, int,
					xmlElementContentPtr);

    typedef void (*unparsedEntityDeclSAXFunc) (void *, const xmlChar *,
					       const xmlChar *,
					       const xmlChar *,
					       const xmlChar *);

    typedef struct _xmlSAXLocator xmlSAXLocator;

    typedef xmlSAXLocator *xmlSAXLocatorPtr;

    typedef void (*setDocumentLocatorSAXFunc) (void *, xmlSAXLocatorPtr);

    typedef void (*startDocumentSAXFunc) (void *);

    typedef void (*endDocumentSAXFunc) (void *);

    typedef void (*startElementSAXFunc) (void *, const xmlChar *,
					 const xmlChar * *);

    typedef void (*endElementSAXFunc) (void *, const xmlChar *);

    typedef void (*referenceSAXFunc) (void *, const xmlChar *);

    typedef void (*charactersSAXFunc) (void *, const xmlChar *, int);

    typedef void (*ignorableWhitespaceSAXFunc) (void *, const xmlChar *,
						int);

    typedef void (*processingInstructionSAXFunc) (void *, const xmlChar *,
						  const xmlChar *);

    typedef void (*commentSAXFunc) (void *, const xmlChar *);

    typedef void (*warningSAXFunc) (void *, const char *, ...);

    typedef void (*errorSAXFunc) (void *, const char *, ...);

    typedef void (*fatalErrorSAXFunc) (void *, const char *, ...);

    typedef xmlEntityPtr(*getParameterEntitySAXFunc) (void *,
						      const xmlChar *);

    typedef void (*cdataBlockSAXFunc) (void *, const xmlChar *, int);

    typedef void (*externalSubsetSAXFunc) (void *, const xmlChar *,
					   const xmlChar *,
					   const xmlChar *);

    typedef void (*startElementNsSAX2Func) (void *, const xmlChar *,
					    const xmlChar *,
					    const xmlChar *, int,
					    const xmlChar * *, int, int,
					    const xmlChar * *);

    typedef void (*endElementNsSAX2Func) (void *, const xmlChar *,
					  const xmlChar *,
					  const xmlChar *);

    typedef struct _xmlSAXHandler xmlSAXHandler;


    struct _xmlEnumeration {
	struct _xmlEnumeration *next;
	const xmlChar *name;
    };


    struct _xmlElementContent {
	xmlElementContentType type;
	xmlElementContentOccur ocur;
	const xmlChar *name;
	struct _xmlElementContent *c1;
	struct _xmlElementContent *c2;
	struct _xmlElementContent *parent;
	const xmlChar *prefix;
    };


    struct _xmlSAXLocator {
	const xmlChar *(*getPublicId) (void *);
	const xmlChar *(*getSystemId) (void *);
	int (*getLineNumber) (void *);
	int (*getColumnNumber) (void *);
    };


    struct _xmlSAXHandler {
	internalSubsetSAXFunc internalSubset;
	isStandaloneSAXFunc isStandalone;
	hasInternalSubsetSAXFunc hasInternalSubset;
	hasExternalSubsetSAXFunc hasExternalSubset;
	resolveEntitySAXFunc resolveEntity;
	getEntitySAXFunc getEntity;
	entityDeclSAXFunc entityDecl;
	notationDeclSAXFunc notationDecl;
	attributeDeclSAXFunc attributeDecl;
	elementDeclSAXFunc elementDecl;
	unparsedEntityDeclSAXFunc unparsedEntityDecl;
	setDocumentLocatorSAXFunc setDocumentLocator;
	startDocumentSAXFunc startDocument;
	endDocumentSAXFunc endDocument;
	startElementSAXFunc startElement;
	endElementSAXFunc endElement;
	referenceSAXFunc reference;
	charactersSAXFunc characters;
	ignorableWhitespaceSAXFunc ignorableWhitespace;
	processingInstructionSAXFunc processingInstruction;
	commentSAXFunc comment;
	warningSAXFunc warning;
	errorSAXFunc error;
	fatalErrorSAXFunc fatalError;
	getParameterEntitySAXFunc getParameterEntity;
	cdataBlockSAXFunc cdataBlock;
	externalSubsetSAXFunc externalSubset;
	unsigned int initialized;
	void *_private;
	startElementNsSAX2Func startElementNs;
	endElementNsSAX2Func endElementNs;
	xmlStructuredErrorFunc serror;
    };


/* Function prototypes */

    extern void docbDefaultSAXHandlerInit(void);
    extern void htmlDefaultSAXHandlerInit(void);
    extern void xmlDefaultSAXHandlerInit(void);
    extern void xmlSAX2AttributeDecl(void *, const xmlChar *,
				     const xmlChar *, int, int,
				     const xmlChar *, xmlEnumerationPtr);
    extern void xmlSAX2CDataBlock(void *, const xmlChar *, int);
    extern void xmlSAX2Characters(void *, const xmlChar *, int);
    extern void xmlSAX2Comment(void *, const xmlChar *);
    extern void xmlSAX2ElementDecl(void *, const xmlChar *, int,
				   xmlElementContentPtr);
    extern void xmlSAX2EndDocument(void *);
    extern void xmlSAX2EndElement(void *, const xmlChar *);
    extern void xmlSAX2EndElementNs(void *, const xmlChar *,
				    const xmlChar *, const xmlChar *);
    extern void xmlSAX2EntityDecl(void *, const xmlChar *, int,
				  const xmlChar *, const xmlChar *,
				  xmlChar *);
    extern void xmlSAX2ExternalSubset(void *, const xmlChar *,
				      const xmlChar *, const xmlChar *);
    extern int xmlSAX2GetColumnNumber(void *);
    extern xmlEntityPtr xmlSAX2GetEntity(void *, const xmlChar *);
    extern int xmlSAX2GetLineNumber(void *);
    extern xmlEntityPtr xmlSAX2GetParameterEntity(void *, const xmlChar *);
    extern const xmlChar *xmlSAX2GetPublicId(void *);
    extern const xmlChar *xmlSAX2GetSystemId(void *);
    extern int xmlSAX2HasExternalSubset(void *);
    extern int xmlSAX2HasInternalSubset(void *);
    extern void xmlSAX2IgnorableWhitespace(void *, const xmlChar *, int);
    extern void xmlSAX2InitDefaultSAXHandler(xmlSAXHandler *, int);
    extern void xmlSAX2InitDocbDefaultSAXHandler(xmlSAXHandler *);
    extern void xmlSAX2InitHtmlDefaultSAXHandler(xmlSAXHandler *);
    extern void xmlSAX2InternalSubset(void *, const xmlChar *,
				      const xmlChar *, const xmlChar *);
    extern int xmlSAX2IsStandalone(void *);
    extern void xmlSAX2NotationDecl(void *, const xmlChar *,
				    const xmlChar *, const xmlChar *);
    extern void xmlSAX2ProcessingInstruction(void *, const xmlChar *,
					     const xmlChar *);
    extern void xmlSAX2Reference(void *, const xmlChar *);
    extern xmlParserInputPtr xmlSAX2ResolveEntity(void *, const xmlChar *,
						  const xmlChar *);
    extern void xmlSAX2SetDocumentLocator(void *, xmlSAXLocatorPtr);
    extern void xmlSAX2StartDocument(void *);
    extern void xmlSAX2StartElement(void *, const xmlChar *,
				    const xmlChar * *);
    extern void xmlSAX2StartElementNs(void *, const xmlChar *,
				      const xmlChar *, const xmlChar *,
				      int, const xmlChar * *, int, int,
				      const xmlChar * *);
    extern void xmlSAX2UnparsedEntityDecl(void *, const xmlChar *,
					  const xmlChar *, const xmlChar *,
					  const xmlChar *);
    extern int xmlSAXDefaultVersion(int);
    extern int xmlSAXVersion(xmlSAXHandler *, int);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
