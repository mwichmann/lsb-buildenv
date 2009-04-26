#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_URI_H_
#define _LIBXML2_LIBXML_URI_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlURI xmlURI;

    typedef xmlURI *xmlURIPtr;

    struct _xmlURI {
	char *scheme;
	char *opaque;
	char *authority;
	char *server;
	char *user;
	int port;
	char *path;
	char *query;
	char *fragment;
	int cleanup;
    };


/* Function prototypes */

    extern xmlChar *xmlBuildRelativeURI(const xmlChar * URI,
					const xmlChar * base);
    extern xmlChar *xmlBuildURI(const xmlChar * URI, const xmlChar * base);
    extern xmlChar *xmlCanonicPath(const xmlChar * path);
    extern xmlURIPtr xmlCreateURI(void);
    extern void xmlFreeURI(xmlURIPtr uri);
    extern int xmlNormalizeURIPath(char *path);
    extern xmlURIPtr xmlParseURI(const char *str);
    extern xmlURIPtr xmlParseURIRaw(const char *str, int raw);
    extern int xmlParseURIReference(xmlURIPtr uri, const char *str);
    extern void xmlPrintURI(FILE * stream, xmlURIPtr uri);
    extern xmlChar *xmlSaveUri(xmlURIPtr uri);
    extern xmlChar *xmlURIEscape(const xmlChar * str);
    extern xmlChar *xmlURIEscapeStr(const xmlChar * str,
				    const xmlChar * list);
    extern char *xmlURIUnescapeString(const char *str, int len,
				      char *target);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
