#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_PARSER_H_
#define _LIBXML2_LIBXML_PARSER_H_

#include <libxml2/libxml/xmlstring.h>
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


/* Function prototypes */

    extern long int xmlByteConsumed(xmlParserCtxtPtr ctxt);
    extern void xmlCleanupParser(void);
    extern void xmlClearNodeInfoSeq(xmlParserNodeInfoSeqPtr seq);
    extern void xmlClearParserCtxt(xmlParserCtxtPtr ctxt);
    extern xmlParserCtxtPtr xmlCreateDocParserCtxt(const xmlChar * cur);
    extern xmlParserCtxtPtr xmlCreateIOParserCtxt(xmlSAXHandlerPtr sax,
						  void *user_data,
						  xmlInputReadCallback
						  ioread,
						  xmlInputCloseCallback
						  ioclose, void *ioctx,
						  xmlCharEncoding enc);
    extern xmlParserCtxtPtr xmlCreatePushParserCtxt(xmlSAXHandlerPtr sax,
						    void *user_data,
						    const char *chunk,
						    int size,
						    const char *filename);
    extern xmlDocPtr xmlCtxtReadDoc(xmlParserCtxtPtr ctxt,
				    const xmlChar * cur, const char *URL,
				    const char *encoding, int options);
    extern xmlDocPtr xmlCtxtReadFd(xmlParserCtxtPtr ctxt, int fd,
				   const char *URL, const char *encoding,
				   int options);
    extern xmlDocPtr xmlCtxtReadFile(xmlParserCtxtPtr ctxt,
				     const char *filename,
				     const char *encoding, int options);
    extern xmlDocPtr xmlCtxtReadIO(xmlParserCtxtPtr ctxt,
				   xmlInputReadCallback ioread,
				   xmlInputCloseCallback ioclose,
				   void *ioctx, const char *URL,
				   const char *encoding, int options);
    extern xmlDocPtr xmlCtxtReadMemory(xmlParserCtxtPtr ctxt,
				       const char *buffer, int size,
				       const char *URL,
				       const char *encoding, int options);
    extern void xmlCtxtReset(xmlParserCtxtPtr ctxt);
    extern int xmlCtxtResetPush(xmlParserCtxtPtr ctxt, const char *chunk,
				int size, const char *filename,
				const char *encoding);
    extern int xmlCtxtUseOptions(xmlParserCtxtPtr ctxt, int options);
    extern void xmlFreeParserCtxt(xmlParserCtxtPtr ctxt);
    extern xmlExternalEntityLoader xmlGetExternalEntityLoader(void);
    extern int xmlHasFeature(xmlFeature feature);
    extern xmlDtdPtr xmlIOParseDTD(xmlSAXHandlerPtr sax,
				   xmlParserInputBufferPtr input,
				   xmlCharEncoding enc);
    extern void xmlInitNodeInfoSeq(xmlParserNodeInfoSeqPtr seq);
    extern void xmlInitParser(void);
    extern int xmlInitParserCtxt(xmlParserCtxtPtr ctxt);
    extern int xmlKeepBlanksDefault(int val);
    extern int xmlLineNumbersDefault(int val);
    extern xmlParserInputPtr xmlLoadExternalEntity(const char *URL,
						   const char *ID,
						   xmlParserCtxtPtr ctxt);
    extern xmlParserInputPtr xmlNewIOInputStream(xmlParserCtxtPtr ctxt,
						 xmlParserInputBufferPtr
						 input,
						 xmlCharEncoding enc);
    extern xmlParserCtxtPtr xmlNewParserCtxt(void);
    extern int xmlParseBalancedChunkMemory(xmlDocPtr doc,
					   xmlSAXHandlerPtr sax,
					   void *user_data, int depth,
					   const xmlChar * string,
					   xmlNodePtr * lst);
    extern int xmlParseBalancedChunkMemoryRecover(xmlDocPtr doc,
						  xmlSAXHandlerPtr sax,
						  void *user_data,
						  int depth,
						  const xmlChar * string,
						  xmlNodePtr * lst,
						  int recover);
    extern int xmlParseChunk(xmlParserCtxtPtr ctxt, const char *chunk,
			     int size, int terminate);
    extern int xmlParseCtxtExternalEntity(xmlParserCtxtPtr ctx,
					  const xmlChar * URL,
					  const xmlChar * ID,
					  xmlNodePtr * lst);
    extern xmlDtdPtr xmlParseDTD(const xmlChar * ExternalID,
				 const xmlChar * SystemID);
    extern xmlDocPtr xmlParseDoc(const xmlChar * cur);
    extern int xmlParseDocument(xmlParserCtxtPtr ctxt);
    extern xmlDocPtr xmlParseEntity(const char *filename);
    extern int xmlParseExtParsedEnt(xmlParserCtxtPtr ctxt);
    extern int xmlParseExternalEntity(xmlDocPtr doc, xmlSAXHandlerPtr sax,
				      void *user_data, int depth,
				      const xmlChar * URL,
				      const xmlChar * ID,
				      xmlNodePtr * lst);
    extern xmlDocPtr xmlParseFile(const char *filename);
    extern xmlParserErrors xmlParseInNodeContext(xmlNodePtr node,
						 const char *data,
						 int datalen, int options,
						 xmlNodePtr * lst);
    extern xmlDocPtr xmlParseMemory(const char *buffer, int size);
    extern void xmlParserAddNodeInfo(xmlParserCtxtPtr ctxt,
				     const xmlParserNodeInfoPtr info);
    extern const xmlParserNodeInfo *xmlParserFindNodeInfo(const
							  xmlParserCtxtPtr
							  ctxt,
							  const xmlNodePtr
							  node);
    extern long unsigned int xmlParserFindNodeInfoIndex(const
							xmlParserNodeInfoSeqPtr
							seq,
							const xmlNodePtr
							node);
    extern int xmlParserInputGrow(xmlParserInputPtr in, int len);
    extern int xmlParserInputRead(xmlParserInputPtr in, int len);
    extern int xmlPedanticParserDefault(int val);
    extern xmlDocPtr xmlReadDoc(const xmlChar * cur, const char *URL,
				const char *encoding, int options);
    extern xmlDocPtr xmlReadFd(int fd, const char *URL,
			       const char *encoding, int options);
    extern xmlDocPtr xmlReadFile(const char *URL, const char *encoding,
				 int options);
    extern xmlDocPtr xmlReadIO(xmlInputReadCallback ioread,
			       xmlInputCloseCallback ioclose, void *ioctx,
			       const char *URL, const char *encoding,
			       int options);
    extern xmlDocPtr xmlReadMemory(const char *buffer, int size,
				   const char *URL, const char *encoding,
				   int options);
    extern xmlDocPtr xmlRecoverDoc(const xmlChar * cur);
    extern xmlDocPtr xmlRecoverFile(const char *filename);
    extern xmlDocPtr xmlRecoverMemory(const char *buffer, int size);
    extern xmlDtdPtr xmlSAXParseDTD(xmlSAXHandlerPtr sax,
				    const xmlChar * ExternalID,
				    const xmlChar * SystemID);
    extern xmlDocPtr xmlSAXParseDoc(xmlSAXHandlerPtr sax,
				    const xmlChar * cur, int recovery);
    extern xmlDocPtr xmlSAXParseEntity(xmlSAXHandlerPtr sax,
				       const char *filename);
    extern xmlDocPtr xmlSAXParseFile(xmlSAXHandlerPtr sax,
				     const char *filename, int recovery);
    extern xmlDocPtr xmlSAXParseFileWithData(xmlSAXHandlerPtr sax,
					     const char *filename,
					     int recovery, void *data);
    extern xmlDocPtr xmlSAXParseMemory(xmlSAXHandlerPtr sax,
				       const char *buffer, int size,
				       int recovery);
    extern xmlDocPtr xmlSAXParseMemoryWithData(xmlSAXHandlerPtr sax,
					       const char *buffer,
					       int size, int recovery,
					       void *data);
    extern int xmlSAXUserParseFile(xmlSAXHandlerPtr sax, void *user_data,
				   const char *filename);
    extern int xmlSAXUserParseMemory(xmlSAXHandlerPtr sax, void *user_data,
				     const char *buffer, int size);
    extern void xmlSetExternalEntityLoader(xmlExternalEntityLoader f);
    extern void xmlSetupParserForBuffer(xmlParserCtxtPtr ctxt,
					const xmlChar * buffer,
					const char *filename);
    extern void xmlStopParser(xmlParserCtxtPtr ctxt);
    extern int xmlSubstituteEntitiesDefault(int val);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
