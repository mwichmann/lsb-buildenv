#ifndef _QTGUI_QFONT_H_
#define _QTGUI_QFONT_H_

class QFont;
// *INDENT-OFF*



class QFont
{
private:
public:
};

enum StyleHint	
{
Helvetica = 0,	
SansSerif = 0,	
Times = 1,	
Serif = 1,	
Courier = 2,	
TypeWriter = 2,	
OldEnglish = 3,	
Decorative = 3,	
System = 4,	
AnyStyle = 5
}
;

enum StyleStrategy	
{
PreferDefault = 1,	
PreferBitmap = 2,	
PreferDevice = 4,	
PreferOutline = 8,	
ForceOutline = 16,	
PreferMatch = 32,	
PreferQuality = 64,	
PreferAntialias = 128,	
NoAntialias = 256,	
OpenGLCompatible = 512
}
;

enum Weight	
{
Light = 25,	
Normal = 50,	
DemiBold = 63,	
Bold = 75,	
Black = 87
}
;

enum Style	
{
StyleNormal = 0,	
StyleItalic = 1,	
StyleOblique = 2
}
;

enum Stretch	
{
UltraCondensed = 50,	
ExtraCondensed = 62,	
Condensed = 75,	
SemiCondensed = 87,	
Unstretched = 100,	
SemiExpanded = 112,	
Expanded = 125,	
ExtraExpanded = 150,	
UltraExpanded = 200
}
;


extern QFont _ZN5QFontC2Ev(void);
extern QFont _ZN5QFontC1Ev(void);
extern QFont _ZN5QFontC2ERK7QStringiib(void);
extern QFont _ZN5QFontC1ERK7QStringiib(void);
extern QFont _ZN5QFontC2ERKS_P12QPaintDevice(void);
extern QFont _ZN5QFontC1ERKS_P12QPaintDevice(void);
extern QFont _ZN5QFontC2ERKS_(void);
extern QFont _ZN5QFontC1ERKS_(void);
extern QFont _ZN5QFontD2Ev(void);
extern QFont _ZN5QFontD1Ev(void);
extern QString _ZNK5QFont6familyEv(void);
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
extern void _ZN5QFont12setStyleHintENS_9StyleHintENS_13StyleStrategyE(void);
extern void _ZN5QFont16setStyleStrategyENS_13StyleStrategyE(void);
extern int _ZNK5QFont7stretchEv(void);
extern void _ZN5QFont10setStretchEi(void);
extern bool _ZNK5QFont7rawModeEv(void);
extern void _ZN5QFont10setRawModeEb(void);
extern bool _ZNK5QFont10exactMatchEv(void);
extern QFont _ZN5QFontaSERKS_(void);
extern bool _ZNK5QFonteqERKS_(void);
extern bool _ZNK5QFontneERKS_(void);
extern bool _ZNK5QFontltERKS_(void);
extern QFont _ZNK5QFontcv8QVariantEv(void);
extern bool _ZNK5QFont8isCopyOfERKS_(void);
extern N2Qt6HANDLEE _ZNK5QFont6handleEv(void);
extern void _ZN5QFont10setRawNameERK7QString(void);
extern QString _ZNK5QFont7rawNameEv(void);
extern QString _ZNK5QFont3keyEv(void);
extern QString _ZNK5QFont8toStringEv(void);
extern bool _ZN5QFont10fromStringERK7QString(void);
extern QString _ZN5QFont10substituteERK7QString(void);
extern QStringList _ZN5QFont11substitutesERK7QString(void);
extern QStringList _ZN5QFont13substitutionsEv(void);
extern void _ZN5QFont18insertSubstitutionERK7QStringS2_(void);
extern void _ZN5QFont19insertSubstitutionsERK7QStringRK11QStringList(void);
extern void _ZN5QFont18removeSubstitutionERK7QString(void);
extern void _ZN5QFont10initializeEv(void);
extern void _ZN5QFont7cleanupEv(void);
extern void _ZN5QFont15cacheStatisticsEv(void);
extern QString _ZNK5QFont13defaultFamilyEv(void);
extern QString _ZNK5QFont16lastResortFamilyEv(void);
extern QString _ZNK5QFont14lastResortFontEv(void);
extern QFont _ZNK5QFont7resolveERKS_(void);
extern QFont _ZN5QFont11defaultFontEv(void);
extern void _ZN5QFont14setDefaultFontERKS_(void);
extern void _ZN5QFont17setPixelSizeFloatEd(void);
extern QDataStream _ZlsR11QDataStreamRK5QFont(void);
extern QDataStream _ZrsR11QDataStreamR5QFont(void);
// *INDENT-ON*
#endif
