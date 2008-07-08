#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPAINTER_H_
#define _QTGUI_QPAINTER_H_

class QFlags < QPainter::RenderHint >;
// *INDENT-OFF*

typedef class QFlags<QPainter::RenderHint>
{
private:
public:
}RenderHints	
;

class QPainter
{
private:
public:
     QPainter();
     QPainter(QPaintDevice*);
     ~QPainter();
    QPaintDevice * device() const;
    bool begin(QPaintDevice*);
    bool end();
    bool isActive() const;
    void initFrom(QWidget const*);
    void setCompositionMode(QPainter::CompositionMode);
    enum _ZN8QPainter15CompositionModeE compositionMode() const;
    const QFont & font() const;
    void setFont(QFont const&);
    QFontMetrics fontMetrics() const;
    QFontInfo fontInfo() const;
    void setPen(QColor const&);
    void setPen(QPen const&);
    void setPen(Qt::PenStyle);
    const QPen & pen() const;
    void setBrush(QBrush const&);
    void setBrush(Qt::BrushStyle);
    const QBrush & brush() const;
    void setBackgroundMode(Qt::BGMode);
    enum _ZN2Qt6BGModeE backgroundMode() const;
    QPoint brushOrigin() const;
    void setBrushOrigin(QPointF const&);
    void setBackground(QBrush const&);
    const QBrush & background() const;
    QRegion clipRegion() const;
    QPainterPath clipPath() const;
    void setClipRect(QRectF const&, Qt::ClipOperation);
    void setClipRegion(QRegion const&, Qt::ClipOperation);
    void setClipPath(QPainterPath const&, Qt::ClipOperation);
    void setClipping(bool);
    bool hasClipping() const;
    void save();
    void restore();
    void setMatrix(QMatrix const&, bool);
    const QMatrix & matrix() const;
    const QMatrix & deviceMatrix() const;
    void resetMatrix();
    void setMatrixEnabled(bool);
    bool matrixEnabled() const;
    void scale(double, double);
    void shear(double, double);
    void rotate(double);
    void translate(QPointF const&);
    QRect window() const;
    void setWindow(QRect const&);
    QRect viewport() const;
    void setViewport(QRect const&);
    void setViewTransformEnabled(bool);
    bool viewTransformEnabled() const;
    void strokePath(QPainterPath const&, QPen const&);
    void fillPath(QPainterPath const&, QBrush const&);
    void drawPath(QPainterPath const&);
    void drawPoints(QPointF const*, int);
    void drawPoints(QPoint const*, int);
    void drawLines(QLineF const*, int);
    void drawLines(QPointF const*, int);
    void drawLines(QLine const*, int);
    void drawLines(QPoint const*, int);
    void drawRects(QRectF const*, int);
    void drawRects(QRect const*, int);
    void drawEllipse(QRectF const&);
    void drawEllipse(QRect const&);
    void drawPolyline(QPointF const*, int);
    void drawPolyline(QPoint const*, int);
    void drawPolygon(QPointF const*, int, Qt::FillRule);
    void drawPolygon(QPoint const*, int, Qt::FillRule);
    void drawConvexPolygon(QPointF const*, int);
    void drawConvexPolygon(QPoint const*, int);
    void drawArc(QRectF const&, int, int);
    void drawPie(QRectF const&, int, int);
    void drawChord(QRectF const&, int, int);
    void drawRoundRect(QRectF const&, int, int);
    void drawTiledPixmap(QRectF const&, QPixmap const&, QPointF const&);
    void drawPicture(QPointF const&, QPicture const&);
    void drawPixmap(QRectF const&, QPixmap const&, QRectF const&);
    void drawImage(QRectF const&, QImage const&, QRectF const&, QFlags<Qt::ImageConversionFlag>);
    void setLayoutDirection(Qt::LayoutDirection);
    enum _ZN2Qt15LayoutDirectionE layoutDirection() const;
    void drawText(QPointF const&, QString const&);
    void drawText(QRectF const&, int, QString const&, QRectF*);
    void drawText(QRect const&, int, QString const&, QRect*);
    void drawText(QRectF const&, QString const&, QTextOption const&);
    QRectF boundingRect(QRectF const&, int, QString const&);
    QRect boundingRect(QRect const&, int, QString const&);
    QRectF boundingRect(QRectF const&, QString const&, QTextOption const&);
    void drawTextItem(QPointF const&, QTextItem const&);
    void fillRect(QRectF const&, QBrush const&);
    void fillRect(QRect const&, QBrush const&);
    void eraseRect(QRectF const&);
    void setRenderHint(QPainter::RenderHint, bool);
    QFlags<QPainter::RenderHint> renderHints() const;
    QPaintEngine * paintEngine() const;
    void setRedirected(QPaintDevice const*, QPaintDevice*, QPoint const&);
    QPaintDevice * redirected(QPaintDevice const*, QPoint*);
    void restoreRedirected(QPaintDevice const*);
    void drawCubicBezier(QPolygon const&, int);
    void drawLineSegments(QPolygon const&, int, int);
    void map(int, int, int*, int*) const;
    QPoint xForm(QPoint const&) const;
    QRect xForm(QRect const&) const;
    QPolygon xForm(QPolygon const&) const;
    QPolygon xForm(QPolygon const&, int, int) const;
    QPoint xFormDev(QPoint const&) const;
    QRect xFormDev(QRect const&) const;
    QPolygon xFormDev(QPolygon const&) const;
    QPolygon xFormDev(QPolygon const&, int, int) const;
    qreal translationX() const;
    qreal translationY() const;
    void setOpacity(double);
    void setRenderHints(QFlags<QPainter::RenderHint>, bool);
    void setWorldMatrix(QMatrix const&, bool);
    void setWorldMatrixEnabled(bool);
    const QMatrix & worldMatrix() const;
    QMatrix combinedMatrix() const;
    bool worldMatrixEnabled() const;
    qreal opacity() const;
};

enum RenderHint	
{
Antialiasing = 1,	
TextAntialiasing = 2,	
SmoothPixmapTransform = 4
}
;

class QFlags<QPainter::RenderHint>
{
private:
public:
};

enum CompositionMode	
{
CompositionMode_SourceOver = 0,	
CompositionMode_DestinationOver = 1,	
CompositionMode_Clear = 2,	
CompositionMode_Source = 3,	
CompositionMode_Destination = 4,	
CompositionMode_SourceIn = 5,	
CompositionMode_DestinationIn = 6,	
CompositionMode_SourceOut = 7,	
CompositionMode_DestinationOut = 8,	
CompositionMode_SourceAtop = 9,	
CompositionMode_DestinationAtop = 10,	
CompositionMode_Xor = 11
}
;


/* Function prototypes */

#if __LSB_VERSION__ >= 32
extern struct QMetaObject _ZN8QPainter16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.2 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
