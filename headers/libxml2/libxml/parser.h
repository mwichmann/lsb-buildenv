#ifndef _LIBXML2_LIBXML_PARSER_H_
#define _LIBXML2_LIBXML_PARSER_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/entities.h>
#include <libxml2/libxml/encoding.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/SAX2.h>
#include <libxml2/libxml/xmlIO.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XML_DEFAULT_VERSION	"1.0"
#define XML_SAX2_MAGIC	0xDEEDBEAF
#define XML_DETECT_IDS	2
#define XML_COMPLETE_ATTRS	4
#define XML_SKIP_IDS	8


    typedef xmlSAXHandler *xmlSAXHandlerPtr;

    typedef xmlParserNodeInfoSeq *xmlParserNodeInfoSeqPtr;

    typedef xmlParserInputPtr(*xmlExternalEntityLoader) (const char *,
							 const char *,
							 xmlParserCtxtPtr);

    typedef xmlParserNodeInfo *xmlParserNodeInfoPtr;

    typedef enum {
	XML_WITH_THREAD = 1,
	XML_WITH_TREE = 2,
	XML_WITH_OUTPUT = 3,
	XML_WITH_PUSH = 4,
	XML_WITH_READER = 5,
	XML_WITH_PATTERN = 6,
	XML_WITH_WRITER = 7,
	XML_WITH_SAX1 = 8,
	XML_WITH_FTP = 9,
	XML_WITH_HTTP = 10,
	XML_WITH_VALID = 11,
	XML_WITH_HTML = 12,
	XML_WITH_LEGACY = 13,
	XML_WITH_C14N = 14,
	XML_WITH_CATALOG = 15,
	XML_WITH_XPATH = 16,
	XML_WITH_XPTR = 17,
	XML_WITH_XINCLUDE = 18,
	XML_WITH_ICONV = 19,
	XML_WITH_ISO8859X = 20,
	XML_WITH_UNICODE = 21,
	XML_WITH_REGEXP = 22,
	XML_WITH_AUTOMATA = 23,
	XML_WITH_EXPR = 24,
	XML_WITH_SCHEMAS = 25,
	XML_WITH_SCHEMATRON = 26,
	XML_WITH_MODULES = 27,
	XML_WITH_DEBUG = 28,
	XML_WITH_DEBUG_MEM = 29,
	XML_WITH_DEBUG_RUN = 30,
	XML_WITH_NONE = 99999
    } xmlFeature;

    typedef enum {
	XML_PARSE_RECOVER = 1 << 0,
	XML_PARSE_NOENT = 1 << 1,
	XML_PARSE_DTDLOAD = 1 << 2,
	XML_PARSE_DTDATTR = 1 << 3,
	XML_PARSE_DTDVALID = 1 << 4,
	XML_PARSE_NOERROR = 1 << 5,
	XML_PARSE_NOWARNING = 1 << 6,
	XML_PARSE_PEDANTIC = 1 << 7,
	XML_PARSE_NOBLANKS = 1 << 8,
	XML_PARSE_SAX1 = 1 << 9,
	XML_PARSE_XINCLUDE = 1 << 10,
	XML_PARSE_NONET = 1 << 11,
	XML_PARSE_NODICT = 1 << 12,
	XML_PARSE_NSCLEAN = 1 << 13,
	XML_PARSE_NOCDATA = 1 << 14,
	XML_PARSE_NOXINCNODE = 1 << 15,
	XML_PARSE_COMPACT = 1 << 16
    } xmlParserOption;


    extern xmlDocPtr xmlSAXParseMemory(xmlSAXHandlerPtr, const char *, int,
				       int);
    extern void xmlStopParser(xmlParserCtxtPtr);
    extern int xmlInitParserCtxt(xmlParserCtxtPtr);
    extern void xmlFreeParserCtxt(xmlParserCtxtPtr);
    extern void xmlInitNodeInfoSeq(xmlParserNodeInfoSeqPtr);
    extern const xmlParserNodeInfo *xmlParserFindNodeInfo(const
							  xmlParserCtxtPtr,
							  const
							  xmlNodePtr);
    extern xmlDocPtr xmlRecoverFile(const char *);
    extern xmlDocPtr xmlParseDoc(const xmlChar *);
    extern int xmlParseCtxtExternalEntity(xmlParserCtxtPtr,
					  const xmlChar *, const xmlChar *,
					  xmlNodePtr *);
    extern xmlParserCtxtPtr xmlCreatePushParserCtxt(xmlSAXHandlerPtr,
						    void *, const char *,
						    int, const char *);
    extern int xmlSubstituteEntitiesDefault(int);
    extern int xmlLineNumbersDefault(int);
    extern xmlParserErrors xmlParseInNodeContext(xmlNodePtr, const char *,
						 int, int, xmlNodePtr *);
    extern void xmlCleanupParser(void);
    extern long unsigned int xmlParserFindNodeInfoIndex(const
							xmlParserNodeInfoSeqPtr,
							const xmlNodePtr);
    extern xmlDocPtr xmlReadFd(int, const char *, const char *, int);
    extern xmlDocPtr xmlCtxtReadFile(xmlParserCtxtPtr, const char *,
				     const char *, int);
    extern int xmlCtxtResetPush(xmlParserCtxtPtr, const char *, int,
				const char *, const char *);
    extern void xmlClearNodeInfoSeq(xmlParserNodeInfoSeqPtr);
    extern int xmlParserInputRead(xmlParserInputPtr, int);
    extern xmlExternalEntityLoader xmlGetExternalEntityLoader(void);
    extern void xmlCtxtReset(xmlParserCtxtPtr);
    extern int xmlSAXUserParseMemory(xmlSAXHandlerPtr, void *,
				     const char *, int);
    extern xmlDocPtr xmlReadIO(xmlInputReadCallback, xmlInputCloseCallback,
			       void *, const char *, const char *, int);
    extern int xmlParserInputGrow(xmlParserInputPtr, int);
    extern xmlDtdPtr xmlSAXParseDTD(xmlSAXHandlerPtr, const xmlChar *,
				    const xmlChar *);
    extern int xmlParseChunk(xmlParserCtxtPtr, const char *, int, int);
    extern int xmlParseExternalEntity(xmlDocPtr, xmlSAXHandlerPtr, void *,
				      int, const xmlChar *,
				      const xmlChar *, xmlNodePtr *);
    extern xmlParserCtxtPtr xmlCreateDocParserCtxt(const xmlChar *);
    extern xmlDocPtr xmlRecoverDoc(xmlChar *);
    extern xmlDocPtr xmlRecoverMemory(const char *, int);
    extern int xmlParseBalancedChunkMemory(xmlDocPtr, xmlSAXHandlerPtr,
					   void *, int, const xmlChar *,
					   xmlNodePtr *);
    extern xmlDocPtr xmlSAXParseMemoryWithData(xmlSAXHandlerPtr,
					       const char *, int, int,
					       void *);
    extern xmlDocPtr xmlCtxtReadDoc(xmlParserCtxtPtr, const xmlChar *,
				    const char *, const char *, int);
    extern int xmlParseDocument(xmlParserCtxtPtr);
    extern xmlDocPtr xmlReadMemory(const char *, int, const char *,
				   const char *, int);
    extern xmlDocPtr xmlReadDoc(const xmlChar *, const char *,
				const char *, int);
    extern xmlParserInputPtr xmlNewIOInputStream(xmlParserCtxtPtr,
						 xmlParserInputBufferPtr,
						 xmlCharEncoding);
    extern xmlDocPtr xmlSAXParseFile(xmlSAXHandlerPtr, const char *, int);
    extern xmlDocPtr xmlParseFile(const char *);
    extern int xmlParseExtParsedEnt(xmlParserCtxtPtr);
    extern xmlDtdPtr xmlIOParseDTD(xmlSAXHandlerPtr,
				   xmlParserInputBufferPtr,
				   xmlCharEncoding);
    extern int xmlPedanticParserDefault(int);
    extern void xmlClearParserCtxt(xmlParserCtxtPtr);
    extern xmlDocPtr xmlSAXParseEntity(xmlSAXHandlerPtr, const char *);
    extern xmlDocPtr xmlSAXParseDoc(xmlSAXHandlerPtr, const xmlChar *,
				    int);
    extern xmlDocPtr xmlSAXParseFileWithData(xmlSAXHandlerPtr,
					     const char *, int, void *);
    extern xmlParserCtxtPtr xmlCreateIOParserCtxt(xmlSAXHandlerPtr, void *,
						  xmlInputReadCallback,
						  xmlInputCloseCallback,
						  void *, xmlCharEncoding);
    extern xmlParserInputPtr xmlLoadExternalEntity(const char *,
						   const char *,
						   xmlParserCtxtPtr);
    extern int xmlSAXUserParseFile(xmlSAXHandlerPtr, void *, const char *);
    extern xmlDocPtr xmlParseMemory(const char *, int);
    extern xmlDocPtr xmlReadFile(const char *, const char *, int);
    extern xmlDocPtr xmlCtxtReadFd(xmlParserCtxtPtr, int, const char *,
				   const char *, int);
    extern void xmlInitParser(void);
    extern int xmlCtxtUseOptions(xmlParserCtxtPtr, int);
    extern xmlDocPtr xmlParseEntity(const char *);
    extern xmlDocPtr xmlCtxtReadMemory(xmlParserCtxtPtr, const char *, int,
				       const char *, const char *, int);
    extern long int xmlByteConsumed(xmlParserCtxtPtr);
    extern void xmlParserAddNodeInfo(xmlParserCtxtPtr,
				     const xmlParserNodeInfoPtr);
    extern int xmlParseBalancedChunkMemoryRecover(xmlDocPtr,
						  xmlSAXHandlerPtr, void *,
						  int, const xmlChar *,
						  xmlNodePtr *, int);
    extern void xmlSetupParserForBuffer(xmlParserCtxtPtr, const xmlChar *,
					const char *);
    extern xmlParserCtxtPtr xmlNewParserCtxt(void);
    extern xmlDtdPtr xmlParseDTD(const xmlChar *, const xmlChar *);
    extern int xmlHasFeature(xmlFeature);
    extern xmlDocPtr xmlCtxtReadIO(xmlParserCtxtPtr, xmlInputReadCallback,
				   xmlInputCloseCallback, void *,
				   const char *, const char *, int);
    extern void xmlSetExternalEntityLoader(xmlExternalEntityLoader);
    extern int xmlKeepBlanksDefault(int);
#ifdef __cplusplus
}
#endif
#endif
