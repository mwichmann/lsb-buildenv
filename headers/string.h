#ifndef _STRING_H_
#define _STRING_H_

#include <stddef.h>




extern void __bzero (void *, size_t);
extern char *__strtok_r (char *, char *, char **);
extern void bcopy (const void *, void *, size_t);
extern void *memchr (const void *, int, size_t);
extern int memcmp (const void *, const void *, size_t);
extern void *memcpy (void *, const void *, size_t);
extern void *memmove (void *, void *, size_t);
extern void *memset (void *, int, size_t);
extern char *strcat (char *, char *);
extern char *strchr (const char *, int);
extern int strcmp (const char *, const char *);
extern int strcoll (char *, char *);
extern char *strcpy (char *, const char *);
extern size_t strcspn (char *, char *);
extern char *strerror (int);
extern size_t strlen (const char *);
extern char *strncat (char *, const char *, size_t);
extern int strncmp (const char *, const char *, size_t);
extern char *strncpy (char *, const char *, size_t);
extern char *strpbrk (char *, char *);
extern char *strrchr (const char *, int);
extern size_t strspn (char *, char *);
extern char *strstr (const char *, const char *);
extern char *strtok (char *, char *);
extern size_t strxfrm (char *, char *, size_t);
extern int bcmp (const void *, const void *, size_t);
extern void bzero (void *, size_t);
extern int ffs (int);
extern char *index (const char *, int);
extern void *memccpy (void *, void *, int, size_t);
extern char *rindex (const char *, int);
extern int strcasecmp (const char *, const char *);
extern char *strdup (const char *);
extern int strncasecmp (const char *, const char *, size_t);
extern char *strsep (char **, char *);
extern char *strerror_r (int, char *, size_t);
extern char *strtok_r (char *, char *, char **);
#endif
