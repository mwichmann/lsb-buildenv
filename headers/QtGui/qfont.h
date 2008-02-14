#ifndef _QTGUI_QFONT_H_
#define _QTGUI_QFONT_H_

class QFont;
// *INDENT-OFF*

class QFont
{
private:
public:
     QFont();
     QFont(QString const&, int, int, bool);
     QFont(QFont const&, QPaintDevice*);
     QFont(QFont const&);
     ~QFont();
    QString family() const;
    void setFamily(QString const&);
    int pointSize() const;
    void setPointSize(int);
    qreal pointSizeF() const;
    void setPointSizeF(double);
    int pixelSize() const;
    void setPixelSize(int);
    int weight() const;
    void setWeight(int);
    void setStyle(QFont::Style);
    enum _ZN5QFont5StyleE style() const;
    bool underline() const;
    void setUnderline(bool);
    bool overline() const;
    void setOverline(bool);
    bool strikeOut() const;
    void setStrikeOut(bool);
    bool fixedPitch() const;
    void setFixedPitch(bool);
    bool kerning() const;
    void setKerning(bool);
    enum _ZN5QFont9StyleHintE styleHint() const;
    enum _ZN5QFont13StyleStrategyE styleStrategy() const;
    void setStyleHint(QFont::StyleHint, QFont::StyleStrategy);
    void setStyleStrategy(QFont::StyleStrategy);
    int stretch() const;
    void setStretch(int);
    bool rawMode() const;
    void setRawMode(bool);
    bool exactMatch() const;
    QFont & operator=(QFont const&);
    bool operator==(QFont const&) const;
    bool operator!=(QFont const&) const;
    bool operator<(QFont const&) const;
    QVariant operator QVariant() const;
    bool isCopyOf(QFont const&) const;
     handle() const;
    void setRawName(QString const&);
    QString rawName() const;
    QString key() const;
    QString toString() const;
    bool fromString(QString const&);
    QString substitute(QString const&);
    QStringList substitutes(QString const&);
    QStringList substitutions();
    void insertSubstitution(QString const&, QString const&);
    void insertSubstitutions(QString const&, QStringList const&);
    void removeSubstitution(QString const&);
    void initialize();
    void cleanup();
    void cacheStatistics();
    QString defaultFamily() const;
    QString lastResortFamily() const;
    QString lastResortFont() const;
    QFont resolve(QFont const&) const;
    QFont defaultFont();
    void setDefaultFont(QFont const&);
    void setPixelSizeFloat(double);
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


extern QDataStream _ZlsR11QDataStreamRK5QFont(QDataStream &, const QFont &);
extern QDataStream _ZrsR11QDataStreamR5QFont(QDataStream &, QFont &);
// *INDENT-ON*
#endif
