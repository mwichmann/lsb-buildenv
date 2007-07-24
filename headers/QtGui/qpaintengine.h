#ifndef _QTGUI_QPAINTENGINE_H_
#define _QTGUI_QPAINTENGINE_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qglobal.h>
#include <QtCore/qstring.h>
#include <QtCore/qpoint.h>
#include <QtCore/qrect.h>
#include <QtGui/qfont.h>
#include <QtGui/qpen.h>
#include <QtGui/qbrush.h>
#include <QtGui/qregion.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qmatrix.h>
#include <QtGui/qpainter.h>
#include <QtGui/qpainterpath.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N9QTextItem11RenderFlagsE;

    typedef Unknown Type:".." N12QPaintEngine19PaintEngineFeaturesE;

    typedef Unknown Type:".." N12QPaintEngine10DirtyFlagsE;

    Unknown Type:".Class.";

    enum N9QTextItem10RenderFlagE {
	Dummy,
	RightToLeft,
	Overline,
	Underline,
	StrikeOut
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N12QPaintEngine18PaintEngineFeatureE {
	AllFeatures,
	PrimitiveTransform,
	PatternTransform,
	PixmapTransform,
	PatternBrush,
	LinearGradientFill,
	RadialGradientFill,
	ConicalGradientFill,
	AlphaBlend,
	PorterDuff,
	PainterPaths,
	Antialiasing,
	BrushStroke,
	PaintOutsidePaintEvent
    };

    Unknown Type:".Class.";

    enum N12QPaintEngine9DirtyFlagE {
	DirtyPen,
	DirtyBrush,
	DirtyBrushOrigin,
	DirtyFont,
	DirtyBackground,
	DirtyBackgroundMode,
	DirtyTransform,
	DirtyClipRegion,
	DirtyClipPath,
	DirtyHints,
	DirtyCompositionMode,
	DirtyClipEnabled,
	AllDirty
    };

    Unknown Type:".Class.";

    enum N12QPaintEngine15PolygonDrawModeE {
	OddEvenMode,
	WindingMode,
	ConvexMode,
	PolylineMode
    };

    enum N12QPaintEngine4TypeE {
	X11,
	Windows,
	QuickDraw,
	CoreGraphics,
	MacPrinter,
	QWindowSystem,
	PostScript,
	OpenGL,
	Picture,
	SVG,
	Raster,
	User,
	MaxUser
    };

    Unknown Type:".Class.";


    extern qreal _ZNK9QTextItem7descentEv(void);
    extern qreal _ZNK9QTextItem6ascentEv(void);
    extern qreal _ZNK9QTextItem5widthEv(void);
    extern N9QTextItem11RenderFlagsE _ZNK9QTextItem11renderFlagsEv(void);
    extern Class _ZNK9QTextItem4textEv(void);
    extern Class _ZNK9QTextItem4fontEv(void);
    extern Class
	_ZN12QPaintEngineC2E6QFlagsINS_18PaintEngineFeatureEE(void);
    extern Class
	_ZN12QPaintEngineC1E6QFlagsINS_18PaintEngineFeatureEE(void);
    extern Class _ZN12QPaintEngineD2Ev(void);
    extern Class _ZN12QPaintEngineD1Ev(void);
    extern Class _ZN12QPaintEngineD0Ev(void);
    extern void _ZN12QPaintEngine9drawRectsEPK5QRecti(void);
    extern void _ZN12QPaintEngine9drawRectsEPK6QRectFi(void);
    extern void _ZN12QPaintEngine9drawLinesEPK5QLinei(void);
    extern void _ZN12QPaintEngine9drawLinesEPK6QLineFi(void);
    extern void _ZN12QPaintEngine11drawEllipseERK6QRectF(void);
    extern void _ZN12QPaintEngine11drawEllipseERK5QRect(void);
    extern void _ZN12QPaintEngine8drawPathERK12QPainterPath(void);
    extern void _ZN12QPaintEngine10drawPointsEPK7QPointFi(void);
    extern void _ZN12QPaintEngine10drawPointsEPK6QPointi(void);
    extern void
	_ZN12QPaintEngine11drawPolygonEPK7QPointFiNS_15PolygonDrawModeE
	(void);
    extern void
	_ZN12QPaintEngine11drawPolygonEPK6QPointiNS_15PolygonDrawModeE
	(void);
    extern void
	_ZN12QPaintEngine12drawTextItemERK7QPointFRK9QTextItem(void);
    extern void
	_ZN12QPaintEngine15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF
	(void);
    extern void
	_ZN12QPaintEngine9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE
	(void);
    extern void _ZN12QPaintEngine14setPaintDeviceEP12QPaintDevice(void);
    extern Class _ZNK12QPaintEngine11paintDeviceEv(void);
    extern void _ZN12QPaintEngine13setSystemClipERK7QRegion(void);
    extern Class _ZNK12QPaintEngine10systemClipEv(void);
    extern void _ZN12QPaintEngine13setSystemRectERK5QRect(void);
    extern Class _ZNK12QPaintEngine10systemRectEv(void);
    extern Class _ZNK12QPaintEngine16coordinateOffsetEv(void);
    extern Class _ZNK12QPaintEngine7painterEv(void);
    extern Class
	_ZN12QPaintEngineC2ER19QPaintEnginePrivate6QFlagsINS_18PaintEngineFeatureEE
	(void);
    extern Class
	_ZN12QPaintEngineC1ER19QPaintEnginePrivate6QFlagsINS_18PaintEngineFeatureEE
	(void);
    extern Class _ZNK17QPaintEngineState3penEv(void);
    extern Class _ZNK17QPaintEngineState5brushEv(void);
    extern Class _ZNK17QPaintEngineState11brushOriginEv(void);
    extern Class _ZNK17QPaintEngineState15backgroundBrushEv(void);
    extern enum N2Qt6BGModeE
	_ZNK17QPaintEngineState14backgroundModeEv(void);
    extern Class _ZNK17QPaintEngineState4fontEv(void);
    extern Class _ZNK17QPaintEngineState6matrixEv(void);
    extern enum N2Qt13ClipOperationE
	_ZNK17QPaintEngineState13clipOperationEv(void);
    extern Class _ZNK17QPaintEngineState10clipRegionEv(void);
    extern Class _ZNK17QPaintEngineState8clipPathEv(void);
    extern bool _ZNK17QPaintEngineState13isClipEnabledEv(void);
    extern N8QPainter11RenderHintsE
	_ZNK17QPaintEngineState11renderHintsEv(void);
    extern enum N8QPainter15CompositionModeE
	_ZNK17QPaintEngineState15compositionModeEv(void);
    extern Class _ZNK17QPaintEngineState7painterEv(void);
#ifdef __cplusplus
}
#endif
#endif
