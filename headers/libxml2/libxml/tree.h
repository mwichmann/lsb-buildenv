#ifndef _LIBXML2_LIBXML_TREE_H_
#define _LIBXML2_LIBXML_TREE_H_

#include <iconv.h>
#include <stdio.h>
#include <stddef.h>
#include <libxml2/libxml/xmlstring.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XML_GET_CONTENT(n)	 \
	((n)->type == XML_ELEMENT_NODE ? NULL : (n)->content)
#define XML_XML_NAMESPACE	 \
	(const xmlChar *) "http://www.w3.org/XML/1998/namespace"
#define XML_XML_ID	(const xmlChar *) "xml:id"
#define XML_GET_LINE(n)	(xmlGetLineNo(n))
#define BASE_BUFFER_SIZE	4096
#define xmlChildrenNode	children
#define xmlRootNode	children
#define XML_LOCAL_NAMESPACE	XML_NAMESPACE_DECL


    typedef enum {
	XML_BUFFER_ALLOC_DOUBLEIT = 0,
	XML_BUFFER_ALLOC_EXACT = 1,
	XML_BUFFER_ALLOC_IMMUTABLE = 2
    } xmlBufferAllocationScheme;

    typedef struct _xmlBuffer xmlBuffer;

    typedef xmlBuffer *xmlBufferPtr;

    typedef enum {
	XML_ELEMENT_NODE = 1,
	XML_ATTRIBUTE_NODE = 2,
	XML_TEXT_NODE = 3,
	XML_CDATA_SECTION_NODE = 4,
	XML_ENTITY_REF_NODE = 5,
	XML_ENTITY_NODE = 6,
	XML_PI_NODE = 7,
	XML_COMMENT_NODE = 8,
	XML_DOCUMENT_NODE = 9,
	XML_DOCUMENT_TYPE_NODE = 10,
	XML_DOCUMENT_FRAG_NODE = 11,
	XML_NOTATION_NODE = 12,
	XML_HTML_DOCUMENT_NODE = 13,
	XML_DTD_NODE = 14,
	XML_ELEMENT_DECL = 15,
	XML_ATTRIBUTE_DECL = 16,
	XML_ENTITY_DECL = 17,
	XML_NAMESPACE_DECL = 18,
	XML_XINCLUDE_START = 19,
	XML_XINCLUDE_END = 20,
	XML_DOCB_DOCUMENT_NODE = 21
    } xmlElementType;

    typedef xmlElementType xmlNsType;

    typedef struct _xmlNs xmlNs;

    typedef enum {
	XML_ATTRIBUTE_CDATA = 1,
	XML_ATTRIBUTE_ID = 2,
	XML_ATTRIBUTE_IDREF = 3,
	XML_ATTRIBUTE_IDREFS = 4,
	XML_ATTRIBUTE_ENTITY = 5,
	XML_ATTRIBUTE_ENTITIES = 6,
	XML_ATTRIBUTE_NMTOKEN = 7,
	XML_ATTRIBUTE_NMTOKENS = 8,
	XML_ATTRIBUTE_ENUMERATION = 9,
	XML_ATTRIBUTE_NOTATION = 10
    } xmlAttributeType;

    typedef struct _xmlNode xmlNode;

    typedef xmlNode *xmlNodePtr;

    typedef struct _xmlDoc xmlDoc;

    typedef xmlDoc *xmlDocPtr;

    typedef xmlNs *xmlNsPtr;

    typedef struct _xmlDtd xmlDtd;

    typedef xmlDtd *xmlDtdPtr;

    typedef struct _xmlDOMWrapCtxt xmlDOMWrapCtxt;

    typedef xmlDOMWrapCtxt *xmlDOMWrapCtxtPtr;

    typedef struct _xmlAttr xmlAttr;

    typedef xmlAttr *xmlAttrPtr;

    typedef int (*xmlOutputWriteCallback) (void *, const char *, int);

    typedef int (*xmlOutputCloseCallback) (void *);

    typedef int (*xmlCharEncodingInputFunc) (unsigned char *, int *,
					     const unsigned char *, int *);

    typedef int (*xmlCharEncodingOutputFunc) (unsigned char *, int *,
					      const unsigned char *,
					      int *);

    typedef struct _xmlCharEncodingHandler xmlCharEncodingHandler;

    typedef xmlCharEncodingHandler *xmlCharEncodingHandlerPtr;

    typedef struct _xmlOutputBuffer xmlOutputBuffer;

    typedef xmlOutputBuffer *xmlOutputBufferPtr;


    struct _xmlBuffer {
	xmlChar *content;
	unsigned int use;
	unsigned int size;
	xmlBufferAllocationScheme alloc;
    };


    struct _xmlNs {
	struct _xmlNs *next;
	xmlNsType type;
	const xmlChar *href;
	const xmlChar *prefix;
	void *_private;
    };


    struct _xmlNode {
	void *_private;
	xmlElementType type;
	const xmlChar *name;
	struct _xmlNode *children;
	struct _xmlNode *last;
	struct _xmlNode *parent;
	struct _xmlNode *next;
	struct _xmlNode *prev;
	struct _xmlDoc *doc;
	xmlNs *ns;
	xmlChar *content;
	struct _xmlAttr *properties;
	xmlNs *nsDef;
	void *psvi;
	unsigned short line;
	unsigned short extra;
    };


    struct _xmlDoc {
	void *_private;
	xmlElementType type;
	char *name;
	struct _xmlNode *children;
	struct _xmlNode *last;
	struct _xmlNode *parent;
	struct _xmlNode *next;
	struct _xmlNode *prev;
	struct _xmlDoc *doc;
	int compression;
	int standalone;
	struct _xmlDtd *intSubset;
	struct _xmlDtd *extSubset;
	struct _xmlNs *oldNs;
	const xmlChar *version;
	const xmlChar *encoding;
	void *ids;
	void *refs;
	const xmlChar *URL;
	int charset;
	struct _xmlDict *dict;
	void *psvi;
    };


    struct _xmlDtd {
	void *_private;
	xmlElementType type;
	const xmlChar *name;
	struct _xmlNode *children;
	struct _xmlNode *last;
	struct _xmlDoc *parent;
	struct _xmlNode *next;
	struct _xmlNode *prev;
	struct _xmlDoc *doc;
	void *notations;
	void *elements;
	void *attributes;
	void *entities;
	const xmlChar *ExternalID;
	const xmlChar *SystemID;
	void *pentities;
    };


    struct _xmlDOMWrapCtxt {
	void *_private;
    };


    struct _xmlAttr {
	void *_private;
	xmlElementType type;
	const xmlChar *name;
	struct _xmlNode *children;
	struct _xmlNode *last;
	struct _xmlNode *parent;
	struct _xmlAttr *next;
	struct _xmlAttr *prev;
	struct _xmlDoc *doc;
	xmlNs *ns;
	xmlAttributeType atype;
	void *psvi;
    };


    struct _xmlCharEncodingHandler {
	char *name;
	xmlCharEncodingInputFunc input;
	xmlCharEncodingOutputFunc output;
	iconv_t iconv_in;
	iconv_t iconv_out;
    };


    struct _xmlOutputBuffer {
	void *context;
	xmlOutputWriteCallback writecallback;
	xmlOutputCloseCallback closecallback;
	xmlCharEncodingHandlerPtr encoder;
	xmlBufferPtr buffer;
	xmlBufferPtr conv;
	int written;
	int error;
    };


    extern const xmlChar *xmlBufferContent(const xmlBufferPtr);
    extern void xmlSetBufferAllocationScheme(xmlBufferAllocationScheme);
    extern xmlNodePtr xmlDocSetRootElement(xmlDocPtr, xmlNodePtr);
    extern xmlNsPtr xmlNewNs(xmlNodePtr, const xmlChar *, const xmlChar *);
    extern xmlChar *xmlGetNsProp(xmlNodePtr, const xmlChar *,
				 const xmlChar *);
    extern int xmlSaveFile(const char *, xmlDocPtr);
    extern int xmlNodeDump(xmlBufferPtr, xmlDocPtr, xmlNodePtr, int, int);
    extern void xmlSetTreeDoc(xmlNodePtr, xmlDocPtr);
    extern void xmlUnlinkNode(xmlNodePtr);
    extern xmlChar *xmlSplitQName2(const xmlChar *, xmlChar * *);
    extern void xmlFreeDtd(xmlDtdPtr);
    extern const xmlChar *xmlSplitQName3(const xmlChar *, int *);
    extern void xmlDOMWrapFreeCtxt(xmlDOMWrapCtxtPtr);
    extern int xmlGetCompressMode(void);
    extern xmlNodePtr xmlDocCopyNodeList(xmlDocPtr, const xmlNodePtr);
    extern xmlNodePtr xmlNewDocNodeEatName(xmlDocPtr, xmlNsPtr, xmlChar *,
					   const xmlChar *);
    extern xmlNodePtr xmlStringGetNodeList(xmlDocPtr, const xmlChar *);
    extern xmlNodePtr xmlNewDocPI(xmlDocPtr, const xmlChar *,
				  const xmlChar *);
    extern int xmlUnsetNsProp(xmlNodePtr, xmlNsPtr, const xmlChar *);
    extern void xmlSetCompressMode(int);
    extern void xmlSetDocCompressMode(xmlDocPtr, int);
    extern xmlNodePtr xmlNewText(const xmlChar *);
    extern xmlNodePtr xmlDocGetRootElement(xmlDocPtr);
    extern int xmlValidateName(const xmlChar *, int);
    extern void xmlAttrSerializeTxtContent(xmlBufferPtr, xmlDocPtr,
					   xmlAttrPtr, const xmlChar *);
    extern long int xmlGetLineNo(xmlNodePtr);
    extern int xmlNodeBufGetContent(xmlBufferPtr, xmlNodePtr);
    extern xmlAttrPtr xmlHasProp(xmlNodePtr, const xmlChar *);
    extern xmlNodePtr xmlNewReference(xmlDocPtr, const xmlChar *);
    extern void xmlNodeSetContentLen(xmlNodePtr, const xmlChar *, int);
    extern void xmlFreeNsList(xmlNsPtr);
    extern int xmlSaveFormatFileEnc(const char *, xmlDocPtr, const char *,
				    int);
    extern void xmlFreeDoc(xmlDocPtr);
    extern xmlNodePtr xmlNewDocFragment(xmlDocPtr);
    extern xmlNodePtr xmlNewCharRef(xmlDocPtr, const xmlChar *);
    extern int xmlTextConcat(xmlNodePtr, const xmlChar *, int);
    extern void xmlBufferEmpty(xmlBufferPtr);
    extern int xmlNodeGetSpacePreserve(xmlNodePtr);
    extern int xmlBufferCCat(xmlBufferPtr, const char *);
    extern int xmlSaveFormatFileTo(xmlOutputBufferPtr, xmlDocPtr,
				   const char *, int);
    extern xmlBufferPtr xmlBufferCreate(void);
    extern xmlChar *xmlNodeGetBase(xmlDocPtr, xmlNodePtr);
    extern xmlChar *xmlGetNoNsProp(xmlNodePtr, const xmlChar *);
    extern xmlDOMWrapCtxtPtr xmlDOMWrapNewCtxt(void);
    extern void xmlBufferWriteQuotedString(xmlBufferPtr, const xmlChar *);
    extern xmlAttrPtr xmlNewDocProp(xmlDocPtr, const xmlChar *,
				    const xmlChar *);
    extern int xmlBufferAddHead(xmlBufferPtr, const xmlChar *, int);
    extern xmlNodePtr xmlNewTextLen(const xmlChar *, int);
    extern int xmlUnsetProp(xmlNodePtr, const xmlChar *);
    extern xmlNsPtr *xmlGetNsList(xmlDocPtr, xmlNodePtr);
    extern void xmlDocDumpMemory(xmlDocPtr, xmlChar * *, int *);
    extern int xmlSaveFileEnc(const char *, xmlDocPtr, const char *);
    extern xmlNodePtr xmlNewPI(const xmlChar *, const xmlChar *);
    extern xmlDocPtr xmlNewDoc(const xmlChar *);
    extern xmlChar *xmlNodeListGetString(xmlDocPtr, xmlNodePtr, int);
    extern xmlChar *xmlNodeListGetRawString(xmlDocPtr, xmlNodePtr, int);
    extern void xmlFreePropList(xmlAttrPtr);
    extern void xmlBufferWriteCHAR(xmlBufferPtr, const xmlChar *);
    extern xmlNodePtr xmlNewDocNode(xmlDocPtr, xmlNsPtr, const xmlChar *,
				    const xmlChar *);
    extern int xmlRemoveProp(xmlAttrPtr);
    extern int xmlBufferShrink(xmlBufferPtr, unsigned int);
    extern xmlNodePtr xmlStringLenGetNodeList(xmlDocPtr, const xmlChar *,
					      int);
    extern xmlNodePtr xmlTextMerge(xmlNodePtr, xmlNodePtr);
    extern void xmlFreeNs(xmlNsPtr);
    extern xmlNodePtr xmlNewTextChild(xmlNodePtr, xmlNsPtr,
				      const xmlChar *, const xmlChar *);
    extern xmlNsPtr xmlCopyNamespaceList(xmlNsPtr);
    extern void xmlBufferWriteChar(xmlBufferPtr, const char *);
    extern xmlChar *xmlNodeGetContent(xmlNodePtr);
    extern xmlNodePtr xmlCopyNodeList(const xmlNodePtr);
    extern xmlChar *xmlNodeGetLang(xmlNodePtr);
    extern int xmlValidateNMToken(const xmlChar *, int);
    extern xmlBufferPtr xmlBufferCreateStatic(void *, size_t);
    extern int xmlBufferGrow(xmlBufferPtr, unsigned int);
    extern xmlNodePtr xmlAddPrevSibling(xmlNodePtr, xmlNodePtr);
    extern int xmlReconciliateNs(xmlDocPtr, xmlNodePtr);
    extern int xmlValidateQName(const xmlChar *, int);
    extern int xmlValidateNCName(const xmlChar *, int);
    extern void xmlNodeDumpOutput(xmlOutputBufferPtr, xmlDocPtr,
				  xmlNodePtr, int, int, const char *);
    extern xmlDtdPtr xmlGetIntSubset(xmlDocPtr);
    extern xmlAttrPtr xmlNewNsProp(xmlNodePtr, xmlNsPtr, const xmlChar *,
				   const xmlChar *);
    extern xmlNodePtr xmlNewComment(const xmlChar *);
    extern int xmlGetDocCompressMode(xmlDocPtr);
    extern xmlAttrPtr xmlSetProp(xmlNodePtr, const xmlChar *,
				 const xmlChar *);
    extern xmlBufferAllocationScheme xmlGetBufferAllocationScheme(void);
    extern xmlNodePtr xmlNewCDataBlock(xmlDocPtr, const xmlChar *, int);
    extern void xmlNodeSetContent(xmlNodePtr, const xmlChar *);
    extern void xmlFreeProp(xmlAttrPtr);
    extern xmlNodePtr xmlNewDocRawNode(xmlDocPtr, xmlNsPtr,
				       const xmlChar *, const xmlChar *);
    extern xmlAttrPtr xmlNewProp(xmlNodePtr, const xmlChar *,
				 const xmlChar *);
    extern int xmlBufferDump(FILE *, xmlBufferPtr);
    extern xmlNodePtr xmlNewDocTextLen(xmlDocPtr, const xmlChar *, int);
    extern xmlDtdPtr xmlCopyDtd(xmlDtdPtr);
    extern xmlBufferPtr xmlBufferCreateSize(size_t);
    extern void xmlNodeSetBase(xmlNodePtr, const xmlChar *);
    extern xmlNodePtr xmlReplaceNode(xmlNodePtr, xmlNodePtr);
    extern int xmlSaveFileTo(xmlOutputBufferPtr, xmlDocPtr, const char *);
    extern xmlAttrPtr xmlNewNsPropEatName(xmlNodePtr, xmlNsPtr, xmlChar *,
					  const xmlChar *);
    extern xmlChar *xmlBuildQName(const xmlChar *, const xmlChar *,
				  xmlChar *, int);
    extern int xmlBufferResize(xmlBufferPtr, unsigned int);
    extern void xmlNodeAddContentLen(xmlNodePtr, const xmlChar *, int);
    extern void xmlSetNs(xmlNodePtr, xmlNsPtr);
    extern xmlDtdPtr xmlCreateIntSubset(xmlDocPtr, const xmlChar *,
					const xmlChar *, const xmlChar *);
    extern void xmlDocDumpFormatMemory(xmlDocPtr, xmlChar * *, int *, int);
    extern int xmlBufferLength(const xmlBufferPtr);
    extern void xmlBufferSetAllocationScheme(xmlBufferPtr,
					     xmlBufferAllocationScheme);
    extern int xmlBufferAdd(xmlBufferPtr, const xmlChar *, int);
    extern xmlNodePtr xmlNewDocComment(xmlDocPtr, const xmlChar *);
    extern xmlNsPtr xmlSearchNsByHref(xmlDocPtr, xmlNodePtr,
				      const xmlChar *);
    extern int xmlBufferCat(xmlBufferPtr, const xmlChar *);
    extern xmlNodePtr xmlNewNode(xmlNsPtr, const xmlChar *);
    extern int xmlNodeIsText(xmlNodePtr);
    extern xmlNodePtr xmlDocCopyNode(const xmlNodePtr, xmlDocPtr, int);
    extern int xmlDocFormatDump(FILE *, xmlDocPtr, int);
    extern xmlNodePtr xmlCopyNode(const xmlNodePtr, int);
    extern int xmlIsBlankNode(xmlNodePtr);
    extern xmlNodePtr xmlAddChild(xmlNodePtr, xmlNodePtr);
    extern xmlAttrPtr xmlCopyPropList(xmlNodePtr, xmlAttrPtr);
    extern int xmlDocDump(FILE *, xmlDocPtr);
    extern void xmlBufferFree(xmlBufferPtr);
    extern void xmlElemDump(FILE *, xmlDocPtr, xmlNodePtr);
    extern xmlAttrPtr xmlCopyProp(xmlNodePtr, xmlAttrPtr);
    extern xmlNodePtr xmlAddSibling(xmlNodePtr, xmlNodePtr);
    extern void xmlNodeSetSpacePreserve(xmlNodePtr, int);
    extern int xmlIsXHTML(const xmlChar *, const xmlChar *);
    extern xmlChar *xmlGetProp(xmlNodePtr, const xmlChar *);
    extern xmlNodePtr xmlGetLastChild(xmlNodePtr);
    extern int xmlSaveFormatFile(const char *, xmlDocPtr, int);
    extern void xmlSetListDoc(xmlNodePtr, xmlDocPtr);
    extern xmlNodePtr xmlNewDocText(xmlDocPtr, const xmlChar *);
    extern void xmlDocDumpMemoryEnc(xmlDocPtr, xmlChar * *, int *,
				    const char *);
    extern void xmlNodeAddContent(xmlNodePtr, const xmlChar *);
    extern xmlDocPtr xmlCopyDoc(xmlDocPtr, int);
    extern xmlNodePtr xmlNewChild(xmlNodePtr, xmlNsPtr, const xmlChar *,
				  const xmlChar *);
    extern xmlNsPtr xmlCopyNamespace(xmlNsPtr);
    extern xmlChar *xmlGetNodePath(xmlNodePtr);
    extern void xmlFreeNode(xmlNodePtr);
    extern void xmlDocDumpFormatMemoryEnc(xmlDocPtr, xmlChar * *, int *,
					  const char *, int);
    extern xmlNsPtr xmlSearchNs(xmlDocPtr, xmlNodePtr, const xmlChar *);
    extern void xmlNodeSetLang(xmlNodePtr, const xmlChar *);
    extern xmlNodePtr xmlAddChildList(xmlNodePtr, xmlNodePtr);
    extern void xmlNodeSetName(xmlNodePtr, const xmlChar *);
    extern xmlDtdPtr xmlNewDtd(xmlDocPtr, const xmlChar *, const xmlChar *,
			       const xmlChar *);
    extern xmlAttrPtr xmlSetNsProp(xmlNodePtr, xmlNsPtr, const xmlChar *,
				   const xmlChar *);
    extern xmlNodePtr xmlNewNodeEatName(xmlNsPtr, xmlChar *);
    extern xmlAttrPtr xmlHasNsProp(xmlNodePtr, const xmlChar *,
				   const xmlChar *);
    extern void xmlFreeNodeList(xmlNodePtr);
    extern xmlNodePtr xmlAddNextSibling(xmlNodePtr, xmlNodePtr);
#ifdef __cplusplus
}
#endif
#endif
