#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_PARSERINTERNALS_H_
#define _LIBXML2_LIBXML_PARSERINTERNALS_H_

#include <iconv.h>
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
#include <libxml2/libxml/HTMLparser.h>

#ifdef __cplusplus
extern "C" {
#endif


#define IS_ASCII_LETTER(c)	 \
	(((0x41 <= (c)) && ((c) <= 0x5a)) || ((0x61 <= (c)) && ((c) <= \
	0x7a)))
#define SKIP_EOL(p)	 \
	if (*(p) == 0x13) { p++ ; if (*(p) == 0x10) p++; } if (*(p) == 0x10) \
	{ p++ ; if (*(p) == 0x13) p++; }
#define IS_ASCII_DIGIT(c)	((0x30 <= (c)) && ((c) <= 0x39))
#define IS_LETTER(c)	(IS_BASECHAR(c) || IS_IDEOGRAPHIC(c))
#define IS_COMBINING_CH(c)	0
#define XML_SUBSTITUTE_NONE	0
#define XML_SUBSTITUTE_REF	1
#define XML_MAX_NAMELEN	100
#define XML_SUBSTITUTE_PEREF	2
#define INPUT_CHUNK	250
#define XML_SUBSTITUTE_BOTH	3
#define MOVETO_STARTTAG(p)	while ((*p) && (*(p) != '<')) (p)++
#define MOVETO_ENDTAG(p)	while ((*p) && (*(p) != '>')) (p)++
#define IS_BASECHAR(c)	xmlIsBaseCharQ(c)
#define IS_LETTER_CH(c)	xmlIsBaseChar_ch(c)
#define IS_BLANK(c)	xmlIsBlankQ(c)
#define IS_BLANK_CH(c)	xmlIsBlank_ch(c)
#define IS_CHAR(c)	xmlIsCharQ(c)
#define IS_BYTE_CHAR(c)	xmlIsChar_ch(c)
#define IS_CHAR_CH(c)	xmlIsChar_ch(c)
#define IS_COMBINING(c)	xmlIsCombiningQ(c)
#define IS_DIGIT(c)	xmlIsDigitQ(c)
#define IS_DIGIT_CH(c)	xmlIsDigit_ch(c)
#define IS_EXTENDER(c)	xmlIsExtenderQ(c)
#define IS_EXTENDER_CH(c)	xmlIsExtender_ch(c)
#define IS_IDEOGRAPHIC(c)	xmlIsIdeographicQ(c)
#define IS_PUBIDCHAR(c)	xmlIsPubidCharQ(c)
#define IS_PUBIDCHAR_CH(c)	xmlIsPubidChar_ch(c)


    typedef void (*xmlEntityReferenceFunc) (xmlEntityPtr, xmlNodePtr,
					    xmlNodePtr);


/* Function prototypes */

    extern htmlParserCtxtPtr htmlCreateFileParserCtxt(const char *filename,
						      const char
						      *encoding);
    extern void htmlInitAutoClose(void);
    extern xmlParserInputPtr inputPop(xmlParserCtxtPtr ctxt);
    extern int inputPush(xmlParserCtxtPtr ctxt, xmlParserInputPtr value);
    extern const xmlChar *namePop(xmlParserCtxtPtr ctxt);
    extern int namePush(xmlParserCtxtPtr ctxt, const xmlChar * value);
    extern xmlNodePtr nodePop(xmlParserCtxtPtr ctxt);
    extern int nodePush(xmlParserCtxtPtr ctxt, xmlNodePtr value);
    extern int xmlCopyChar(int len, xmlChar * out, int val);
    extern int xmlCopyCharMultiByte(xmlChar * out, int val);
    extern xmlParserCtxtPtr xmlCreateEntityParserCtxt(const xmlChar * URL,
						      const xmlChar * ID,
						      const xmlChar *
						      base);
    extern xmlParserCtxtPtr xmlCreateFileParserCtxt(const char *filename);
    extern xmlParserCtxtPtr xmlCreateMemoryParserCtxt(const char *buffer,
						      int size);
    extern xmlParserCtxtPtr xmlCreateURLParserCtxt(const char *filename,
						   int options);
    extern int xmlCurrentChar(xmlParserCtxtPtr ctxt, int *len);
    extern void xmlFreeInputStream(xmlParserInputPtr input);
    extern int xmlIsLetter(int c);
    extern xmlParserInputPtr xmlNewEntityInputStream(xmlParserCtxtPtr ctxt,
						     xmlEntityPtr entity);
    extern xmlParserInputPtr xmlNewInputFromFile(xmlParserCtxtPtr ctxt,
						 const char *filename);
    extern xmlParserInputPtr xmlNewInputStream(xmlParserCtxtPtr ctxt);
    extern xmlParserInputPtr xmlNewStringInputStream(xmlParserCtxtPtr ctxt,
						     const xmlChar *
						     buffer);
    extern void xmlNextChar(xmlParserCtxtPtr ctxt);
    extern xmlChar *xmlParseAttValue(xmlParserCtxtPtr ctxt);
    extern const xmlChar *xmlParseAttribute(xmlParserCtxtPtr ctxt,
					    xmlChar * *value);
    extern void xmlParseAttributeListDecl(xmlParserCtxtPtr ctxt);
    extern int xmlParseAttributeType(xmlParserCtxtPtr ctxt,
				     xmlEnumerationPtr * tree);
    extern void xmlParseCDSect(xmlParserCtxtPtr ctxt);
    extern void xmlParseCharData(xmlParserCtxtPtr ctxt, int cdata);
    extern int xmlParseCharRef(xmlParserCtxtPtr ctxt);
    extern void xmlParseComment(xmlParserCtxtPtr ctxt);
    extern void xmlParseContent(xmlParserCtxtPtr ctxt);
    extern int xmlParseDefaultDecl(xmlParserCtxtPtr ctxt,
				   xmlChar * *value);
    extern void xmlParseDocTypeDecl(xmlParserCtxtPtr ctxt);
    extern void xmlParseElement(xmlParserCtxtPtr ctxt);
    extern xmlElementContentPtr
	xmlParseElementChildrenContentDecl(xmlParserCtxtPtr ctxt,
					   int inputchk);
    extern int xmlParseElementContentDecl(xmlParserCtxtPtr ctxt,
					  const xmlChar * name,
					  xmlElementContentPtr * result);
    extern int xmlParseElementDecl(xmlParserCtxtPtr ctxt);
    extern xmlElementContentPtr
	xmlParseElementMixedContentDecl(xmlParserCtxtPtr ctxt,
					int inputchk);
    extern xmlChar *xmlParseEncName(xmlParserCtxtPtr ctxt);
    extern const xmlChar *xmlParseEncodingDecl(xmlParserCtxtPtr ctxt);
    extern void xmlParseEndTag(xmlParserCtxtPtr ctxt);
    extern void xmlParseEntityDecl(xmlParserCtxtPtr ctxt);
    extern xmlEntityPtr xmlParseEntityRef(xmlParserCtxtPtr ctxt);
    extern xmlChar *xmlParseEntityValue(xmlParserCtxtPtr ctxt,
					xmlChar * *orig);
    extern int xmlParseEnumeratedType(xmlParserCtxtPtr ctxt,
				      xmlEnumerationPtr * tree);
    extern xmlEnumerationPtr xmlParseEnumerationType(xmlParserCtxtPtr
						     ctxt);
    extern xmlChar *xmlParseExternalID(xmlParserCtxtPtr ctxt,
				       xmlChar * *publicID, int strict);
    extern void xmlParseExternalSubset(xmlParserCtxtPtr ctxt,
				       const xmlChar * ExternalID,
				       const xmlChar * SystemID);
    extern void xmlParseMarkupDecl(xmlParserCtxtPtr ctxt);
    extern void xmlParseMisc(xmlParserCtxtPtr ctxt);
    extern const xmlChar *xmlParseName(xmlParserCtxtPtr ctxt);
    extern xmlChar *xmlParseNmtoken(xmlParserCtxtPtr ctxt);
    extern void xmlParseNotationDecl(xmlParserCtxtPtr ctxt);
    extern xmlEnumerationPtr xmlParseNotationType(xmlParserCtxtPtr ctxt);
    extern void xmlParsePEReference(xmlParserCtxtPtr ctxt);
    extern void xmlParsePI(xmlParserCtxtPtr ctxt);
    extern const xmlChar *xmlParsePITarget(xmlParserCtxtPtr ctxt);
    extern xmlChar *xmlParsePubidLiteral(xmlParserCtxtPtr ctxt);
    extern void xmlParseReference(xmlParserCtxtPtr ctxt);
    extern int xmlParseSDDecl(xmlParserCtxtPtr ctxt);
    extern const xmlChar *xmlParseStartTag(xmlParserCtxtPtr ctxt);
    extern xmlChar *xmlParseSystemLiteral(xmlParserCtxtPtr ctxt);
    extern void xmlParseTextDecl(xmlParserCtxtPtr ctxt);
    extern xmlChar *xmlParseVersionInfo(xmlParserCtxtPtr ctxt);
    extern xmlChar *xmlParseVersionNum(xmlParserCtxtPtr ctxt);
    extern void xmlParseXMLDecl(xmlParserCtxtPtr ctxt);
    extern void xmlParserHandlePEReference(xmlParserCtxtPtr ctxt);
    extern void xmlParserInputShrink(xmlParserInputPtr in);
    extern unsigned int xmlParserMaxDepth;
    extern xmlChar xmlPopInput(xmlParserCtxtPtr ctxt);
    extern void xmlPushInput(xmlParserCtxtPtr ctxt,
			     xmlParserInputPtr input);
    extern void xmlSetEntityReferenceFunc(xmlEntityReferenceFunc func);
    extern int xmlSkipBlankChars(xmlParserCtxtPtr ctxt);
    extern xmlChar *xmlSplitQName(xmlParserCtxtPtr ctxt,
				  const xmlChar * name, xmlChar * *prefix);
    extern const xmlChar const xmlStringComment[];
    extern int xmlStringCurrentChar(xmlParserCtxtPtr ctxt,
				    const xmlChar * cur, int *len);
    extern xmlChar *xmlStringDecodeEntities(xmlParserCtxtPtr ctxt,
					    const xmlChar * str, int what,
					    xmlChar end, xmlChar end2,
					    xmlChar end3);
    extern xmlChar *xmlStringLenDecodeEntities(xmlParserCtxtPtr ctxt,
					       const xmlChar * str,
					       int len, int what,
					       xmlChar end, xmlChar end2,
					       xmlChar end3);
    extern const xmlChar const xmlStringText[];
    extern const xmlChar const xmlStringTextNoenc[];
    extern int xmlSwitchEncoding(xmlParserCtxtPtr ctxt,
				 xmlCharEncoding enc);
    extern int xmlSwitchInputEncoding(xmlParserCtxtPtr ctxt,
				      xmlParserInputPtr input,
				      xmlCharEncodingHandlerPtr handler);
    extern int xmlSwitchToEncoding(xmlParserCtxtPtr ctxt,
				   xmlCharEncodingHandlerPtr handler);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
