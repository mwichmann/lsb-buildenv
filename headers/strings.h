#ifndef _STRINGS_H_
#define _STRINGS_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif





    extern void bcopy(const void *, void *, size_t);
    extern int bcmp(const void *, const void *, size_t);
    extern void bzero(void *, size_t);
    extern int ffs(int);
    extern char *index(const char *, int);
    extern char *rindex(const char *, int);
    extern int strcasecmp(const char *, const char *);
    extern int strncasecmp(const char *, const char *, size_t);
#ifdef __cplusplus
}
#endif
#endif
