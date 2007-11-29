#ifndef _QTCORE_QIODEVICE_H_
#define _QTCORE_QIODEVICE_H_

class QIODevice;
// *INDENT-OFF*




typedef OpenMode	
;

typedef qint64	Offset	
;

typedef int	Status	
;

class QIODevice : public QObject
{
private:
public:
};

enum OpenModeFlag	
{
NotOpen = 0,	
ReadOnly = 1,	
WriteOnly = 2,	
ReadWrite = 3,	
Append = 4,	
Truncate = 8,	
Text = 16,	
Unbuffered = 32
}
;

class QFlags<QIODevice::OpenModeFlag>
{
private:
public:
};


extern struct QMetaObject _ZN9QIODevice16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QIODevice10metaObjectEv(void);
extern void _ZN9QIODevice11qt_metacastEPKc(void);
extern int _ZN9QIODevice11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QIODevice _ZN9QIODeviceC2Ev(void);
extern QIODevice _ZN9QIODeviceC1Ev(void);
extern QIODevice _ZN9QIODeviceC2EP7QObject(void);
extern QIODevice _ZN9QIODeviceC1EP7QObject(void);
extern  _ZN9QIODeviceD2Ev(void);
extern  _ZN9QIODeviceD1Ev(void);
extern  _ZN9QIODeviceD0Ev(void);
extern N9QIODevice8OpenModeE _ZNK9QIODevice8openModeEv(void);
extern void _ZN9QIODevice18setTextModeEnabledEb(void);
extern bool _ZNK9QIODevice17isTextModeEnabledEv(void);
extern bool _ZNK9QIODevice6isOpenEv(void);
extern bool _ZNK9QIODevice10isReadableEv(void);
extern bool _ZNK9QIODevice10isWritableEv(void);
extern bool _ZNK9QIODevice12isSequentialEv(void);
extern bool _ZN9QIODevice4openE6QFlagsINS_12OpenModeFlagEE(void);
extern void _ZN9QIODevice5closeEv(void);
extern qint64 _ZNK9QIODevice3posEv(void);
extern qint64 _ZNK9QIODevice4sizeEv(void);
extern bool _ZN9QIODevice4seekEx(void);
extern bool _ZNK9QIODevice5atEndEv(void);
extern bool _ZN9QIODevice5resetEv(void);
extern qint64 _ZNK9QIODevice14bytesAvailableEv(void);
extern qint64 _ZNK9QIODevice12bytesToWriteEv(void);
extern qint64 _ZN9QIODevice4readEPcx(void);
extern QByteArray _ZN9QIODevice4readEx(void);
extern QByteArray _ZN9QIODevice7readAllEv(void);
extern qint64 _ZN9QIODevice8readLineEPcx(void);
extern QByteArray _ZN9QIODevice8readLineEx(void);
extern bool _ZNK9QIODevice11canReadLineEv(void);
extern qint64 _ZN9QIODevice5writeEPKcx(void);
extern qint64 _ZN9QIODevice4peekEPcx(void);
extern QByteArray _ZN9QIODevice4peekEx(void);
extern bool _ZN9QIODevice16waitForReadyReadEi(void);
extern bool _ZN9QIODevice19waitForBytesWrittenEi(void);
extern void _ZN9QIODevice9ungetCharEc(void);
extern QString _ZNK9QIODevice11errorStringEv(void);
extern void _ZN9QIODevice9readyReadEv(void);
extern void _ZN9QIODevice12bytesWrittenEx(void);
extern void _ZN9QIODevice12aboutToCloseEv(void);
extern QIODevice _ZN9QIODeviceC2ER16QIODevicePrivateP7QObject(void);
extern QIODevice _ZN9QIODeviceC1ER16QIODevicePrivateP7QObject(void);
extern qint64 _ZN9QIODevice12readLineDataEPcx(void);
extern void _ZN9QIODevice11setOpenModeE6QFlagsINS_12OpenModeFlagEE(void);
extern void _ZN9QIODevice14setErrorStringERK7QString(void);
extern N9QIODevice6StatusE _ZNK9QIODevice6statusEv(void);
extern void _ZN9QIODevice11resetStatusEv(void);
extern  _Zls6QDebug6QFlagsIN9QIODevice12OpenModeFlagEE(void);
// *INDENT-ON*
#endif
