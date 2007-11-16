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


    extern htmlStatus htmlElementStatusHere(const htmlElemDesc *,
					    const htmlElemDesc *);
    extern htmlDocPtr htmlParseDoc(xmlChar *, const char *);
    extern htmlDocPtr htmlSAXParseDoc(xmlChar *, const char *,
				      htmlSAXHandlerPtr, void *);
    extern htmlDocPtr htmlCtxtReadDoc(htmlParserCtxtPtr, const xmlChar *,
				      const char *, const char *, int);
    extern htmlDocPtr htmlReadIO(xmlInputReadCallback,
				 xmlInputCloseCallback, void *,
				 const char *, const char *, int);
    extern htmlDocPtr htmlCtxtReadIO(htmlParserCtxtPtr,
				     xmlInputReadCallback,
				     xmlInputCloseCallback, void *,
				     const char *, const char *, int);
    extern int htmlHandleOmittedElem(int);
    extern htmlDocPtr htmlReadMemory(const char *, int, const char *,
				     const char *, int);
    extern htmlDocPtr htmlCtxtReadMemory(htmlParserCtxtPtr, const char *,
					 int, const char *, const char *,
					 int);
    extern void htmlParseElement(htmlParserCtxtPtr);
    extern const htmlEntityDesc *htmlEntityValueLookup(unsigned int);
    extern int htmlEncodeEntities(unsigned char *, int *,
				  const unsigned char *, int *, int);
    extern htmlDocPtr htmlParseFile(const char *, const char *);
    extern htmlDocPtr htmlSAXParseFile(const char *, const char *,
				       htmlSAXHandlerPtr, void *);
    extern int htmlIsAutoClosed(htmlDocPtr, htmlNodePtr);
    extern htmlParserCtxtPtr htmlCreatePushParserCtxt(htmlSAXHandlerPtr,
						      void *, const char *,
						      int, const char *,
						      xmlCharEncoding);
    extern int htmlIsScriptAttribute(const xmlChar *);
    extern int UTF8ToHtml(unsigned char *, int *, const unsigned char *,
			  int *);
    extern int htmlElementAllowedHere(const htmlElemDesc *,
				      const xmlChar *);
    extern int htmlParseCharRef(htmlParserCtxtPtr);
    extern int htmlCtxtUseOptions(htmlParserCtxtPtr, int);
    extern int htmlParseChunk(htmlParserCtxtPtr, const char *, int, int);
    extern htmlDocPtr htmlReadFd(int, const char *, const char *, int);
    extern void htmlCtxtReset(htmlParserCtxtPtr);
    extern htmlDocPtr htmlCtxtReadFile(htmlParserCtxtPtr, const char *,
				       const char *, int);
    extern const htmlEntityDesc *htmlEntityLookup(const xmlChar *);
    extern htmlDocPtr htmlCtxtReadFd(htmlParserCtxtPtr, int, const char *,
				     const char *, int);
    extern const htmlElemDesc *htmlTagLookup(const xmlChar *);
    extern void htmlFreeParserCtxt(htmlParserCtxtPtr);
    extern int htmlAutoCloseTag(htmlDocPtr, const xmlChar *, htmlNodePtr);
    extern htmlParserCtxtPtr htmlCreateMemoryParserCtxt(const char *, int);
    extern htmlDocPtr htmlReadFile(const char *, const char *, int);
    extern htmlDocPtr htmlReadDoc(const xmlChar *, const char *,
				  const char *, int);
    extern const htmlEntityDesc *htmlParseEntityRef(htmlParserCtxtPtr,
						    const xmlChar * *);
    extern int htmlParseDocument(htmlParserCtxtPtr);
    extern htmlStatus htmlAttrAllowed(const htmlElemDesc *,
				      const xmlChar *, int);
#ifdef __cplusplus
}
#endif
#endif
