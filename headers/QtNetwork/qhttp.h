#ifndef _QTNETWORK_QHTTP_H_
#define _QTNETWORK_QHTTP_H_

class QHttpResponseHeader;
// *INDENT-OFF*




class QHttpHeader
{
private:
public:
};

class QHttpResponseHeader : public QHttpHeader
{
private:
public:
};

class QHttpRequestHeader : public QHttpHeader
{
private:
public:
};

class QHttp : public QObject
{
private:
public:
};

enum State	
{
Unconnected = 0,	
HostLookup = 1,	
Connecting = 2,	
Sending = 3,	
Reading = 4,	
Connected = 5,	
Closing = 6
}
;

enum Error	
{
NoError = 0,	
UnknownError = 1,	
HostNotFound = 2,	
ConnectionRefused = 3,	
UnexpectedClose = 4,	
InvalidResponseHeader = 5,	
WrongContentLength = 6,	
Aborted = 7
}
;


extern QHttpHeader _ZN11QHttpHeaderC2Ev(void);
extern QHttpHeader _ZN11QHttpHeaderC1Ev(void);
extern QHttpHeader _ZN11QHttpHeaderC2ERKS_(void);
extern QHttpHeader _ZN11QHttpHeaderC1ERKS_(void);
extern QHttpHeader _ZN11QHttpHeaderC2ERK7QString(void);
extern QHttpHeader _ZN11QHttpHeaderC1ERK7QString(void);
extern QHttpHeader _ZN11QHttpHeaderD2Ev(void);
extern QHttpHeader _ZN11QHttpHeaderD1Ev(void);
extern QHttpHeader _ZN11QHttpHeaderD0Ev(void);
extern QHttpHeader _ZN11QHttpHeaderaSERKS_(void);
extern void _ZN11QHttpHeader8setValueERK7QStringS2_(void);
extern void _ZN11QHttpHeader9setValuesERK5QListI5QPairI7QStringS2_EE(void);
extern void _ZN11QHttpHeader8addValueERK7QStringS2_(void);
extern QList<QPair<QString, QString> > _ZNK11QHttpHeader6valuesEv(void);
extern bool _ZNK11QHttpHeader6hasKeyERK7QString(void);
extern QStringList _ZNK11QHttpHeader4keysEv(void);
extern QString _ZNK11QHttpHeader5valueERK7QString(void);
extern QStringList _ZNK11QHttpHeader9allValuesERK7QString(void);
extern void _ZN11QHttpHeader11removeValueERK7QString(void);
extern void _ZN11QHttpHeader15removeAllValuesERK7QString(void);
extern bool _ZNK11QHttpHeader16hasContentLengthEv(void);
extern uint _ZNK11QHttpHeader13contentLengthEv(void);
extern void _ZN11QHttpHeader16setContentLengthEi(void);
extern bool _ZNK11QHttpHeader14hasContentTypeEv(void);
extern QString _ZNK11QHttpHeader11contentTypeEv(void);
extern void _ZN11QHttpHeader14setContentTypeERK7QString(void);
extern QString _ZNK11QHttpHeader8toStringEv(void);
extern bool _ZNK11QHttpHeader7isValidEv(void);
extern bool _ZN11QHttpHeader9parseLineERK7QStringi(void);
extern bool _ZN11QHttpHeader5parseERK7QString(void);
extern void _ZN11QHttpHeader8setValidEb(void);
extern QHttpHeader _ZN11QHttpHeaderC2ER18QHttpHeaderPrivateRK7QString(void);
extern QHttpHeader _ZN11QHttpHeaderC1ER18QHttpHeaderPrivateRK7QString(void);
extern QHttpHeader _ZN11QHttpHeaderC2ER18QHttpHeaderPrivateRKS_(void);
extern QHttpHeader _ZN11QHttpHeaderC1ER18QHttpHeaderPrivateRKS_(void);
extern  _ZN19QHttpResponseHeaderD0Ev(void);
extern  _ZN19QHttpResponseHeaderD1Ev(void);
extern QHttpResponseHeader _ZN19QHttpResponseHeaderC2Ev(void);
extern QHttpResponseHeader _ZN19QHttpResponseHeaderC1Ev(void);
extern QHttpResponseHeader _ZN19QHttpResponseHeaderC2ERKS_(void);
extern QHttpResponseHeader _ZN19QHttpResponseHeaderC1ERKS_(void);
extern QHttpResponseHeader _ZN19QHttpResponseHeaderC2ERK7QString(void);
extern QHttpResponseHeader _ZN19QHttpResponseHeaderC1ERK7QString(void);
extern QHttpResponseHeader _ZN19QHttpResponseHeaderC2EiRK7QStringii(void);
extern QHttpResponseHeader _ZN19QHttpResponseHeaderC1EiRK7QStringii(void);
extern QHttpResponseHeader _ZN19QHttpResponseHeaderaSERKS_(void);
extern void _ZN19QHttpResponseHeader13setStatusLineEiRK7QStringii(void);
extern int _ZNK19QHttpResponseHeader10statusCodeEv(void);
extern QString _ZNK19QHttpResponseHeader12reasonPhraseEv(void);
extern int _ZNK19QHttpResponseHeader12majorVersionEv(void);
extern int _ZNK19QHttpResponseHeader12minorVersionEv(void);
extern QString _ZNK19QHttpResponseHeader8toStringEv(void);
extern bool _ZN19QHttpResponseHeader9parseLineERK7QStringi(void);
extern  _ZN18QHttpRequestHeaderD0Ev(void);
extern  _ZN18QHttpRequestHeaderD1Ev(void);
extern QHttpRequestHeader _ZN18QHttpRequestHeaderC2Ev(void);
extern QHttpRequestHeader _ZN18QHttpRequestHeaderC1Ev(void);
extern QHttpRequestHeader _ZN18QHttpRequestHeaderC2ERK7QStringS2_ii(void);
extern QHttpRequestHeader _ZN18QHttpRequestHeaderC1ERK7QStringS2_ii(void);
extern QHttpRequestHeader _ZN18QHttpRequestHeaderC2ERKS_(void);
extern QHttpRequestHeader _ZN18QHttpRequestHeaderC1ERKS_(void);
extern QHttpRequestHeader _ZN18QHttpRequestHeaderC2ERK7QString(void);
extern QHttpRequestHeader _ZN18QHttpRequestHeaderC1ERK7QString(void);
extern QHttpRequestHeader _ZN18QHttpRequestHeaderaSERKS_(void);
extern void _ZN18QHttpRequestHeader10setRequestERK7QStringS2_ii(void);
extern QString _ZNK18QHttpRequestHeader6methodEv(void);
extern QString _ZNK18QHttpRequestHeader4pathEv(void);
extern int _ZNK18QHttpRequestHeader12majorVersionEv(void);
extern int _ZNK18QHttpRequestHeader12minorVersionEv(void);
extern QString _ZNK18QHttpRequestHeader8toStringEv(void);
extern bool _ZN18QHttpRequestHeader9parseLineERK7QStringi(void);
extern struct QMetaObject _ZN5QHttp16staticMetaObjectE ;
extern struct QMetaObject _ZNK5QHttp10metaObjectEv(void);
extern void _ZN5QHttp11qt_metacastEPKc(void);
extern int _ZN5QHttp11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QHttp _ZN5QHttpC2EP7QObject(void);
extern QHttp _ZN5QHttpC1EP7QObject(void);
extern QHttp _ZN5QHttpC2ERK7QStringtP7QObject(void);
extern QHttp _ZN5QHttpC1ERK7QStringtP7QObject(void);
extern QHttp _ZN5QHttpD2Ev(void);
extern QHttp _ZN5QHttpD1Ev(void);
extern QHttp _ZN5QHttpD0Ev(void);
extern int _ZN5QHttp7setHostERK7QStringt(void);
extern int _ZN5QHttp9setSocketEP10QTcpSocket(void);
extern int _ZN5QHttp7setUserERK7QStringS2_(void);
extern int _ZN5QHttp8setProxyERK7QStringiS2_S2_(void);
extern int _ZN5QHttp3getERK7QStringP9QIODevice(void);
extern int _ZN5QHttp4postERK7QStringP9QIODeviceS4_(void);
extern int _ZN5QHttp4postERK7QStringRK10QByteArrayP9QIODevice(void);
extern int _ZN5QHttp4headERK7QString(void);
extern int _ZN5QHttp7requestERK18QHttpRequestHeaderP9QIODeviceS4_(void);
extern int _ZN5QHttp7requestERK18QHttpRequestHeaderRK10QByteArrayP9QIODevice(void);
extern int _ZN5QHttp15closeConnectionEv(void);
extern int _ZN5QHttp5closeEv(void);
extern qint64 _ZNK5QHttp14bytesAvailableEv(void);
extern qint64 _ZN5QHttp4readEPcx(void);
extern QByteArray _ZN5QHttp7readAllEv(void);
extern int _ZNK5QHttp9currentIdEv(void);
extern QIODevice _ZNK5QHttp19currentSourceDeviceEv(void);
extern QIODevice _ZNK5QHttp24currentDestinationDeviceEv(void);
extern QHttpRequestHeader _ZNK5QHttp14currentRequestEv(void);
extern QHttpResponseHeader _ZNK5QHttp12lastResponseEv(void);
extern bool _ZNK5QHttp18hasPendingRequestsEv(void);
extern void _ZN5QHttp20clearPendingRequestsEv(void);
extern enum N5QHttp5StateE _ZNK5QHttp5stateEv(void);
extern enum N5QHttp5ErrorE _ZNK5QHttp5errorEv(void);
extern QString _ZNK5QHttp11errorStringEv(void);
extern void _ZN5QHttp5abortEv(void);
extern void _ZN5QHttp12stateChangedEi(void);
extern void _ZN5QHttp22responseHeaderReceivedERK19QHttpResponseHeader(void);
extern void _ZN5QHttp9readyReadERK19QHttpResponseHeader(void);
extern void _ZN5QHttp16dataSendProgressEii(void);
extern void _ZN5QHttp16dataReadProgressEii(void);
extern void _ZN5QHttp14requestStartedEi(void);
extern void _ZN5QHttp15requestFinishedEib(void);
extern void _ZN5QHttp4doneEb(void);
// *INDENT-ON*
#endif
