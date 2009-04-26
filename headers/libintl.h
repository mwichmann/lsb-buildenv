#if (__LSB_VERSION__ >= 13 )
#ifndef _LIBINTL_H_
#define _LIBINTL_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern char *bindtextdomain(const char *__domainname,
				const char *__dirname);
    extern char *dcgettext(const char *__domainname, const char *__msgid,
			   int __category);
    extern char *gettext(const char *__msgid);
    extern char *textdomain(const char *__domainname);
    extern char *bind_textdomain_codeset(const char *__domainname,
					 const char *__codeset);
    extern char *dcngettext(const char *__domainname, const char *__msgid1,
			    const char *__msgid2, unsigned long int __n,
			    int __category);
    extern char *dgettext(const char *__domainname, const char *__msgid);
    extern char *dngettext(const char *__domainname, const char *__msgid1,
			   const char *__msgid2, unsigned long int __n);
    extern char *ngettext(const char *__msgid1, const char *__msgid2,
			  unsigned long int __n);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
