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

    extern void xmlFreeTextWriter(xmlTextWriterPtr);
    extern xmlTextWriterPtr xmlNewTextWriter(xmlOutputBufferPtr);
    extern xmlTextWriterPtr xmlNewTextWriterDoc(xmlDocPtr *, int);
    extern xmlTextWriterPtr xmlNewTextWriterFilename(const char *, int);
    extern xmlTextWriterPtr xmlNewTextWriterMemory(xmlBufferPtr, int);
    extern xmlTextWriterPtr xmlNewTextWriterPushParser(xmlParserCtxtPtr,
						       int);
    extern xmlTextWriterPtr xmlNewTextWriterTree(xmlDocPtr, xmlNodePtr,
						 int);
    extern int xmlTextWriterEndAttribute(xmlTextWriterPtr);
    extern int xmlTextWriterEndCDATA(xmlTextWriterPtr);
    extern int xmlTextWriterEndComment(xmlTextWriterPtr);
    extern int xmlTextWriterEndDTD(xmlTextWriterPtr);
    extern int xmlTextWriterEndDTDAttlist(xmlTextWriterPtr);
    extern int xmlTextWriterEndDTDElement(xmlTextWriterPtr);
    extern int xmlTextWriterEndDTDEntity(xmlTextWriterPtr);
    extern int xmlTextWriterEndDocument(xmlTextWriterPtr);
    extern int xmlTextWriterEndElement(xmlTextWriterPtr);
    extern int xmlTextWriterEndPI(xmlTextWriterPtr);
    extern int xmlTextWriterFlush(xmlTextWriterPtr);
    extern int xmlTextWriterFullEndElement(xmlTextWriterPtr);
    extern int xmlTextWriterSetIndent(xmlTextWriterPtr, int);
    extern int xmlTextWriterSetIndentString(xmlTextWriterPtr,
					    const xmlChar *);
    extern int xmlTextWriterStartAttribute(xmlTextWriterPtr,
					   const xmlChar *);
    extern int xmlTextWriterStartAttributeNS(xmlTextWriterPtr,
					     const xmlChar *,
					     const xmlChar *,
					     const xmlChar *);
    extern int xmlTextWriterStartCDATA(xmlTextWriterPtr);
    extern int xmlTextWriterStartComment(xmlTextWriterPtr);
    extern int xmlTextWriterStartDTD(xmlTextWriterPtr, const xmlChar *,
				     const xmlChar *, const xmlChar *);
    extern int xmlTextWriterStartDTDAttlist(xmlTextWriterPtr,
					    const xmlChar *);
    extern int xmlTextWriterStartDTDElement(xmlTextWriterPtr,
					    const xmlChar *);
    extern int xmlTextWriterStartDTDEntity(xmlTextWriterPtr, int,
					   const xmlChar *);
    extern int xmlTextWriterStartDocument(xmlTextWriterPtr, const char *,
					  const char *, const char *);
    extern int xmlTextWriterStartElement(xmlTextWriterPtr,
					 const xmlChar *);
    extern int xmlTextWriterStartElementNS(xmlTextWriterPtr,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *);
    extern int xmlTextWriterStartPI(xmlTextWriterPtr, const xmlChar *);
    extern int xmlTextWriterWriteAttribute(xmlTextWriterPtr,
					   const xmlChar *,
					   const xmlChar *);
    extern int xmlTextWriterWriteAttributeNS(xmlTextWriterPtr,
					     const xmlChar *,
					     const xmlChar *,
					     const xmlChar *,
					     const xmlChar *);
    extern int xmlTextWriterWriteBase64(xmlTextWriterPtr, const char *,
					int, int);
    extern int xmlTextWriterWriteBinHex(xmlTextWriterPtr, const char *,
					int, int);
    extern int xmlTextWriterWriteCDATA(xmlTextWriterPtr, const xmlChar *);
    extern int xmlTextWriterWriteComment(xmlTextWriterPtr,
					 const xmlChar *);
    extern int xmlTextWriterWriteDTD(xmlTextWriterPtr, const xmlChar *,
				     const xmlChar *, const xmlChar *,
				     const xmlChar *);
    extern int xmlTextWriterWriteDTDAttlist(xmlTextWriterPtr,
					    const xmlChar *,
					    const xmlChar *);
    extern int xmlTextWriterWriteDTDElement(xmlTextWriterPtr,
					    const xmlChar *,
					    const xmlChar *);
    extern int xmlTextWriterWriteDTDEntity(xmlTextWriterPtr, int,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *);
    extern int xmlTextWriterWriteDTDExternalEntity(xmlTextWriterPtr, int,
						   const xmlChar *,
						   const xmlChar *,
						   const xmlChar *,
						   const xmlChar *);
    extern int
	xmlTextWriterWriteDTDExternalEntityContents(xmlTextWriterPtr,
						    const xmlChar *,
						    const xmlChar *,
						    const xmlChar *);
    extern int xmlTextWriterWriteDTDInternalEntity(xmlTextWriterPtr, int,
						   const xmlChar *,
						   const xmlChar *);
    extern int xmlTextWriterWriteDTDNotation(xmlTextWriterPtr,
					     const xmlChar *,
					     const xmlChar *,
					     const xmlChar *);
    extern int xmlTextWriterWriteElement(xmlTextWriterPtr, const xmlChar *,
					 const xmlChar *);
    extern int xmlTextWriterWriteElementNS(xmlTextWriterPtr,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *);
    extern int xmlTextWriterWriteFormatAttribute(xmlTextWriterPtr,
						 const xmlChar *,
						 const char *, ...);
    extern int xmlTextWriterWriteFormatAttributeNS(xmlTextWriterPtr,
						   const xmlChar *,
						   const xmlChar *,
						   const xmlChar *,
						   const char *, ...);
    extern int xmlTextWriterWriteFormatCDATA(xmlTextWriterPtr,
					     const char *, ...);
    extern int xmlTextWriterWriteFormatComment(xmlTextWriterPtr,
					       const char *, ...);
    extern int xmlTextWriterWriteFormatDTD(xmlTextWriterPtr,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *, const char *,
					   ...);
    extern int xmlTextWriterWriteFormatDTDAttlist(xmlTextWriterPtr,
						  const xmlChar *,
						  const char *, ...);
    extern int xmlTextWriterWriteFormatDTDElement(xmlTextWriterPtr,
						  const xmlChar *,
						  const char *, ...);
    extern int xmlTextWriterWriteFormatDTDInternalEntity(xmlTextWriterPtr,
							 int,
							 const xmlChar *,
							 const char *,
							 ...);
    extern int xmlTextWriterWriteFormatElement(xmlTextWriterPtr,
					       const xmlChar *,
					       const char *, ...);
    extern int xmlTextWriterWriteFormatElementNS(xmlTextWriterPtr,
						 const xmlChar *,
						 const xmlChar *,
						 const xmlChar *,
						 const char *, ...);
    extern int xmlTextWriterWriteFormatPI(xmlTextWriterPtr,
					  const xmlChar *, const char *,
					  ...);
    extern int xmlTextWriterWriteFormatRaw(xmlTextWriterPtr, const char *,
					   ...);
    extern int xmlTextWriterWriteFormatString(xmlTextWriterPtr,
					      const char *, ...);
    extern int xmlTextWriterWritePI(xmlTextWriterPtr, const xmlChar *,
				    const xmlChar *);
    extern int xmlTextWriterWriteRaw(xmlTextWriterPtr, const xmlChar *);
    extern int xmlTextWriterWriteRawLen(xmlTextWriterPtr, const xmlChar *,
					int);
    extern int xmlTextWriterWriteString(xmlTextWriterPtr, const xmlChar *);
    extern int xmlTextWriterWriteVFormatAttribute(xmlTextWriterPtr,
						  const xmlChar *,
						  const char *, va_list);
    extern int xmlTextWriterWriteVFormatAttributeNS(xmlTextWriterPtr,
						    const xmlChar *,
						    const xmlChar *,
						    const xmlChar *,
						    const char *, va_list);
    extern int xmlTextWriterWriteVFormatCDATA(xmlTextWriterPtr,
					      const char *, va_list);
    extern int xmlTextWriterWriteVFormatComment(xmlTextWriterPtr,
						const char *, va_list);
    extern int xmlTextWriterWriteVFormatDTD(xmlTextWriterPtr,
					    const xmlChar *,
					    const xmlChar *,
					    const xmlChar *, const char *,
					    va_list);
    extern int xmlTextWriterWriteVFormatDTDAttlist(xmlTextWriterPtr,
						   const xmlChar *,
						   const char *, va_list);
    extern int xmlTextWriterWriteVFormatDTDElement(xmlTextWriterPtr,
						   const xmlChar *,
						   const char *, va_list);
    extern int xmlTextWriterWriteVFormatDTDInternalEntity(xmlTextWriterPtr,
							  int,
							  const xmlChar *,
							  const char *,
							  va_list);
    extern int xmlTextWriterWriteVFormatElement(xmlTextWriterPtr,
						const xmlChar *,
						const char *, va_list);
    extern int xmlTextWriterWriteVFormatElementNS(xmlTextWriterPtr,
						  const xmlChar *,
						  const xmlChar *,
						  const xmlChar *,
						  const char *, va_list);
    extern int xmlTextWriterWriteVFormatPI(xmlTextWriterPtr,
					   const xmlChar *, const char *,
					   va_list);
    extern int xmlTextWriterWriteVFormatRaw(xmlTextWriterPtr, const char *,
					    va_list);
    extern int xmlTextWriterWriteVFormatString(xmlTextWriterPtr,
					       const char *, va_list);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
