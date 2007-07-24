#ifndef _QTCORE_QABSTRACTFILEENGINE_H_
#define _QTCORE_QABSTRACTFILEENGINE_H_

#include <QtCore/qstringlist.h>
#include <QtCore/qglobal.h>
#include <QtCore/qstring.h>
#include <QtCore/qfile.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N19QAbstractFileEngine9FileFlagsE;

    Unknown Type:".Class.";

    enum N19QAbstractFileEngine8FileFlagE {
	ExeOtherPerm,
	WriteOtherPerm,
	ReadOtherPerm,
	ExeGroupPerm,
	WriteGroupPerm,
	ReadGroupPerm,
	ExeUserPerm,
	WriteUserPerm,
	ReadUserPerm,
	ExeOwnerPerm,
	WriteOwnerPerm,
	ReadOwnerPerm,
	PermsMask,
	LinkType,
	FileType,
	DirectoryType,
	TypesMask,
	HiddenFlag,
	LocalDiskFlag,
	ExistsFlag,
	RootFlag,
	FlagsMask,
	FileInfoAll
    };

    Unknown Type:".Class.";

    enum N19QAbstractFileEngine8FileNameE {
	DefaultName,
	BaseName,
	PathName,
	AbsoluteName,
	AbsolutePathName,
	LinkName,
	CanonicalName,
	CanonicalPathName
    };

    enum N19QAbstractFileEngine9FileOwnerE {
	OwnerUser,
	OwnerGroup
    };

    enum N19QAbstractFileEngine8FileTimeE {
	CreationTime,
	ModificationTime,
	AccessTime
    };

    enum N19QAbstractFileEngine9ExtensionE;

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern Class _ZN19QAbstractFileEngineD2Ev(void);
    extern Class _ZN19QAbstractFileEngineD1Ev(void);
    extern Class _ZN19QAbstractFileEngineD0Ev(void);
    extern bool
	_ZN19QAbstractFileEngine4openE6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
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
    extern Class
	_ZNK19QAbstractFileEngine9entryListE6QFlagsIN4QDir6FilterEERK11QStringList
	(void);
    extern N19QAbstractFileEngine9FileFlagsE
	_ZNK19QAbstractFileEngine9fileFlagsE6QFlagsINS_8FileFlagEE(void);
    extern bool _ZN19QAbstractFileEngine14setPermissionsEj(void);
    extern Class _ZNK19QAbstractFileEngine8fileNameENS_8FileNameE(void);
    extern uint _ZNK19QAbstractFileEngine7ownerIdENS_9FileOwnerE(void);
    extern Class _ZNK19QAbstractFileEngine5ownerENS_9FileOwnerE(void);
    extern _ZNK19QAbstractFileEngine8fileTimeENS_8FileTimeE(void);
    extern void _ZN19QAbstractFileEngine11setFileNameERK7QString(void);
    extern int _ZNK19QAbstractFileEngine6handleEv(void);
    extern
	_ZN19QAbstractFileEngine14beginEntryListE6QFlagsIN4QDir6FilterEERK11QStringList
	(void);
    extern _ZN19QAbstractFileEngine12endEntryListEv(void);
    extern qint64 _ZN19QAbstractFileEngine4readEPcx(void);
    extern qint64 _ZN19QAbstractFileEngine8readLineEPcx(void);
    extern qint64 _ZN19QAbstractFileEngine5writeEPKcx(void);
    extern enum N5QFile9FileErrorE _ZNK19QAbstractFileEngine5errorEv(void);
    extern Class _ZNK19QAbstractFileEngine11errorStringEv(void);
    extern bool
	_ZN19QAbstractFileEngine9extensionENS_9ExtensionEPKNS_15ExtensionOptionEPNS_15ExtensionReturnE
	(void);
    extern bool
	_ZNK19QAbstractFileEngine17supportsExtensionENS_9ExtensionE(void);
    extern Class _ZN19QAbstractFileEngine6createERK7QString(void);
    extern void
	_ZN19QAbstractFileEngine8setErrorEN5QFile9FileErrorERK7QString
	(void);
    extern Class _ZN19QAbstractFileEngineC2Ev(void);
    extern Class _ZN19QAbstractFileEngineC1Ev(void);
    extern Class
	_ZN19QAbstractFileEngineC2ER26QAbstractFileEnginePrivate(void);
    extern Class
	_ZN19QAbstractFileEngineC1ER26QAbstractFileEnginePrivate(void);
    extern Class _ZN26QAbstractFileEngineHandlerC2Ev(void);
    extern Class _ZN26QAbstractFileEngineHandlerC1Ev(void);
    extern Class _ZN26QAbstractFileEngineHandlerD2Ev(void);
    extern Class _ZN26QAbstractFileEngineHandlerD1Ev(void);
    extern Class _ZN26QAbstractFileEngineHandlerD0Ev(void);
#ifdef __cplusplus
}
#endif
#endif
