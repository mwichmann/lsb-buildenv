#ifndef _QTCORE_QDIR_H_
#define _QTCORE_QDIR_H_

#include <QtCore/qlist.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qchar.h>
#include <QtCore/qstring.h>
#include <QtCore/qfileinfo.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N4QDir7FiltersE;

    typedef N4QDir7FiltersE N4QDir10FilterSpecE;

    typedef Unknown Type:".." N4QDir9SortFlagsE;

    typedef N4QDir9SortFlagsE N4QDir8SortSpecE;

    Unknown Type:".Class.";

    enum N4QDir6FilterE {
	NoFilter,
	DefaultFilter,
	Dirs,
	Files,
	Drives,
	AllEntries,
	All,
	NoSymLinks,
	TypeMask,
	Readable,
	Writable,
	Executable,
	PermissionMask,
	RWEMask,
	Modified,
	Hidden,
	System,
	AccessMask,
	AllDirs,
	CaseSensitive,
	NoDotAndDotDot
    };

    Unknown Type:".Class.";

    enum N4QDir8SortFlagE {
	NoSort,
	DefaultSort,
	Name,
	Time,
	Size,
	Unsorted,
	SortByMask,
	DirsFirst,
	Reversed,
	IgnoreCase,
	DirsLast,
	LocaleAware,
	Type
    };

    Unknown Type:".Class.";


    extern Class _ZN4QDirC2ERKS_(void);
    extern Class _ZN4QDirC1ERKS_(void);
    extern Class _ZN4QDirC2ERK7QString(void);
    extern Class _ZN4QDirC1ERK7QString(void);
    extern Class
	_ZN4QDirC2ERK7QStringS2_6QFlagsINS_8SortFlagEES3_INS_6FilterEE
	(void);
    extern Class
	_ZN4QDirC1ERK7QStringS2_6QFlagsINS_8SortFlagEES3_INS_6FilterEE
	(void);
    extern Class _ZN4QDirD2Ev(void);
    extern Class _ZN4QDirD1Ev(void);
    extern Class _ZN4QDiraSERKS_(void);
    extern Class _ZN4QDiraSERK7QString(void);
    extern void _ZN4QDir7setPathERK7QString(void);
    extern Class _ZNK4QDir4pathEv(void);
    extern Class _ZNK4QDir12absolutePathEv(void);
    extern Class _ZNK4QDir13canonicalPathEv(void);
    extern void _ZN4QDir21addResourceSearchPathERK7QString(void);
    extern Class _ZNK4QDir7dirNameEv(void);
    extern Class _ZNK4QDir8filePathERK7QString(void);
    extern Class _ZNK4QDir16absoluteFilePathERK7QString(void);
    extern Class _ZNK4QDir16relativeFilePathERK7QString(void);
    extern Class _ZN4QDir17convertSeparatorsERK7QString(void);
    extern bool _ZN4QDir2cdERK7QString(void);
    extern bool _ZN4QDir4cdUpEv(void);
    extern Class _ZNK4QDir11nameFiltersEv(void);
    extern void _ZN4QDir14setNameFiltersERK11QStringList(void);
    extern N4QDir7FiltersE _ZNK4QDir6filterEv(void);
    extern void _ZN4QDir9setFilterE6QFlagsINS_6FilterEE(void);
    extern N4QDir9SortFlagsE _ZNK4QDir7sortingEv(void);
    extern void _ZN4QDir10setSortingE6QFlagsINS_8SortFlagEE(void);
    extern uint _ZNK4QDir5countEv(void);
    extern Class _ZNK4QDirixEi(void);
    extern Class _ZN4QDir21nameFiltersFromStringERK7QString(void);
    extern Class
	_ZNK4QDir9entryListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE(void);
    extern Class
	_ZNK4QDir9entryListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE
	(void);
    extern QFileInfoList
	_ZNK4QDir13entryInfoListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE
	(void);
    extern QFileInfoList
	_ZNK4QDir13entryInfoListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE
	(void);
    extern bool _ZNK4QDir5mkdirERK7QString(void);
    extern bool _ZNK4QDir5rmdirERK7QString(void);
    extern bool _ZNK4QDir6mkpathERK7QString(void);
    extern bool _ZNK4QDir6rmpathERK7QString(void);
    extern bool _ZNK4QDir10isReadableEv(void);
    extern bool _ZNK4QDir6existsEv(void);
    extern bool _ZNK4QDir6isRootEv(void);
    extern bool _ZN4QDir14isRelativePathERK7QString(void);
    extern bool _ZNK4QDir10isRelativeEv(void);
    extern bool _ZN4QDir12makeAbsoluteEv(void);
    extern bool _ZNK4QDireqERKS_(void);
    extern bool _ZN4QDir6removeERK7QString(void);
    extern bool _ZN4QDir6renameERK7QStringS2_(void);
    extern bool _ZNK4QDir6existsERK7QString(void);
    extern QFileInfoList _ZN4QDir6drivesEv(void);
    extern Class _ZN4QDir9separatorEv(void);
    extern bool _ZN4QDir10setCurrentERK7QString(void);
    extern Class _ZN4QDir11currentPathEv(void);
    extern Class _ZN4QDir8homePathEv(void);
    extern Class _ZN4QDir8rootPathEv(void);
    extern Class _ZN4QDir8tempPathEv(void);
    extern bool _ZN4QDir5matchERK11QStringListRK7QString(void);
    extern bool _ZN4QDir5matchERK7QStringS2_(void);
    extern Class _ZN4QDir9cleanPathERK7QString(void);
    extern void _ZNK4QDir7refreshEv(void);
    extern bool _ZNK4QDir12matchAllDirsEv(void);
    extern void _ZN4QDir15setMatchAllDirsEb(void);
    extern Class _ZNK4QDir10nameFilterEv(void);
    extern void _ZN4QDir13setNameFilterERK7QString(void);
#ifdef __cplusplus
}
#endif
#endif
