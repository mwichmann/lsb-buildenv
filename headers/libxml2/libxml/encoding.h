#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_ENCODING_H_
#define _LIBXML2_LIBXML_ENCODING_H_

#include <iconv.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	XML_CHAR_ENCODING_ERROR = -1,
	XML_CHAR_ENCODING_NONE = 0,
	XML_CHAR_ENCODING_UTF8 = 1,
	XML_CHAR_ENCODING_UTF16LE = 2,
	XML_CHAR_ENCODING_UTF16BE = 3,
	XML_CHAR_ENCODING_UCS4LE = 4,
	XML_CHAR_ENCODING_UCS4BE = 5,
	XML_CHAR_ENCODING_EBCDIC = 6,
	XML_CHAR_ENCODING_UCS4_2143 = 7,
	XML_CHAR_ENCODING_UCS4_3412 = 8,
	XML_CHAR_ENCODING_UCS2 = 9,
	XML_CHAR_ENCODING_8859_1 = 10,
	XML_CHAR_ENCODING_8859_2 = 11,
	XML_CHAR_ENCODING_8859_3 = 12,
	XML_CHAR_ENCODING_8859_4 = 13,
	XML_CHAR_ENCODING_8859_5 = 14,
	XML_CHAR_ENCODING_8859_6 = 15,
	XML_CHAR_ENCODING_8859_7 = 16,
	XML_CHAR_ENCODING_8859_8 = 17,
	XML_CHAR_ENCODING_8859_9 = 18,
	XML_CHAR_ENCODING_2022_JP = 19,
	XML_CHAR_ENCODING_SHIFT_JIS = 20,
	XML_CHAR_ENCODING_EUC_JP = 21,
	XML_CHAR_ENCODING_ASCII = 22
    } xmlCharEncoding;


/* Function prototypes */

    extern int UTF8Toisolat1(unsigned char *out, int *outlen,
			     const unsigned char *in, int *inlen);
    extern int isolat1ToUTF8(unsigned char *out, int *outlen,
			     const unsigned char *in, int *inlen);
    extern int xmlAddEncodingAlias(const char *name, const char *alias);
    extern int xmlCharEncCloseFunc(xmlCharEncodingHandler * handler);
    extern int xmlCharEncFirstLine(xmlCharEncodingHandler * handler,
				   xmlBufferPtr out, xmlBufferPtr in);
    extern int xmlCharEncInFunc(xmlCharEncodingHandler * handler,
				xmlBufferPtr out, xmlBufferPtr in);
    extern int xmlCharEncOutFunc(xmlCharEncodingHandler * handler,
				 xmlBufferPtr out, xmlBufferPtr in);
    extern void xmlCleanupCharEncodingHandlers(void);
    extern void xmlCleanupEncodingAliases(void);
    extern int xmlDelEncodingAlias(const char *alias);
    extern xmlCharEncoding xmlDetectCharEncoding(const unsigned char *in,
						 int len);
    extern xmlCharEncodingHandlerPtr xmlFindCharEncodingHandler(const char
								*name);
    extern xmlCharEncodingHandlerPtr
	xmlGetCharEncodingHandler(xmlCharEncoding enc);
    extern const char *xmlGetCharEncodingName(xmlCharEncoding enc);
    extern const char *xmlGetEncodingAlias(const char *alias);
    extern void xmlInitCharEncodingHandlers(void);
    extern xmlCharEncodingHandlerPtr xmlNewCharEncodingHandler(const char
							       *name,
							       xmlCharEncodingInputFunc
							       input,
							       xmlCharEncodingOutputFunc
							       output);
    extern xmlCharEncoding xmlParseCharEncoding(const char *name);
    extern void xmlRegisterCharEncodingHandler(xmlCharEncodingHandlerPtr
					       handler);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
