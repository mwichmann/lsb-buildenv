#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLMODULE_H_
#define _LIBXML2_LIBXML_XMLMODULE_H_

#include <libxml2/libxml/xmlversion.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlModule xmlModule;

    typedef xmlModule *xmlModulePtr;

    typedef enum {
	XML_MODULE_LAZY = 1,
	XML_MODULE_LOCAL = 2
    } xmlModuleOption;


/* Function prototypes */

    extern int xmlModuleClose(xmlModulePtr module);
    extern int xmlModuleFree(xmlModulePtr module);
    extern xmlModulePtr xmlModuleOpen(const char *filename, int options);
    extern int xmlModuleSymbol(xmlModulePtr module, const char *name,
			       void **result);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
