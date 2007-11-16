#ifndef _QTGUI_QFONTDATABASE_H_
#define _QTGUI_QFONTDATABASE_H_

class QFontDatabase;
// *INDENT-OFF*




class QFontDatabase
{
private:
public:
};

enum WritingSystem	
{
Any = 0,	
Latin = 1,	
Greek = 2,	
Cyrillic = 3,	
Armenian = 4,	
Hebrew = 5,	
Arabic = 6,	
Syriac = 7,	
Thaana = 8,	
Devanagari = 9,	
Bengali = 10,	
Gurmukhi = 11,	
Gujarati = 12,	
Oriya = 13,	
Tamil = 14,	
Telugu = 15,	
Kannada = 16,	
Malayalam = 17,	
Sinhala = 18,	
Thai = 19,	
Lao = 20,	
Tibetan = 21,	
Myanmar = 22,	
Georgian = 23,	
Khmer = 24,	
SimplifiedChinese = 25,	
TraditionalChinese = 26,	
Japanese = 27,	
Korean = 28,	
Vietnamese = 29,	
Other = 30,	
WritingSystemsCount = 31
}
;


extern QList<int> _ZN13QFontDatabase13standardSizesEv(void);
extern QFontDatabase _ZN13QFontDatabaseC2Ev(void);
extern QFontDatabase _ZN13QFontDatabaseC1Ev(void);
extern  _ZNK13QFontDatabase14writingSystemsEv(void);
extern QStringList _ZNK13QFontDatabase8familiesENS_13WritingSystemE(void);
extern QStringList _ZNK13QFontDatabase6stylesERK7QString(void);
extern QList<int> _ZN13QFontDatabase10pointSizesERK7QStringS2_(void);
extern QList<int> _ZN13QFontDatabase11smoothSizesERK7QStringS2_(void);
extern QString _ZN13QFontDatabase11styleStringERK5QFont(void);
extern QString _ZN13QFontDatabase11styleStringERK9QFontInfo(void);
extern QFont _ZNK13QFontDatabase4fontERK7QStringS2_i(void);
extern bool _ZNK13QFontDatabase16isBitmapScalableERK7QStringS2_(void);
extern bool _ZNK13QFontDatabase18isSmoothlyScalableERK7QStringS2_(void);
extern bool _ZNK13QFontDatabase10isScalableERK7QStringS2_(void);
extern bool _ZNK13QFontDatabase12isFixedPitchERK7QStringS2_(void);
extern bool _ZNK13QFontDatabase6italicERK7QStringS2_(void);
extern bool _ZNK13QFontDatabase4boldERK7QStringS2_(void);
extern int _ZNK13QFontDatabase6weightERK7QStringS2_(void);
extern QString _ZN13QFontDatabase17writingSystemNameENS_13WritingSystemE(void);
extern QString _ZN13QFontDatabase19writingSystemSampleENS_13WritingSystemE(void);
// *INDENT-ON*
#endif
