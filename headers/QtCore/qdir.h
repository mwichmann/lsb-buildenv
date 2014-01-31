#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QDIR_H_
#define _QTCORE_QDIR_H_

class QFlags < QDir::Filter >;
// *INDENT-OFF*

typedef class QFlags<QDir::Filter>QDir::Filters	
;

typedef QDir::Filters	QDir::FilterSpec	
;

typedef class QFlags<QDir::SortFlag>QDir::SortFlags	
;

typedef QDir::SortFlags	QDir::SortSpec	
;

class QDir;

enum QDir::Filter	
{
DefaultFilter = -1,	
NoFilter = -1,	
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

class QFlags<QDir::Filter>;

enum QDir::SortFlag	
{
DefaultSort = -1,	
NoSort = -1,	
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

class QFlags<QDir::SortFlag>;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
