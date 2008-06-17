#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPAINTENGINE_H_
#define _QTGUI_QPAINTENGINE_H_

class QPaintEngine;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QTextItem::RenderFlag>
{
private:
public:
}RenderFlags	
;

typedef class QFlags<QPaintEngine::PaintEngineFeature>
{
private:
public:
}PaintEngineFeatures	
;

typedef class QFlags<QPaintEngine::DirtyFlag>
{
private:
public:
}DirtyFlags	
;

#endif /* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31
class QTextItem
{
private:
public:
    qreal descent() const;
    qreal ascent() const;
    qreal width() const;
    QFlags<QTextItem::RenderFlag> renderFlags() const;
    QString text() const;
    QFont font() const;
};

enum RenderFlag	
{
Dummy = -1,	
RightToLeft = 1,	
Overline = 16,	
Underline = 32,	
StrikeOut = 64
}
;

class QFlags<QTextItem::RenderFlag>
{
private:
public:
};

class QPaintEngine
{
private:
public:
     QPaintEngine(QFlags<QPaintEngine::PaintEngineFeature>);
     ~QPaintEngine();
    void drawRects(QRect const*, int);
    void drawRects(QRectF const*, int);
    void drawLines(QLine const*, int);
    void drawLines(QLineF const*, int);
    void drawEllipse(QRectF const&);
    void drawEllipse(QRect const&);
    void drawPath(QPainterPath const&);
    void drawPoints(QPointF const*, int);
    void drawPoints(QPoint const*, int);
    void drawPolygon(QPointF const*, int, QPaintEngine::PolygonDrawMode);
    void drawPolygon(QPoint const*, int, QPaintEngine::PolygonDrawMode);
    void drawTextItem(QPointF const&, QTextItem const&);
    void drawTiledPixmap(QRectF const&, QPixmap const&, QPointF const&);
    void drawImage(QRectF const&, QImage const&, QRectF const&, QFlags<Qt::ImageConversionFlag>);
    void setPaintDevice(QPaintDevice*);
    QPaintDevice * paintDevice() const;
    void setSystemClip(QRegion const&);
    QRegion systemClip() const;
    void setSystemRect(QRect const&);
    QRect systemRect() const;
    QPoint coordinateOffset() const;
    QPainter * painter() const;
};

enum PaintEngineFeature	
{
AllFeatures = -1,	
PrimitiveTransform = 1,	
PatternTransform = 2,	
PixmapTransform = 4,	
PatternBrush = 8,	
LinearGradientFill = 16,	
RadialGradientFill = 32,	
ConicalGradientFill = 64,	
AlphaBlend = 128,	
PorterDuff = 256,	
PainterPaths = 512,	
Antialiasing = 1024,	
BrushStroke = 2048,	
PaintOutsidePaintEvent = 536870912
}
;

class QFlags<QPaintEngine::PaintEngineFeature>
{
private:
public:
};

enum DirtyFlag	
{
DirtyPen = 1,	
DirtyBrush = 2,	
DirtyBrushOrigin = 4,	
DirtyFont = 8,	
DirtyBackground = 16,	
DirtyBackgroundMode = 32,	
DirtyTransform = 64,	
DirtyClipRegion = 128,	
DirtyClipPath = 256,	
DirtyHints = 512,	
DirtyCompositionMode = 1024,	
DirtyClipEnabled = 2048,	
AllDirty = 65535
}
;

class QFlags<QPaintEngine::DirtyFlag>
{
private:
public:
};

enum PolygonDrawMode	
{
OddEvenMode = 0,	
WindingMode = 1,	
ConvexMode = 2,	
PolylineMode = 3
}
;

enum Type	
{
X11 = 0,	
Windows = 1,	
QuickDraw = 2,	
CoreGraphics = 3,	
MacPrinter = 4,	
QWindowSystem = 5,	
PostScript = 6,	
OpenGL = 7,	
Picture = 8,	
SVG = 9,	
Raster = 10,	
User = 50,	
MaxUser = 100
}
;

class QPaintEngineState
{
private:
public:
    QPen pen() const;
    QBrush brush() const;
    QPointF brushOrigin() const;
    QBrush backgroundBrush() const;
    enum _ZN2Qt6BGModeE backgroundMode() const;
    QFont font() const;
    QMatrix matrix() const;
    enum _ZN2Qt13ClipOperationE clipOperation() const;
    QRegion clipRegion() const;
    QPainterPath clipPath() const;
    bool isClipEnabled() const;
    QFlags<QPainter::RenderHint> renderHints() const;
    enum _ZN8QPainter15CompositionModeE compositionMode() const;
    QPainter * painter() const;
    qreal opacity() const;
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
