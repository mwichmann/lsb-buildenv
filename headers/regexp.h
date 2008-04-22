#if (__LSB_VERSION__ >= 10 )
#ifndef _REGEXP_H_
#define _REGEXP_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

#if __LSB_VERSION__ >= 10
#if __LSB_VERSION__ < 30
#if defined __i386__
/* IA32 */
    extern int advance(const char *, const char *);
#endif
    extern int advance(const char *, const char *);
    extern char *loc1;
    extern char *loc1;
    extern char *loc2;
    extern char *loc2;
    extern char *locs;
    extern char *locs;
#if defined __i386__
/* IA32 */
    extern int step(const char *, const char *);
#endif
    extern int step(const char *, const char *);
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 30
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern int advance(const char *, const char *);
#endif
    extern char *loc1;
    extern char *loc2;
    extern char *locs;
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern int step(const char *, const char *);
#endif
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if __LSB_VERSION__ < 30
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern int advance(const char *, const char *);
#endif
#if defined __ia64__
/* IA64 */
    extern int advance(const char *, const char *);
#endif
#if defined __s390x__
/* S390X */
    extern int advance(const char *, const char *);
#endif
    extern char *loc1;
    extern char *loc1;
    extern char *loc1;
    extern char *loc2;
    extern char *loc2;
    extern char *loc2;
    extern char *locs;
    extern char *locs;
    extern char *locs;
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern int step(const char *, const char *);
#endif
#if defined __ia64__
/* IA64 */
    extern int step(const char *, const char *);
#endif
#if defined __s390x__
/* S390X */
    extern int step(const char *, const char *);
#endif
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if __LSB_VERSION__ < 30
#if defined __x86_64__
/* x86-64 */
    extern int advance(const char *, const char *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern int advance(const char *, const char *);
#endif
    extern char *loc1;
    extern char *loc1;
    extern char *loc2;
    extern char *loc2;
    extern char *locs;
    extern char *locs;
#if defined __x86_64__
/* x86-64 */
    extern int step(const char *, const char *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern int step(const char *, const char *);
#endif
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 2.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
