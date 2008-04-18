#if (__LSB_VERSION__ >= 10 )
#ifndef _STRINGS_H_
#define _STRINGS_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif



// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int bcmp(const void *, const void *, size_t);
    extern void bcopy(const void *, void *, size_t);
    extern void bzero(void *, size_t);
    extern int ffs(int);
    extern char *index(const char *, int);
    extern char *rindex(const char *, int);
    extern int strcasecmp(const char *, const char *);
    extern int strncasecmp(const char *, const char *, size_t);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
