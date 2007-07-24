#ifndef _QTCORE_QFSFILEENGINE_H_
#define _QTCORE_QFSFILEENGINE_H_

#include <QtCore/qlist.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qglobal.h>
#include <QtCore/qstring.h>
#include <QtCore/qfileinfo.h>
#include <QtCore/qabstractfileengine.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern Class _ZN13QFSFileEngineC2Ev(void);
    extern Class _ZN13QFSFileEngineC1Ev(void);
    extern Class _ZN13QFSFileEngineC2ERK7QString(void);
    extern Class _ZN13QFSFileEngineC1ERK7QString(void);
    extern Class _ZN13QFSFileEngineD2Ev(void);
    extern Class _ZN13QFSFileEngineD1Ev(void);
    extern Class _ZN13QFSFileEngineD0Ev(void);
    extern bool
	_ZN13QFSFileEngine4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void);
    extern bool
	_ZN13QFSFileEngine4openE6QFlagsIN9QIODevice12OpenModeFlagEEP8_IO_FILE
	(void);
    extern bool _ZN13QFSFileEngine5closeEv(void);
    extern bool _ZN13QFSFileEngine5flushEv(void);
    extern qint64 _ZNK13QFSFileEngine4sizeEv(void);
    extern qint64 _ZNK13QFSFileEngine3posEv(void);
    extern bool _ZN13QFSFileEngine4seekEx(void);
    extern bool _ZNK13QFSFileEngine12isSequentialEv(void);
    extern bool _ZN13QFSFileEngine6removeEv(void);
    extern bool _ZN13QFSFileEngine4copyERK7QString(void);
    extern bool _ZN13QFSFileEngine6renameERK7QString(void);
    extern bool _ZN13QFSFileEngine4linkERK7QString(void);
    extern bool _ZNK13QFSFileEngine5mkdirERK7QStringb(void);
    extern bool _ZNK13QFSFileEngine5rmdirERK7QStringb(void);
    extern bool _ZN13QFSFileEngine7setSizeEx(void);
    extern bool _ZNK13QFSFileEngine13caseSensitiveEv(void);
    extern bool _ZNK13QFSFileEngine14isRelativePathEv(void);
    extern Class
	_ZNK13QFSFileEngine9entryListE6QFlagsIN4QDir6FilterEERK11QStringList
	(void);
    extern N19QAbstractFileEngine9FileFlagsE
	_ZNK13QFSFileEngine9fileFlagsE6QFlagsIN19QAbstractFileEngine8FileFlagEE
	(void);
    extern bool _ZN13QFSFileEngine14setPermissionsEj(void);
    extern Class
	_ZNK13QFSFileEngine8fileNameEN19QAbstractFileEngine8FileNameE
	(void);
    extern uint
	_ZNK13QFSFileEngine7ownerIdEN19QAbstractFileEngine9FileOwnerE
	(void);
    extern Class
	_ZNK13QFSFileEngine5ownerEN19QAbstractFileEngine9FileOwnerE(void);
    extern
	_ZNK13QFSFileEngine8fileTimeEN19QAbstractFileEngine8FileTimeE
	(void);
    extern void _ZN13QFSFileEngine11setFileNameERK7QString(void);
    extern int _ZNK13QFSFileEngine6handleEv(void);
    extern
	_ZN13QFSFileEngine14beginEntryListE6QFlagsIN4QDir6FilterEERK11QStringList
	(void);
    extern _ZN13QFSFileEngine12endEntryListEv(void);
    extern qint64 _ZN13QFSFileEngine4readEPcx(void);
    extern qint64 _ZN13QFSFileEngine8readLineEPcx(void);
    extern qint64 _ZN13QFSFileEngine5writeEPKcx(void);
    extern bool
	_ZN13QFSFileEngine9extensionEN19QAbstractFileEngine9ExtensionEPKNS0_15ExtensionOptionEPNS0_15ExtensionReturnE
	(void);
    extern bool
	_ZNK13QFSFileEngine17supportsExtensionEN19QAbstractFileEngine9ExtensionE
	(void);
    extern bool
	_ZN13QFSFileEngine4openE6QFlagsIN9QIODevice12OpenModeFlagEEi(void);
    extern bool _ZN13QFSFileEngine14setCurrentPathERK7QString(void);
    extern Class _ZN13QFSFileEngine11currentPathERK7QString(void);
    extern Class _ZN13QFSFileEngine8homePathEv(void);
    extern Class _ZN13QFSFileEngine8rootPathEv(void);
    extern Class _ZN13QFSFileEngine8tempPathEv(void);
    extern QFileInfoList _ZN13QFSFileEngine6drivesEv(void);
    extern Class _ZN13QFSFileEngineC2ER20QFSFileEnginePrivate(void);
    extern Class _ZN13QFSFileEngineC1ER20QFSFileEnginePrivate(void);
#ifdef __cplusplus
}
#endif
#endif
