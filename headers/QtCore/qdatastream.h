#ifndef _QTCORE_QDATASTREAM_H_
#define _QTCORE_QDATASTREAM_H_


#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N11QDataStream7VersionE {
	Qt_1_0,
	Qt_2_0,
	Qt_2_1,
	Qt_3_0,
	Qt_3_1,
	Qt_3_3,
	Qt_4_0,
	Qt_4_1
    };

    enum N11QDataStream9ByteOrderE {
	BigEndian,
	LittleEndian
    };

    enum N11QDataStream6StatusE {
	Ok,
	ReadPastEnd,
	ReadCorruptData
    };


    extern Class _ZN11QDataStreamC2Ev(void);
    extern Class _ZN11QDataStreamC1Ev(void);
    extern Class _ZN11QDataStreamC2EP9QIODevice(void);
    extern Class _ZN11QDataStreamC1EP9QIODevice(void);
    extern Class _ZN11QDataStreamC2EP10QByteArrayi(void);
    extern Class _ZN11QDataStreamC1EP10QByteArrayi(void);
    extern Class
	_ZN11QDataStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class
	_ZN11QDataStreamC1EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class _ZN11QDataStreamC2ERK10QByteArray(void);
    extern Class _ZN11QDataStreamC1ERK10QByteArray(void);
    extern Class _ZN11QDataStreamD2Ev(void);
    extern Class _ZN11QDataStreamD1Ev(void);
    extern Class _ZN11QDataStreamD0Ev(void);
    extern void _ZN11QDataStream9setDeviceEP9QIODevice(void);
    extern void _ZN11QDataStream11unsetDeviceEv(void);
    extern bool _ZNK11QDataStream5atEndEv(void);
    extern enum N11QDataStream6StatusE _ZNK11QDataStream6statusEv(void);
    extern void _ZN11QDataStream9setStatusENS_6StatusE(void);
    extern void _ZN11QDataStream11resetStatusEv(void);
    extern void _ZN11QDataStream12setByteOrderENS_9ByteOrderE(void);
    extern Class _ZN11QDataStreamrsERa(void);
    extern Class _ZN11QDataStreamrsERs(void);
    extern Class _ZN11QDataStreamrsERi(void);
    extern Class _ZN11QDataStreamrsERx(void);
    extern Class _ZN11QDataStreamrsERb(void);
    extern Class _ZN11QDataStreamrsERf(void);
    extern Class _ZN11QDataStreamrsERd(void);
    extern Class _ZN11QDataStreamrsERPc(void);
    extern Class _ZN11QDataStreamlsEa(void);
    extern Class _ZN11QDataStreamlsEs(void);
    extern Class _ZN11QDataStreamlsEi(void);
    extern Class _ZN11QDataStreamlsEx(void);
    extern Class _ZN11QDataStreamlsEb(void);
    extern Class _ZN11QDataStreamlsEf(void);
    extern Class _ZN11QDataStreamlsEd(void);
    extern Class _ZN11QDataStreamlsEPKc(void);
    extern Class _ZN11QDataStream9readBytesERPcRj(void);
    extern int _ZN11QDataStream11readRawDataEPci(void);
    extern Class _ZN11QDataStream10writeBytesEPKcj(void);
    extern int _ZN11QDataStream12writeRawDataEPKci(void);
    extern int _ZN11QDataStream11skipRawDataEi(void);
#ifdef __cplusplus
}
#endif
#endif
