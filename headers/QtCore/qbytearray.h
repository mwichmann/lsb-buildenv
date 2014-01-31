#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QBYTEARRAY_H_
#define _QTCORE_QBYTEARRAY_H_

class QByteRef;
// *INDENT-OFF*

typedef char	QByteArray::iterator	
;

typedef char	QByteArray::const_iterator	
;

typedef QByteArray::iterator	QByteArray::Iterator	
;

typedef QByteArray::const_iterator	QByteArray::ConstIterator	
;

typedef char	QByteArray::const_reference	
;

typedef char	QByteArray::reference	
;

class QByteArray;

struct QByteArray::Data	;

class QByteRef;


/* Function prototypes */

#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void qvsnprintf(char*, unsigned int, char const*, __va_list_tag*)(char *, unsigned int, const char *, struct __va_list_tag *);
#endif
#if defined __i386__
/* IA32 */
extern int qvsnprintf(char*, unsigned int, char const*, char*)(char *, unsigned int, const char *, char *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void qvsnprintf(char*, unsigned long, char const*, __va_list_tag*)(char *, unsigned long int, const char *, struct __va_list_tag *);
#endif
#if defined __x86_64__
/* x86-64 */
extern void qvsnprintf(char*, unsigned long, char const*, __va_list_tag*)(char *, unsigned long int, const char *, struct __va_list_tag *);
#endif
#if defined __s390x__
/* S390X */
extern void qvsnprintf(char*, unsigned long, char const*, __va_list_tag*)(char *, unsigned long int, const char *, struct __va_list_tag *);
#endif
#if defined __ia64__
/* IA64 */
extern void qvsnprintf(char*, unsigned long, char const*, void*)(char *, unsigned long int, const char *, void *);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void qvsnprintf(char*, unsigned long, char const*, char*)(char *, unsigned long int, const char *, char *);
#endif
extern QByteArray qUncompress(unsigned char const*, int)(const unsigned char *, int);
extern int qstrcmp(char const*, char const*)(const char *, const char *);
extern char qstrcpy(char*, char const*)(char *, const char *);
extern char qstrdup(char const*)(const char *);
extern int qstricmp(char const*, char const*)(const char *, const char *);
extern char qstrncpy(char*, char const*, unsigned int)(char *, const char *, unsigned int);
extern quint16 qChecksum(char const*, unsigned int)(const char *, unsigned int);
extern QByteArray qCompress(unsigned char const*, int, int)(const unsigned char *, int, int);
#if defined __i386__
/* IA32 */
extern int qsnprintf(char*, unsigned int, char const*, ...)(char *, unsigned int, const char *, ...);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern int qsnprintf(char*, unsigned int, char const*, ...)(char *, unsigned int, const char *, ...);
#endif
#if defined __ia64__
/* IA64 */
extern int qsnprintf(char*, unsigned long, char const*, ...)(char *, unsigned long int, const char *, ...);
#endif
#if defined __powerpc64__
/* PPC64 */
extern int qsnprintf(char*, unsigned long, char const*, ...)(char *, unsigned long int, const char *, ...);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern int qsnprintf(char*, unsigned long, char const*, ...)(char *, unsigned long int, const char *, ...);
#endif
#if defined __x86_64__
/* x86-64 */
extern int qsnprintf(char*, unsigned long, char const*, ...)(char *, unsigned long int, const char *, ...);
#endif
#if defined __s390x__
/* S390X */
extern int qsnprintf(char*, unsigned long, char const*, ...)(char *, unsigned long int, const char *, ...);
#endif
extern int qstrnicmp(char const*, char const*, unsigned int)(const char *, const char *, unsigned int);
extern struct QByteArray::Data _ZN10QByteArray11shared_nullE;
extern 
