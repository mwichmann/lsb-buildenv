#ifndef _QTNETWORK_QHOSTINFO_H_
#define _QTNETWORK_QHOSTINFO_H_

class QHostInfo;
// *INDENT-OFF*



class QHostInfo
{
private:
public:
};

enum HostInfoError	
{
NoError = 0,	
HostNotFound = 1,	
UnknownError = 2
}
;


extern QHostInfo _ZN9QHostInfoC2Ei(void);
extern QHostInfo _ZN9QHostInfoC1Ei(void);
extern QHostInfo _ZN9QHostInfoC2ERKS_(void);
extern QHostInfo _ZN9QHostInfoC1ERKS_(void);
extern QHostInfo _ZN9QHostInfoaSERKS_(void);
extern QHostInfo _ZN9QHostInfoD2Ev(void);
extern QHostInfo _ZN9QHostInfoD1Ev(void);
extern QString _ZNK9QHostInfo8hostNameEv(void);
extern void _ZN9QHostInfo11setHostNameERK7QString(void);
extern QList<QHostAddress> _ZNK9QHostInfo9addressesEv(void);
extern void _ZN9QHostInfo12setAddressesERK5QListI12QHostAddressE(void);
extern enum N9QHostInfo13HostInfoErrorE _ZNK9QHostInfo5errorEv(void);
extern void _ZN9QHostInfo8setErrorENS_13HostInfoErrorE(void);
extern QString _ZNK9QHostInfo11errorStringEv(void);
extern void _ZN9QHostInfo14setErrorStringERK7QString(void);
extern void _ZN9QHostInfo11setLookupIdEi(void);
extern int _ZNK9QHostInfo8lookupIdEv(void);
extern int _ZN9QHostInfo10lookupHostERK7QStringP7QObjectPKc(void);
extern void _ZN9QHostInfo15abortHostLookupEi(void);
extern QHostInfo _ZN9QHostInfo8fromNameERK7QString(void);
extern QString _ZN9QHostInfo13localHostNameEv(void);
// *INDENT-ON*
#endif
