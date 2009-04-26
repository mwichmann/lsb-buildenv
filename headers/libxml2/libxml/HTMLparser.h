#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_HTMLPARSER_H_
#define _LIBXML2_LIBXML_HTMLPARSER_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/encoding.h>
#include <libxml2/libxml/SAX2.h>
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/parser.h>

#ifdef __cplusplus
extern "C" {
#endif


#define htmlElementAllowedHereDesc(parent,elt)	 \
	htmlElementAllowedHere((parent), (elt)->name)
#define htmlRequiredAttrs(elt)	(elt)->attrs_req
#define htmlDefaultSubelement(elt)	elt->defaultsubelt


    typedef enum {
	HTML_NA = 0,
	HTML_INVALID = 1,
	HTML_DEPRECATED = 2,
	HTML_VALID = 4,
	HTML_REQUIRED = 12
    } htmlStatus;

    typedef struct _htmlElemDesc htmlElemDesc;

    typedef xmlDocPtr htmlDocPtr;

    typedef xmlSAXHandlerPtr htmlSAXHandlerPtr;

    typedef xmlParserCtxtPtr htmlParserCtxtPtr;

    typedef struct _htmlEntityDesc htmlEntityDesc;

    typedef xmlNodePtr htmlNodePtr;

    typedef enum {
	HTML_PARSE_RECOVER = 1 << 0,
	HTML_PARSE_NOERROR = 1 << 5,
	HTML_PARSE_NOWARNING = 1 << 6,
	HTML_PARSE_PEDANTIC = 1 << 7,
	HTML_PARSE_NOBLANKS = 1 << 8,
	HTML_PARSE_NONET = 1 << 11,
	HTML_PARSE_COMPACT = 1 << 16
    } htmlParserOption;

    typedef xmlParserInputPtr htmlParserInputPtr;

    typedef htmlElemDesc *htmlElemDescPtr;

    typedef htmlEntityDesc *htmlEntityDescPtr;

    typedef xmlParserInput htmlParserInput;

    struct _htmlElemDesc {
	const char *name;
	char startTag;
	char endTag;
	char saveEndTag;
	char empty;
	char depr;
	char dtd;
	char isinline;
	const char *desc;
	const char **subelts;
	const char *defaultsubelt;
	const char **attrs_opt;
	const char **attrs_depr;
	const char **attrs_req;
    };

    struct _htmlEntityDesc {
	unsigned int value;
	const char *name;
	const char *desc;
    };


/* Function prototypes */

    extern int UTF8ToHtml(unsigned char *out, int *outlen,
			  const unsigned char *in, int *inlen);
    extern htmlStatus htmlAttrAllowed(const htmlElemDesc *,
				      const xmlChar *, int);
    extern int htmlAutoCloseTag(htmlDocPtr doc, const xmlChar * name,
				htmlNodePtr elem);
    extern htmlParserCtxtPtr htmlCreateMemoryParserCtxt(const char *buffer,
							int size);
    extern htmlParserCtxtPtr htmlCreatePushParserCtxt(htmlSAXHandlerPtr
						      sax, void *user_data,
						      const char *chunk,
						      int size,
						      const char *filename,
						      xmlCharEncoding enc);
    extern htmlDocPtr htmlCtxtReadDoc(htmlParserCtxtPtr ctxt,
				      const xmlChar * cur, const char *URL,
				      const char *encoding, int options);
    extern htmlDocPtr htmlCtxtReadFd(htmlParserCtxtPtr ctxt, int fd,
				     const char *URL, const char *encoding,
				     int options);
    extern htmlDocPtr htmlCtxtReadFile(htmlParserCtxtPtr ctxt,
				       const char *filename,
				       const char *encoding, int options);
    extern htmlDocPtr htmlCtxtReadIO(htmlParserCtxtPtr ctxt,
				     xmlInputReadCallback ioread,
				     xmlInputCloseCallback ioclose,
				     void *ioctx, const char *URL,
				     const char *encoding, int options);
    extern htmlDocPtr htmlCtxtReadMemory(htmlParserCtxtPtr ctxt,
					 const char *buffer, int size,
					 const char *URL,
					 const char *encoding,
					 int options);
    extern void htmlCtxtReset(htmlParserCtxtPtr ctxt);
    extern int htmlCtxtUseOptions(htmlParserCtxtPtr ctxt, int options);
    extern int htmlElementAllowedHere(const htmlElemDesc *,
				      const xmlChar *);
    extern htmlStatus htmlElementStatusHere(const htmlElemDesc *,
					    const htmlElemDesc *);
    extern int htmlEncodeEntities(unsigned char *out, int *outlen,
				  const unsigned char *in, int *inlen,
				  int quoteChar);
    extern const htmlEntityDesc *htmlEntityLookup(const xmlChar * name);
    extern const htmlEntityDesc *htmlEntityValueLookup(unsigned int value);
    extern void htmlFreeParserCtxt(htmlParserCtxtPtr ctxt);
    extern int htmlHandleOmittedElem(int val);
    extern int htmlIsAutoClosed(htmlDocPtr doc, htmlNodePtr elem);
    extern int htmlIsScriptAttribute(const xmlChar * name);
    extern int htmlParseCharRef(htmlParserCtxtPtr ctxt);
    extern int htmlParseChunk(htmlParserCtxtPtr ctxt, const char *chunk,
			      int size, int terminate);
    extern htmlDocPtr htmlParseDoc(xmlChar * cur, const char *encoding);
    extern int htmlParseDocument(htmlParserCtxtPtr ctxt);
    extern void htmlParseElement(htmlParserCtxtPtr ctxt);
    extern const htmlEntityDesc *htmlParseEntityRef(htmlParserCtxtPtr ctxt,
						    const xmlChar * *str);
    extern htmlDocPtr htmlParseFile(const char *filename,
				    const char *encoding);
    extern htmlDocPtr htmlReadDoc(const xmlChar * cur, const char *URL,
				  const char *encoding, int options);
    extern htmlDocPtr htmlReadFd(int fd, const char *URL,
				 const char *encoding, int options);
    extern htmlDocPtr htmlReadFile(const char *URL, const char *encoding,
				   int options);
    extern htmlDocPtr htmlReadIO(xmlInputReadCallback ioread,
				 xmlInputCloseCallback ioclose,
				 void *ioctx, const char *URL,
				 const char *encoding, int options);
    extern htmlDocPtr htmlReadMemory(const char *buffer, int size,
				     const char *URL, const char *encoding,
				     int options);
    extern htmlDocPtr htmlSAXParseDoc(xmlChar * cur, const char *encoding,
				      htmlSAXHandlerPtr sax,
				      void *userData);
    extern htmlDocPtr htmlSAXParseFile(const char *filename,
				       const char *encoding,
				       htmlSAXHandlerPtr sax,
				       void *userData);
    extern const htmlElemDesc *htmlTagLookup(const xmlChar * tag);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
