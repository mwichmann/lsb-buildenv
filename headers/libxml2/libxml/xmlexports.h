#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLEXPORTS_H_
#define _LIBXML2_LIBXML_XMLEXPORTS_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
#define XMLCALL
#define XMLCDECL
#define XMLPUBFUN
#define XMLPUBVAR	extern
#define LIBXML_DLL_IMPORT	XMLPUBVAR
#endif				/* __LSB_VERSION__ >= 3.1 */



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
