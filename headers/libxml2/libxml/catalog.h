#ifndef _LIBXML2_LIBXML_CATALOG_H_
#define _LIBXML2_LIBXML_CATALOG_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif



#define XML_CATALOGS_NAMESPACE	 \
	(const xmlChar *) "urn:oasis:names:tc:entity:xmlns:xml:catalog"
#define XML_CATALOG_PI	(const xmlChar *) "oasis-xml-catalog"


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





    extern xmlChar *xmlCatalogLocalResolveURI(void *, const xmlChar *);
    extern void xmlCatalogSetDefaults(xmlCatalogAllow);
    extern void xmlInitializeCatalog(void);
    extern xmlCatalogPtr xmlLoadACatalog(const char *);
    extern xmlChar *xmlACatalogResolvePublic(xmlCatalogPtr,
					     const xmlChar *);
    extern int xmlCatalogIsEmpty(xmlCatalogPtr);
    extern xmlChar *xmlACatalogResolve(xmlCatalogPtr, const xmlChar *,
				       const xmlChar *);
    extern void xmlCatalogDump(FILE *);
    extern int xmlCatalogAdd(const xmlChar *, const xmlChar *,
			     const xmlChar *);
    extern int xmlCatalogSetDebug(int);
    extern xmlDocPtr xmlParseCatalogFile(const char *);
    extern int xmlACatalogRemove(xmlCatalogPtr, const xmlChar *);
    extern xmlChar *xmlCatalogResolveURI(const xmlChar *);
    extern void xmlACatalogDump(xmlCatalogPtr, FILE *);
    extern xmlChar *xmlCatalogResolve(const xmlChar *, const xmlChar *);
    extern void xmlCatalogCleanup(void);
    extern xmlChar *xmlCatalogResolveSystem(const xmlChar *);
    extern xmlChar *xmlACatalogResolveURI(xmlCatalogPtr, const xmlChar *);
    extern int xmlCatalogRemove(const xmlChar *);
    extern xmlCatalogPtr xmlLoadSGMLSuperCatalog(const char *);
    extern int xmlLoadCatalog(const char *);
    extern void xmlCatalogFreeLocal(void *);
    extern void *xmlCatalogAddLocal(void *, const xmlChar *);
    extern int xmlACatalogAdd(xmlCatalogPtr, const xmlChar *,
			      const xmlChar *, const xmlChar *);
    extern int xmlCatalogConvert(void);
    extern xmlChar *xmlCatalogResolvePublic(const xmlChar *);
    extern int xmlConvertSGMLCatalog(xmlCatalogPtr);
    extern xmlCatalogPtr xmlNewCatalog(int);
    extern xmlChar *xmlACatalogResolveSystem(xmlCatalogPtr,
					     const xmlChar *);
    extern void xmlFreeCatalog(xmlCatalogPtr);
    extern xmlChar *xmlCatalogLocalResolve(void *, const xmlChar *,
					   const xmlChar *);
    extern xmlCatalogAllow xmlCatalogGetDefaults(void);
    extern xmlCatalogPrefer xmlCatalogSetDefaultPrefer(xmlCatalogPrefer);
    extern void xmlLoadCatalogs(const char *);
#ifdef __cplusplus
}
#endif
#endif
