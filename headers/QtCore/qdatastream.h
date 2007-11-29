#ifndef _QTCORE_QDATASTREAM_H_
#define _QTCORE_QDATASTREAM_H_

class QDataStream;
// *INDENT-OFF*




class QDataStream
{
private:
public:
};

enum Version	
{
Qt_1_0 = 1,	
Qt_2_0 = 2,	
Qt_2_1 = 3,	
Qt_3_0 = 4,	
Qt_3_1 = 5,	
Qt_3_3 = 6,	
Qt_4_0 = 7,	
Qt_4_1 = 7
}
;

enum ByteOrder	
{
BigEndian = 0,	
LittleEndian = 1
}
;

enum Status	
{
Ok = 0,	
ReadPastEnd = 1,	
ReadCorruptData = 2
}
;


extern QDataStream _ZN11QDataStreamC2Ev(void);
extern QDataStream _ZN11QDataStreamC1Ev(void);
extern QDataStream _ZN11QDataStreamC2EP9QIODevice(void);
extern QDataStream _ZN11QDataStreamC1EP9QIODevice(void);
extern QDataStream _ZN11QDataStreamC2EP10QByteArrayi(void);
extern QDataStream _ZN11QDataStreamC1EP10QByteArrayi(void);
extern QDataStream _ZN11QDataStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QDataStream _ZN11QDataStreamC1EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QDataStream _ZN11QDataStreamC2ERK10QByteArray(void);
extern QDataStream _ZN11QDataStreamC1ERK10QByteArray(void);
extern  _ZN11QDataStreamD2Ev(void);
extern  _ZN11QDataStreamD1Ev(void);
extern  _ZN11QDataStreamD0Ev(void);
extern void _ZN11QDataStream9setDeviceEP9QIODevice(void);
extern void _ZN11QDataStream11unsetDeviceEv(void);
extern bool _ZNK11QDataStream5atEndEv(void);
extern enum N11QDataStream6StatusE _ZNK11QDataStream6statusEv(void);
extern void _ZN11QDataStream9setStatusENS_6StatusE(void);
extern void _ZN11QDataStream11resetStatusEv(void);
extern void _ZN11QDataStream12setByteOrderENS_9ByteOrderE(void);
extern QDataStream _ZN11QDataStreamrsERa(void);
extern QDataStream _ZN11QDataStreamrsERs(void);
extern QDataStream _ZN11QDataStreamrsERi(void);
extern QDataStream _ZN11QDataStreamrsERx(void);
extern QDataStream _ZN11QDataStreamrsERb(void);
extern QDataStream _ZN11QDataStreamrsERf(void);
extern QDataStream _ZN11QDataStreamrsERd(void);
extern QDataStream _ZN11QDataStreamrsERPc(void);
extern QDataStream _ZN11QDataStreamlsEa(void);
extern QDataStream _ZN11QDataStreamlsEs(void);
extern QDataStream _ZN11QDataStreamlsEi(void);
extern QDataStream _ZN11QDataStreamlsEx(void);
extern QDataStream _ZN11QDataStreamlsEb(void);
extern QDataStream _ZN11QDataStreamlsEf(void);
extern QDataStream _ZN11QDataStreamlsEd(void);
extern QDataStream _ZN11QDataStreamlsEPKc(void);
extern QDataStream _ZN11QDataStream9readBytesERPcRj(void);
extern int _ZN11QDataStream11readRawDataEPci(void);
extern QDataStream _ZN11QDataStream10writeBytesEPKcj(void);
extern int _ZN11QDataStream12writeRawDataEPKci(void);
extern int _ZN11QDataStream11skipRawDataEi(void);
// *INDENT-ON*
#endif
