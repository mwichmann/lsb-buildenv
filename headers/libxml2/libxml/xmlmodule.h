#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLMODULE_H_
#define _LIBXML2_LIBXML_XMLMODULE_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef struct _xmlModule xmlModule;

    typedef xmlModule *xmlModulePtr;

    typedef enum {
	XML_MODULE_LAZY = 1,
	XML_MODULE_LOCAL = 2
    } xmlModuleOption;

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31


#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern int xmlModuleClose(xmlModulePtr);
    extern int xmlModuleFree(xmlModulePtr);
    extern xmlModulePtr xmlModuleOpen(const char *, int);
    extern int xmlModuleSymbol(xmlModulePtr, const char *, void **);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
