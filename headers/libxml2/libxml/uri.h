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


    extern void xmlFreeURI(xmlURIPtr);
    extern xmlChar *xmlCanonicPath(const xmlChar *);
    extern xmlURIPtr xmlParseURI(const char *);
    extern int xmlParseURIReference(xmlURIPtr, const char *);
    extern int xmlNormalizeURIPath(char *);
    extern void xmlPrintURI(FILE *, xmlURIPtr);
    extern xmlChar *xmlBuildRelativeURI(const xmlChar *, const xmlChar *);
    extern xmlChar *xmlSaveUri(xmlURIPtr);
    extern char *xmlURIUnescapeString(const char *, int, char *);
    extern xmlChar *xmlBuildURI(const xmlChar *, const xmlChar *);
    extern xmlURIPtr xmlParseURIRaw(const char *, int);
    extern xmlURIPtr xmlCreateURI(void);
    extern xmlChar *xmlURIEscape(const xmlChar *);
    extern xmlChar *xmlURIEscapeStr(const xmlChar *, const xmlChar *);
#ifdef __cplusplus
}
#endif
#endif
