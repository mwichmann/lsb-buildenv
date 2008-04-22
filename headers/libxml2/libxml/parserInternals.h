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


#if __LSB_VERSION__ >= 31
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
#endif				/* __LSB_VERSION__ >= 3.1 */



#if __LSB_VERSION__ >= 31
    typedef void (*xmlEntityReferenceFunc) (xmlEntityPtr, xmlNodePtr,
					    xmlNodePtr);

#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern htmlParserCtxtPtr htmlCreateFileParserCtxt(const char *,
						      const char *);
    extern void htmlInitAutoClose(void);
    extern xmlParserInputPtr inputPop(xmlParserCtxtPtr);
    extern int inputPush(xmlParserCtxtPtr, xmlParserInputPtr);
    extern const xmlChar *namePop(xmlParserCtxtPtr);
    extern int namePush(xmlParserCtxtPtr, const xmlChar *);
    extern xmlNodePtr nodePop(xmlParserCtxtPtr);
    extern int nodePush(xmlParserCtxtPtr, xmlNodePtr);
    extern int xmlCopyChar(int, xmlChar *, int);
    extern int xmlCopyCharMultiByte(xmlChar *, int);
    extern xmlParserCtxtPtr xmlCreateEntityParserCtxt(const xmlChar *,
						      const xmlChar *,
						      const xmlChar *);
    extern xmlParserCtxtPtr xmlCreateFileParserCtxt(const char *);
    extern xmlParserCtxtPtr xmlCreateMemoryParserCtxt(const char *, int);
    extern xmlParserCtxtPtr xmlCreateURLParserCtxt(const char *, int);
    extern int xmlCurrentChar(xmlParserCtxtPtr, int *);
    extern void xmlFreeInputStream(xmlParserInputPtr);
    extern int xmlIsLetter(int);
    extern xmlParserInputPtr xmlNewEntityInputStream(xmlParserCtxtPtr,
						     xmlEntityPtr);
    extern xmlParserInputPtr xmlNewInputFromFile(xmlParserCtxtPtr,
						 const char *);
    extern xmlParserInputPtr xmlNewInputStream(xmlParserCtxtPtr);
    extern xmlParserInputPtr xmlNewStringInputStream(xmlParserCtxtPtr,
						     const xmlChar *);
    extern void xmlNextChar(xmlParserCtxtPtr);
    extern xmlChar *xmlParseAttValue(xmlParserCtxtPtr);
    extern const xmlChar *xmlParseAttribute(xmlParserCtxtPtr, xmlChar * *);
    extern void xmlParseAttributeListDecl(xmlParserCtxtPtr);
    extern int xmlParseAttributeType(xmlParserCtxtPtr,
				     xmlEnumerationPtr *);
    extern void xmlParseCDSect(xmlParserCtxtPtr);
    extern void xmlParseCharData(xmlParserCtxtPtr, int);
    extern int xmlParseCharRef(xmlParserCtxtPtr);
    extern void xmlParseComment(xmlParserCtxtPtr);
    extern void xmlParseContent(xmlParserCtxtPtr);
    extern int xmlParseDefaultDecl(xmlParserCtxtPtr, xmlChar * *);
    extern void xmlParseDocTypeDecl(xmlParserCtxtPtr);
    extern void xmlParseElement(xmlParserCtxtPtr);
    extern xmlElementContentPtr
	xmlParseElementChildrenContentDecl(xmlParserCtxtPtr, int);
    extern int xmlParseElementContentDecl(xmlParserCtxtPtr,
					  const xmlChar *,
					  xmlElementContentPtr *);
    extern int xmlParseElementDecl(xmlParserCtxtPtr);
    extern xmlElementContentPtr
	xmlParseElementMixedContentDecl(xmlParserCtxtPtr, int);
    extern xmlChar *xmlParseEncName(xmlParserCtxtPtr);
    extern const xmlChar *xmlParseEncodingDecl(xmlParserCtxtPtr);
    extern void xmlParseEndTag(xmlParserCtxtPtr);
    extern void xmlParseEntityDecl(xmlParserCtxtPtr);
    extern xmlEntityPtr xmlParseEntityRef(xmlParserCtxtPtr);
    extern xmlChar *xmlParseEntityValue(xmlParserCtxtPtr, xmlChar * *);
    extern int xmlParseEnumeratedType(xmlParserCtxtPtr,
				      xmlEnumerationPtr *);
    extern xmlEnumerationPtr xmlParseEnumerationType(xmlParserCtxtPtr);
    extern xmlChar *xmlParseExternalID(xmlParserCtxtPtr, xmlChar * *, int);
    extern void xmlParseExternalSubset(xmlParserCtxtPtr, const xmlChar *,
				       const xmlChar *);
    extern void xmlParseMarkupDecl(xmlParserCtxtPtr);
    extern void xmlParseMisc(xmlParserCtxtPtr);
    extern const xmlChar *xmlParseName(xmlParserCtxtPtr);
    extern xmlChar *xmlParseNmtoken(xmlParserCtxtPtr);
    extern void xmlParseNotationDecl(xmlParserCtxtPtr);
    extern xmlEnumerationPtr xmlParseNotationType(xmlParserCtxtPtr);
    extern void xmlParsePEReference(xmlParserCtxtPtr);
    extern void xmlParsePI(xmlParserCtxtPtr);
    extern const xmlChar *xmlParsePITarget(xmlParserCtxtPtr);
    extern xmlChar *xmlParsePubidLiteral(xmlParserCtxtPtr);
    extern void xmlParseReference(xmlParserCtxtPtr);
    extern int xmlParseSDDecl(xmlParserCtxtPtr);
    extern const xmlChar *xmlParseStartTag(xmlParserCtxtPtr);
    extern xmlChar *xmlParseSystemLiteral(xmlParserCtxtPtr);
    extern void xmlParseTextDecl(xmlParserCtxtPtr);
    extern xmlChar *xmlParseVersionInfo(xmlParserCtxtPtr);
    extern xmlChar *xmlParseVersionNum(xmlParserCtxtPtr);
    extern void xmlParseXMLDecl(xmlParserCtxtPtr);
    extern void xmlParserHandlePEReference(xmlParserCtxtPtr);
    extern void xmlParserInputShrink(xmlParserInputPtr);
    extern unsigned int xmlParserMaxDepth;
    extern xmlChar xmlPopInput(xmlParserCtxtPtr);
    extern void xmlPushInput(xmlParserCtxtPtr, xmlParserInputPtr);
    extern void xmlSetEntityReferenceFunc(xmlEntityReferenceFunc);
    extern int xmlSkipBlankChars(xmlParserCtxtPtr);
    extern xmlChar *xmlSplitQName(xmlParserCtxtPtr, const xmlChar *,
				  xmlChar * *);
    extern const xmlChar const xmlStringComment[];
    extern int xmlStringCurrentChar(xmlParserCtxtPtr, const xmlChar *,
				    int *);
    extern xmlChar *xmlStringDecodeEntities(xmlParserCtxtPtr,
					    const xmlChar *, int, xmlChar,
					    xmlChar, xmlChar);
    extern xmlChar *xmlStringLenDecodeEntities(xmlParserCtxtPtr,
					       const xmlChar *, int, int,
					       xmlChar, xmlChar, xmlChar);
    extern const xmlChar const xmlStringText[];
    extern const xmlChar const xmlStringTextNoenc[];
    extern int xmlSwitchEncoding(xmlParserCtxtPtr, xmlCharEncoding);
    extern int xmlSwitchInputEncoding(xmlParserCtxtPtr, xmlParserInputPtr,
				      xmlCharEncodingHandlerPtr);
    extern int xmlSwitchToEncoding(xmlParserCtxtPtr,
				   xmlCharEncodingHandlerPtr);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
