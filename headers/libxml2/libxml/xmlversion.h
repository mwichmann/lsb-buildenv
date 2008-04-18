#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLVERSION_H_
#define _LIBXML2_LIBXML_XMLVERSION_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
#define LIBXML_AUTOMATA_ENABLED
#define LIBXML_C14N_ENABLED
#define LIBXML_CATALOG_ENABLED
#define LIBXML_DEBUG_ENABLED
#define LIBXML_DOCB_ENABLED
#define LIBXML_EXPR_ENABLED
#define LIBXML_FTP_ENABLED
#define LIBXML_HTML_ENABLED
#define LIBXML_HTTP_ENABLED
#define LIBXML_ICONV_ENABLED
#define LIBXML_ISO8859X_ENABLED
#define LIBXML_LEGACY_ENABLED
#define LIBXML_MODULES_ENABLED
#define LIBXML_OUTPUT_ENABLED
#define LIBXML_PATTERN_ENABLED
#define LIBXML_PUSH_ENABLED
#define LIBXML_READER_ENABLED
#define LIBXML_REGEXP_ENABLED
#define LIBXML_SAX1_ENABLED
#define LIBXML_SCHEMAS_ENABLED
#define LIBXML_SCHEMATRON_ENABLED
#define LIBXML_THREAD_ENABLED
#define LIBXML_TREE_ENABLED
#define LIBXML_UNICODE_ENABLED
#define LIBXML_VALID_ENABLED
#define LIBXML_VERSION_EXTRA	""
#define LIBXML_WRITER_ENABLED
#define LIBXML_XINCLUDE_ENABLED
#define LIBXML_XPATH_ENABLED
#define LIBXML_XPTR_ENABLED
#define WITHOUT_TRIO
#define LIBXML_MODULE_EXTENSION	".so"
#define LIBXML_DOTTED_VERSION	"2.6.22"
#define LIBXML_VERSION	20622
#define LIBXML_VERSION_STRING	"20622"
#define LIBXML_TEST_VERSION	xmlCheckVersion(20622);
#define ATTRIBUTE_UNUSED	__attribute__((unused))
#endif				// __LSB_VERSION__ >= 3.1




// Function prototypes

#if __LSB_VERSION__ >= 31
    extern void xmlCheckVersion(int);
#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
