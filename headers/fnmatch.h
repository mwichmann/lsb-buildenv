#if (__LSB_VERSION__ >= 10 )
#ifndef _FNMATCH_H_
#define _FNMATCH_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Filename Matching*/
#if __LSB_VERSION__ >= 11
#define FNM_PATHNAME	(1<<0)
#define FNM_NOESCAPE	(1<<1)
#define FNM_PERIOD	(1<<2)
#define FNM_NOMATCH	1
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int fnmatch(const char *, const char *, int);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
