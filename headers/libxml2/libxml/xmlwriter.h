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





    extern int xmlTextWriterStartCDATA(xmlTextWriterPtr);
    extern xmlTextWriterPtr xmlNewTextWriterFilename(const char *, int);
    extern int xmlTextWriterStartDTDEntity(xmlTextWriterPtr, int,
					   const xmlChar *);
    extern int xmlTextWriterWriteFormatDTDInternalEntity(xmlTextWriterPtr,
							 int,
							 const xmlChar *,
							 const char *,
							 ...);
    extern int xmlTextWriterWriteVFormatRaw(xmlTextWriterPtr, const char *,
					    va_list);
    extern int xmlTextWriterStartAttributeNS(xmlTextWriterPtr,
					     const xmlChar *,
					     const xmlChar *,
					     const xmlChar *);
    extern xmlTextWriterPtr xmlNewTextWriter(xmlOutputBufferPtr);
    extern int xmlTextWriterEndDocument(xmlTextWriterPtr);
    extern int xmlTextWriterWriteVFormatDTDInternalEntity(xmlTextWriterPtr,
							  int,
							  const xmlChar *,
							  const char *,
							  va_list);
    extern int xmlTextWriterEndDTDEntity(xmlTextWriterPtr);
    extern int xmlTextWriterFullEndElement(xmlTextWriterPtr);
    extern int xmlTextWriterWriteFormatComment(xmlTextWriterPtr,
					       const char *, ...);
    extern int xmlTextWriterWriteDTDInternalEntity(xmlTextWriterPtr, int,
						   const xmlChar *,
						   const xmlChar *);
    extern int xmlTextWriterWritePI(xmlTextWriterPtr, const xmlChar *,
				    const xmlChar *);
    extern int xmlTextWriterStartAttribute(xmlTextWriterPtr,
					   const xmlChar *);
    extern int xmlTextWriterWriteDTDElement(xmlTextWriterPtr,
					    const xmlChar *,
					    const xmlChar *);
    extern int xmlTextWriterWriteFormatRaw(xmlTextWriterPtr, const char *,
					   ...);
    extern int xmlTextWriterWriteVFormatPI(xmlTextWriterPtr,
					   const xmlChar *, const char *,
					   va_list);
    extern int
	xmlTextWriterWriteDTDExternalEntityContents(xmlTextWriterPtr,
						    const xmlChar *,
						    const xmlChar *,
						    const xmlChar *);
    extern int xmlTextWriterWriteCDATA(xmlTextWriterPtr, const xmlChar *);
    extern int xmlTextWriterWriteVFormatAttributeNS(xmlTextWriterPtr,
						    const xmlChar *,
						    const xmlChar *,
						    const xmlChar *,
						    const char *, va_list);
    extern int xmlTextWriterWriteAttributeNS(xmlTextWriterPtr,
					     const xmlChar *,
					     const xmlChar *,
					     const xmlChar *,
					     const xmlChar *);
    extern int xmlTextWriterEndPI(xmlTextWriterPtr);
    extern int xmlTextWriterWriteVFormatDTDElement(xmlTextWriterPtr,
						   const xmlChar *,
						   const char *, va_list);
    extern int xmlTextWriterWriteDTD(xmlTextWriterPtr, const xmlChar *,
				     const xmlChar *, const xmlChar *,
				     const xmlChar *);
    extern int xmlTextWriterWriteFormatDTDElement(xmlTextWriterPtr,
						  const xmlChar *,
						  const char *, ...);
    extern int xmlTextWriterStartDTDAttlist(xmlTextWriterPtr,
					    const xmlChar *);
    extern int xmlTextWriterWriteFormatElementNS(xmlTextWriterPtr,
						 const xmlChar *,
						 const xmlChar *,
						 const xmlChar *,
						 const char *, ...);
    extern int xmlTextWriterWriteVFormatString(xmlTextWriterPtr,
					       const char *, va_list);
    extern xmlTextWriterPtr xmlNewTextWriterDoc(xmlDocPtr *, int);
    extern int xmlTextWriterStartComment(xmlTextWriterPtr);
    extern void xmlFreeTextWriter(xmlTextWriterPtr);
    extern int xmlTextWriterStartElement(xmlTextWriterPtr,
					 const xmlChar *);
    extern int xmlTextWriterWriteDTDAttlist(xmlTextWriterPtr,
					    const xmlChar *,
					    const xmlChar *);
    extern int xmlTextWriterWriteDTDExternalEntity(xmlTextWriterPtr, int,
						   const xmlChar *,
						   const xmlChar *,
						   const xmlChar *,
						   const xmlChar *);
    extern int xmlTextWriterEndComment(xmlTextWriterPtr);
    extern int xmlTextWriterWriteVFormatDTDAttlist(xmlTextWriterPtr,
						   const xmlChar *,
						   const char *, va_list);
    extern int xmlTextWriterWriteDTDEntity(xmlTextWriterPtr, int,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *);
    extern int xmlTextWriterStartDocument(xmlTextWriterPtr, const char *,
					  const char *, const char *);
    extern int xmlTextWriterEndCDATA(xmlTextWriterPtr);
    extern int xmlTextWriterWriteBase64(xmlTextWriterPtr, const char *,
					int, int);
    extern xmlTextWriterPtr xmlNewTextWriterPushParser(xmlParserCtxtPtr,
						       int);
    extern int xmlTextWriterWriteElementNS(xmlTextWriterPtr,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *);
    extern int xmlTextWriterStartPI(xmlTextWriterPtr, const xmlChar *);
    extern int xmlTextWriterEndElement(xmlTextWriterPtr);
    extern int xmlTextWriterWriteFormatDTD(xmlTextWriterPtr,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *, const char *,
					   ...);
    extern int xmlTextWriterWriteRaw(xmlTextWriterPtr, const xmlChar *);
    extern xmlTextWriterPtr xmlNewTextWriterTree(xmlDocPtr, xmlNodePtr,
						 int);
    extern int xmlTextWriterWriteVFormatDTD(xmlTextWriterPtr,
					    const xmlChar *,
					    const xmlChar *,
					    const xmlChar *, const char *,
					    va_list);
    extern int xmlTextWriterEndDTDAttlist(xmlTextWriterPtr);
    extern int xmlTextWriterStartDTDElement(xmlTextWriterPtr,
					    const xmlChar *);
    extern int xmlTextWriterSetIndentString(xmlTextWriterPtr,
					    const xmlChar *);
    extern int xmlTextWriterWriteElement(xmlTextWriterPtr, const xmlChar *,
					 const xmlChar *);
    extern int xmlTextWriterEndDTDElement(xmlTextWriterPtr);
    extern int xmlTextWriterStartDTD(xmlTextWriterPtr, const xmlChar *,
				     const xmlChar *, const xmlChar *);
    extern int xmlTextWriterWriteFormatAttributeNS(xmlTextWriterPtr,
						   const xmlChar *,
						   const xmlChar *,
						   const xmlChar *,
						   const char *, ...);
    extern int xmlTextWriterWriteFormatAttribute(xmlTextWriterPtr,
						 const xmlChar *,
						 const char *, ...);
    extern int xmlTextWriterStartElementNS(xmlTextWriterPtr,
					   const xmlChar *,
					   const xmlChar *,
					   const xmlChar *);
    extern int xmlTextWriterWriteVFormatElement(xmlTextWriterPtr,
						const xmlChar *,
						const char *, va_list);
    extern int xmlTextWriterWriteFormatString(xmlTextWriterPtr,
					      const char *, ...);
    extern int xmlTextWriterWriteAttribute(xmlTextWriterPtr,
					   const xmlChar *,
					   const xmlChar *);
    extern xmlTextWriterPtr xmlNewTextWriterMemory(xmlBufferPtr, int);
    extern int xmlTextWriterWriteRawLen(xmlTextWriterPtr, const xmlChar *,
					int);
    extern int xmlTextWriterWriteFormatCDATA(xmlTextWriterPtr,
					     const char *, ...);
    extern int xmlTextWriterWriteVFormatElementNS(xmlTextWriterPtr,
						  const xmlChar *,
						  const xmlChar *,
						  const xmlChar *,
						  const char *, va_list);
    extern int xmlTextWriterWriteVFormatAttribute(xmlTextWriterPtr,
						  const xmlChar *,
						  const char *, va_list);
    extern int xmlTextWriterSetIndent(xmlTextWriterPtr, int);
    extern int xmlTextWriterWriteDTDNotation(xmlTextWriterPtr,
					     const xmlChar *,
					     const xmlChar *,
					     const xmlChar *);
    extern int xmlTextWriterWriteFormatDTDAttlist(xmlTextWriterPtr,
						  const xmlChar *,
						  const char *, ...);
    extern int xmlTextWriterWriteVFormatCDATA(xmlTextWriterPtr,
					      const char *, va_list);
    extern int xmlTextWriterWriteFormatElement(xmlTextWriterPtr,
					       const xmlChar *,
					       const char *, ...);
    extern int xmlTextWriterWriteComment(xmlTextWriterPtr,
					 const xmlChar *);
    extern int xmlTextWriterFlush(xmlTextWriterPtr);
    extern int xmlTextWriterWriteVFormatComment(xmlTextWriterPtr,
						const char *, va_list);
    extern int xmlTextWriterWriteString(xmlTextWriterPtr, const xmlChar *);
    extern int xmlTextWriterWriteFormatPI(xmlTextWriterPtr,
					  const xmlChar *, const char *,
					  ...);
    extern int xmlTextWriterEndDTD(xmlTextWriterPtr);
    extern int xmlTextWriterEndAttribute(xmlTextWriterPtr);
    extern int xmlTextWriterWriteBinHex(xmlTextWriterPtr, const char *,
					int, int);
#ifdef __cplusplus
}
#endif
#endif
