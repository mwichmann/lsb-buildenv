#if (__LSB_VERSION__ >= 31 )
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


/* Function prototypes */

    extern xmlNodePtr xmlAddChild(xmlNodePtr parent, xmlNodePtr cur);
    extern xmlNodePtr xmlAddChildList(xmlNodePtr parent, xmlNodePtr cur);
    extern xmlNodePtr xmlAddNextSibling(xmlNodePtr cur, xmlNodePtr elem);
    extern xmlNodePtr xmlAddPrevSibling(xmlNodePtr cur, xmlNodePtr elem);
    extern xmlNodePtr xmlAddSibling(xmlNodePtr cur, xmlNodePtr elem);
    extern void xmlAttrSerializeTxtContent(xmlBufferPtr buf, xmlDocPtr doc,
					   xmlAttrPtr attr,
					   const xmlChar * string);
    extern int xmlBufferAdd(xmlBufferPtr buf, const xmlChar * str,
			    int len);
    extern int xmlBufferAddHead(xmlBufferPtr buf, const xmlChar * str,
				int len);
    extern int xmlBufferCCat(xmlBufferPtr buf, const char *str);
    extern int xmlBufferCat(xmlBufferPtr buf, const xmlChar * str);
    extern const xmlChar *xmlBufferContent(const xmlBufferPtr buf);
    extern xmlBufferPtr xmlBufferCreate(void);
    extern xmlBufferPtr xmlBufferCreateSize(size_t size);
    extern xmlBufferPtr xmlBufferCreateStatic(void *mem, size_t size);
    extern int xmlBufferDump(FILE * file, xmlBufferPtr buf);
    extern void xmlBufferEmpty(xmlBufferPtr buf);
    extern void xmlBufferFree(xmlBufferPtr buf);
    extern int xmlBufferGrow(xmlBufferPtr buf, unsigned int len);
    extern int xmlBufferLength(const xmlBufferPtr buf);
    extern int xmlBufferResize(xmlBufferPtr buf, unsigned int size);
    extern void xmlBufferSetAllocationScheme(xmlBufferPtr buf,
					     xmlBufferAllocationScheme
					     scheme);
    extern int xmlBufferShrink(xmlBufferPtr buf, unsigned int len);
    extern void xmlBufferWriteCHAR(xmlBufferPtr buf,
				   const xmlChar * string);
    extern void xmlBufferWriteChar(xmlBufferPtr buf, const char *string);
    extern void xmlBufferWriteQuotedString(xmlBufferPtr buf,
					   const xmlChar * string);
    extern xmlChar *xmlBuildQName(const xmlChar * ncname,
				  const xmlChar * prefix, xmlChar * memory,
				  int len);
    extern xmlDocPtr xmlCopyDoc(xmlDocPtr doc, int recursive);
    extern xmlDtdPtr xmlCopyDtd(xmlDtdPtr dtd);
    extern xmlNsPtr xmlCopyNamespace(xmlNsPtr cur);
    extern xmlNsPtr xmlCopyNamespaceList(xmlNsPtr cur);
    extern xmlNodePtr xmlCopyNode(const xmlNodePtr node, int recursive);
    extern xmlNodePtr xmlCopyNodeList(const xmlNodePtr node);
    extern xmlAttrPtr xmlCopyProp(xmlNodePtr target, xmlAttrPtr cur);
    extern xmlAttrPtr xmlCopyPropList(xmlNodePtr target, xmlAttrPtr cur);
    extern xmlDtdPtr xmlCreateIntSubset(xmlDocPtr doc,
					const xmlChar * name,
					const xmlChar * ExternalID,
					const xmlChar * SystemID);
    extern void xmlDOMWrapFreeCtxt(xmlDOMWrapCtxtPtr ctxt);
    extern xmlDOMWrapCtxtPtr xmlDOMWrapNewCtxt(void);
    extern xmlNodePtr xmlDocCopyNode(const xmlNodePtr node, xmlDocPtr doc,
				     int recursive);
    extern xmlNodePtr xmlDocCopyNodeList(xmlDocPtr doc,
					 const xmlNodePtr node);
    extern int xmlDocDump(FILE * f, xmlDocPtr cur);
    extern void xmlDocDumpFormatMemory(xmlDocPtr cur, xmlChar * *mem,
				       int *size, int format);
    extern void xmlDocDumpFormatMemoryEnc(xmlDocPtr out_doc,
					  xmlChar * *doc_txt_ptr,
					  int *doc_txt_len,
					  const char *txt_encoding,
					  int format);
    extern void xmlDocDumpMemory(xmlDocPtr cur, xmlChar * *mem, int *size);
    extern void xmlDocDumpMemoryEnc(xmlDocPtr out_doc,
				    xmlChar * *doc_txt_ptr,
				    int *doc_txt_len,
				    const char *txt_encoding);
    extern int xmlDocFormatDump(FILE * f, xmlDocPtr cur, int format);
    extern xmlNodePtr xmlDocGetRootElement(xmlDocPtr doc);
    extern xmlNodePtr xmlDocSetRootElement(xmlDocPtr doc, xmlNodePtr root);
    extern void xmlElemDump(FILE * f, xmlDocPtr doc, xmlNodePtr cur);
    extern void xmlFreeDoc(xmlDocPtr cur);
    extern void xmlFreeDtd(xmlDtdPtr cur);
    extern void xmlFreeNode(xmlNodePtr cur);
    extern void xmlFreeNodeList(xmlNodePtr cur);
    extern void xmlFreeNs(xmlNsPtr cur);
    extern void xmlFreeNsList(xmlNsPtr cur);
    extern void xmlFreeProp(xmlAttrPtr cur);
    extern void xmlFreePropList(xmlAttrPtr cur);
    extern xmlBufferAllocationScheme xmlGetBufferAllocationScheme(void);
    extern int xmlGetCompressMode(void);
    extern int xmlGetDocCompressMode(xmlDocPtr doc);
    extern xmlDtdPtr xmlGetIntSubset(xmlDocPtr doc);
    extern xmlNodePtr xmlGetLastChild(xmlNodePtr parent);
    extern long int xmlGetLineNo(xmlNodePtr node);
    extern xmlChar *xmlGetNoNsProp(xmlNodePtr node, const xmlChar * name);
    extern xmlChar *xmlGetNodePath(xmlNodePtr node);
    extern xmlNsPtr *xmlGetNsList(xmlDocPtr doc, xmlNodePtr node);
    extern xmlChar *xmlGetNsProp(xmlNodePtr node, const xmlChar * name,
				 const xmlChar * nameSpace);
    extern xmlChar *xmlGetProp(xmlNodePtr node, const xmlChar * name);
    extern xmlAttrPtr xmlHasNsProp(xmlNodePtr node, const xmlChar * name,
				   const xmlChar * nameSpace);
    extern xmlAttrPtr xmlHasProp(xmlNodePtr node, const xmlChar * name);
    extern int xmlIsBlankNode(xmlNodePtr node);
    extern int xmlIsXHTML(const xmlChar * systemID,
			  const xmlChar * publicID);
    extern xmlNodePtr xmlNewCDataBlock(xmlDocPtr doc,
				       const xmlChar * content, int len);
    extern xmlNodePtr xmlNewCharRef(xmlDocPtr doc, const xmlChar * name);
    extern xmlNodePtr xmlNewChild(xmlNodePtr parent, xmlNsPtr ns,
				  const xmlChar * name,
				  const xmlChar * content);
    extern xmlNodePtr xmlNewComment(const xmlChar * content);
    extern xmlDocPtr xmlNewDoc(const xmlChar * version);
    extern xmlNodePtr xmlNewDocComment(xmlDocPtr doc,
				       const xmlChar * content);
    extern xmlNodePtr xmlNewDocFragment(xmlDocPtr doc);
    extern xmlNodePtr xmlNewDocNode(xmlDocPtr doc, xmlNsPtr ns,
				    const xmlChar * name,
				    const xmlChar * content);
    extern xmlNodePtr xmlNewDocNodeEatName(xmlDocPtr doc, xmlNsPtr ns,
					   xmlChar * name,
					   const xmlChar * content);
    extern xmlNodePtr xmlNewDocPI(xmlDocPtr doc, const xmlChar * name,
				  const xmlChar * content);
    extern xmlAttrPtr xmlNewDocProp(xmlDocPtr doc, const xmlChar * name,
				    const xmlChar * value);
    extern xmlNodePtr xmlNewDocRawNode(xmlDocPtr doc, xmlNsPtr ns,
				       const xmlChar * name,
				       const xmlChar * content);
    extern xmlNodePtr xmlNewDocText(xmlDocPtr doc,
				    const xmlChar * content);
    extern xmlNodePtr xmlNewDocTextLen(xmlDocPtr doc,
				       const xmlChar * content, int len);
    extern xmlDtdPtr xmlNewDtd(xmlDocPtr doc, const xmlChar * name,
			       const xmlChar * ExternalID,
			       const xmlChar * SystemID);
    extern xmlNodePtr xmlNewNode(xmlNsPtr ns, const xmlChar * name);
    extern xmlNodePtr xmlNewNodeEatName(xmlNsPtr ns, xmlChar * name);
    extern xmlNsPtr xmlNewNs(xmlNodePtr node, const xmlChar * href,
			     const xmlChar * prefix);
    extern xmlAttrPtr xmlNewNsProp(xmlNodePtr node, xmlNsPtr ns,
				   const xmlChar * name,
				   const xmlChar * value);
    extern xmlAttrPtr xmlNewNsPropEatName(xmlNodePtr node, xmlNsPtr ns,
					  xmlChar * name,
					  const xmlChar * value);
    extern xmlNodePtr xmlNewPI(const xmlChar * name,
			       const xmlChar * content);
    extern xmlAttrPtr xmlNewProp(xmlNodePtr node, const xmlChar * name,
				 const xmlChar * value);
    extern xmlNodePtr xmlNewReference(xmlDocPtr doc, const xmlChar * name);
    extern xmlNodePtr xmlNewText(const xmlChar * content);
    extern xmlNodePtr xmlNewTextChild(xmlNodePtr parent, xmlNsPtr ns,
				      const xmlChar * name,
				      const xmlChar * content);
    extern xmlNodePtr xmlNewTextLen(const xmlChar * content, int len);
    extern void xmlNodeAddContent(xmlNodePtr cur, const xmlChar * content);
    extern void xmlNodeAddContentLen(xmlNodePtr cur,
				     const xmlChar * content, int len);
    extern int xmlNodeBufGetContent(xmlBufferPtr buffer, xmlNodePtr cur);
    extern int xmlNodeDump(xmlBufferPtr buf, xmlDocPtr doc, xmlNodePtr cur,
			   int level, int format);
    extern void xmlNodeDumpOutput(xmlOutputBufferPtr buf, xmlDocPtr doc,
				  xmlNodePtr cur, int level, int format,
				  const char *encoding);
    extern xmlChar *xmlNodeGetBase(xmlDocPtr doc, xmlNodePtr cur);
    extern xmlChar *xmlNodeGetContent(xmlNodePtr cur);
    extern xmlChar *xmlNodeGetLang(xmlNodePtr cur);
    extern int xmlNodeGetSpacePreserve(xmlNodePtr cur);
    extern int xmlNodeIsText(xmlNodePtr node);
    extern xmlChar *xmlNodeListGetRawString(xmlDocPtr doc, xmlNodePtr list,
					    int inLine);
    extern xmlChar *xmlNodeListGetString(xmlDocPtr doc, xmlNodePtr list,
					 int inLine);
    extern void xmlNodeSetBase(xmlNodePtr cur, const xmlChar * uri);
    extern void xmlNodeSetContent(xmlNodePtr cur, const xmlChar * content);
    extern void xmlNodeSetContentLen(xmlNodePtr cur,
				     const xmlChar * content, int len);
    extern void xmlNodeSetLang(xmlNodePtr cur, const xmlChar * lang);
    extern void xmlNodeSetName(xmlNodePtr cur, const xmlChar * name);
    extern void xmlNodeSetSpacePreserve(xmlNodePtr cur, int val);
    extern int xmlReconciliateNs(xmlDocPtr doc, xmlNodePtr tree);
    extern int xmlRemoveProp(xmlAttrPtr cur);
    extern xmlNodePtr xmlReplaceNode(xmlNodePtr old, xmlNodePtr cur);
    extern int xmlSaveFile(const char *filename, xmlDocPtr cur);
    extern int xmlSaveFileEnc(const char *filename, xmlDocPtr cur,
			      const char *encoding);
    extern int xmlSaveFileTo(xmlOutputBufferPtr buf, xmlDocPtr cur,
			     const char *encoding);
    extern int xmlSaveFormatFile(const char *filename, xmlDocPtr cur,
				 int format);
    extern int xmlSaveFormatFileEnc(const char *filename, xmlDocPtr cur,
				    const char *encoding, int format);
    extern int xmlSaveFormatFileTo(xmlOutputBufferPtr buf, xmlDocPtr cur,
				   const char *encoding, int format);
    extern xmlNsPtr xmlSearchNs(xmlDocPtr doc, xmlNodePtr node,
				const xmlChar * nameSpace);
    extern xmlNsPtr xmlSearchNsByHref(xmlDocPtr doc, xmlNodePtr node,
				      const xmlChar * href);
    extern void xmlSetBufferAllocationScheme(xmlBufferAllocationScheme
					     scheme);
    extern void xmlSetCompressMode(int mode);
    extern void xmlSetDocCompressMode(xmlDocPtr doc, int mode);
    extern void xmlSetListDoc(xmlNodePtr list, xmlDocPtr doc);
    extern void xmlSetNs(xmlNodePtr node, xmlNsPtr ns);
    extern xmlAttrPtr xmlSetNsProp(xmlNodePtr node, xmlNsPtr ns,
				   const xmlChar * name,
				   const xmlChar * value);
    extern xmlAttrPtr xmlSetProp(xmlNodePtr node, const xmlChar * name,
				 const xmlChar * value);
    extern void xmlSetTreeDoc(xmlNodePtr tree, xmlDocPtr doc);
    extern xmlChar *xmlSplitQName2(const xmlChar * name,
				   xmlChar * *prefix);
    extern const xmlChar *xmlSplitQName3(const xmlChar * name, int *len);
    extern xmlNodePtr xmlStringGetNodeList(xmlDocPtr doc,
					   const xmlChar * value);
    extern xmlNodePtr xmlStringLenGetNodeList(xmlDocPtr doc,
					      const xmlChar * value,
					      int len);
    extern int xmlTextConcat(xmlNodePtr node, const xmlChar * content,
			     int len);
    extern xmlNodePtr xmlTextMerge(xmlNodePtr first, xmlNodePtr second);
    extern void xmlUnlinkNode(xmlNodePtr cur);
    extern int xmlUnsetNsProp(xmlNodePtr node, xmlNsPtr ns,
			      const xmlChar * name);
    extern int xmlUnsetProp(xmlNodePtr node, const xmlChar * name);
    extern int xmlValidateNCName(const xmlChar * value, int space);
    extern int xmlValidateNMToken(const xmlChar * value, int space);
    extern int xmlValidateName(const xmlChar * value, int space);
    extern int xmlValidateQName(const xmlChar * value, int space);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
