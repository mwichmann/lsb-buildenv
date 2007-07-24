#ifndef _QTGUI_QFONTDATABASE_H_
#define _QTGUI_QFONTDATABASE_H_

#include <QtCore/qlist.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qstring.h>
#include <QtGui/qfont.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N13QFontDatabase13WritingSystemE {
	Any,
	Latin,
	Greek,
	Cyrillic,
	Armenian,
	Hebrew,
	Arabic,
	Syriac,
	Thaana,
	Devanagari,
	Bengali,
	Gurmukhi,
	Gujarati,
	Oriya,
	Tamil,
	Telugu,
	Kannada,
	Malayalam,
	Sinhala,
	Thai,
	Lao,
	Tibetan,
	Myanmar,
	Georgian,
	Khmer,
	SimplifiedChinese,
	TraditionalChinese,
	Japanese,
	Korean,
	Vietnamese,
	Other,
	WritingSystemsCount
    };


    extern Class _ZN13QFontDatabase13standardSizesEv(void);
    extern Class _ZN13QFontDatabaseC2Ev(void);
    extern Class _ZN13QFontDatabaseC1Ev(void);
    extern _ZNK13QFontDatabase14writingSystemsEv(void);
    extern Class _ZNK13QFontDatabase8familiesENS_13WritingSystemE(void);
    extern Class _ZNK13QFontDatabase6stylesERK7QString(void);
    extern Class _ZN13QFontDatabase10pointSizesERK7QStringS2_(void);
    extern Class _ZN13QFontDatabase11smoothSizesERK7QStringS2_(void);
    extern Class _ZN13QFontDatabase11styleStringERK5QFont(void);
    extern Class _ZN13QFontDatabase11styleStringERK9QFontInfo(void);
    extern Class _ZNK13QFontDatabase4fontERK7QStringS2_i(void);
    extern bool _ZNK13QFontDatabase16isBitmapScalableERK7QStringS2_(void);
    extern bool
	_ZNK13QFontDatabase18isSmoothlyScalableERK7QStringS2_(void);
    extern bool _ZNK13QFontDatabase10isScalableERK7QStringS2_(void);
    extern bool _ZNK13QFontDatabase12isFixedPitchERK7QStringS2_(void);
    extern bool _ZNK13QFontDatabase6italicERK7QStringS2_(void);
    extern bool _ZNK13QFontDatabase4boldERK7QStringS2_(void);
    extern int _ZNK13QFontDatabase6weightERK7QStringS2_(void);
    extern Class
	_ZN13QFontDatabase17writingSystemNameENS_13WritingSystemE(void);
    extern Class
	_ZN13QFontDatabase19writingSystemSampleENS_13WritingSystemE(void);
#ifdef __cplusplus
}
#endif
#endif
