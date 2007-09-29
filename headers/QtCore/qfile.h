#ifndef _QTCORE_QFILE_H_
#define _QTCORE_QFILE_H_

class QFile;
// *INDENT-OFF*



typedef Permissions	
;

typedef QByteArray EncoderFn	
;

typedef QString DecoderFn	
;

typedef enum Permission	
{
ExeOther = 1,	
WriteOther = 2,	
ReadOther = 4,	
ExeGroup = 16,	
WriteGroup = 32,	
ReadGroup = 64,	
ExeUser = 256,	
WriteUser = 512,	
ReadUser = 1024,	
ExeOwner = 4096,	
WriteOwner = 8192,	
ReadOwner = 16384
}
PermissionSpec	
;

class QFile : public QIODevice
{
private:
public:
};

enum FileError	
{
NoError = 0,	
ReadError = 1,	
WriteError = 2,	
FatalError = 3,	
ResourceError = 4,	
OpenError = 5,	
AbortError = 6,	
TimeOutError = 7,	
UnspecifiedError = 8,	
RemoveError = 9,	
RenameError = 10,	
PositionError = 11,	
ResizeError = 12,	
PermissionsError = 13,	
CopyError = 14,	
ConnectError = 30
}
;

enum Permission	
{
ExeOther = 1,	
WriteOther = 2,	
ReadOther = 4,	
ExeGroup = 16,	
WriteGroup = 32,	
ReadGroup = 64,	
ExeUser = 256,	
WriteUser = 512,	
ReadUser = 1024,	
ExeOwner = 4096,	
WriteOwner = 8192,	
ReadOwner = 16384
}
;

class QFlags<QFile::Permission>
{
private:
public:
};


extern struct QMetaObject _ZN5QFile16staticMetaObjectE ;
extern struct QMetaObject _ZNK5QFile10metaObjectEv(void);
extern void _ZN5QFile11qt_metacastEPKc(void);
extern int _ZN5QFile11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QFile _ZN5QFileC2Ev(void);
extern QFile _ZN5QFileC1Ev(void);
extern QFile _ZN5QFileC2ERK7QString(void);
extern QFile _ZN5QFileC1ERK7QString(void);
extern QFile _ZN5QFileC2EP7QObject(void);
extern QFile _ZN5QFileC1EP7QObject(void);
extern QFile _ZN5QFileC2ERK7QStringP7QObject(void);
extern QFile _ZN5QFileC1ERK7QStringP7QObject(void);
extern QFile _ZN5QFileD2Ev(void);
extern QFile _ZN5QFileD1Ev(void);
extern QFile _ZN5QFileD0Ev(void);
extern enum N5QFile9FileErrorE _ZNK5QFile5errorEv(void);
extern void _ZN5QFile10unsetErrorEv(void);
extern QString _ZNK5QFile8fileNameEv(void);
extern void _ZN5QFile11setFileNameERK7QString(void);
extern QByteArray _ZN5QFile10encodeNameERK7QString(void);
extern QString _ZN5QFile10decodeNameERK10QByteArray(void);
extern void _ZN5QFile19setEncodingFunctionEPF10QByteArrayRK7QStringE(void);
extern void _ZN5QFile19setDecodingFunctionEPF7QStringRK10QByteArrayE(void);
extern bool _ZNK5QFile6existsEv(void);
extern bool _ZN5QFile6existsERK7QString(void);
extern QString _ZNK5QFile8readLinkEv(void);
extern QString _ZN5QFile8readLinkERK7QString(void);
extern bool _ZN5QFile6removeEv(void);
extern bool _ZN5QFile6removeERK7QString(void);
extern bool _ZN5QFile6renameERK7QString(void);
extern bool _ZN5QFile6renameERK7QStringS2_(void);
extern bool _ZN5QFile4linkERK7QString(void);
extern bool _ZN5QFile4linkERK7QStringS2_(void);
extern bool _ZN5QFile4copyERK7QString(void);
extern bool _ZN5QFile4copyERK7QStringS2_(void);
extern bool _ZNK5QFile12isSequentialEv(void);
extern bool _ZN5QFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern bool _ZN5QFile4openEP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern bool _ZN5QFile4openEi6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern void _ZN5QFile5closeEv(void);
extern qint64 _ZNK5QFile4sizeEv(void);
extern qint64 _ZNK5QFile3posEv(void);
extern bool _ZN5QFile4seekEx(void);
extern bool _ZNK5QFile5atEndEv(void);
extern bool _ZN5QFile5flushEv(void);
extern bool _ZN5QFile6resizeEx(void);
extern bool _ZN5QFile6resizeERK7QStringx(void);
extern N5QFile11PermissionsE _ZNK5QFile11permissionsEv(void);
extern N5QFile11PermissionsE _ZN5QFile11permissionsERK7QString(void);
extern bool _ZN5QFile14setPermissionsE6QFlagsINS_10PermissionEE(void);
extern bool _ZN5QFile14setPermissionsERK7QString6QFlagsINS_10PermissionEE(void);
extern int _ZNK5QFile6handleEv(void);
extern  _ZNK5QFile10fileEngineEv(void);
extern QFile _ZN5QFileC2ER12QFilePrivateP7QObject(void);
extern QFile _ZN5QFileC1ER12QFilePrivateP7QObject(void);
extern qint64 _ZN5QFile8readDataEPcx(void);
extern qint64 _ZN5QFile9writeDataEPKcx(void);
extern qint64 _ZN5QFile12readLineDataEPcx(void);
// *INDENT-ON*
#endif
