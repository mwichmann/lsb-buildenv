#ifndef _LIBXML2_LIBXML_VALID_H_
#define _LIBXML2_LIBXML_VALID_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/list.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/xmlautomata.h>
#include <libxml2/libxml/entities.h>
#include <libxml2/libxml/SAX2.h>
#include <libxml2/libxml/xmlIO.h>

#ifdef __cplusplus
extern "C" {
#endif





    typedef xmlValidCtxt *xmlValidCtxtPtr;

    typedef struct _xmlHashTable xmlAttributeTable;

    typedef xmlAttributeTable *xmlAttributeTablePtr;

    typedef enum {
	XML_ELEMENT_TYPE_UNDEFINED = 0,
	XML_ELEMENT_TYPE_EMPTY = 1,
	XML_ELEMENT_TYPE_ANY = 2,
	XML_ELEMENT_TYPE_MIXED = 3,
	XML_ELEMENT_TYPE_ELEMENT = 4
    } xmlElementTypeVal;

    typedef enum {
	XML_ATTRIBUTE_NONE = 1,
	XML_ATTRIBUTE_REQUIRED = 2,
	XML_ATTRIBUTE_IMPLIED = 3,
	XML_ATTRIBUTE_FIXED = 4
    } xmlAttributeDefault;

    typedef struct _xmlAttribute xmlAttribute;

    typedef xmlAttribute *xmlAttributePtr;

    typedef struct _xmlElement xmlElement;

    typedef xmlElement *xmlElementPtr;

    typedef struct _xmlHashTable xmlNotationTable;

    typedef xmlNotationTable *xmlNotationTablePtr;

    typedef struct _xmlNotation xmlNotation;

    typedef xmlNotation *xmlNotationPtr;

    typedef struct _xmlID xmlID;

    typedef xmlID *xmlIDPtr;

    typedef struct _xmlRef xmlRef;

    typedef xmlRef *xmlRefPtr;

    typedef struct _xmlHashTable xmlElementTable;

    typedef xmlElementTable *xmlElementTablePtr;

    typedef struct _xmlHashTable xmlIDTable;

    typedef xmlIDTable *xmlIDTablePtr;

    typedef struct _xmlHashTable xmlRefTable;

    typedef xmlRefTable *xmlRefTablePtr;





    struct _xmlAttribute {
	void *_private;
	xmlElementType type;
	const xmlChar *name;
	struct _xmlNode *children;
	struct _xmlNode *last;
	struct _xmlDtd *parent;
	struct _xmlNode *next;
	struct _xmlNode *prev;
	struct _xmlDoc *doc;
	struct _xmlAttribute *nexth;
	xmlAttributeType atype;
	xmlAttributeDefault def;
	const xmlChar *defaultValue;
	xmlEnumerationPtr tree;
	const xmlChar *prefix;
	const xmlChar *elem;
    };


    struct _xmlElement {
	void *_private;
	xmlElementType type;
	const xmlChar *name;
	struct _xmlNode *children;
	struct _xmlNode *last;
	struct _xmlDtd *parent;
	struct _xmlNode *next;
	struct _xmlNode *prev;
	struct _xmlDoc *doc;
	xmlElementTypeVal etype;
	xmlElementContentPtr content;
	xmlAttributePtr attributes;
	const xmlChar *prefix;
	xmlRegexpPtr contModel;
    };


    struct _xmlNotation {
	const xmlChar *name;
	const xmlChar *PublicID;
	const xmlChar *SystemID;
    };


    struct _xmlID {
	struct _xmlID *next;
	const xmlChar *value;
	xmlAttrPtr attr;
	const xmlChar *name;
	int lineno;
	struct _xmlDoc *doc;
    };


    struct _xmlRef {
	struct _xmlRef *next;
	const xmlChar *value;
	xmlAttrPtr attr;
	const xmlChar *name;
	int lineno;
    };


    extern int xmlIsRef(xmlDocPtr, xmlNodePtr, xmlAttrPtr);
    extern int xmlValidateOneNamespace(xmlValidCtxtPtr, xmlDocPtr,
				       xmlNodePtr, const xmlChar *,
				       xmlNsPtr, const xmlChar *);
    extern xmlEnumerationPtr xmlCreateEnumeration(const xmlChar *);
    extern xmlListPtr xmlGetRefs(xmlDocPtr, const xmlChar *);
    extern int xmlIsMixedElement(xmlDocPtr, const xmlChar *);
    extern int xmlValidateNmtokensValue(const xmlChar *);
    extern int xmlValidateNameValue(const xmlChar *);
    extern xmlAttributeTablePtr
	xmlCopyAttributeTable(xmlAttributeTablePtr);
    extern xmlElementContentPtr xmlNewDocElementContent(xmlDocPtr,
							const xmlChar *,
							xmlElementContentType);
    extern int xmlValidateAttributeValue(xmlAttributeType,
					 const xmlChar *);
    extern void xmlDumpElementDecl(xmlBufferPtr, xmlElementPtr);
    extern int xmlRemoveID(xmlDocPtr, xmlAttrPtr);
    extern void xmlDumpNotationTable(xmlBufferPtr, xmlNotationTablePtr);
    extern void xmlFreeEnumeration(xmlEnumerationPtr);
    extern void xmlSnprintfElementContent(char *, int,
					  xmlElementContentPtr, int);
    extern int xmlValidateNotationUse(xmlValidCtxtPtr, xmlDocPtr,
				      const xmlChar *);
    extern int xmlValidateDocument(xmlValidCtxtPtr, xmlDocPtr);
    extern int xmlValidateOneAttribute(xmlValidCtxtPtr, xmlDocPtr,
				       xmlNodePtr, xmlAttrPtr,
				       const xmlChar *);
    extern xmlChar *xmlValidNormalizeAttributeValue(xmlDocPtr, xmlNodePtr,
						    const xmlChar *,
						    const xmlChar *);
    extern xmlElementPtr xmlGetDtdElementDesc(xmlDtdPtr, const xmlChar *);
    extern int xmlValidateDtd(xmlValidCtxtPtr, xmlDocPtr, xmlDtdPtr);
    extern int xmlValidateDocumentFinal(xmlValidCtxtPtr, xmlDocPtr);
    extern xmlAttributePtr xmlAddAttributeDecl(xmlValidCtxtPtr, xmlDtdPtr,
					       const xmlChar *,
					       const xmlChar *,
					       const xmlChar *,
					       xmlAttributeType,
					       xmlAttributeDefault,
					       const xmlChar *,
					       xmlEnumerationPtr);
    extern int xmlValidateNamesValue(const xmlChar *);
    extern xmlAttributePtr xmlGetDtdQAttrDesc(xmlDtdPtr, const xmlChar *,
					      const xmlChar *,
					      const xmlChar *);
    extern void xmlFreeDocElementContent(xmlDocPtr, xmlElementContentPtr);
    extern int xmlValidateElementDecl(xmlValidCtxtPtr, xmlDocPtr,
				      xmlElementPtr);
    extern xmlValidCtxtPtr xmlNewValidCtxt(void);
    extern int xmlValidateNmtokenValue(const xmlChar *);
    extern xmlElementPtr xmlGetDtdQElementDesc(xmlDtdPtr, const xmlChar *,
					       const xmlChar *);
    extern xmlNotationTablePtr xmlCopyNotationTable(xmlNotationTablePtr);
    extern void xmlDumpNotationDecl(xmlBufferPtr, xmlNotationPtr);
    extern int xmlValidatePushElement(xmlValidCtxtPtr, xmlDocPtr,
				      xmlNodePtr, const xmlChar *);
    extern int xmlValidateNotationDecl(xmlValidCtxtPtr, xmlDocPtr,
				       xmlNotationPtr);
    extern xmlNotationPtr xmlAddNotationDecl(xmlValidCtxtPtr, xmlDtdPtr,
					     const xmlChar *,
					     const xmlChar *,
					     const xmlChar *);
    extern int xmlValidBuildContentModel(xmlValidCtxtPtr, xmlElementPtr);
    extern int xmlValidatePopElement(xmlValidCtxtPtr, xmlDocPtr,
				     xmlNodePtr, const xmlChar *);
    extern xmlIDPtr xmlAddID(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *,
			     xmlAttrPtr);
    extern xmlElementContentPtr xmlCopyDocElementContent(xmlDocPtr,
							 xmlElementContentPtr);
    extern xmlAttributePtr xmlGetDtdAttrDesc(xmlDtdPtr, const xmlChar *,
					     const xmlChar *);
    extern xmlEnumerationPtr xmlCopyEnumeration(xmlEnumerationPtr);
    extern int xmlValidateAttributeDecl(xmlValidCtxtPtr, xmlDocPtr,
					xmlAttributePtr);
    extern xmlRefPtr xmlAddRef(xmlValidCtxtPtr, xmlDocPtr, const xmlChar *,
			       xmlAttrPtr);
    extern void xmlFreeElementTable(xmlElementTablePtr);
    extern void xmlDumpAttributeTable(xmlBufferPtr, xmlAttributeTablePtr);
    extern int xmlValidateOneElement(xmlValidCtxtPtr, xmlDocPtr,
				     xmlNodePtr);
    extern int xmlIsID(xmlDocPtr, xmlNodePtr, xmlAttrPtr);
    extern void xmlFreeIDTable(xmlIDTablePtr);
    extern int xmlRemoveRef(xmlDocPtr, xmlAttrPtr);
    extern int xmlValidGetValidElements(xmlNode *, xmlNode *,
					const xmlChar * *, int);
    extern void xmlFreeNotationTable(xmlNotationTablePtr);
    extern void xmlFreeRefTable(xmlRefTablePtr);
    extern xmlNotationPtr xmlGetDtdNotationDesc(xmlDtdPtr,
						const xmlChar *);
    extern int xmlValidateRoot(xmlValidCtxtPtr, xmlDocPtr);
    extern xmlElementTablePtr xmlCopyElementTable(xmlElementTablePtr);
    extern xmlElementPtr xmlAddElementDecl(xmlValidCtxtPtr, xmlDtdPtr,
					   const xmlChar *,
					   xmlElementTypeVal,
					   xmlElementContentPtr);
    extern void xmlFreeValidCtxt(xmlValidCtxtPtr);
    extern int xmlValidateDtdFinal(xmlValidCtxtPtr, xmlDocPtr);
    extern void xmlDumpElementTable(xmlBufferPtr, xmlElementTablePtr);
    extern void xmlDumpAttributeDecl(xmlBufferPtr, xmlAttributePtr);
    extern int xmlValidateElement(xmlValidCtxtPtr, xmlDocPtr, xmlNodePtr);
    extern xmlAttrPtr xmlGetID(xmlDocPtr, const xmlChar *);
    extern int xmlValidatePushCData(xmlValidCtxtPtr, const xmlChar *, int);
    extern void xmlFreeAttributeTable(xmlAttributeTablePtr);
    extern int xmlValidGetPotentialChildren(xmlElementContent *,
					    const xmlChar * *, int *, int);
    extern xmlChar *xmlValidCtxtNormalizeAttributeValue(xmlValidCtxtPtr,
							xmlDocPtr,
							xmlNodePtr,
							const xmlChar *,
							const xmlChar *);
#ifdef __cplusplus
}
#endif
#endif
