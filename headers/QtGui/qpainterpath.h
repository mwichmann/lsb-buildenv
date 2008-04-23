#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPAINTERPATH_H_
#define _QTGUI_QPAINTERPATH_H_

class QPainterPathStroker;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QPainterPath
{
private:
public:
     QPainterPath();
     QPainterPath(QPointF const&);
     QPainterPath(QPainterPath const&);
     operator=(QPainterPath const&);
     ~QPainterPath();
    void closeSubpath();
    void moveTo(QPointF const&);
    void lineTo(QPointF const&);
    void arcTo(QRectF const&, double, double);
    void cubicTo(QPointF const&, QPointF const&, QPointF const&);
    void quadTo(QPointF const&, QPointF const&);
    QPointF currentPosition() const;
    void addRect(QRectF const&);
    void addEllipse(QRectF const&);
    void addPolygon(QPolygonF const&);
    void addText(QPointF const&, QFont const&, QString const&);
    void addPath(QPainterPath const&);
    void addRegion(QRegion const&);
    void connectPath(QPainterPath const&);
    bool contains(QPointF const&) const;
    bool contains(QRectF const&) const;
    bool intersects(QRectF const&) const;
    QRectF boundingRect() const;
    QRectF controlPointRect() const;
    enum _ZN2Qt8FillRuleE fillRule() const;
    void setFillRule(Qt::FillRule);
    QPainterPath toReversed() const;
    QList<QPolygonF> toSubpathPolygons(QMatrix const&) const;
    QList<QPolygonF> toFillPolygons(QMatrix const&) const;
    QPolygonF toFillPolygon(QMatrix const&) const;
    bool operator==(QPainterPath const&) const;
    bool operator!=(QPainterPath const&) const;
    void arcMoveTo(QRectF const&, double);
};

enum ElementType	
{
MoveToElement = 0,	
LineToElement = 1,	
CurveToElement = 2,	
CurveToDataElement = 3
}
;

class QPainterPath::Element
{
private:
public:
};

class QPainterPathPrivate
{
private:
public:
};

class QPainterPathStroker
{
private:
public:
     QPainterPathStroker();
     ~QPainterPathStroker();
    void setWidth(double);
    qreal width() const;
    void setCapStyle(Qt::PenCapStyle);
    enum _ZN2Qt11PenCapStyleE capStyle() const;
    void setJoinStyle(Qt::PenJoinStyle);
    enum _ZN2Qt12PenJoinStyleE joinStyle() const;
    void setMiterLimit(double);
    qreal miterLimit() const;
    void setCurveThreshold(double);
    qreal curveThreshold() const;
    void setDashPattern(Qt::PenStyle);
    void setDashPattern(QVector<double> const&);
    QVector<double> dashPattern() const;
    QPainterPath createStroke(QPainterPath const&) const;
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern QDataStream _ZlsR11QDataStreamRK12QPainterPath(QDataStream &);
extern QDataStream _ZrsR11QDataStreamR12QPainterPath(QDataStream &);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
