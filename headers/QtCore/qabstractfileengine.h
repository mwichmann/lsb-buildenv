#ifndef _QTCORE_QABSTRACTFILEENGINE_H_
#define _QTCORE_QABSTRACTFILEENGINE_H_

class QFlags < QAbstractFileEngine::FileFlag >;
// *INDENT-OFF*




typedef FileFlags	
;

class QAbstractFileEngine
{
private:
public:
};

enum FileFlag	
{
ExeOtherPerm = 1,	
WriteOtherPerm = 2,	
ReadOtherPerm = 4,	
ExeGroupPerm = 16,	
WriteGroupPerm = 32,	
ReadGroupPerm = 64,	
ExeUserPerm = 256,	
WriteUserPerm = 512,	
ReadUserPerm = 1024,	
ExeOwnerPerm = 4096,	
WriteOwnerPerm = 8192,	
ReadOwnerPerm = 16384,	
PermsMask = 65535,	
LinkType = 65536,	
FileType = 131072,	
DirectoryType = 262144,	
TypesMask = 983040,	
HiddenFlag = 1048576,	
LocalDiskFlag = 2097152,	
ExistsFlag = 4194304,	
RootFlag = 8388608,	
FlagsMask = 267386880,	
FileInfoAll = 268435455
}
;

class QFlags<QAbstractFileEngine::FileFlag>
{
private:
public:
};

enum FileName	
{
DefaultName = 0,	
BaseName = 1,	
PathName = 2,	
AbsoluteName = 3,	
AbsolutePathName = 4,	
LinkName = 5,	
CanonicalName = 6,	
CanonicalPathName = 7
}
;

enum FileOwner	
{
OwnerUser = 0,	
OwnerGroup = 1
}
;

enum FileTime	
{
CreationTime = 0,	
ModificationTime = 1,	
AccessTime = 2
}
;

enum Extension	
;

class QAbstractFileEngine::ExtensionOption
{
private:
public:
};

class QAbstractFileEngine::ExtensionReturn
{
private:
public:
};

class QAbstractFileEngineHandler
{
private:
public:
};


extern QAbstractFileEngine _ZN19QAbstractFileEngineD2Ev(void);
extern QAbstractFileEngine _ZN19QAbstractFileEngineD1Ev(void);
extern QAbstractFileEngine _ZN19QAbstractFileEngineD0Ev(void);
extern bool _ZN19QAbstractFileEngine4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern bool _ZN19QAbstractFileEngine5closeEv(void);
extern bool _ZN19QAbstractFileEngine5flushEv(void);
extern qint64 _ZNK19QAbstractFileEngine4sizeEv(void);
extern qint64 _ZNK19QAbstractFileEngine3posEv(void);
extern bool _ZN19QAbstractFileEngine4seekEx(void);
extern bool _ZNK19QAbstractFileEngine12isSequentialEv(void);
extern bool _ZN19QAbstractFileEngine6removeEv(void);
extern bool _ZN19QAbstractFileEngine4copyERK7QString(void);
extern bool _ZN19QAbstractFileEngine6renameERK7QString(void);
extern bool _ZN19QAbstractFileEngine4linkERK7QString(void);
extern bool _ZNK19QAbstractFileEngine5mkdirERK7QStringb(void);
extern bool _ZNK19QAbstractFileEngine5rmdirERK7QStringb(void);
extern bool _ZN19QAbstractFileEngine7setSizeEx(void);
extern bool _ZNK19QAbstractFileEngine13caseSensitiveEv(void);
extern bool _ZNK19QAbstractFileEngine14isRelativePathEv(void);
extern QStringList _ZNK19QAbstractFileEngine9entryListE6QFlagsIN4QDir6FilterEERK11QStringList(void);
extern N19QAbstractFileEngine9FileFlagsE _ZNK19QAbstractFileEngine9fileFlagsE6QFlagsINS_8FileFlagEE(void);
extern bool _ZN19QAbstractFileEngine14setPermissionsEj(void);
extern QString _ZNK19QAbstractFileEngine8fileNameENS_8FileNameE(void);
extern uint _ZNK19QAbstractFileEngine7ownerIdENS_9FileOwnerE(void);
extern QString _ZNK19QAbstractFileEngine5ownerENS_9FileOwnerE(void);
extern  _ZNK19QAbstractFileEngine8fileTimeENS_8FileTimeE(void);
extern void _ZN19QAbstractFileEngine11setFileNameERK7QString(void);
extern int _ZNK19QAbstractFileEngine6handleEv(void);
extern  _ZN19QAbstractFileEngine14beginEntryListE6QFlagsIN4QDir6FilterEERK11QStringList(void);
extern  _ZN19QAbstractFileEngine12endEntryListEv(void);
extern qint64 _ZN19QAbstractFileEngine4readEPcx(void);
extern qint64 _ZN19QAbstractFileEngine8readLineEPcx(void);
extern qint64 _ZN19QAbstractFileEngine5writeEPKcx(void);
extern enum N5QFile9FileErrorE _ZNK19QAbstractFileEngine5errorEv(void);
extern QString _ZNK19QAbstractFileEngine11errorStringEv(void);
extern bool _ZN19QAbstractFileEngine9extensionENS_9ExtensionEPKNS_15ExtensionOptionEPNS_15ExtensionReturnE(void);
extern bool _ZNK19QAbstractFileEngine17supportsExtensionENS_9ExtensionE(void);
extern QAbstractFileEngine _ZN19QAbstractFileEngine6createERK7QString(void);
extern void _ZN19QAbstractFileEngine8setErrorEN5QFile9FileErrorERK7QString(void);
extern QAbstractFileEngine _ZN19QAbstractFileEngineC2Ev(void);
extern QAbstractFileEngine _ZN19QAbstractFileEngineC1Ev(void);
extern QAbstractFileEngine _ZN19QAbstractFileEngineC2ER26QAbstractFileEnginePrivate(void);
extern QAbstractFileEngine _ZN19QAbstractFileEngineC1ER26QAbstractFileEnginePrivate(void);
extern QAbstractFileEngineHandler _ZN26QAbstractFileEngineHandlerC2Ev(void);
extern QAbstractFileEngineHandler _ZN26QAbstractFileEngineHandlerC1Ev(void);
extern QAbstractFileEngineHandler _ZN26QAbstractFileEngineHandlerD2Ev(void);
extern QAbstractFileEngineHandler _ZN26QAbstractFileEngineHandlerD1Ev(void);
extern QAbstractFileEngineHandler _ZN26QAbstractFileEngineHandlerD0Ev(void);
// *INDENT-ON*
#endif
