#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_NUMBERSINTERNALS_H_
#define _LIBXSLT_NUMBERSINTERNALS_H_

#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xsltNumberData xsltNumberData;

    typedef xsltNumberData *xsltNumberDataPtr;

    typedef struct _xsltFormatNumberInfo xsltFormatNumberInfo;

    struct _xsltNumberData {
	const unsigned char *level;
	const unsigned char *count;
	const unsigned char *from;
	const unsigned char *value;
	const unsigned char *format;
	int has_format;
	int digitsPerGroup;
	int groupingCharacter;
	int groupingCharacterLen;
	xmlDocPtr doc;
	xmlNodePtr node;
    };

    struct _xsltFormatNumberInfo {
	int integer_hash;
	int integer_digits;
	int frac_digits;
	int frac_hash;
	int group;
	int multiplier;
	char add_decimal;
	char is_multiplier_set;
	char is_negative_pattern;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
