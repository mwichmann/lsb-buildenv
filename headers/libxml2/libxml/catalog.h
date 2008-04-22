#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_CATALOG_H_
#define _LIBXML2_LIBXML_CATALOG_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
#define XML_CATALOGS_NAMESPACE	 \
	(const xmlChar *) "urn:oasis:names:tc:entity:xmlns:xml:catalog"
#define XML_CATALOG_PI	(const xmlChar *) "oasis-xml-catalog"
#endif				/* __LSB_VERSION__ >= 3.1 */



#if __LSB_VERSION__ >= 31
    typedef enum {
	XML_CATA_ALLOW_NONE = 0,
	XML_CATA_ALLOW_GLOBAL = 1,
	XML_CATA_ALLOW_DOCUMENT = 2,
	XML_CATA_ALLOW_ALL = 3
    } xmlCatalogAllow;

    typedef struct _xmlCatalog xmlCatalog;

    typedef xmlCatalog *xmlCatalogPtr;

    typedef enum {
	XML_CATA_PREFER_NONE = 0,
	XML_CATA_PREFER_PUBLIC = 1,
	XML_CATA_PREFER_SYSTEM = 2
    } xmlCatalogPrefer;

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31


#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern int xmlACatalogAdd(xmlCatalogPtr, const xmlChar *,
			      const xmlChar *, const xmlChar *);
    extern void xmlACatalogDump(xmlCatalogPtr, FILE *);
    extern int xmlACatalogRemove(xmlCatalogPtr, const xmlChar *);
    extern xmlChar *xmlACatalogResolve(xmlCatalogPtr, const xmlChar *,
				       const xmlChar *);
    extern xmlChar *xmlACatalogResolvePublic(xmlCatalogPtr,
					     const xmlChar *);
    extern xmlChar *xmlACatalogResolveSystem(xmlCatalogPtr,
					     const xmlChar *);
    extern xmlChar *xmlACatalogResolveURI(xmlCatalogPtr, const xmlChar *);
    extern int xmlCatalogAdd(const xmlChar *, const xmlChar *,
			     const xmlChar *);
    extern void *xmlCatalogAddLocal(void *, const xmlChar *);
    extern void xmlCatalogCleanup(void);
    extern int xmlCatalogConvert(void);
    extern void xmlCatalogDump(FILE *);
    extern void xmlCatalogFreeLocal(void *);
    extern xmlCatalogAllow xmlCatalogGetDefaults(void);
    extern int xmlCatalogIsEmpty(xmlCatalogPtr);
    extern xmlChar *xmlCatalogLocalResolve(void *, const xmlChar *,
					   const xmlChar *);
    extern xmlChar *xmlCatalogLocalResolveURI(void *, const xmlChar *);
    extern int xmlCatalogRemove(const xmlChar *);
    extern xmlChar *xmlCatalogResolve(const xmlChar *, const xmlChar *);
    extern xmlChar *xmlCatalogResolvePublic(const xmlChar *);
    extern xmlChar *xmlCatalogResolveSystem(const xmlChar *);
    extern xmlChar *xmlCatalogResolveURI(const xmlChar *);
    extern int xmlCatalogSetDebug(int);
    extern xmlCatalogPrefer xmlCatalogSetDefaultPrefer(xmlCatalogPrefer);
    extern void xmlCatalogSetDefaults(xmlCatalogAllow);
    extern int xmlConvertSGMLCatalog(xmlCatalogPtr);
    extern void xmlFreeCatalog(xmlCatalogPtr);
    extern void xmlInitializeCatalog(void);
    extern xmlCatalogPtr xmlLoadACatalog(const char *);
    extern int xmlLoadCatalog(const char *);
    extern void xmlLoadCatalogs(const char *);
    extern xmlCatalogPtr xmlLoadSGMLSuperCatalog(const char *);
    extern xmlCatalogPtr xmlNewCatalog(int);
    extern xmlDocPtr xmlParseCatalogFile(const char *);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
