#ifndef _QTCORE_QLIBRARYINFO_H_
#define _QTCORE_QLIBRARYINFO_H_

class QLibraryInfo;
// *INDENT-OFF*



class QLibraryInfo
{
private:
public:
};

enum LibraryLocation	
{
PrefixPath,	
DocumentationPath,	
HeadersPath,	
LibrariesPath,	
BinariesPath,	
PluginsPath,	
DataPath,	
TranslationsPath,	
SettingsPath,	
DemosPath,	
ExamplesPath
}
;


extern QString _ZN12QLibraryInfo8licenseeEv(void);
extern QString _ZN12QLibraryInfo16licensedProductsEv(void);
extern QString _ZN12QLibraryInfo8buildKeyEv(void);
extern QString _ZN12QLibraryInfo8locationENS_15LibraryLocationE(void);
// *INDENT-ON*
#endif
