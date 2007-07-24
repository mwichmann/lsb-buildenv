#ifndef _QTGUI_QFONT_H_
#define _QTGUI_QFONT_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qglobal.h>
#include <QtCore/qstring.h>
#include <QtCore/qdatastream.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N5QFont9StyleHintE {
	Helvetica,
	SansSerif,
	Times,
	Serif,
	Courier,
	TypeWriter,
	OldEnglish,
	Decorative,
	System,
	AnyStyle
    };

    enum N5QFont13StyleStrategyE {
	PreferDefault,
	PreferBitmap,
	PreferDevice,
	PreferOutline,
	ForceOutline,
	PreferMatch,
	PreferQuality,
	PreferAntialias,
	NoAntialias,
	OpenGLCompatible
    };

    enum N5QFont6WeightE {
	Light,
	Normal,
	DemiBold,
	Bold,
	Black
    };

    enum N5QFont5StyleE {
	StyleNormal,
	StyleItalic,
	StyleOblique
    };

    enum N5QFont7StretchE {
	UltraCondensed,
	ExtraCondensed,
	Condensed,
	SemiCondensed,
	Unstretched,
	SemiExpanded,
	Expanded,
	ExtraExpanded,
	UltraExpanded
    };


    extern Class _ZN5QFontC2Ev(void);
    extern Class _ZN5QFontC1Ev(void);
    extern Class _ZN5QFontC2ERK7QStringiib(void);
    extern Class _ZN5QFontC1ERK7QStringiib(void);
    extern Class _ZN5QFontC2ERKS_P12QPaintDevice(void);
    extern Class _ZN5QFontC1ERKS_P12QPaintDevice(void);
    extern Class _ZN5QFontC2ERKS_(void);
    extern Class _ZN5QFontC1ERKS_(void);
    extern Class _ZN5QFontD2Ev(void);
    extern Class _ZN5QFontD1Ev(void);
    extern Class _ZNK5QFont6familyEv(void);
    extern void _ZN5QFont9setFamilyERK7QString(void);
    extern int _ZNK5QFont9pointSizeEv(void);
    extern void _ZN5QFont12setPointSizeEi(void);
    extern qreal _ZNK5QFont10pointSizeFEv(void);
    extern void _ZN5QFont13setPointSizeFEd(void);
    extern int _ZNK5QFont9pixelSizeEv(void);
    extern void _ZN5QFont12setPixelSizeEi(void);
    extern int _ZNK5QFont6weightEv(void);
    extern void _ZN5QFont9setWeightEi(void);
    extern void _ZN5QFont8setStyleENS_5StyleE(void);
    extern enum N5QFont5StyleE _ZNK5QFont5styleEv(void);
    extern bool _ZNK5QFont9underlineEv(void);
    extern void _ZN5QFont12setUnderlineEb(void);
    extern bool _ZNK5QFont8overlineEv(void);
    extern void _ZN5QFont11setOverlineEb(void);
    extern bool _ZNK5QFont9strikeOutEv(void);
    extern void _ZN5QFont12setStrikeOutEb(void);
    extern bool _ZNK5QFont10fixedPitchEv(void);
    extern void _ZN5QFont13setFixedPitchEb(void);
    extern bool _ZNK5QFont7kerningEv(void);
    extern void _ZN5QFont10setKerningEb(void);
    extern enum N5QFont9StyleHintE _ZNK5QFont9styleHintEv(void);
    extern enum N5QFont13StyleStrategyE _ZNK5QFont13styleStrategyEv(void);
    extern void
	_ZN5QFont12setStyleHintENS_9StyleHintENS_13StyleStrategyE(void);
    extern void _ZN5QFont16setStyleStrategyENS_13StyleStrategyE(void);
    extern int _ZNK5QFont7stretchEv(void);
    extern void _ZN5QFont10setStretchEi(void);
    extern bool _ZNK5QFont7rawModeEv(void);
    extern void _ZN5QFont10setRawModeEb(void);
    extern bool _ZNK5QFont10exactMatchEv(void);
    extern Class _ZN5QFontaSERKS_(void);
    extern bool _ZNK5QFonteqERKS_(void);
    extern bool _ZNK5QFontneERKS_(void);
    extern bool _ZNK5QFontltERKS_(void);
    extern Class _ZNK5QFontcv8QVariantEv(void);
    extern bool _ZNK5QFont8isCopyOfERKS_(void);
    extern N2Qt6HANDLEE _ZNK5QFont6handleEv(void);
    extern void _ZN5QFont10setRawNameERK7QString(void);
    extern Class _ZNK5QFont7rawNameEv(void);
    extern Class _ZNK5QFont3keyEv(void);
    extern Class _ZNK5QFont8toStringEv(void);
    extern bool _ZN5QFont10fromStringERK7QString(void);
    extern Class _ZN5QFont10substituteERK7QString(void);
    extern Class _ZN5QFont11substitutesERK7QString(void);
    extern Class _ZN5QFont13substitutionsEv(void);
    extern void _ZN5QFont18insertSubstitutionERK7QStringS2_(void);
    extern void
	_ZN5QFont19insertSubstitutionsERK7QStringRK11QStringList(void);
    extern void _ZN5QFont18removeSubstitutionERK7QString(void);
    extern void _ZN5QFont10initializeEv(void);
    extern void _ZN5QFont7cleanupEv(void);
    extern void _ZN5QFont15cacheStatisticsEv(void);
    extern Class _ZNK5QFont13defaultFamilyEv(void);
    extern Class _ZNK5QFont16lastResortFamilyEv(void);
    extern Class _ZNK5QFont14lastResortFontEv(void);
    extern Class _ZNK5QFont7resolveERKS_(void);
    extern Class _ZN5QFont11defaultFontEv(void);
    extern void _ZN5QFont14setDefaultFontERKS_(void);
    extern void _ZN5QFont17setPixelSizeFloatEd(void);
    extern Class _ZlsR11QDataStreamRK5QFont(void);
    extern Class _ZrsR11QDataStreamR5QFont(void);
#ifdef __cplusplus
}
#endif
#endif
