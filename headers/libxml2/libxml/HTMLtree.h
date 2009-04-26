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

    extern void htmlDocContentDumpFormatOutput(xmlOutputBufferPtr buf,
					       xmlDocPtr cur,
					       const char *encoding,
					       int format);
    extern void htmlDocContentDumpOutput(xmlOutputBufferPtr buf,
					 xmlDocPtr cur,
					 const char *encoding);
    extern int htmlDocDump(FILE * f, xmlDocPtr cur);
    extern void htmlDocDumpMemory(xmlDocPtr cur, xmlChar * *mem,
				  int *size);
    extern const xmlChar *htmlGetMetaEncoding(htmlDocPtr doc);
    extern int htmlIsBooleanAttr(const xmlChar * name);
    extern htmlDocPtr htmlNewDoc(const xmlChar * URI,
				 const xmlChar * ExternalID);
    extern htmlDocPtr htmlNewDocNoDtD(const xmlChar * URI,
				      const xmlChar * ExternalID);
    extern int htmlNodeDump(xmlBufferPtr buf, xmlDocPtr doc,
			    xmlNodePtr cur);
    extern void htmlNodeDumpFile(FILE * out, xmlDocPtr doc,
				 xmlNodePtr cur);
    extern int htmlNodeDumpFileFormat(FILE * out, xmlDocPtr doc,
				      xmlNodePtr cur, const char *encoding,
				      int format);
    extern void htmlNodeDumpFormatOutput(xmlOutputBufferPtr buf,
					 xmlDocPtr doc, xmlNodePtr cur,
					 const char *encoding, int format);
    extern void htmlNodeDumpOutput(xmlOutputBufferPtr buf, xmlDocPtr doc,
				   xmlNodePtr cur, const char *encoding);
    extern int htmlSaveFile(const char *filename, xmlDocPtr cur);
    extern int htmlSaveFileEnc(const char *filename, xmlDocPtr cur,
			       const char *encoding);
    extern int htmlSaveFileFormat(const char *filename, xmlDocPtr cur,
				  const char *encoding, int format);
    extern int htmlSetMetaEncoding(htmlDocPtr doc,
				   const xmlChar * encoding);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
