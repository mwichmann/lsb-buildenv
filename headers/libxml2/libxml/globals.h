#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_GLOBALS_H_
#define _LIBXML2_LIBXML_GLOBALS_H_

#include <stddef.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/entities.h>
#include <libxml2/libxml/encoding.h>
#include <libxml2/libxml/SAX2.h>

#ifdef __cplusplus
extern "C" {
#endif


#define xmlDeregisterNodeDefaultValue	 \
	(*(__xmlDeregisterNodeDefaultValue()))
#define xmlDoValidityCheckingDefaultValue	 \
	(*(__xmlDoValidityCheckingDefaultValue()))
#define xmlOutputBufferCreateFilenameValue	 \
	(*(__xmlOutputBufferCreateFilenameValue()))
#define xmlParserInputBufferCreateFilenameValue	 \
	(*(__xmlParserInputBufferCreateFilenameValue()))
#define xmlPedanticParserDefaultValue	 \
	(*(__xmlPedanticParserDefaultValue()))
#define xmlSubstituteEntitiesDefaultValue	 \
	(*(__xmlSubstituteEntitiesDefaultValue()))
#define docbDefaultSAXHandler	(*(__docbDefaultSAXHandler()))
#define htmlDefaultSAXHandler	(*(__htmlDefaultSAXHandler()))
#define oldXMLWDcompatibility	(*(__oldXMLWDcompatibility()))
#define xmlBufferAllocScheme	(*(__xmlBufferAllocScheme()))
#define xmlDefaultBufferSize	(*(__xmlDefaultBufferSize()))
#define xmlDefaultSAXHandler	(*(__xmlDefaultSAXHandler()))
#define xmlDefaultSAXLocator	(*(__xmlDefaultSAXLocator()))
#define xmlGenericError	(*(__xmlGenericError()))
#define xmlGenericErrorContext	(*(__xmlGenericErrorContext()))
#define xmlGetWarningsDefaultValue	(*(__xmlGetWarningsDefaultValue()))
#define xmlIndentTreeOutput	(*(__xmlIndentTreeOutput()))
#define xmlKeepBlanksDefaultValue	(*(__xmlKeepBlanksDefaultValue()))
#define xmlLastError	(*(__xmlLastError()))
#define xmlLineNumbersDefaultValue	(*(__xmlLineNumbersDefaultValue()))
#define xmlLoadExtDtdDefaultValue	(*(__xmlLoadExtDtdDefaultValue()))
#define xmlParserDebugEntities	(*(__xmlParserDebugEntities()))
#define xmlParserVersion	(*(__xmlParserVersion()))
#define xmlRegisterNodeDefaultValue	(*(__xmlRegisterNodeDefaultValue()))
#define xmlSaveNoEmptyTags	(*(__xmlSaveNoEmptyTags()))
#define xmlStructuredError	(*(__xmlStructuredError()))
#define xmlTreeIndentString	(*(__xmlTreeIndentString()))


    typedef xmlOutputBufferPtr(*xmlOutputBufferCreateFilenameFunc) (const
								    char *,
								    xmlCharEncodingHandlerPtr,
								    int);

    typedef void (*xmlRegisterNodeFunc) (xmlNodePtr);

    typedef
	xmlParserInputBufferPtr(*xmlParserInputBufferCreateFilenameFunc)
	(const char *, xmlCharEncoding);

    typedef struct _xmlSAXHandlerV1 xmlSAXHandlerV1;

    typedef void (*xmlDeregisterNodeFunc) (xmlNodePtr);

    typedef struct _xmlGlobalState xmlGlobalState;

    typedef xmlGlobalState *xmlGlobalStatePtr;

    struct _xmlSAXHandlerV1 {
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
    };


/* Function prototypes */

    extern xmlSAXHandlerV1 *__docbDefaultSAXHandler(void);
    extern xmlSAXHandlerV1 *__htmlDefaultSAXHandler(void);
    extern int *__oldXMLWDcompatibility(void);
    extern xmlBufferAllocationScheme *__xmlBufferAllocScheme(void);
    extern int *__xmlDefaultBufferSize(void);
    extern xmlSAXHandlerV1 *__xmlDefaultSAXHandler(void);
    extern xmlSAXLocator *__xmlDefaultSAXLocator(void);
    extern xmlDeregisterNodeFunc *__xmlDeregisterNodeDefaultValue(void);
    extern int *__xmlDoValidityCheckingDefaultValue(void);
    extern xmlGenericErrorFunc *__xmlGenericError(void);
    extern void **__xmlGenericErrorContext(void);
    extern int *__xmlGetWarningsDefaultValue(void);
    extern int *__xmlIndentTreeOutput(void);
    extern int *__xmlKeepBlanksDefaultValue(void);
    extern xmlError *__xmlLastError(void);
    extern int *__xmlLineNumbersDefaultValue(void);
    extern int *__xmlLoadExtDtdDefaultValue(void);
    extern xmlOutputBufferCreateFilenameFunc
	*__xmlOutputBufferCreateFilenameValue(void);
    extern int *__xmlParserDebugEntities(void);
    extern xmlParserInputBufferCreateFilenameFunc
	*__xmlParserInputBufferCreateFilenameValue(void);
    extern const char **__xmlParserVersion(void);
    extern int *__xmlPedanticParserDefaultValue(void);
    extern xmlRegisterNodeFunc *__xmlRegisterNodeDefaultValue(void);
    extern int *__xmlSaveNoEmptyTags(void);
    extern xmlStructuredErrorFunc *__xmlStructuredError(void);
    extern int *__xmlSubstituteEntitiesDefaultValue(void);
    extern const char **__xmlTreeIndentString(void);
    extern void xmlCleanupGlobals(void);
    extern xmlDeregisterNodeFunc
	xmlDeregisterNodeDefault(xmlDeregisterNodeFunc func);
    extern xmlFreeFunc xmlFree;
    extern void xmlInitGlobals(void);
    extern void xmlInitializeGlobalState(xmlGlobalStatePtr gs);
    extern xmlMallocFunc xmlMalloc;
    extern xmlMallocFunc xmlMallocAtomic;
    extern xmlStrdupFunc xmlMemStrdup;
    extern xmlOutputBufferCreateFilenameFunc
	xmlOutputBufferCreateFilenameDefault
	(xmlOutputBufferCreateFilenameFunc func);
    extern xmlParserInputBufferPtr xmlParserInputBufferCreateFilename(const
								      char
								      *URI,
								      xmlCharEncoding
								      enc);
    extern xmlParserInputBufferCreateFilenameFunc
	xmlParserInputBufferCreateFilenameDefault
	(xmlParserInputBufferCreateFilenameFunc func);
    extern xmlReallocFunc xmlRealloc;
    extern xmlRegisterNodeFunc xmlRegisterNodeDefault(xmlRegisterNodeFunc
						      func);
    extern xmlBufferAllocationScheme
	xmlThrDefBufferAllocScheme(xmlBufferAllocationScheme v);
    extern int xmlThrDefDefaultBufferSize(int v);
    extern xmlDeregisterNodeFunc
	xmlThrDefDeregisterNodeDefault(xmlDeregisterNodeFunc func);
    extern int xmlThrDefDoValidityCheckingDefaultValue(int v);
    extern int xmlThrDefGetWarningsDefaultValue(int v);
    extern int xmlThrDefIndentTreeOutput(int v);
    extern int xmlThrDefKeepBlanksDefaultValue(int v);
    extern int xmlThrDefLineNumbersDefaultValue(int v);
    extern int xmlThrDefLoadExtDtdDefaultValue(int v);
    extern xmlOutputBufferCreateFilenameFunc
	xmlThrDefOutputBufferCreateFilenameDefault
	(xmlOutputBufferCreateFilenameFunc func);
    extern int xmlThrDefParserDebugEntities(int v);
    extern xmlParserInputBufferCreateFilenameFunc
	xmlThrDefParserInputBufferCreateFilenameDefault
	(xmlParserInputBufferCreateFilenameFunc func);
    extern int xmlThrDefPedanticParserDefaultValue(int v);
    extern xmlRegisterNodeFunc
	xmlThrDefRegisterNodeDefault(xmlRegisterNodeFunc func);
    extern int xmlThrDefSaveNoEmptyTags(int v);
    extern void xmlThrDefSetGenericErrorFunc(void *ctx,
					     xmlGenericErrorFunc handler);
    extern void xmlThrDefSetStructuredErrorFunc(void *ctx,
						xmlStructuredErrorFunc
						handler);
    extern int xmlThrDefSubstituteEntitiesDefaultValue(int v);
    extern const char *xmlThrDefTreeIndentString(const char *v);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
