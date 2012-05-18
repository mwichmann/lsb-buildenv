#if (__LSB_VERSION__ >= 10 )
#ifndef _FNMATCH_H_
#define _FNMATCH_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 41
#define FNM_CASEFOLD	(1<<4)
#define FNM_FILE_NAME	FNM_PATHNAME
#endif				/* __LSB_VERSION__ >= 4.1 */




/* Filename Matching*/
#if __LSB_VERSION__ >= 11
#define FNM_PATHNAME	(1<<0)
#define FNM_NOESCAPE	(1<<1)
#define FNM_PERIOD	(1<<2)
#define FNM_NOMATCH	1
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Function prototypes */

    extern int fnmatch(const char *__pattern, const char *__name,
		       int __flags);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
