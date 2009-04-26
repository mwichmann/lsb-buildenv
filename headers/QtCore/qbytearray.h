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
extern void _Z10qvsnprintfPcjPKcP13__va_list_tag(char *, unsigned int, const char *, struct __va_list_tag *);
#endif
#if defined __i386__
/* IA32 */
extern int _Z10qvsnprintfPcjPKcS_(char *, unsigned int, const char *, char *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void _Z10qvsnprintfPcmPKcP13__va_list_tag(char *, unsigned long int, const char *, struct __va_list_tag *);
#endif
#if defined __x86_64__
/* x86-64 */
extern void _Z10qvsnprintfPcmPKcP13__va_list_tag(char *, unsigned long int, const char *, struct __va_list_tag *);
#endif
#if defined __s390x__
/* S390X */
extern void _Z10qvsnprintfPcmPKcP13__va_list_tag(char *, unsigned long int, const char *, struct __va_list_tag *);
#endif
#if defined __ia64__
/* IA64 */
extern void _Z10qvsnprintfPcmPKcPv(char *, unsigned long int, const char *, void *);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void _Z10qvsnprintfPcmPKcS_(char *, unsigned long int, const char *, char *);
#endif
extern QByteArray _Z11qUncompressPKhi(const unsigned char *, int);
extern int _Z7qstrcmpPKcS0_(const char *, const char *);
extern char _Z7qstrcpyPcPKc(char *, const char *);
extern char _Z7qstrdupPKc(const char *);
extern int _Z8qstricmpPKcS0_(const char *, const char *);
extern char _Z8qstrncpyPcPKcj(char *, const char *, unsigned int);
extern quint16 _Z9qChecksumPKcj(const char *, unsigned int);
extern QByteArray _Z9qCompressPKhii(const unsigned char *, int, int);
#if defined __i386__
/* IA32 */
extern int _Z9qsnprintfPcjPKcz(char *, unsigned int, const char *, ...);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern int _Z9qsnprintfPcjPKcz(char *, unsigned int, const char *, ...);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern int _Z9qsnprintfPcmPKcz(char *, unsigned long int, const char *, ...);
#endif
#if defined __ia64__
/* IA64 */
extern int _Z9qsnprintfPcmPKcz(char *, unsigned long int, const char *, ...);
#endif
#if defined __powerpc64__
/* PPC64 */
extern int _Z9qsnprintfPcmPKcz(char *, unsigned long int, const char *, ...);
#endif
#if defined __x86_64__
/* x86-64 */
extern int _Z9qsnprintfPcmPKcz(char *, unsigned long int, const char *, ...);
#endif
#if defined __s390x__
/* S390X */
extern int _Z9qsnprintfPcmPKcz(char *, unsigned long int, const char *, ...);
#endif
extern int _Z9qstrnicmpPKcS0_j(const char *, const char *, unsigned int);
extern struct QByteArray::Data _ZN10QByteArray11shared_nullE ;
extern  _ZlsR11QDataStreamRK10QByteArray(QDataStream &, QByteArray & &);
extern  _ZrsR11QDataStreamR10QByteArray(QDataStream &, QByteArray &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
