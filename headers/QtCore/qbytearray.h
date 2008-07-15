#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QBYTEARRAY_H_
#define _QTCORE_QBYTEARRAY_H_

class QByteRef;
// *INDENT-OFF*

typedef char	iterator	
;

typedef char	const_iterator	
;

typedef iterator	Iterator	
;

typedef const_iterator	ConstIterator	
;

typedef char	const_reference	
;

typedef char	reference	
;

class QByteArray
{
private:
public:
     QByteArray(char const*);
     QByteArray(char const*, int);
     QByteArray(int, char);
    QByteArray & operator=(QByteArray const&);
    QByteArray & operator=(char const*);
    void resize(int);
    QByteArray & fill(char, int);
    void clear();
    int indexOf(char, int) const;
    int indexOf(QByteArray const&, int) const;
    int lastIndexOf(char, int) const;
    int lastIndexOf(QByteArray const&, int) const;
    int count(char) const;
    int count(char const*) const;
    int count(QByteArray const&) const;
    QByteArray left(int) const;
    QByteArray right(int) const;
    QByteArray mid(int, int) const;
    bool startsWith(QByteArray const&) const;
    bool startsWith(char) const;
    bool startsWith(char const*) const;
    bool endsWith(QByteArray const&) const;
    bool endsWith(char) const;
    bool endsWith(char const*) const;
    void truncate(int);
    void chop(int);
    QByteArray toLower() const;
    QByteArray toUpper() const;
    QByteArray trimmed() const;
    QByteArray simplified() const;
    QByteArray leftJustified(int, char, bool) const;
    QByteArray rightJustified(int, char, bool) const;
    QByteArray & prepend(char);
    QByteArray & prepend(char const*);
    QByteArray & prepend(QByteArray const&);
    QByteArray & append(char);
    QByteArray & append(char const*);
    QByteArray & append(QByteArray const&);
    QByteArray & insert(int, char);
    QByteArray & insert(int, char const*);
    QByteArray & insert(int, QByteArray const&);
    QByteArray & remove(int, int);
    QByteArray & replace(int, int, QByteArray const&);
    QByteArray & replace(char, QByteArray const&);
    QByteArray & replace(QByteArray const&, QByteArray const&);
    QByteArray & replace(char, char);
    QList<QByteArray> split(char) const;
    short int toShort(bool*, int) const;
    ushort toUShort(bool*, int) const;
    int toInt(bool*, int) const;
    uint toUInt(bool*, int) const;
    long int toLong(bool*, int) const;
    ulong toULong(bool*, int) const;
    qlonglong toLongLong(bool*, int) const;
    qulonglong toULongLong(bool*, int) const;
    float toFloat(bool*) const;
    double toDouble(bool*) const;
    QByteArray toBase64() const;
    QByteArray & setNum(long long, int);
    QByteArray & setNum(unsigned long long, int);
    QByteArray & setNum(double, char, int);
    static QByteArray number(int, int);
    static QByteArray number(unsigned int, int);
    static QByteArray number(long long, int);
    static QByteArray number(unsigned long long, int);
    static QByteArray number(double, char, int);
    static QByteArray fromRawData(char const*, int);
    static QByteArray fromBase64(QByteArray const&);
    bool isNull() const;
private:
    void realloc(int);
    void expand(int);
};

struct Data	;

class QByteRef
{
private:
public:
};


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
extern struct Data _ZN10QByteArray11shared_nullE ;
extern  _ZlsR11QDataStreamRK10QByteArray(QDataStream &, QByteArray & &);
extern  _ZrsR11QDataStreamR10QByteArray(QDataStream &, QByteArray &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
