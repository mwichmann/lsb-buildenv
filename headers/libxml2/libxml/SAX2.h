#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_SAX2_H_
#define _LIBXML2_LIBXML_SAX2_H_

#include <stdlib.h>
#include <libxml2/libxml/xmlstring.h>
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
    extern void xmlSAX2AttributeDecl(void *ctx, const xmlChar * elem,
				     const xmlChar * fullname, int type,
				     int def, const xmlChar * defaultValue,
				     xmlEnumerationPtr tree);
    extern void xmlSAX2CDataBlock(void *ctx, const xmlChar * value,
				  int len);
    extern void xmlSAX2Characters(void *ctx, const xmlChar * ch, int len);
    extern void xmlSAX2Comment(void *ctx, const xmlChar * value);
    extern void xmlSAX2ElementDecl(void *ctx, const xmlChar * name,
				   int type, xmlElementContentPtr content);
    extern void xmlSAX2EndDocument(void *ctx);
    extern void xmlSAX2EndElement(void *ctx, const xmlChar * name);
    extern void xmlSAX2EndElementNs(void *ctx, const xmlChar * localname,
				    const xmlChar * prefix,
				    const xmlChar * URI);
    extern void xmlSAX2EntityDecl(void *ctx, const xmlChar * name,
				  int type, const xmlChar * publicId,
				  const xmlChar * systemId,
				  xmlChar * content);
    extern void xmlSAX2ExternalSubset(void *ctx, const xmlChar * name,
				      const xmlChar * ExternalID,
				      const xmlChar * SystemID);
    extern int xmlSAX2GetColumnNumber(void *ctx);
    extern xmlEntityPtr xmlSAX2GetEntity(void *ctx, const xmlChar * name);
    extern int xmlSAX2GetLineNumber(void *ctx);
    extern xmlEntityPtr xmlSAX2GetParameterEntity(void *ctx,
						  const xmlChar * name);
    extern const xmlChar *xmlSAX2GetPublicId(void *ctx);
    extern const xmlChar *xmlSAX2GetSystemId(void *ctx);
    extern int xmlSAX2HasExternalSubset(void *ctx);
    extern int xmlSAX2HasInternalSubset(void *ctx);
    extern void xmlSAX2IgnorableWhitespace(void *ctx, const xmlChar * ch,
					   int len);
    extern void xmlSAX2InitDefaultSAXHandler(xmlSAXHandler * hdlr,
					     int warning);
    extern void xmlSAX2InitDocbDefaultSAXHandler(xmlSAXHandler * hdlr);
    extern void xmlSAX2InitHtmlDefaultSAXHandler(xmlSAXHandler * hdlr);
    extern void xmlSAX2InternalSubset(void *ctx, const xmlChar * name,
				      const xmlChar * ExternalID,
				      const xmlChar * SystemID);
    extern int xmlSAX2IsStandalone(void *ctx);
    extern void xmlSAX2NotationDecl(void *ctx, const xmlChar * name,
				    const xmlChar * publicId,
				    const xmlChar * systemId);
    extern void xmlSAX2ProcessingInstruction(void *ctx,
					     const xmlChar * target,
					     const xmlChar * data);
    extern void xmlSAX2Reference(void *ctx, const xmlChar * name);
    extern xmlParserInputPtr xmlSAX2ResolveEntity(void *ctx,
						  const xmlChar * publicId,
						  const xmlChar *
						  systemId);
    extern void xmlSAX2SetDocumentLocator(void *ctx, xmlSAXLocatorPtr loc);
    extern void xmlSAX2StartDocument(void *ctx);
    extern void xmlSAX2StartElement(void *ctx, const xmlChar * fullname,
				    const xmlChar * *atts);
    extern void xmlSAX2StartElementNs(void *ctx, const xmlChar * localname,
				      const xmlChar * prefix,
				      const xmlChar * URI,
				      int nb_namespaces,
				      const xmlChar * *namespaces,
				      int nb_attributes, int nb_defaulted,
				      const xmlChar * *attributes);
    extern void xmlSAX2UnparsedEntityDecl(void *ctx, const xmlChar * name,
					  const xmlChar * publicId,
					  const xmlChar * systemId,
					  const xmlChar * notationName);
    extern int xmlSAXDefaultVersion(int version);
    extern int xmlSAXVersion(xmlSAXHandler * hdlr, int version);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
