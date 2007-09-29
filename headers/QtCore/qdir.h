#ifndef _QTCORE_QDIR_H_
#define _QTCORE_QDIR_H_

class QFlags < QDir::Filter >;
// *INDENT-OFF*



typedef Filters	
;

typedef Filters	FilterSpec	
;

typedef SortFlags	
;

typedef SortFlags	SortSpec	
;

class QDir
{
private:
public:
};

enum Filter	
{
NoFilter = -1,	
DefaultFilter = -1,	
Dirs = 1,	
Files = 2,	
Drives = 4,	
AllEntries = 7,	
All = 7,	
NoSymLinks = 8,	
TypeMask = 15,	
Readable = 16,	
Writable = 32,	
Executable = 64,	
PermissionMask = 112,	
RWEMask = 112,	
Modified = 128,	
Hidden = 256,	
System = 512,	
AccessMask = 1008,	
AllDirs = 1024,	
CaseSensitive = 2048,	
NoDotAndDotDot = 4096
}
;

class QFlags<QDir::Filter>
{
private:
public:
};

enum SortFlag	
{
NoSort = -1,	
DefaultSort = -1,	
Name = 0,	
Time = 1,	
Size = 2,	
Unsorted = 3,	
SortByMask = 3,	
DirsFirst = 4,	
Reversed = 8,	
IgnoreCase = 16,	
DirsLast = 32,	
LocaleAware = 64,	
Type = 128
}
;

class QFlags<QDir::SortFlag>
{
private:
public:
};


extern QDir _ZN4QDirC2ERKS_(void);
extern QDir _ZN4QDirC1ERKS_(void);
extern QDir _ZN4QDirC2ERK7QString(void);
extern QDir _ZN4QDirC1ERK7QString(void);
extern QDir _ZN4QDirC2ERK7QStringS2_6QFlagsINS_8SortFlagEES3_INS_6FilterEE(void);
extern QDir _ZN4QDirC1ERK7QStringS2_6QFlagsINS_8SortFlagEES3_INS_6FilterEE(void);
extern QDir _ZN4QDirD2Ev(void);
extern QDir _ZN4QDirD1Ev(void);
extern QDir _ZN4QDiraSERKS_(void);
extern QDir _ZN4QDiraSERK7QString(void);
extern void _ZN4QDir7setPathERK7QString(void);
extern QString _ZNK4QDir4pathEv(void);
extern QString _ZNK4QDir12absolutePathEv(void);
extern QString _ZNK4QDir13canonicalPathEv(void);
extern void _ZN4QDir21addResourceSearchPathERK7QString(void);
extern QString _ZNK4QDir7dirNameEv(void);
extern QString _ZNK4QDir8filePathERK7QString(void);
extern QString _ZNK4QDir16absoluteFilePathERK7QString(void);
extern QString _ZNK4QDir16relativeFilePathERK7QString(void);
extern QString _ZN4QDir17convertSeparatorsERK7QString(void);
extern bool _ZN4QDir2cdERK7QString(void);
extern bool _ZN4QDir4cdUpEv(void);
extern QStringList _ZNK4QDir11nameFiltersEv(void);
extern void _ZN4QDir14setNameFiltersERK11QStringList(void);
extern N4QDir7FiltersE _ZNK4QDir6filterEv(void);
extern void _ZN4QDir9setFilterE6QFlagsINS_6FilterEE(void);
extern N4QDir9SortFlagsE _ZNK4QDir7sortingEv(void);
extern void _ZN4QDir10setSortingE6QFlagsINS_8SortFlagEE(void);
extern uint _ZNK4QDir5countEv(void);
extern QString _ZNK4QDirixEi(void);
extern QStringList _ZN4QDir21nameFiltersFromStringERK7QString(void);
extern QStringList _ZNK4QDir9entryListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE(void);
extern QStringList _ZNK4QDir9entryListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE(void);
extern QFileInfoList _ZNK4QDir13entryInfoListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE(void);
extern QFileInfoList _ZNK4QDir13entryInfoListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE(void);
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
extern QChar _ZN4QDir9separatorEv(void);
extern bool _ZN4QDir10setCurrentERK7QString(void);
extern QString _ZN4QDir11currentPathEv(void);
extern QString _ZN4QDir8homePathEv(void);
extern QString _ZN4QDir8rootPathEv(void);
extern QString _ZN4QDir8tempPathEv(void);
extern bool _ZN4QDir5matchERK11QStringListRK7QString(void);
extern bool _ZN4QDir5matchERK7QStringS2_(void);
extern QString _ZN4QDir9cleanPathERK7QString(void);
extern void _ZNK4QDir7refreshEv(void);
extern bool _ZNK4QDir12matchAllDirsEv(void);
extern void _ZN4QDir15setMatchAllDirsEb(void);
extern QString _ZNK4QDir10nameFilterEv(void);
extern void _ZN4QDir13setNameFilterERK7QString(void);
// *INDENT-ON*
#endif
