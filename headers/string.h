#ifndef _STRING_H_
#define _STRING_H_

#include <stddef.h>




extern void __bzero (void *, size_t);
extern char *__strtok_r (char *, char *, char **);
extern void bcopy (void *, void *, size_t);
extern void *memchr (void *, int, size_t);
extern int memcmp (void *, void *, size_t);
extern void *memcpy (void *, void *, size_t);
extern void *memmove (void *, void *, size_t);
extern void *memset (void *, int, size_t);
extern char *strcat (char *, char *);
extern char *strchr (char *, int);
extern int strcmp (char *, char *);
extern int strcoll (char *, char *);
extern char *strcpy (char *, char *);
extern size_t strcspn (char *, char *);
extern char *strerror (int);
extern size_t strlen (char *);
extern char *strncat (char *, char *, size_t);
extern int strncmp (char *, char *, size_t);
extern char *strncpy (char *, char *, size_t);
extern char *strpbrk (char *, char *);
extern char *strrchr (char *, int);
extern size_t strspn (char *, char *);
extern char *strstr (char *, char *);
extern char *strtok (char *, char *);
extern size_t strxfrm (char *, char *, size_t);
extern int bcmp (void *, void *, size_t);
extern void bzero (void *, size_t);
extern int ffs (int);
extern char *index (char *, int);
extern void *memccpy (void *, void *, int, size_t);
extern char *rindex (char *, int);
extern int strcasecmp (char *, char *);
extern char *strdup (char *);
extern int strncasecmp (char *, char *, size_t);
extern char *strsep (char **, char *);
extern char *strerror_r (int, char *, size_t);
extern char *strtok_r (char *, char *, char **);
#endif
