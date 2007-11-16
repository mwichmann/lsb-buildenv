#ifndef _LIBINTL_H_
#define _LIBINTL_H_


#ifdef __cplusplus
extern "C" {
#endif






    extern char *bindtextdomain(const char *, const char *);
    extern char *dcgettext(const char *, const char *, int);
    extern char *dgettext(const char *, const char *);
    extern char *gettext(const char *);
    extern char *textdomain(const char *);
    extern char *bind_textdomain_codeset(const char *, const char *);
    extern char *dcngettext(const char *, const char *, const char *,
			    unsigned long int, int);
    extern char *dngettext(const char *, const char *, const char *,
			   unsigned long int);
    extern char *ngettext(const char *, const char *, unsigned long int);
#ifdef __cplusplus
}
#endif
#endif
