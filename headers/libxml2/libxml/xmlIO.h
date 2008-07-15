#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLIO_H_
#define _LIBXML2_LIBXML_XMLIO_H_

#include <iconv.h>
#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xmlmemory.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/xmlautomata.h>
#include <libxml2/libxml/entities.h>
#include <libxml2/libxml/encoding.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/SAX2.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef int (*xmlOutputMatchCallback) (const char *);

    typedef void *(*xmlOutputOpenCallback) (const char *);

    typedef struct _xmlParserNodeInfo xmlParserNodeInfo;

    typedef struct _xmlParserNodeInfoSeq xmlParserNodeInfoSeq;

    typedef void (*xmlValidityErrorFunc) (void *, const char *, ...);

    typedef void (*xmlValidityWarningFunc) (void *, const char *, ...);

    typedef struct _xmlValidState xmlValidState;

    typedef struct _xmlValidCtxt xmlValidCtxt;

    typedef enum {
	XML_PARSER_EOF = -1,
	XML_PARSER_START = 0,
	XML_PARSER_MISC = 1,
	XML_PARSER_PI = 2,
	XML_PARSER_DTD = 3,
	XML_PARSER_PROLOG = 4,
	XML_PARSER_COMMENT = 5,
	XML_PARSER_START_TAG = 6,
	XML_PARSER_CONTENT = 7,
	XML_PARSER_CDATA_SECTION = 8,
	XML_PARSER_END_TAG = 9,
	XML_PARSER_ENTITY_DECL = 10,
	XML_PARSER_ENTITY_VALUE = 11,
	XML_PARSER_ATTRIBUTE_VALUE = 12,
	XML_PARSER_SYSTEM_LITERAL = 13,
	XML_PARSER_EPILOG = 14,
	XML_PARSER_IGNORE = 15,
	XML_PARSER_PUBLIC_LITERAL = 16
    } xmlParserInputState;

    typedef enum {
	XML_PARSE_UNKNOWN = 0,
	XML_PARSE_DOM = 1,
	XML_PARSE_SAX = 2,
	XML_PARSE_PUSH_DOM = 3,
	XML_PARSE_PUSH_SAX = 4,
	XML_PARSE_READER = 5
    } xmlParserMode;

    typedef struct _xmlParserCtxt xmlParserCtxt;

    typedef xmlParserCtxt *xmlParserCtxtPtr;

    typedef int (*xmlInputMatchCallback) (const char *);

    typedef void *(*xmlInputOpenCallback) (const char *);


    struct _xmlParserNodeInfo {
	const struct _xmlNode *node;
	long unsigned int begin_pos;
	long unsigned int begin_line;
	long unsigned int end_pos;
	long unsigned int end_line;
    };


    struct _xmlParserNodeInfoSeq {
	long unsigned int maximum;
	long unsigned int length;
	xmlParserNodeInfo *buffer;
    };




    struct _xmlValidCtxt {
	void *userData;
	xmlValidityErrorFunc error;
	xmlValidityWarningFunc warning;
	xmlNodePtr node;
	int nodeNr;
	int nodeMax;
	xmlNodePtr *nodeTab;
	unsigned int finishDtd;
	xmlDocPtr doc;
	int valid;
	xmlValidState *vstate;
	int vstateNr;
	int vstateMax;
	xmlValidState *vstateTab;
	xmlAutomataPtr am;
	xmlAutomataStatePtr state;
    };


    struct _xmlParserCtxt {
	struct _xmlSAXHandler *sax;
	void *userData;
	xmlDocPtr myDoc;
	int wellFormed;
	int replaceEntities;
	const xmlChar *version;
	const xmlChar *encoding;
	int standalone;
	int html;
	xmlParserInputPtr input;
	int inputNr;
	int inputMax;
	xmlParserInputPtr *inputTab;
	xmlNodePtr node;
	int nodeNr;
	int nodeMax;
	xmlNodePtr *nodeTab;
	int record_info;
	xmlParserNodeInfoSeq node_seq;
	int errNo;
	int hasExternalSubset;
	int hasPErefs;
	int external;
	int valid;
	int validate;
	xmlValidCtxt vctxt;
	xmlParserInputState instate;
	int token;
	char *directory;
	const xmlChar *name;
	int nameNr;
	int nameMax;
	const xmlChar **nameTab;
	long int nbChars;
	long int checkIndex;
	int keepBlanks;
	int disableSAX;
	int inSubset;
	const xmlChar *intSubName;
	xmlChar *extSubURI;
	xmlChar *extSubSystem;
	int *space;
	int spaceNr;
	int spaceMax;
	int *spaceTab;
	int depth;
	xmlParserInputPtr entity;
	int charset;
	int nodelen;
	int nodemem;
	int pedantic;
	void *_private;
	int loadsubset;
	int linenumbers;
	void *catalogs;
	int recovery;
	int progressive;
	xmlDictPtr dict;
	const xmlChar **atts;
	int maxatts;
	int docdict;
	const xmlChar *str_xml;
	const xmlChar *str_xmlns;
	const xmlChar *str_xml_ns;
	int sax2;
	int nsNr;
	int nsMax;
	const xmlChar **nsTab;
	int *attallocs;
	void **pushTab;
	xmlHashTablePtr attsDefault;
	xmlHashTablePtr attsSpecial;
	int nsWellFormed;
	int options;
	int dictNames;
	int freeElemsNr;
	xmlNodePtr freeElems;
	int freeAttrsNr;
	xmlAttrPtr freeAttrs;
	xmlError lastError;
	xmlParserMode parseMode;
    };


