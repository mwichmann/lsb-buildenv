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
};

struct Data	;

class QByteRef
{
private:
public:
};


extern char _Z7qstrdupPKc(void);
extern char _Z7qstrcpyPcPKc(void);
extern char _Z8qstrncpyPcPKcj(void);
extern int _Z7qstrcmpPKcS0_(void);
extern int _Z8qstricmpPKcS0_(void);
extern int _Z9qstrnicmpPKcS0_j(void);
#if defined __i386__
/* IA32 */
extern int _Z10qvsnprintfPcjPKcS_(void);
#endif
#if defined __i386__
/* IA32 */
extern int _Z9qsnprintfPcjPKcz(void);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern int _Z9qsnprintfPcjPKcz(void);
#endif
extern quint16 _Z9qChecksumPKcj(void);
extern QByteArray _ZN10QByteArrayC2EPKc(void);
extern QByteArray _ZN10QByteArrayC1EPKc(void);
extern QByteArray _ZN10QByteArrayC2EPKci(void);
extern QByteArray _ZN10QByteArrayC1EPKci(void);
extern QByteArray _ZN10QByteArrayC2Eic(void);
extern QByteArray _ZN10QByteArrayC1Eic(void);
extern QByteArray _ZN10QByteArrayaSERKS_(void);
extern QByteArray _ZN10QByteArrayaSEPKc(void);
extern void _ZN10QByteArray6resizeEi(void);
extern QByteArray _ZN10QByteArray4fillEci(void);
extern void _ZN10QByteArray5clearEv(void);
extern int _ZNK10QByteArray7indexOfEci(void);
extern int _ZNK10QByteArray7indexOfERKS_i(void);
extern int _ZNK10QByteArray11lastIndexOfEci(void);
extern int _ZNK10QByteArray11lastIndexOfERKS_i(void);
extern int _ZNK10QByteArray5countEc(void);
extern int _ZNK10QByteArray5countEPKc(void);
extern int _ZNK10QByteArray5countERKS_(void);
extern QByteArray _ZNK10QByteArray4leftEi(void);
extern QByteArray _ZNK10QByteArray5rightEi(void);
extern QByteArray _ZNK10QByteArray3midEii(void);
extern bool _ZNK10QByteArray10startsWithERKS_(void);
extern bool _ZNK10QByteArray10startsWithEc(void);
extern bool _ZNK10QByteArray10startsWithEPKc(void);
extern bool _ZNK10QByteArray8endsWithERKS_(void);
extern bool _ZNK10QByteArray8endsWithEc(void);
extern bool _ZNK10QByteArray8endsWithEPKc(void);
extern void _ZN10QByteArray8truncateEi(void);
extern void _ZN10QByteArray4chopEi(void);
extern QByteArray _ZNK10QByteArray7toLowerEv(void);
extern QByteArray _ZNK10QByteArray7toUpperEv(void);
extern QByteArray _ZNK10QByteArray7trimmedEv(void);
extern QByteArray _ZNK10QByteArray10simplifiedEv(void);
extern QByteArray _ZNK10QByteArray13leftJustifiedEicb(void);
extern QByteArray _ZNK10QByteArray14rightJustifiedEicb(void);
extern QByteArray _ZN10QByteArray7prependEc(void);
extern QByteArray _ZN10QByteArray7prependEPKc(void);
extern QByteArray _ZN10QByteArray7prependERKS_(void);
extern QByteArray _ZN10QByteArray6appendEc(void);
extern QByteArray _ZN10QByteArray6appendEPKc(void);
extern QByteArray _ZN10QByteArray6appendERKS_(void);
extern QByteArray _ZN10QByteArray6insertEic(void);
extern QByteArray _ZN10QByteArray6insertEiPKc(void);
extern QByteArray _ZN10QByteArray6insertEiRKS_(void);
extern QByteArray _ZN10QByteArray6removeEii(void);
extern QByteArray _ZN10QByteArray7replaceEiiRKS_(void);
extern QByteArray _ZN10QByteArray7replaceEcRKS_(void);
extern QByteArray _ZN10QByteArray7replaceERKS_S1_(void);
extern QByteArray _ZN10QByteArray7replaceEcc(void);
extern QList<QByteArray> _ZNK10QByteArray5splitEc(void);
extern short _ZNK10QByteArray7toShortEPbi(void);
extern ushort _ZNK10QByteArray8toUShortEPbi(void);
extern int _ZNK10QByteArray5toIntEPbi(void);
extern uint _ZNK10QByteArray6toUIntEPbi(void);
extern long int _ZNK10QByteArray6toLongEPbi(void);
extern ulong _ZNK10QByteArray7toULongEPbi(void);
extern qlonglong _ZNK10QByteArray10toLongLongEPbi(void);
extern qulonglong _ZNK10QByteArray11toULongLongEPbi(void);
extern float _ZNK10QByteArray7toFloatEPb(void);
extern double _ZNK10QByteArray8toDoubleEPb(void);
extern QByteArray _ZNK10QByteArray8toBase64Ev(void);
extern QByteArray _ZN10QByteArray6setNumExi(void);
extern QByteArray _ZN10QByteArray6setNumEyi(void);
extern QByteArray _ZN10QByteArray6setNumEdci(void);
extern QByteArray _ZN10QByteArray6numberEii(void);
extern QByteArray _ZN10QByteArray6numberEji(void);
extern QByteArray _ZN10QByteArray6numberExi(void);
extern QByteArray _ZN10QByteArray6numberEyi(void);
extern QByteArray _ZN10QByteArray6numberEdci(void);
extern QByteArray _ZN10QByteArray11fromRawDataEPKci(void);
extern QByteArray _ZN10QByteArray10fromBase64ERKS_(void);
extern bool _ZNK10QByteArray6isNullEv(void);
extern  _ZlsR11QDataStreamRK10QByteArray(void);
extern  _ZrsR11QDataStreamR10QByteArray(void);
extern QByteArray _Z9qCompressPKhii(void);
extern QByteArray _Z11qUncompressPKhi(void);
extern void _ZN10QByteArray7reallocEi(void);
extern void _ZN10QByteArray6expandEi(void);
extern struct Data _ZN10QByteArray11shared_nullE ;
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void _Z10qvsnprintfPcjPKcP13__va_list_tag(void);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void _Z10qvsnprintfPcmPKcP13__va_list_tag(void);
#endif
#if defined __x86_64__
/* x86-64 */
extern void _Z10qvsnprintfPcmPKcP13__va_list_tag(void);
#endif
#if defined __s390x__
/* S390X */
extern void _Z10qvsnprintfPcmPKcP13__va_list_tag(void);
#endif
#if defined __ia64__
/* IA64 */
extern void _Z10qvsnprintfPcmPKcPv(void);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void _Z10qvsnprintfPcmPKcS_(void);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern int _Z9qsnprintfPcmPKcz(void);
#endif
#if defined __ia64__
/* IA64 */
extern int _Z9qsnprintfPcmPKcz(void);
#endif
#if defined __powerpc64__
/* PPC64 */
extern int _Z9qsnprintfPcmPKcz(void);
#endif
#if defined __x86_64__
/* x86-64 */
extern int _Z9qsnprintfPcmPKcz(void);
#endif
#if defined __s390x__
/* S390X */
extern int _Z9qsnprintfPcmPKcz(void);
#endif
// *INDENT-ON*
#endif
