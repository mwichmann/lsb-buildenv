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


#if __LSB_VERSION__ >= 31
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
#endif				// __LSB_VERSION__ >= 3.1



#if __LSB_VERSION__ >= 31
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

#endif				// __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31

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



#endif				// __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
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
	xmlDeregisterNodeDefault(xmlDeregisterNodeFunc);
    extern xmlFreeFunc xmlFree;
    extern void xmlInitGlobals(void);
    extern void xmlInitializeGlobalState(xmlGlobalStatePtr);
    extern xmlMallocFunc xmlMalloc;
    extern xmlMallocFunc xmlMallocAtomic;
    extern xmlStrdupFunc xmlMemStrdup;
    extern xmlOutputBufferCreateFilenameFunc
	xmlOutputBufferCreateFilenameDefault
	(xmlOutputBufferCreateFilenameFunc);
    extern xmlParserInputBufferPtr xmlParserInputBufferCreateFilename(const
								      char
								      *,
								      xmlCharEncoding);
    extern xmlParserInputBufferCreateFilenameFunc
	xmlParserInputBufferCreateFilenameDefault
	(xmlParserInputBufferCreateFilenameFunc);
    extern xmlReallocFunc xmlRealloc;
    extern xmlRegisterNodeFunc xmlRegisterNodeDefault(xmlRegisterNodeFunc);
    extern xmlBufferAllocationScheme
	xmlThrDefBufferAllocScheme(xmlBufferAllocationScheme);
    extern int xmlThrDefDefaultBufferSize(int);
    extern xmlDeregisterNodeFunc
	xmlThrDefDeregisterNodeDefault(xmlDeregisterNodeFunc);
    extern int xmlThrDefDoValidityCheckingDefaultValue(int);
    extern int xmlThrDefGetWarningsDefaultValue(int);
    extern int xmlThrDefIndentTreeOutput(int);
    extern int xmlThrDefKeepBlanksDefaultValue(int);
    extern int xmlThrDefLineNumbersDefaultValue(int);
    extern int xmlThrDefLoadExtDtdDefaultValue(int);
    extern xmlOutputBufferCreateFilenameFunc
	xmlThrDefOutputBufferCreateFilenameDefault
	(xmlOutputBufferCreateFilenameFunc);
    extern int xmlThrDefParserDebugEntities(int);
    extern xmlParserInputBufferCreateFilenameFunc
	xmlThrDefParserInputBufferCreateFilenameDefault
	(xmlParserInputBufferCreateFilenameFunc);
    extern int xmlThrDefPedanticParserDefaultValue(int);
    extern xmlRegisterNodeFunc
	xmlThrDefRegisterNodeDefault(xmlRegisterNodeFunc);
    extern int xmlThrDefSaveNoEmptyTags(int);
    extern void xmlThrDefSetGenericErrorFunc(void *, xmlGenericErrorFunc);
    extern void xmlThrDefSetStructuredErrorFunc(void *,
						xmlStructuredErrorFunc);
    extern int xmlThrDefSubstituteEntitiesDefaultValue(int);
    extern const char *xmlThrDefTreeIndentString(const char *);
#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