/* Function prototypes */

    extern xmlOutputBufferPtr
	xmlAllocOutputBuffer(xmlCharEncodingHandlerPtr);
    extern xmlParserInputBufferPtr
	xmlAllocParserInputBuffer(xmlCharEncoding);
    extern int xmlCheckFilename(const char *);
    extern xmlParserInputPtr xmlCheckHTTPInput(xmlParserCtxtPtr,
					       xmlParserInputPtr);
    extern void xmlCleanupInputCallbacks(void);
    extern void xmlCleanupOutputCallbacks(void);
    extern int xmlFileClose(void *);
    extern int xmlFileMatch(const char *);
    extern void *xmlFileOpen(const char *);
    extern int xmlFileRead(void *, char *, int);
    extern void xmlFreeParserInputBuffer(xmlParserInputBufferPtr);
    extern int xmlIOFTPClose(void *);
    extern int xmlIOFTPMatch(const char *);
    extern void *xmlIOFTPOpen(const char *);
    extern int xmlIOFTPRead(void *, char *, int);
    extern int xmlIOHTTPClose(void *);
    extern int xmlIOHTTPMatch(const char *);
    extern void *xmlIOHTTPOpen(const char *);
    extern void *xmlIOHTTPOpenW(const char *, int);
    extern int xmlIOHTTPRead(void *, char *, int);
    extern xmlParserInputPtr xmlNoNetExternalEntityLoader(const char *,
							  const char *,
							  xmlParserCtxtPtr);
    extern xmlChar *xmlNormalizeWindowsPath(const xmlChar *);
    extern int xmlOutputBufferClose(xmlOutputBufferPtr);
    extern xmlOutputBufferPtr xmlOutputBufferCreateFd(int,
						      xmlCharEncodingHandlerPtr);
    extern xmlOutputBufferPtr xmlOutputBufferCreateFile(FILE *,
							xmlCharEncodingHandlerPtr);
    extern xmlOutputBufferPtr xmlOutputBufferCreateFilename(const char *,
							    xmlCharEncodingHandlerPtr,
							    int);
    extern xmlOutputBufferPtr
	xmlOutputBufferCreateIO(xmlOutputWriteCallback,
				xmlOutputCloseCallback, void *,
				xmlCharEncodingHandlerPtr);
    extern int xmlOutputBufferFlush(xmlOutputBufferPtr);
    extern int xmlOutputBufferWrite(xmlOutputBufferPtr, int, const char *);
    extern int xmlOutputBufferWriteEscape(xmlOutputBufferPtr,
					  const xmlChar *,
					  xmlCharEncodingOutputFunc);
    extern int xmlOutputBufferWriteString(xmlOutputBufferPtr,
					  const char *);
    extern char *xmlParserGetDirectory(const char *);
    extern xmlParserInputBufferPtr xmlParserInputBufferCreateFd(int,
								xmlCharEncoding);
    extern xmlParserInputBufferPtr xmlParserInputBufferCreateFile(FILE *,
								  xmlCharEncoding);
    extern xmlParserInputBufferPtr
	xmlParserInputBufferCreateIO(xmlInputReadCallback,
				     xmlInputCloseCallback, void *,
				     xmlCharEncoding);
    extern xmlParserInputBufferPtr xmlParserInputBufferCreateMem(const char
								 *, int,
								 xmlCharEncoding);
    extern xmlParserInputBufferPtr xmlParserInputBufferCreateStatic(const
								    char *,
								    int,
								    xmlCharEncoding);
    extern int xmlParserInputBufferGrow(xmlParserInputBufferPtr, int);
    extern int xmlParserInputBufferPush(xmlParserInputBufferPtr, int,
					const char *);
    extern int xmlParserInputBufferRead(xmlParserInputBufferPtr, int);
    extern int xmlPopInputCallbacks(void);
    extern void xmlRegisterDefaultInputCallbacks(void);
    extern void xmlRegisterDefaultOutputCallbacks(void);
    extern void xmlRegisterHTTPPostCallbacks(void);
    extern int xmlRegisterInputCallbacks(xmlInputMatchCallback,
					 xmlInputOpenCallback,
					 xmlInputReadCallback,
					 xmlInputCloseCallback);
    extern int xmlRegisterOutputCallbacks(xmlOutputMatchCallback,
					  xmlOutputOpenCallback,
					  xmlOutputWriteCallback,
					  xmlOutputCloseCallback);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
