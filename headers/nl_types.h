#if (__LSB_VERSION__ >= 10 )
#ifndef _NL_TYPES_H_
#define _NL_TYPES_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define NL_CAT_LOCALE	1
#define NL_SETD	1
#endif				/* __LSB_VERSION__ >= 1.2 */




/* Message catalog descriptor type*/
    typedef void *nl_catd;


/* Type used by `nl_langinfo'*/
    typedef int nl_item;


/* Function prototypes */

    extern int catclose(nl_catd);
    extern char *catgets(nl_catd, int, int, const char *);
    extern nl_catd catopen(const char *, int);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
