#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLWRITER_H_
#define _LIBXML2_LIBXML_XMLWRITER_H_

#include <stdarg.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/SAX2.h>
#include <libxml2/libxml/xmlIO.h>

#ifdef __cplusplus
extern "C" {
#endif


#define xmlTextWriterWriteDocType	xmlTextWriterWriteDTD
#define xmlTextWriterWriteProcessingInstruction	xmlTextWriterWritePI


    typedef struct _xmlTextWriter xmlTextWriter;

    typedef xmlTextWriter *xmlTextWriterPtr;


/* Function prototypes */

    extern void xmlFreeTextWriter(xmlTextWriterPtr writer);
    extern xmlTextWriterPtr xmlNewTextWriter(xmlOutputBufferPtr out);
    extern xmlTextWriterPtr xmlNewTextWriterDoc(xmlDocPtr * doc,
						int compression);
    extern xmlTextWriterPtr xmlNewTextWriterFilename(const char *uri,
						     int compression);
    extern xmlTextWriterPtr xmlNewTextWriterMemory(xmlBufferPtr buf,
						   int compression);
    extern xmlTextWriterPtr xmlNewTextWriterPushParser(xmlParserCtxtPtr
						       ctxt,
						       int compression);
    extern xmlTextWriterPtr xmlNewTextWriterTree(xmlDocPtr doc,
						 xmlNodePtr node,
						 int compression);
    extern int xmlTextWriterEndAttribute(xmlTextWriterPtr writer);
    extern int xmlTextWriterEndCDATA(xmlTextWriterPtr writer);
    extern int xmlTextWriterEndComment(xmlTextWriterPtr writer);
    extern int xmlTextWriterEndDTD(xmlTextWriterPtr writer);
    extern int xmlTextWriterEndDTDAttlist(xmlTextWriterPtr writer);
    extern int xmlTextWriterEndDTDElement(xmlTextWriterPtr writer);
    extern int xmlTextWriterEndDTDEntity(xmlTextWriterPtr writer);
    extern int xmlTextWriterEndDocument(xmlTextWriterPtr writer);
    extern int xmlTextWriterEndElement(xmlTextWriterPtr writer);
    extern int xmlTextWriterEndPI(xmlTextWriterPtr writer);
    extern int xmlTextWriterFlush(xmlTextWriterPtr writer);
    extern int xmlTextWriterFullEndElement(xmlTextWriterPtr writer);
    extern int xmlTextWriterSetIndent(xmlTextWriterPtr writer, int indent);
    extern int xmlTextWriterSetIndentString(xmlTextWriterPtr writer,
					    const xmlChar * str);
    extern int xmlTextWriterStartAttribute(xmlTextWriterPtr writer,
					   const xmlChar * name);
    extern int xmlTextWriterStartAttributeNS(xmlTextWriterPtr writer,
					     const xmlChar * prefix,
					     const xmlChar * name,
					     const xmlChar * namespaceURI);
    extern int xmlTextWriterStartCDATA(xmlTextWriterPtr writer);
    extern int xmlTextWriterStartComment(xmlTextWriterPtr writer);
    extern int xmlTextWriterStartDTD(xmlTextWriterPtr writer,
				     const xmlChar * name,
				     const xmlChar * pubid,
				     const xmlChar * sysid);
    extern int xmlTextWriterStartDTDAttlist(xmlTextWriterPtr writer,
					    const xmlChar * name);
    extern int xmlTextWriterStartDTDElement(xmlTextWriterPtr writer,
					    const xmlChar * name);
    extern int xmlTextWriterStartDTDEntity(xmlTextWriterPtr writer, int pe,
					   const xmlChar * name);
    extern int xmlTextWriterStartDocument(xmlTextWriterPtr writer,
					  const char *version,
					  const char *encoding,
					  const char *standalone);
    extern int xmlTextWriterStartElement(xmlTextWriterPtr writer,
					 const xmlChar * name);
    extern int xmlTextWriterStartElementNS(xmlTextWriterPtr writer,
					   const xmlChar * prefix,
					   const xmlChar * name,
					   const xmlChar * namespaceURI);
    extern int xmlTextWriterStartPI(xmlTextWriterPtr writer,
				    const xmlChar * target);
    extern int xmlTextWriterWriteAttribute(xmlTextWriterPtr writer,
					   const xmlChar * name,
					   const xmlChar * content);
    extern int xmlTextWriterWriteAttributeNS(xmlTextWriterPtr writer,
					     const xmlChar * prefix,
					     const xmlChar * name,
					     const xmlChar * namespaceURI,
					     const xmlChar * content);
    extern int xmlTextWriterWriteBase64(xmlTextWriterPtr writer,
					const char *data, int start,
					int len);
    extern int xmlTextWriterWriteBinHex(xmlTextWriterPtr writer,
					const char *data, int start,
					int len);
    extern int xmlTextWriterWriteCDATA(xmlTextWriterPtr writer,
				       const xmlChar * content);
    extern int xmlTextWriterWriteComment(xmlTextWriterPtr writer,
					 const xmlChar * content);
    extern int xmlTextWriterWriteDTD(xmlTextWriterPtr writer,
				     const xmlChar * name,
				     const xmlChar * pubid,
				     const xmlChar * sysid,
				     const xmlChar * subset);
    extern int xmlTextWriterWriteDTDAttlist(xmlTextWriterPtr writer,
					    const xmlChar * name,
					    const xmlChar * content);
    extern int xmlTextWriterWriteDTDElement(xmlTextWriterPtr writer,
					    const xmlChar * name,
					    const xmlChar * content);
    extern int xmlTextWriterWriteDTDEntity(xmlTextWriterPtr writer, int pe,
					   const xmlChar * name,
					   const xmlChar * pubid,
					   const xmlChar * sysid,
					   const xmlChar * ndataid,
					   const xmlChar * content);
    extern int xmlTextWriterWriteDTDExternalEntity(xmlTextWriterPtr writer,
						   int pe,
						   const xmlChar * name,
						   const xmlChar * pubid,
						   const xmlChar * sysid,
						   const xmlChar *
						   ndataid);
    extern int xmlTextWriterWriteDTDExternalEntityContents(xmlTextWriterPtr
							   writer,
							   const xmlChar *
							   pubid,
							   const xmlChar *
							   sysid,
							   const xmlChar *
							   ndataid);
    extern int xmlTextWriterWriteDTDInternalEntity(xmlTextWriterPtr writer,
						   int pe,
						   const xmlChar * name,
						   const xmlChar *
						   content);
    extern int xmlTextWriterWriteDTDNotation(xmlTextWriterPtr writer,
					     const xmlChar * name,
					     const xmlChar * pubid,
					     const xmlChar * sysid);
    extern int xmlTextWriterWriteElement(xmlTextWriterPtr writer,
					 const xmlChar * name,
					 const xmlChar * content);
    extern int xmlTextWriterWriteElementNS(xmlTextWriterPtr writer,
					   const xmlChar * prefix,
					   const xmlChar * name,
					   const xmlChar * namespaceURI,
					   const xmlChar * content);
    extern int xmlTextWriterWriteFormatAttribute(xmlTextWriterPtr writer,
						 const xmlChar * name,
						 const char *format, ...);
    extern int xmlTextWriterWriteFormatAttributeNS(xmlTextWriterPtr writer,
						   const xmlChar * prefix,
						   const xmlChar * name,
						   const xmlChar *
						   namespaceURI,
						   const char *format,
						   ...);
    extern int xmlTextWriterWriteFormatCDATA(xmlTextWriterPtr writer,
					     const char *format, ...);
    extern int xmlTextWriterWriteFormatComment(xmlTextWriterPtr writer,
					       const char *format, ...);
    extern int xmlTextWriterWriteFormatDTD(xmlTextWriterPtr writer,
					   const xmlChar * name,
					   const xmlChar * pubid,
					   const xmlChar * sysid,
					   const char *format, ...);
    extern int xmlTextWriterWriteFormatDTDAttlist(xmlTextWriterPtr writer,
						  const xmlChar * name,
						  const char *format, ...);
    extern int xmlTextWriterWriteFormatDTDElement(xmlTextWriterPtr writer,
						  const xmlChar * name,
						  const char *format, ...);
    extern int xmlTextWriterWriteFormatDTDInternalEntity(xmlTextWriterPtr
							 writer, int pe,
							 const xmlChar *
							 name,
							 const char
							 *format, ...);
    extern int xmlTextWriterWriteFormatElement(xmlTextWriterPtr writer,
					       const xmlChar * name,
					       const char *format, ...);
    extern int xmlTextWriterWriteFormatElementNS(xmlTextWriterPtr writer,
						 const xmlChar * prefix,
						 const xmlChar * name,
						 const xmlChar *
						 namespaceURI,
						 const char *format, ...);
    extern int xmlTextWriterWriteFormatPI(xmlTextWriterPtr writer,
					  const xmlChar * target,
					  const char *format, ...);
    extern int xmlTextWriterWriteFormatRaw(xmlTextWriterPtr writer,
					   const char *format, ...);
    extern int xmlTextWriterWriteFormatString(xmlTextWriterPtr writer,
					      const char *format, ...);
    extern int xmlTextWriterWritePI(xmlTextWriterPtr writer,
				    const xmlChar * target,
				    const xmlChar * content);
    extern int xmlTextWriterWriteRaw(xmlTextWriterPtr writer,
				     const xmlChar * content);
    extern int xmlTextWriterWriteRawLen(xmlTextWriterPtr writer,
					const xmlChar * content, int len);
    extern int xmlTextWriterWriteString(xmlTextWriterPtr writer,
					const xmlChar * content);
    extern int xmlTextWriterWriteVFormatAttribute(xmlTextWriterPtr writer,
						  const xmlChar * name,
						  const char *format,
						  va_list argptr);
    extern int xmlTextWriterWriteVFormatAttributeNS(xmlTextWriterPtr
						    writer,
						    const xmlChar * prefix,
						    const xmlChar * name,
						    const xmlChar *
						    namespaceURI,
						    const char *format,
						    va_list argptr);
    extern int xmlTextWriterWriteVFormatCDATA(xmlTextWriterPtr writer,
					      const char *format,
					      va_list argptr);
    extern int xmlTextWriterWriteVFormatComment(xmlTextWriterPtr writer,
						const char *format,
						va_list argptr);
    extern int xmlTextWriterWriteVFormatDTD(xmlTextWriterPtr writer,
					    const xmlChar * name,
					    const xmlChar * pubid,
					    const xmlChar * sysid,
					    const char *format,
					    va_list argptr);
    extern int xmlTextWriterWriteVFormatDTDAttlist(xmlTextWriterPtr writer,
						   const xmlChar * name,
						   const char *format,
						   va_list argptr);
    extern int xmlTextWriterWriteVFormatDTDElement(xmlTextWriterPtr writer,
						   const xmlChar * name,
						   const char *format,
						   va_list argptr);
    extern int xmlTextWriterWriteVFormatDTDInternalEntity(xmlTextWriterPtr
							  writer, int pe,
							  const xmlChar *
							  name,
							  const char
							  *format,
							  va_list argptr);
    extern int xmlTextWriterWriteVFormatElement(xmlTextWriterPtr writer,
						const xmlChar * name,
						const char *format,
						va_list argptr);
    extern int xmlTextWriterWriteVFormatElementNS(xmlTextWriterPtr writer,
						  const xmlChar * prefix,
						  const xmlChar * name,
						  const xmlChar *
						  namespaceURI,
						  const char *format,
						  va_list argptr);
    extern int xmlTextWriterWriteVFormatPI(xmlTextWriterPtr writer,
					   const xmlChar * target,
					   const char *format,
					   va_list argptr);
    extern int xmlTextWriterWriteVFormatRaw(xmlTextWriterPtr writer,
					    const char *format,
					    va_list argptr);
    extern int xmlTextWriterWriteVFormatString(xmlTextWriterPtr writer,
					       const char *format,
					       va_list argptr);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
