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


    extern int nodePush(xmlParserCtxtPtr, xmlNodePtr);
    extern void xmlParseElement(xmlParserCtxtPtr);
    extern const xmlChar const xmlStringComment[];
    extern xmlElementContentPtr
	xmlParseElementChildrenContentDecl(xmlParserCtxtPtr, int);
    extern void xmlParseContent(xmlParserCtxtPtr);
    extern xmlChar *xmlParseEntityValue(xmlParserCtxtPtr, xmlChar * *);
    extern xmlChar *xmlParseNmtoken(xmlParserCtxtPtr);
    extern xmlNodePtr nodePop(xmlParserCtxtPtr);
    extern const xmlChar *xmlParsePITarget(xmlParserCtxtPtr);
    extern int xmlSwitchToEncoding(xmlParserCtxtPtr,
				   xmlCharEncodingHandlerPtr);
    extern void xmlPushInput(xmlParserCtxtPtr, xmlParserInputPtr);
    extern int xmlStringCurrentChar(xmlParserCtxtPtr, const xmlChar *,
				    int *);
    extern void xmlFreeInputStream(xmlParserInputPtr);
    extern xmlParserInputPtr xmlNewInputFromFile(xmlParserCtxtPtr,
						 const char *);
    extern void xmlParseMarkupDecl(xmlParserCtxtPtr);
    extern unsigned int xmlParserMaxDepth;
    extern int xmlParseDefaultDecl(xmlParserCtxtPtr, xmlChar * *);
    extern void xmlParseXMLDecl(xmlParserCtxtPtr);
    extern xmlChar *xmlStringDecodeEntities(xmlParserCtxtPtr,
					    const xmlChar *, int, xmlChar,
					    xmlChar, xmlChar);
    extern xmlChar *xmlParsePubidLiteral(xmlParserCtxtPtr);
    extern xmlParserInputPtr xmlNewEntityInputStream(xmlParserCtxtPtr,
						     xmlEntityPtr);
    extern xmlChar *xmlParseEncName(xmlParserCtxtPtr);
    extern xmlParserCtxtPtr xmlCreateMemoryParserCtxt(const char *, int);
    extern xmlParserCtxtPtr xmlCreateEntityParserCtxt(const xmlChar *,
						      const xmlChar *,
						      const xmlChar *);
    extern void xmlParserInputShrink(xmlParserInputPtr);
    extern void xmlParserHandlePEReference(xmlParserCtxtPtr);
    extern xmlParserCtxtPtr xmlCreateFileParserCtxt(const char *);
    extern const xmlChar *xmlParseAttribute(xmlParserCtxtPtr, xmlChar * *);
    extern int xmlCurrentChar(xmlParserCtxtPtr, int *);
    extern int xmlIsLetter(int);
    extern int xmlParseCharRef(xmlParserCtxtPtr);
    extern xmlChar *xmlStringLenDecodeEntities(xmlParserCtxtPtr,
					       const xmlChar *, int, int,
					       xmlChar, xmlChar, xmlChar);
    extern void xmlParseCharData(xmlParserCtxtPtr, int);
    extern xmlChar *xmlParseExternalID(xmlParserCtxtPtr, xmlChar * *, int);
    extern xmlChar *xmlParseSystemLiteral(xmlParserCtxtPtr);
    extern xmlEnumerationPtr xmlParseEnumerationType(xmlParserCtxtPtr);
    extern xmlParserInputPtr inputPop(xmlParserCtxtPtr);
    extern xmlParserCtxtPtr xmlCreateURLParserCtxt(const char *, int);
    extern const xmlChar *xmlParseEncodingDecl(xmlParserCtxtPtr);
    extern const xmlChar *xmlParseStartTag(xmlParserCtxtPtr);
    extern xmlChar *xmlParseVersionNum(xmlParserCtxtPtr);
    extern const xmlChar *namePop(xmlParserCtxtPtr);
    extern void xmlParseMisc(xmlParserCtxtPtr);
    extern void xmlParsePI(xmlParserCtxtPtr);
    extern int xmlSwitchEncoding(xmlParserCtxtPtr, xmlCharEncoding);
    extern xmlParserInputPtr xmlNewInputStream(xmlParserCtxtPtr);
    extern void xmlParseTextDecl(xmlParserCtxtPtr);
    extern xmlChar *xmlParseVersionInfo(xmlParserCtxtPtr);
    extern int inputPush(xmlParserCtxtPtr, xmlParserInputPtr);
    extern int xmlParseElementContentDecl(xmlParserCtxtPtr,
					  const xmlChar *,
					  xmlElementContentPtr *);
    extern xmlChar *xmlSplitQName(xmlParserCtxtPtr, const xmlChar *,
				  xmlChar * *);
    extern void xmlParseReference(xmlParserCtxtPtr);
    extern int xmlParseEnumeratedType(xmlParserCtxtPtr,
				      xmlEnumerationPtr *);
    extern void xmlParseComment(xmlParserCtxtPtr);
    extern void xmlParsePEReference(xmlParserCtxtPtr);
    extern void xmlSetEntityReferenceFunc(xmlEntityReferenceFunc);
    extern int xmlParseSDDecl(xmlParserCtxtPtr);
    extern void xmlParseEntityDecl(xmlParserCtxtPtr);
    extern int xmlSkipBlankChars(xmlParserCtxtPtr);
    extern void xmlParseDocTypeDecl(xmlParserCtxtPtr);
    extern void htmlInitAutoClose(void);
    extern const xmlChar const xmlStringText[];
    extern xmlChar *xmlParseAttValue(xmlParserCtxtPtr);
    extern int namePush(xmlParserCtxtPtr, const xmlChar *);
    extern int xmlSwitchInputEncoding(xmlParserCtxtPtr, xmlParserInputPtr,
				      xmlCharEncodingHandlerPtr);
    extern xmlElementContentPtr
	xmlParseElementMixedContentDecl(xmlParserCtxtPtr, int);
    extern void xmlParseCDSect(xmlParserCtxtPtr);
    extern htmlParserCtxtPtr htmlCreateFileParserCtxt(const char *,
						      const char *);
    extern void xmlParseExternalSubset(xmlParserCtxtPtr, const xmlChar *,
				       const xmlChar *);
    extern xmlChar xmlPopInput(xmlParserCtxtPtr);
    extern void xmlNextChar(xmlParserCtxtPtr);
    extern xmlParserInputPtr xmlNewStringInputStream(xmlParserCtxtPtr,
						     const xmlChar *);
    extern int xmlCopyCharMultiByte(xmlChar *, int);
    extern const xmlChar *xmlParseName(xmlParserCtxtPtr);
    extern xmlEnumerationPtr xmlParseNotationType(xmlParserCtxtPtr);
    extern void xmlParseEndTag(xmlParserCtxtPtr);
    extern void xmlParseNotationDecl(xmlParserCtxtPtr);
    extern int xmlParseElementDecl(xmlParserCtxtPtr);
    extern int xmlParseAttributeType(xmlParserCtxtPtr,
				     xmlEnumerationPtr *);
    extern void xmlParseAttributeListDecl(xmlParserCtxtPtr);
    extern const xmlChar const xmlStringTextNoenc[];
    extern int xmlCopyChar(int, xmlChar *, int);
    extern xmlEntityPtr xmlParseEntityRef(xmlParserCtxtPtr);
#ifdef __cplusplus
}
#endif
#endif
