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




    extern int *__xmlParserDebugEntities(void);
    extern int xmlThrDefDoValidityCheckingDefaultValue(int);
    extern xmlOutputBufferCreateFilenameFunc
	*__xmlOutputBufferCreateFilenameValue(void);
    extern xmlRegisterNodeFunc
	xmlThrDefRegisterNodeDefault(xmlRegisterNodeFunc);
    extern const char **__xmlTreeIndentString(void);
    extern xmlParserInputBufferCreateFilenameFunc
	xmlThrDefParserInputBufferCreateFilenameDefault
	(xmlParserInputBufferCreateFilenameFunc);
    extern xmlSAXLocator *__xmlDefaultSAXLocator(void);
    extern xmlParserInputBufferCreateFilenameFunc
	*__xmlParserInputBufferCreateFilenameValue(void);
    extern xmlSAXHandlerV1 *__htmlDefaultSAXHandler(void);
    extern int *__xmlPedanticParserDefaultValue(void);
    extern int xmlThrDefLineNumbersDefaultValue(int);
    extern int xmlThrDefIndentTreeOutput(int);
    extern xmlMallocFunc xmlMallocAtomic;
    extern xmlBufferAllocationScheme
	xmlThrDefBufferAllocScheme(xmlBufferAllocationScheme);
    extern xmlDeregisterNodeFunc *__xmlDeregisterNodeDefaultValue(void);
    extern int xmlThrDefDefaultBufferSize(int);
    extern int xmlThrDefKeepBlanksDefaultValue(int);
    extern int *__xmlKeepBlanksDefaultValue(void);
    extern void xmlThrDefSetStructuredErrorFunc(void *,
						xmlStructuredErrorFunc);
    extern xmlRegisterNodeFunc *__xmlRegisterNodeDefaultValue(void);
    extern int *__xmlDefaultBufferSize(void);
    extern xmlRegisterNodeFunc xmlRegisterNodeDefault(xmlRegisterNodeFunc);
    extern void xmlInitGlobals(void);
    extern xmlSAXHandlerV1 *__docbDefaultSAXHandler(void);
    extern xmlBufferAllocationScheme *__xmlBufferAllocScheme(void);
    extern int xmlThrDefPedanticParserDefaultValue(int);
    extern xmlStructuredErrorFunc *__xmlStructuredError(void);
    extern void xmlThrDefSetGenericErrorFunc(void *, xmlGenericErrorFunc);
    extern xmlOutputBufferCreateFilenameFunc
	xmlOutputBufferCreateFilenameDefault
	(xmlOutputBufferCreateFilenameFunc);
    extern int *__xmlGetWarningsDefaultValue(void);
    extern xmlOutputBufferCreateFilenameFunc
	xmlThrDefOutputBufferCreateFilenameDefault
	(xmlOutputBufferCreateFilenameFunc);
    extern int xmlThrDefGetWarningsDefaultValue(int);
    extern xmlParserInputBufferCreateFilenameFunc
	xmlParserInputBufferCreateFilenameDefault
	(xmlParserInputBufferCreateFilenameFunc);
    extern xmlParserInputBufferPtr xmlParserInputBufferCreateFilename(const
								      char
								      *,
								      xmlCharEncoding);
    extern int *__xmlIndentTreeOutput(void);
    extern int xmlThrDefSaveNoEmptyTags(int);
    extern int *__xmlSaveNoEmptyTags(void);
    extern xmlStrdupFunc xmlMemStrdup;
    extern int *__xmlSubstituteEntitiesDefaultValue(void);
    extern int xmlThrDefParserDebugEntities(int);
    extern int *__xmlDoValidityCheckingDefaultValue(void);
    extern xmlReallocFunc xmlRealloc;
    extern void xmlInitializeGlobalState(xmlGlobalStatePtr);
    extern const char **__xmlParserVersion(void);
    extern int xmlThrDefLoadExtDtdDefaultValue(int);
    extern const char *xmlThrDefTreeIndentString(const char *);
    extern int *__oldXMLWDcompatibility(void);
    extern int xmlThrDefSubstituteEntitiesDefaultValue(int);
    extern xmlDeregisterNodeFunc
	xmlThrDefDeregisterNodeDefault(xmlDeregisterNodeFunc);
    extern void **__xmlGenericErrorContext(void);
    extern void xmlCleanupGlobals(void);
    extern xmlError *__xmlLastError(void);
    extern xmlMallocFunc xmlMalloc;
    extern int *__xmlLoadExtDtdDefaultValue(void);
    extern xmlFreeFunc xmlFree;
    extern int *__xmlLineNumbersDefaultValue(void);
    extern xmlDeregisterNodeFunc
	xmlDeregisterNodeDefault(xmlDeregisterNodeFunc);
    extern xmlSAXHandlerV1 *__xmlDefaultSAXHandler(void);
    extern xmlGenericErrorFunc *__xmlGenericError(void);
#ifdef __cplusplus
}
#endif
#endif
