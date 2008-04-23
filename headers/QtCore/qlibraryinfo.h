#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QLIBRARYINFO_H_
#define _QTCORE_QLIBRARYINFO_H_

class QLibraryInfo;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QLibraryInfo
{
private:
public:
    static QString licensee();
    static QString licensedProducts();
    static QString buildKey();
    static QString location(QLibraryInfo::LibraryLocation);
};

enum LibraryLocation	
{
PrefixPath = 0,	
DocumentationPath = 1,	
HeadersPath = 2,	
LibrariesPath = 3,	
BinariesPath = 4,	
PluginsPath = 5,	
DataPath = 6,	
TranslationsPath = 7,	
SettingsPath = 8,	
DemosPath = 9,	
ExamplesPath = 10
}
;

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
