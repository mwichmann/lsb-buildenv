#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_URI_H_
#define _LIBXML2_LIBXML_URI_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef struct _xmlURI xmlURI;

    typedef xmlURI *xmlURIPtr;

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31

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

#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern xmlChar *xmlBuildRelativeURI(const xmlChar *, const xmlChar *);
    extern xmlChar *xmlBuildURI(const xmlChar *, const xmlChar *);
    extern xmlChar *xmlCanonicPath(const xmlChar *);
    extern xmlURIPtr xmlCreateURI(void);
    extern void xmlFreeURI(xmlURIPtr);
    extern int xmlNormalizeURIPath(char *);
    extern xmlURIPtr xmlParseURI(const char *);
    extern xmlURIPtr xmlParseURIRaw(const char *, int);
    extern int xmlParseURIReference(xmlURIPtr, const char *);
    extern void xmlPrintURI(FILE *, xmlURIPtr);
    extern xmlChar *xmlSaveUri(xmlURIPtr);
    extern xmlChar *xmlURIEscape(const xmlChar *);
    extern xmlChar *xmlURIEscapeStr(const xmlChar *, const xmlChar *);
    extern char *xmlURIUnescapeString(const char *, int, char *);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
