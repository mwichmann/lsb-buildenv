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


extern QString _ZN12QLibraryInfo8licenseeEv(void);
extern QString _ZN12QLibraryInfo16licensedProductsEv(void);
extern QString _ZN12QLibraryInfo8buildKeyEv(void);
extern QString _ZN12QLibraryInfo8locationENS_15LibraryLocationE(void);
// *INDENT-ON*
#endif
