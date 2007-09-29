#ifndef _QTNETWORK_QFTP_H_
#define _QTNETWORK_QFTP_H_

class QFtp;
// *INDENT-OFF*



class QFtp : public QObject
{
private:
public:
};

enum State	
{
Unconnected = 0,	
HostLookup = 1,	
Connecting = 2,	
Connected = 3,	
LoggedIn = 4,	
Closing = 5
}
;

enum Error	
{
NoError = 0,	
UnknownError = 1,	
HostNotFound = 2,	
ConnectionRefused = 3,	
NotConnected = 4
}
;

enum Command	
{
None = 0,	
SetTransferMode = 1,	
SetProxy = 2,	
ConnectToHost = 3,	
Login = 4,	
Close = 5,	
List = 6,	
Cd = 7,	
Get = 8,	
Put = 9,	
Remove = 10,	
Mkdir = 11,	
Rmdir = 12,	
Rename = 13,	
RawCommand = 14
}
;

enum TransferMode	
{
Active = 0,	
Passive = 1
}
;

enum TransferType	
{
Binary = 0,	
Ascii = 1
}
;


extern struct QMetaObject _ZN4QFtp16staticMetaObjectE ;
extern struct QMetaObject _ZNK4QFtp10metaObjectEv(void);
extern void _ZN4QFtp11qt_metacastEPKc(void);
extern int _ZN4QFtp11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QFtp _ZN4QFtpC2EP7QObject(void);
extern QFtp _ZN4QFtpC1EP7QObject(void);
extern QFtp _ZN4QFtpD2Ev(void);
extern QFtp _ZN4QFtpD1Ev(void);
extern QFtp _ZN4QFtpD0Ev(void);
extern int _ZN4QFtp8setProxyERK7QStringt(void);
extern int _ZN4QFtp13connectToHostERK7QStringt(void);
extern int _ZN4QFtp5loginERK7QStringS2_(void);
extern int _ZN4QFtp5closeEv(void);
extern int _ZN4QFtp15setTransferModeENS_12TransferModeE(void);
extern int _ZN4QFtp4listERK7QString(void);
extern int _ZN4QFtp2cdERK7QString(void);
extern int _ZN4QFtp3getERK7QStringP9QIODeviceNS_12TransferTypeE(void);
extern int _ZN4QFtp3putERK10QByteArrayRK7QStringNS_12TransferTypeE(void);
extern int _ZN4QFtp3putEP9QIODeviceRK7QStringNS_12TransferTypeE(void);
extern int _ZN4QFtp6removeERK7QString(void);
extern int _ZN4QFtp5mkdirERK7QString(void);
extern int _ZN4QFtp5rmdirERK7QString(void);
extern int _ZN4QFtp6renameERK7QStringS2_(void);
extern int _ZN4QFtp10rawCommandERK7QString(void);
extern qint64 _ZNK4QFtp14bytesAvailableEv(void);
extern qint64 _ZN4QFtp4readEPcx(void);
extern QByteArray _ZN4QFtp7readAllEv(void);
extern int _ZNK4QFtp9currentIdEv(void);
extern QIODevice _ZNK4QFtp13currentDeviceEv(void);
extern enum N4QFtp7CommandE _ZNK4QFtp14currentCommandEv(void);
extern bool _ZNK4QFtp18hasPendingCommandsEv(void);
extern void _ZN4QFtp20clearPendingCommandsEv(void);
extern enum N4QFtp5StateE _ZNK4QFtp5stateEv(void);
extern enum N4QFtp5ErrorE _ZNK4QFtp5errorEv(void);
extern QString _ZNK4QFtp11errorStringEv(void);
extern void _ZN4QFtp5abortEv(void);
extern void _ZN4QFtp12stateChangedEi(void);
extern void _ZN4QFtp8listInfoERK8QUrlInfo(void);
extern void _ZN4QFtp9readyReadEv(void);
extern void _ZN4QFtp20dataTransferProgressExx(void);
extern void _ZN4QFtp15rawCommandReplyEiRK7QString(void);
extern void _ZN4QFtp14commandStartedEi(void);
extern void _ZN4QFtp15commandFinishedEib(void);
extern void _ZN4QFtp4doneEb(void);
extern QFtp _ZN4QFtpC2EP7QObjectPKc(void);
extern QFtp _ZN4QFtpC1EP7QObjectPKc(void);
// *INDENT-ON*
#endif
