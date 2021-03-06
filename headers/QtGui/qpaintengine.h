#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPAINTENGINE_H_
#define _QTGUI_QPAINTENGINE_H_

class QPaintEngine;
// *INDENT-OFF*

typedef class QFlags<QTextItem::RenderFlag>QTextItem::RenderFlags	
;

typedef class QFlags<QPaintEngine::PaintEngineFeature>QPaintEngine::PaintEngineFeatures	
;

typedef class QFlags<QPaintEngine::DirtyFlag>QPaintEngine::DirtyFlags	
;

class QTextItem;

enum QTextItem::RenderFlag	
{
Dummy = -1,	
RightToLeft = 1,	
Overline = 16,	
Underline = 32,	
StrikeOut = 64
}
;

class QFlags<QTextItem::RenderFlag>;

class QPaintEngine;

enum QPaintEngine::PaintEngineFeature	
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

class QFlags<QPaintEngine::PaintEngineFeature>;

enum QPaintEngine::DirtyFlag	
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

class QFlags<QPaintEngine::DirtyFlag>;

enum QPaintEngine::PolygonDrawMode	
{
OddEvenMode = 0,	
WindingMode = 1,	
ConvexMode = 2,	
PolylineMode = 3
}
;

enum QPaintEngine::Type	
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

class QPaintEngineState;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
