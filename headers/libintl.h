#if (__LSB_VERSION__ >= 13 )
#ifndef _LIBINTL_H_
#define _LIBINTL_H_


#ifdef __cplusplus
extern "C" {
#endif



// Function prototypes

#if __LSB_VERSION__ >= 10
    extern char *bindtextdomain(const char *, const char *);
    extern char *dcgettext(const char *, const char *, int);
    extern char *gettext(const char *);
    extern char *textdomain(const char *);
#if __LSB_VERSION__ < 20
#if defined __i386__
/* IA32 */
    extern char *__dcgettext(void);
#endif
    extern char *__dcgettext(void);
#endif				// __LSB_VERSION__ < 2.0

#endif				// __LSB_VERSION__ >= 1.0

#if __LSB_VERSION__ >= 12
    extern char *bind_textdomain_codeset(const char *, const char *);
    extern char *dcngettext(const char *, const char *, const char *,
			    unsigned long int, int);
    extern char *dgettext(const char *, const char *);
    extern char *dngettext(const char *, const char *, const char *,
			   unsigned long int);
#if __LSB_VERSION__ < 20
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern char *__dcgettext(void);
#endif
#endif				// __LSB_VERSION__ < 2.0

#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 13
    extern char *ngettext(const char *, const char *, unsigned long int);
#if __LSB_VERSION__ < 20
#if defined __ia64__
/* IA64 */
    extern char *__dcgettext(void);
#endif
#endif				// __LSB_VERSION__ < 2.0

#endif				// __LSB_VERSION__ >= 1.3

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
