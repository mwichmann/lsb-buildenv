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




    extern int xmlSaveSetAttrEscape(xmlSaveCtxtPtr,
				    xmlCharEncodingOutputFunc);
    extern long int xmlSaveDoc(xmlSaveCtxtPtr, xmlDocPtr);
    extern xmlSaveCtxtPtr xmlSaveToFilename(const char *, const char *,
					    int);
    extern xmlSaveCtxtPtr xmlSaveToFd(int, const char *, int);
    extern int xmlSaveSetEscape(xmlSaveCtxtPtr, xmlCharEncodingOutputFunc);
    extern xmlSaveCtxtPtr xmlSaveToIO(xmlOutputWriteCallback,
				      xmlOutputCloseCallback, void *,
				      const char *, int);
    extern int xmlSaveClose(xmlSaveCtxtPtr);
    extern long int xmlSaveTree(xmlSaveCtxtPtr, xmlNodePtr);
    extern int xmlSaveFlush(xmlSaveCtxtPtr);
#ifdef __cplusplus
}
#endif
#endif
