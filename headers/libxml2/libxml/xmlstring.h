#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLSTRING_H_
#define _LIBXML2_LIBXML_XMLSTRING_H_

#include <stdarg.h>
#include <libxml2/libxml/xmlversion.h>

#ifdef __cplusplus
extern "C" {
#endif


#define BAD_CAST	(xmlChar *)


    typedef unsigned char xmlChar;


/* Function prototypes */

    extern xmlChar *xmlCharStrdup(const char *cur);
    extern xmlChar *xmlCharStrndup(const char *cur, int len);
    extern int xmlCheckUTF8(const unsigned char *utf);
    extern int xmlGetUTF8Char(const unsigned char *utf, int *len);
    extern int xmlStrEqual(const xmlChar * str1, const xmlChar * str2);
    extern int xmlStrPrintf(xmlChar * buf, int len, const xmlChar * msg,
			    ...);
    extern int xmlStrQEqual(const xmlChar * pref, const xmlChar * name,
			    const xmlChar * str);
    extern int xmlStrVPrintf(xmlChar * buf, int len, const xmlChar * msg,
			     va_list ap);
    extern int xmlStrcasecmp(const xmlChar * str1, const xmlChar * str2);
    extern const xmlChar *xmlStrcasestr(const xmlChar * str,
					const xmlChar * val);
    extern xmlChar *xmlStrcat(xmlChar * cur, const xmlChar * add);
    extern const xmlChar *xmlStrchr(const xmlChar * str, xmlChar val);
    extern int xmlStrcmp(const xmlChar * str1, const xmlChar * str2);
    extern xmlChar *xmlStrdup(const xmlChar * cur);
    extern int xmlStrlen(const xmlChar * str);
    extern int xmlStrncasecmp(const xmlChar * str1, const xmlChar * str2,
			      int len);
    extern xmlChar *xmlStrncat(xmlChar * cur, const xmlChar * add,
			       int len);
    extern xmlChar *xmlStrncatNew(const xmlChar * str1,
				  const xmlChar * str2, int len);
    extern int xmlStrncmp(const xmlChar * str1, const xmlChar * str2,
			  int len);
    extern xmlChar *xmlStrndup(const xmlChar * cur, int len);
    extern const xmlChar *xmlStrstr(const xmlChar * str,
				    const xmlChar * val);
    extern xmlChar *xmlStrsub(const xmlChar * str, int start, int len);
    extern int xmlUTF8Charcmp(const xmlChar * utf1, const xmlChar * utf2);
    extern int xmlUTF8Size(const xmlChar * utf);
    extern int xmlUTF8Strlen(const xmlChar * utf);
    extern int xmlUTF8Strloc(const xmlChar * utf, const xmlChar * utfchar);
    extern xmlChar *xmlUTF8Strndup(const xmlChar * utf, int len);
    extern const xmlChar *xmlUTF8Strpos(const xmlChar * utf, int pos);
    extern int xmlUTF8Strsize(const xmlChar * utf, int len);
    extern xmlChar *xmlUTF8Strsub(const xmlChar * utf, int start, int len);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
