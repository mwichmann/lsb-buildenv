#ifndef _STRING_H_
#define _STRING_H_

#include <stddef.h>
#include <sys/types.h>




void __bzero (void *, size_t);
char *__strtok_r (char *, char *, char **);
void bcopy (void *, void *, size_t);
void *memchr (void *, int, size_t);
int memcmp (void *, void *, size_t);
void *memcpy (void *, void *, size_t);
void *memmove (void *, void *, size_t);
void *memset (void *, int, size_t);
char *strcat (char *, char *);
char *strchr (char *, int);
int strcmp (char *, char *);
int strcoll (char *, char *);
char *strcpy (char *, char *);
size_t strcspn (char *, char *);
char *strerror (int);
size_t strlen (char *);
char *strncat (char *, char *, size_t);
int strncmp (char *, char *, size_t);
char *strncpy (char *, char *, size_t);
char *strpbrk (char *, char *);
char *strrchr (char *, int);
size_t strspn (char *, char *);
char *strstr (char *, char *);
char *strtok (char *, char *);
size_t strxfrm (char *, char *, size_t);
int bcmp (void *, void *, size_t);
void bzero (void *, size_t);
int ffs (int);
char *index (char *, int);
void *memccpy (void *, void *, int, size_t);
char *rindex (char *, int);
int strcasecmp (char *, char *);
char *strdup (char *);
int strncasecmp (char *, char *, size_t);
char *strsep (char **, char *);
char *strerror_r (int, char *, size_t);
char *strtok_r (char *, char *, char **);
#endif
