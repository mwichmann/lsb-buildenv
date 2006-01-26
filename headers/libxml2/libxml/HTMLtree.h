#ifndef _LIBXML2_LIBXML_HTMLTREE_H_
#define _LIBXML2_LIBXML_HTMLTREE_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/HTMLparser.h>

#ifdef __cplusplus
extern "C" {
#endif


#define HTML_PRESERVE_NODE	XML_CDATA_SECTION_NODE
#define HTML_COMMENT_NODE	XML_COMMENT_NODE
#define HTML_ENTITY_REF_NODE	XML_ENTITY_REF_NODE
#define HTML_PI_NODE	XML_PI_NODE
#define HTML_TEXT_NODE	XML_TEXT_NODE



    extern void htmlNodeDumpOutput(xmlOutputBufferPtr, xmlDocPtr,
				   xmlNodePtr, const char *);
    extern int htmlSaveFileFormat(const char *, xmlDocPtr, const char *,
				  int);
    extern int htmlSaveFile(const char *, xmlDocPtr);
    extern htmlDocPtr htmlNewDoc(const xmlChar *, const xmlChar *);
    extern const xmlChar *htmlGetMetaEncoding(htmlDocPtr);
    extern void htmlNodeDumpFile(FILE *, xmlDocPtr, xmlNodePtr);
    extern int htmlNodeDump(xmlBufferPtr, xmlDocPtr, xmlNodePtr);
    extern void htmlDocContentDumpFormatOutput(xmlOutputBufferPtr,
					       xmlDocPtr, const char *,
					       int);
    extern int htmlIsBooleanAttr(const xmlChar *);
    extern int htmlSaveFileEnc(const char *, xmlDocPtr, const char *);
    extern htmlDocPtr htmlNewDocNoDtD(const xmlChar *, const xmlChar *);
    extern int htmlSetMetaEncoding(htmlDocPtr, const xmlChar *);
    extern void htmlDocContentDumpOutput(xmlOutputBufferPtr, xmlDocPtr,
					 const char *);
    extern int htmlNodeDumpFileFormat(FILE *, xmlDocPtr, xmlNodePtr,
				      const char *, int);
    extern int htmlDocDump(FILE *, xmlDocPtr);
    extern void htmlNodeDumpFormatOutput(xmlOutputBufferPtr, xmlDocPtr,
					 xmlNodePtr, const char *, int);
    extern void htmlDocDumpMemory(xmlDocPtr, xmlChar * *, int *);
#ifdef __cplusplus
}
#endif
#endif