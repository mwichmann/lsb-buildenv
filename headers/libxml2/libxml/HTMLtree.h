#if (__LSB_VERSION__ >= 31 )
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



/* Function prototypes */

    extern void htmlDocContentDumpFormatOutput(xmlOutputBufferPtr,
					       xmlDocPtr, const char *,
					       int);
    extern void htmlDocContentDumpOutput(xmlOutputBufferPtr, xmlDocPtr,
					 const char *);
    extern int htmlDocDump(FILE *, xmlDocPtr);
    extern void htmlDocDumpMemory(xmlDocPtr, xmlChar * *, int *);
    extern const xmlChar *htmlGetMetaEncoding(htmlDocPtr);
    extern int htmlIsBooleanAttr(const xmlChar *);
    extern htmlDocPtr htmlNewDoc(const xmlChar *, const xmlChar *);
    extern htmlDocPtr htmlNewDocNoDtD(const xmlChar *, const xmlChar *);
    extern int htmlNodeDump(xmlBufferPtr, xmlDocPtr, xmlNodePtr);
    extern void htmlNodeDumpFile(FILE *, xmlDocPtr, xmlNodePtr);
    extern int htmlNodeDumpFileFormat(FILE *, xmlDocPtr, xmlNodePtr,
				      const char *, int);
    extern void htmlNodeDumpFormatOutput(xmlOutputBufferPtr, xmlDocPtr,
					 xmlNodePtr, const char *, int);
    extern void htmlNodeDumpOutput(xmlOutputBufferPtr, xmlDocPtr,
				   xmlNodePtr, const char *);
    extern int htmlSaveFile(const char *, xmlDocPtr);
    extern int htmlSaveFileEnc(const char *, xmlDocPtr, const char *);
    extern int htmlSaveFileFormat(const char *, xmlDocPtr, const char *,
				  int);
    extern int htmlSetMetaEncoding(htmlDocPtr, const xmlChar *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
