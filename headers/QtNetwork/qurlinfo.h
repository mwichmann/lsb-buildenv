#ifndef _QTNETWORK_QURLINFO_H_
#define _QTNETWORK_QURLINFO_H_

class QUrlInfo;
// *INDENT-OFF*




class QUrlInfo
{
private:
public:
};

enum PermissionSpec	
{
ExeOther = 1,	
WriteOther = 2,	
ReadOther = 4,	
ExeGroup = 8,	
WriteGroup = 16,	
ReadGroup = 32,	
ExeOwner = 64,	
WriteOwner = 128,	
ReadOwner = 256
}
;


extern QUrlInfo _ZN8QUrlInfoC2Ev(void);
extern QUrlInfo _ZN8QUrlInfoC1Ev(void);
extern QUrlInfo _ZN8QUrlInfoC2ERKS_(void);
extern QUrlInfo _ZN8QUrlInfoC1ERKS_(void);
extern QUrlInfo _ZN8QUrlInfoC2ERK7QStringiS2_S2_xRK9QDateTimeS5_bbbbbb(void);
extern QUrlInfo _ZN8QUrlInfoC1ERK7QStringiS2_S2_xRK9QDateTimeS5_bbbbbb(void);
extern QUrlInfo _ZN8QUrlInfoC2ERK4QUrliRK7QStringS5_xRK9QDateTimeS8_bbbbbb(void);
extern QUrlInfo _ZN8QUrlInfoC1ERK4QUrliRK7QStringS5_xRK9QDateTimeS8_bbbbbb(void);
extern QUrlInfo _ZN8QUrlInfoaSERKS_(void);
extern QUrlInfo _ZN8QUrlInfoD2Ev(void);
extern QUrlInfo _ZN8QUrlInfoD1Ev(void);
extern QUrlInfo _ZN8QUrlInfoD0Ev(void);
extern void _ZN8QUrlInfo7setNameERK7QString(void);
extern void _ZN8QUrlInfo6setDirEb(void);
extern void _ZN8QUrlInfo7setFileEb(void);
extern void _ZN8QUrlInfo10setSymLinkEb(void);
extern void _ZN8QUrlInfo8setOwnerERK7QString(void);
extern void _ZN8QUrlInfo8setGroupERK7QString(void);
extern void _ZN8QUrlInfo7setSizeEx(void);
extern void _ZN8QUrlInfo11setWritableEb(void);
extern void _ZN8QUrlInfo11setReadableEb(void);
extern void _ZN8QUrlInfo14setPermissionsEi(void);
extern void _ZN8QUrlInfo15setLastModifiedERK9QDateTime(void);
extern bool _ZNK8QUrlInfo7isValidEv(void);
extern QString _ZNK8QUrlInfo4nameEv(void);
extern int _ZNK8QUrlInfo11permissionsEv(void);
extern QString _ZNK8QUrlInfo5ownerEv(void);
extern QString _ZNK8QUrlInfo5groupEv(void);
extern qint64 _ZNK8QUrlInfo4sizeEv(void);
extern QDateTime _ZNK8QUrlInfo12lastModifiedEv(void);
extern QDateTime _ZNK8QUrlInfo8lastReadEv(void);
extern bool _ZNK8QUrlInfo5isDirEv(void);
extern bool _ZNK8QUrlInfo6isFileEv(void);
extern bool _ZNK8QUrlInfo9isSymLinkEv(void);
extern bool _ZNK8QUrlInfo10isWritableEv(void);
extern bool _ZNK8QUrlInfo10isReadableEv(void);
extern bool _ZNK8QUrlInfo12isExecutableEv(void);
extern bool _ZN8QUrlInfo11greaterThanERKS_S1_i(void);
extern bool _ZN8QUrlInfo8lessThanERKS_S1_i(void);
extern bool _ZN8QUrlInfo5equalERKS_S1_i(void);
extern bool _ZNK8QUrlInfoeqERKS_(void);
// *INDENT-ON*
#endif
