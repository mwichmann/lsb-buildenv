#ifndef _LIBXML2_LIBXML_ENTITIES_H_
#define _LIBXML2_LIBXML_ENTITIES_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	XML_INTERNAL_GENERAL_ENTITY = 1,
	XML_EXTERNAL_GENERAL_PARSED_ENTITY = 2,
	XML_EXTERNAL_GENERAL_UNPARSED_ENTITY = 3,
	XML_INTERNAL_PARAMETER_ENTITY = 4,
	XML_EXTERNAL_PARAMETER_ENTITY = 5,
	XML_INTERNAL_PREDEFINED_ENTITY = 6
    } xmlEntityType;

    typedef struct _xmlEntity xmlEntity;

    typedef xmlEntity *xmlEntityPtr;

    typedef struct _xmlHashTable xmlEntitiesTable;

    typedef xmlEntitiesTable *xmlEntitiesTablePtr;


    struct _xmlEntity {
	void *_private;
	xmlElementType type;
	const xmlChar *name;
	struct _xmlNode *children;
	struct _xmlNode *last;
	struct _xmlDtd *parent;
	struct _xmlNode *next;
	struct _xmlNode *prev;
	struct _xmlDoc *doc;
	xmlChar *orig;
	xmlChar *content;
	int length;
	xmlEntityType etype;
	const xmlChar *ExternalID;
	const xmlChar *SystemID;
	struct _xmlEntity *nexte;
	const xmlChar *URI;
	int owner;
    };





    extern xmlEntityPtr xmlGetParameterEntity(xmlDocPtr, const xmlChar *);
    extern xmlChar *xmlEncodeSpecialChars(xmlDocPtr, const xmlChar *);
    extern xmlEntityPtr xmlAddDtdEntity(xmlDocPtr, const xmlChar *, int,
					const xmlChar *, const xmlChar *,
					const xmlChar *);
    extern xmlEntitiesTablePtr xmlCopyEntitiesTable(xmlEntitiesTablePtr);
    extern xmlEntityPtr xmlGetDtdEntity(xmlDocPtr, const xmlChar *);
    extern xmlEntityPtr xmlAddDocEntity(xmlDocPtr, const xmlChar *, int,
					const xmlChar *, const xmlChar *,
					const xmlChar *);
    extern xmlEntityPtr xmlGetPredefinedEntity(const xmlChar *);
    extern void xmlDumpEntitiesTable(xmlBufferPtr, xmlEntitiesTablePtr);
    extern xmlChar *xmlEncodeEntitiesReentrant(xmlDocPtr, const xmlChar *);
    extern void xmlFreeEntitiesTable(xmlEntitiesTablePtr);
    extern void xmlDumpEntityDecl(xmlBufferPtr, xmlEntityPtr);
    extern xmlEntityPtr xmlGetDocEntity(xmlDocPtr, const xmlChar *);
#ifdef __cplusplus
}
#endif
#endif
