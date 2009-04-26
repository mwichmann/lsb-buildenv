#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLSAVE_H_
#define _LIBXML2_LIBXML_XMLSAVE_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlSaveCtxt xmlSaveCtxt;

    typedef xmlSaveCtxt *xmlSaveCtxtPtr;

    typedef enum {
	XML_SAVE_FORMAT = 1 << 0,
	XML_SAVE_NO_DECL = 1 << 1,
	XML_SAVE_NO_EMPTY = 1 << 2,
	XML_SAVE_NO_XHTML = 1 << 3
    } xmlSaveOption;


/* Function prototypes */

    extern int xmlSaveClose(xmlSaveCtxtPtr ctxt);
    extern long int xmlSaveDoc(xmlSaveCtxtPtr ctxt, xmlDocPtr doc);
    extern int xmlSaveFlush(xmlSaveCtxtPtr ctxt);
    extern int xmlSaveSetAttrEscape(xmlSaveCtxtPtr ctxt,
				    xmlCharEncodingOutputFunc escape);
    extern int xmlSaveSetEscape(xmlSaveCtxtPtr ctxt,
				xmlCharEncodingOutputFunc escape);
    extern xmlSaveCtxtPtr xmlSaveToFd(int fd, const char *encoding,
				      int options);
    extern xmlSaveCtxtPtr xmlSaveToFilename(const char *filename,
					    const char *encoding,
					    int options);
    extern xmlSaveCtxtPtr xmlSaveToIO(xmlOutputWriteCallback iowrite,
				      xmlOutputCloseCallback ioclose,
				      void *ioctx, const char *encoding,
				      int options);
    extern long int xmlSaveTree(xmlSaveCtxtPtr ctxt, xmlNodePtr node);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
