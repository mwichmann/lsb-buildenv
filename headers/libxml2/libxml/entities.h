#if (__LSB_VERSION__ >= 31 )
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


/* Function prototypes */

    extern xmlEntityPtr xmlAddDocEntity(xmlDocPtr doc,
					const xmlChar * name, int type,
					const xmlChar * ExternalID,
					const xmlChar * SystemID,
					const xmlChar * content);
    extern xmlEntityPtr xmlAddDtdEntity(xmlDocPtr doc,
					const xmlChar * name, int type,
					const xmlChar * ExternalID,
					const xmlChar * SystemID,
					const xmlChar * content);
    extern xmlEntitiesTablePtr xmlCopyEntitiesTable(xmlEntitiesTablePtr
						    table);
    extern void xmlDumpEntitiesTable(xmlBufferPtr buf,
				     xmlEntitiesTablePtr table);
    extern void xmlDumpEntityDecl(xmlBufferPtr buf, xmlEntityPtr ent);
    extern xmlChar *xmlEncodeEntitiesReentrant(xmlDocPtr doc,
					       const xmlChar * input);
    extern xmlChar *xmlEncodeSpecialChars(xmlDocPtr doc,
					  const xmlChar * input);
    extern void xmlFreeEntitiesTable(xmlEntitiesTablePtr table);
    extern xmlEntityPtr xmlGetDocEntity(xmlDocPtr doc,
					const xmlChar * name);
    extern xmlEntityPtr xmlGetDtdEntity(xmlDocPtr doc,
					const xmlChar * name);
    extern xmlEntityPtr xmlGetParameterEntity(xmlDocPtr doc,
					      const xmlChar * name);
    extern xmlEntityPtr xmlGetPredefinedEntity(const xmlChar * name);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
