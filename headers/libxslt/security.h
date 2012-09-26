#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_SECURITY_H_
#define _LIBXSLT_SECURITY_H_

#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xsltSecurityPrefs xsltSecurityPrefs;

    typedef xsltSecurityPrefs *xsltSecurityPrefsPtr;

    typedef enum {
	XSLT_SECPREF_READ_FILE,
	XSLT_SECPREF_WRITE_FILE,
	XSLT_SECPREF_CREATE_DIRECTORY,
	XSLT_SECPREF_READ_NETWORK,
	XSLT_SECPREF_WRITE_NETWORK
    } xsltSecurityOption;

    typedef int (*xsltSecurityCheck) (void);


/* Function prototypes */

    extern int xsltCheckRead(xsltSecurityPrefsPtr sec,
			     xsltTransformContextPtr ctxt,
			     const unsigned char *URL);
    extern int xsltCheckWrite(xsltSecurityPrefsPtr sec,
			      xsltTransformContextPtr ctxt,
			      const unsigned char *URL);
    extern void xsltFreeSecurityPrefs(xsltSecurityPrefsPtr sec);
    extern xsltSecurityPrefsPtr xsltGetDefaultSecurityPrefs(void);
    extern xsltSecurityCheck xsltGetSecurityPrefs(xsltSecurityPrefsPtr sec,
						  xsltSecurityOption
						  option);
    extern xsltSecurityPrefsPtr xsltNewSecurityPrefs(void);
    extern int xsltSecurityAllow(xsltSecurityPrefsPtr sec,
				 xsltTransformContextPtr ctxt,
				 const char *value);
    extern int xsltSecurityForbid(xsltSecurityPrefsPtr sec,
				  xsltTransformContextPtr ctxt,
				  const char *value);
    extern int xsltSetCtxtSecurityPrefs(xsltSecurityPrefsPtr sec,
					xsltTransformContextPtr ctxt);
    extern void xsltSetDefaultSecurityPrefs(xsltSecurityPrefsPtr sec);
    extern int xsltSetSecurityPrefs(xsltSecurityPrefsPtr sec,
				    xsltSecurityOption option,
				    xsltSecurityCheck func);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
