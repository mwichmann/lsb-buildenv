#ifndef _LIBXML2_LIBXML_XMLMODULE_H_
#define _LIBXML2_LIBXML_XMLMODULE_H_


#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlModule xmlModule;

    typedef xmlModule *xmlModulePtr;

    typedef enum {
	XML_MODULE_LAZY = 1,
	XML_MODULE_LOCAL = 2
    } xmlModuleOption;





    extern int xmlModuleClose(xmlModulePtr);
    extern int xmlModuleFree(xmlModulePtr);
    extern int xmlModuleSymbol(xmlModulePtr, const char *, void **);
    extern xmlModulePtr xmlModuleOpen(const char *, int);
#ifdef __cplusplus
}
#endif
#endif
