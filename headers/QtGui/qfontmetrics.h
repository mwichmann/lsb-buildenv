#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFONTMETRICS_H_
#define _QTGUI_QFONTMETRICS_H_

class QFontMetrics;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QFontMetrics
{
private:
public:
     QFontMetrics(QFont const&);
     QFontMetrics(QFont const&, QPaintDevice*);
     QFontMetrics(QFontMetrics const&);
     ~QFontMetrics();
    QFontMetrics & operator=(QFontMetrics const&);
    int ascent() const;
    int descent() const;
    int height() const;
    int leading() const;
    int lineSpacing() const;
    int minLeftBearing() const;
    int minRightBearing() const;
    int maxWidth() const;
    int xHeight() const;
    bool inFont(QChar) const;
    int leftBearing(QChar) const;
    int rightBearing(QChar) const;
    int width(QString const&, int) const;
    int width(QChar) const;
    int charWidth(QString const&, int) const;
    QRect boundingRect(QChar) const;
    QRect boundingRect(QString const&) const;
    QRect boundingRect(QRect const&, int, QString const&, int, int*) const;
    QSize size(int, QString const&, int, int*) const;
    int underlinePos() const;
    int overlinePos() const;
    int strikeOutPos() const;
    int lineWidth() const;
    bool operator==(QFontMetrics const&);
    bool operator==(QFontMetrics const&) const;
    QString elidedText(QString const&, Qt::TextElideMode, int, int) const;
    int averageCharWidth() const;
};

class QFontMetricsF
{
private:
public:
     QFontMetricsF(QFont const&);
     QFontMetricsF(QFont const&, QPaintDevice*);
     QFontMetricsF(QFontMetricsF const&);
     ~QFontMetricsF();
     operator=(QFontMetricsF const&);
    qreal ascent() const;
    qreal descent() const;
    qreal height() const;
    qreal leading() const;
    qreal lineSpacing() const;
    qreal minLeftBearing() const;
    qreal minRightBearing() const;
    qreal maxWidth() const;
    qreal xHeight() const;
    bool inFont(QChar) const;
    qreal leftBearing(QChar) const;
    qreal rightBearing(QChar) const;
    qreal width(QString const&) const;
    qreal width(QChar) const;
    QRectF boundingRect(QString const&) const;
    QRectF boundingRect(QChar) const;
    QRectF boundingRect(QRectF const&, int, QString const&, int, int*) const;
    QSizeF size(int, QString const&, int, int*) const;
    qreal underlinePos() const;
    qreal overlinePos() const;
    qreal strikeOutPos() const;
    qreal lineWidth() const;
    bool operator==(QFontMetricsF const&);
    bool operator==(QFontMetricsF const&) const;
     QFontMetricsF(QFontMetrics const&);
     operator=(QFontMetrics const&);
    QString elidedText(QString const&, Qt::TextElideMode, double, int) const;
    qreal averageCharWidth() const;
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
