#ifndef _LIBXML2_LIBXML_XMLSTRING_H_
#define _LIBXML2_LIBXML_XMLSTRING_H_

#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif


#define BAD_CAST	(xmlChar *)


    typedef unsigned char xmlChar;


    extern int xmlCheckUTF8(const unsigned char *);
    extern int xmlUTF8Strlen(const xmlChar *);
    extern const xmlChar *xmlStrstr(const xmlChar *, const xmlChar *);
    extern int xmlStrEqual(const xmlChar *, const xmlChar *);
    extern xmlChar *xmlStrdup(const xmlChar *);
    extern const xmlChar *xmlStrcasestr(const xmlChar *, xmlChar *);
    extern const xmlChar *xmlStrchr(const xmlChar *, xmlChar);
    extern int xmlGetUTF8Char(const unsigned char *, int *);
    extern const xmlChar *xmlUTF8Strpos(const xmlChar *, int);
    extern int xmlUTF8Size(const xmlChar *);
    extern int xmlStrlen(const xmlChar *);
    extern xmlChar *xmlUTF8Strndup(const xmlChar *, int);
    extern int xmlUTF8Charcmp(const xmlChar *, const xmlChar *);
    extern xmlChar *xmlStrcat(xmlChar *, const xmlChar *);
    extern int xmlStrncasecmp(const xmlChar *, const xmlChar *, int);
    extern int xmlStrncmp(const xmlChar *, const xmlChar *, int);
    extern xmlChar *xmlStrncatNew(const xmlChar *, const xmlChar *, int);
    extern xmlChar *xmlCharStrndup(const char *, int);
    extern xmlChar *xmlStrndup(const xmlChar *, int);
    extern xmlChar *xmlStrncat(xmlChar *, const xmlChar *, int);
    extern xmlChar *xmlStrsub(const xmlChar *, int, int);
    extern int xmlStrQEqual(const xmlChar *, const xmlChar *,
			    const xmlChar *);
    extern int xmlStrPrintf(xmlChar *, int, const xmlChar *, ...);
    extern xmlChar *xmlUTF8Strsub(const xmlChar *, int, int);
    extern int xmlStrVPrintf(xmlChar *, int, const xmlChar *, va_list);
    extern int xmlStrcmp(const xmlChar *, const xmlChar *);
    extern int xmlUTF8Strloc(const xmlChar *, const xmlChar *);
    extern xmlChar *xmlCharStrdup(const char *);
    extern int xmlStrcasecmp(const xmlChar *, const xmlChar *);
    extern int xmlUTF8Strsize(const xmlChar *, int);
#ifdef __cplusplus
}
#endif
#endif
