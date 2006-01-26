#ifndef _LIBXML2_LIBXML_C14N_H_
#define _LIBXML2_LIBXML_C14N_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/xpath.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef int (*xmlC14NIsVisibleCallback) (void *, xmlNodePtr,
					     xmlNodePtr);


    extern int xmlC14NDocDumpMemory(xmlDocPtr, xmlNodeSetPtr, int,
				    xmlChar * *, int, xmlChar * *);
    extern int xmlC14NDocSave(xmlDocPtr, xmlNodeSetPtr, int, xmlChar * *,
			      int, const char *, int);
    extern int xmlC14NDocSaveTo(xmlDocPtr, xmlNodeSetPtr, int, xmlChar * *,
				int, xmlOutputBufferPtr);
    extern int xmlC14NExecute(xmlDocPtr, xmlC14NIsVisibleCallback, void *,
			      int, xmlChar * *, int, xmlOutputBufferPtr);
#ifdef __cplusplus
}
#endif
#endif
