#ifndef _QTNETWORK_QHOSTINFO_H_
#define _QTNETWORK_QHOSTINFO_H_

#include <QtCore/qlist.h>
#include <QtCore/qstring.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N9QHostInfo13HostInfoErrorE {
	NoError,
	HostNotFound,
	UnknownError
    };


    extern Class _ZN9QHostInfoC2Ei(void);
    extern Class _ZN9QHostInfoC1Ei(void);
    extern Class _ZN9QHostInfoC2ERKS_(void);
    extern Class _ZN9QHostInfoC1ERKS_(void);
    extern Class _ZN9QHostInfoaSERKS_(void);
    extern Class _ZN9QHostInfoD2Ev(void);
    extern Class _ZN9QHostInfoD1Ev(void);
    extern Class _ZNK9QHostInfo8hostNameEv(void);
    extern void _ZN9QHostInfo11setHostNameERK7QString(void);
    extern Class _ZNK9QHostInfo9addressesEv(void);
    extern void _ZN9QHostInfo12setAddressesERK5QListI12QHostAddressE(void);
    extern enum N9QHostInfo13HostInfoErrorE _ZNK9QHostInfo5errorEv(void);
    extern void _ZN9QHostInfo8setErrorENS_13HostInfoErrorE(void);
    extern Class _ZNK9QHostInfo11errorStringEv(void);
    extern void _ZN9QHostInfo14setErrorStringERK7QString(void);
    extern void _ZN9QHostInfo11setLookupIdEi(void);
    extern int _ZNK9QHostInfo8lookupIdEv(void);
    extern int _ZN9QHostInfo10lookupHostERK7QStringP7QObjectPKc(void);
    extern void _ZN9QHostInfo15abortHostLookupEi(void);
    extern Class _ZN9QHostInfo8fromNameERK7QString(void);
    extern Class _ZN9QHostInfo13localHostNameEv(void);
#ifdef __cplusplus
}
#endif
#endif
