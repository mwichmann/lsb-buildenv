#ifndef _FNMATCH_H_
#define _FNMATCH_H_


#ifdef __cplusplus
extern "C" {
#endif






/* Filename Matching*/
#define FNM_PATHNAME	(1<<0)
#define FNM_NOESCAPE	(1<<1)
#define FNM_PERIOD	(1<<2)
#define FNM_NOMATCH	1



    extern int fnmatch(const char *, const char *, int);
#ifdef __cplusplus
}
#endif
#endif
