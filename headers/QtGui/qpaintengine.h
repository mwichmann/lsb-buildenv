#ifndef _QTGUI_QPAINTENGINE_H_
#define _QTGUI_QPAINTENGINE_H_

class QPaintEngine;
// *INDENT-OFF*




typedef RenderFlags	
;

typedef PaintEngineFeatures	
;

typedef DirtyFlags	
;

class QTextItem
{
private:
public:
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
};


extern qreal _ZNK9QTextItem7descentEv(void);
extern qreal _ZNK9QTextItem6ascentEv(void);
extern qreal _ZNK9QTextItem5widthEv(void);
extern N9QTextItem11RenderFlagsE _ZNK9QTextItem11renderFlagsEv(void);
extern QString _ZNK9QTextItem4textEv(void);
extern QFont _ZNK9QTextItem4fontEv(void);
extern QPaintEngine _ZN12QPaintEngineC2E6QFlagsINS_18PaintEngineFeatureEE(void);
extern QPaintEngine _ZN12QPaintEngineC1E6QFlagsINS_18PaintEngineFeatureEE(void);
extern QPaintEngine _ZN12QPaintEngineD2Ev(void);
extern QPaintEngine _ZN12QPaintEngineD1Ev(void);
extern QPaintEngine _ZN12QPaintEngineD0Ev(void);
extern void _ZN12QPaintEngine9drawRectsEPK5QRecti(void);
extern void _ZN12QPaintEngine9drawRectsEPK6QRectFi(void);
extern void _ZN12QPaintEngine9drawLinesEPK5QLinei(void);
extern void _ZN12QPaintEngine9drawLinesEPK6QLineFi(void);
extern void _ZN12QPaintEngine11drawEllipseERK6QRectF(void);
extern void _ZN12QPaintEngine11drawEllipseERK5QRect(void);
extern void _ZN12QPaintEngine8drawPathERK12QPainterPath(void);
extern void _ZN12QPaintEngine10drawPointsEPK7QPointFi(void);
extern void _ZN12QPaintEngine10drawPointsEPK6QPointi(void);
extern void _ZN12QPaintEngine11drawPolygonEPK7QPointFiNS_15PolygonDrawModeE(void);
extern void _ZN12QPaintEngine11drawPolygonEPK6QPointiNS_15PolygonDrawModeE(void);
extern void _ZN12QPaintEngine12drawTextItemERK7QPointFRK9QTextItem(void);
extern void _ZN12QPaintEngine15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF(void);
extern void _ZN12QPaintEngine9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern void _ZN12QPaintEngine14setPaintDeviceEP12QPaintDevice(void);
extern QPaintDevice _ZNK12QPaintEngine11paintDeviceEv(void);
extern void _ZN12QPaintEngine13setSystemClipERK7QRegion(void);
extern QRegion _ZNK12QPaintEngine10systemClipEv(void);
extern void _ZN12QPaintEngine13setSystemRectERK5QRect(void);
extern QRect _ZNK12QPaintEngine10systemRectEv(void);
extern QPoint _ZNK12QPaintEngine16coordinateOffsetEv(void);
extern QPainter _ZNK12QPaintEngine7painterEv(void);
extern QPaintEngine _ZN12QPaintEngineC2ER19QPaintEnginePrivate6QFlagsINS_18PaintEngineFeatureEE(void);
extern QPaintEngine _ZN12QPaintEngineC1ER19QPaintEnginePrivate6QFlagsINS_18PaintEngineFeatureEE(void);
extern QPen _ZNK17QPaintEngineState3penEv(void);
extern QBrush _ZNK17QPaintEngineState5brushEv(void);
extern QPointF _ZNK17QPaintEngineState11brushOriginEv(void);
extern QBrush _ZNK17QPaintEngineState15backgroundBrushEv(void);
extern enum N2Qt6BGModeE _ZNK17QPaintEngineState14backgroundModeEv(void);
extern QFont _ZNK17QPaintEngineState4fontEv(void);
extern QMatrix _ZNK17QPaintEngineState6matrixEv(void);
extern enum N2Qt13ClipOperationE _ZNK17QPaintEngineState13clipOperationEv(void);
extern QRegion _ZNK17QPaintEngineState10clipRegionEv(void);
extern QPainterPath _ZNK17QPaintEngineState8clipPathEv(void);
extern bool _ZNK17QPaintEngineState13isClipEnabledEv(void);
extern N8QPainter11RenderHintsE _ZNK17QPaintEngineState11renderHintsEv(void);
extern enum N8QPainter15CompositionModeE _ZNK17QPaintEngineState15compositionModeEv(void);
extern QPainter _ZNK17QPaintEngineState7painterEv(void);
// *INDENT-ON*
#endif
