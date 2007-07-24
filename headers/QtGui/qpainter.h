#ifndef _QTGUI_QPAINTER_H_
#define _QTGUI_QPAINTER_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qglobal.h>
#include <QtCore/qpoint.h>
#include <QtCore/qrect.h>
#include <QtGui/qfont.h>
#include <QtGui/qpen.h>
#include <QtGui/qbrush.h>
#include <QtGui/qfontmetrics.h>
#include <QtGui/qregion.h>
#include <QtGui/qfontinfo.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qpolygon.h>
#include <QtGui/qmatrix.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N8QPainter11RenderHintsE;

    Unknown Type:".Class.";

    enum N8QPainter10RenderHintE {
	Antialiasing,
	TextAntialiasing,
	SmoothPixmapTransform
    };

    Unknown Type:".Class.";

    enum N8QPainter15CompositionModeE {
	CompositionMode_SourceOver,
	CompositionMode_DestinationOver,
	CompositionMode_Clear,
	CompositionMode_Source,
	CompositionMode_Destination,
	CompositionMode_SourceIn,
	CompositionMode_DestinationIn,
	CompositionMode_SourceOut,
	CompositionMode_DestinationOut,
	CompositionMode_SourceAtop,
	CompositionMode_DestinationAtop,
	CompositionMode_Xor
    };


    extern Class _ZN8QPainterC2Ev(void);
    extern Class _ZN8QPainterC1Ev(void);
    extern Class _ZN8QPainterC2EP12QPaintDevice(void);
    extern Class _ZN8QPainterC1EP12QPaintDevice(void);
    extern Class _ZN8QPainterD2Ev(void);
    extern Class _ZN8QPainterD1Ev(void);
    extern Class _ZNK8QPainter6deviceEv(void);
    extern bool _ZN8QPainter5beginEP12QPaintDevice(void);
    extern bool _ZN8QPainter3endEv(void);
    extern bool _ZNK8QPainter8isActiveEv(void);
    extern void _ZN8QPainter8initFromEPK7QWidget(void);
    extern void
	_ZN8QPainter18setCompositionModeENS_15CompositionModeE(void);
    extern enum N8QPainter15CompositionModeE
	_ZNK8QPainter15compositionModeEv(void);
    extern Class _ZNK8QPainter4fontEv(void);
    extern void _ZN8QPainter7setFontERK5QFont(void);
    extern Class _ZNK8QPainter11fontMetricsEv(void);
    extern Class _ZNK8QPainter8fontInfoEv(void);
    extern void _ZN8QPainter6setPenERK6QColor(void);
    extern void _ZN8QPainter6setPenERK4QPen(void);
    extern void _ZN8QPainter6setPenEN2Qt8PenStyleE(void);
    extern Class _ZNK8QPainter3penEv(void);
    extern void _ZN8QPainter8setBrushERK6QBrush(void);
    extern void _ZN8QPainter8setBrushEN2Qt10BrushStyleE(void);
    extern Class _ZNK8QPainter5brushEv(void);
    extern void _ZN8QPainter17setBackgroundModeEN2Qt6BGModeE(void);
    extern enum N2Qt6BGModeE _ZNK8QPainter14backgroundModeEv(void);
    extern Class _ZNK8QPainter11brushOriginEv(void);
    extern void _ZN8QPainter14setBrushOriginERK7QPointF(void);
    extern void _ZN8QPainter13setBackgroundERK6QBrush(void);
    extern Class _ZNK8QPainter10backgroundEv(void);
    extern Class _ZNK8QPainter10clipRegionEv(void);
    extern _ZNK8QPainter8clipPathEv(void);
    extern void
	_ZN8QPainter11setClipRectERK6QRectFN2Qt13ClipOperationE(void);
    extern void
	_ZN8QPainter13setClipRegionERK7QRegionN2Qt13ClipOperationE(void);
    extern void
	_ZN8QPainter11setClipPathERK12QPainterPathN2Qt13ClipOperationE
	(void);
    extern void _ZN8QPainter11setClippingEb(void);
    extern bool _ZNK8QPainter11hasClippingEv(void);
    extern void _ZN8QPainter4saveEv(void);
    extern void _ZN8QPainter7restoreEv(void);
    extern void _ZN8QPainter9setMatrixERK7QMatrixb(void);
    extern Class _ZNK8QPainter6matrixEv(void);
    extern Class _ZNK8QPainter12deviceMatrixEv(void);
    extern void _ZN8QPainter11resetMatrixEv(void);
    extern void _ZN8QPainter16setMatrixEnabledEb(void);
    extern bool _ZNK8QPainter13matrixEnabledEv(void);
    extern void _ZN8QPainter5scaleEdd(void);
    extern void _ZN8QPainter5shearEdd(void);
    extern void _ZN8QPainter6rotateEd(void);
    extern void _ZN8QPainter9translateERK7QPointF(void);
    extern Class _ZNK8QPainter6windowEv(void);
    extern void _ZN8QPainter9setWindowERK5QRect(void);
    extern Class _ZNK8QPainter8viewportEv(void);
    extern void _ZN8QPainter11setViewportERK5QRect(void);
    extern void _ZN8QPainter23setViewTransformEnabledEb(void);
    extern bool _ZNK8QPainter20viewTransformEnabledEv(void);
    extern void _ZN8QPainter10strokePathERK12QPainterPathRK4QPen(void);
    extern void _ZN8QPainter8fillPathERK12QPainterPathRK6QBrush(void);
    extern void _ZN8QPainter8drawPathERK12QPainterPath(void);
    extern void _ZN8QPainter10drawPointsEPK7QPointFi(void);
    extern void _ZN8QPainter10drawPointsEPK6QPointi(void);
    extern void _ZN8QPainter9drawLinesEPK6QLineFi(void);
    extern void _ZN8QPainter9drawLinesEPK7QPointFi(void);
    extern void _ZN8QPainter9drawLinesEPK5QLinei(void);
    extern void _ZN8QPainter9drawLinesEPK6QPointi(void);
    extern void _ZN8QPainter9drawRectsEPK6QRectFi(void);
    extern void _ZN8QPainter9drawRectsEPK5QRecti(void);
    extern void _ZN8QPainter11drawEllipseERK6QRectF(void);
    extern void _ZN8QPainter11drawEllipseERK5QRect(void);
    extern void _ZN8QPainter12drawPolylineEPK7QPointFi(void);
    extern void _ZN8QPainter12drawPolylineEPK6QPointi(void);
    extern void _ZN8QPainter11drawPolygonEPK7QPointFiN2Qt8FillRuleE(void);
    extern void _ZN8QPainter11drawPolygonEPK6QPointiN2Qt8FillRuleE(void);
    extern void _ZN8QPainter17drawConvexPolygonEPK7QPointFi(void);
    extern void _ZN8QPainter17drawConvexPolygonEPK6QPointi(void);
    extern void _ZN8QPainter7drawArcERK6QRectFii(void);
    extern void _ZN8QPainter7drawPieERK6QRectFii(void);
    extern void _ZN8QPainter9drawChordERK6QRectFii(void);
    extern void _ZN8QPainter13drawRoundRectERK6QRectFii(void);
    extern void
	_ZN8QPainter15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF(void);
    extern void _ZN8QPainter11drawPictureERK7QPointFRK8QPicture(void);
    extern void _ZN8QPainter10drawPixmapERK6QRectFRK7QPixmapS2_(void);
    extern void
	_ZN8QPainter9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE
	(void);
    extern void
	_ZN8QPainter18setLayoutDirectionEN2Qt15LayoutDirectionE(void);
    extern enum N2Qt15LayoutDirectionE
	_ZNK8QPainter15layoutDirectionEv(void);
    extern void _ZN8QPainter8drawTextERK7QPointFRK7QString(void);
    extern void _ZN8QPainter8drawTextERK6QRectFiRK7QStringPS0_(void);
    extern void _ZN8QPainter8drawTextERK5QRectiRK7QStringPS0_(void);
    extern void
	_ZN8QPainter8drawTextERK6QRectFRK7QStringRK11QTextOption(void);
    extern Class _ZN8QPainter12boundingRectERK6QRectFiRK7QString(void);
    extern Class _ZN8QPainter12boundingRectERK5QRectiRK7QString(void);
    extern Class
	_ZN8QPainter12boundingRectERK6QRectFRK7QStringRK11QTextOption
	(void);
    extern void _ZN8QPainter12drawTextItemERK7QPointFRK9QTextItem(void);
    extern void _ZN8QPainter8fillRectERK6QRectFRK6QBrush(void);
    extern void _ZN8QPainter8fillRectERK5QRectRK6QBrush(void);
    extern void _ZN8QPainter9eraseRectERK6QRectF(void);
    extern void _ZN8QPainter13setRenderHintENS_10RenderHintEb(void);
    extern N8QPainter11RenderHintsE _ZNK8QPainter11renderHintsEv(void);
    extern _ZNK8QPainter11paintEngineEv(void);
    extern void
	_ZN8QPainter13setRedirectedEPK12QPaintDevicePS0_RK6QPoint(void);
    extern Class _ZN8QPainter10redirectedEPK12QPaintDeviceP6QPoint(void);
    extern void _ZN8QPainter17restoreRedirectedEPK12QPaintDevice(void);
    extern void _ZN8QPainter15drawCubicBezierERK8QPolygoni(void);
    extern void _ZN8QPainter16drawLineSegmentsERK8QPolygonii(void);
    extern void _ZNK8QPainter3mapEiiPiS0_(void);
    extern Class _ZNK8QPainter5xFormERK6QPoint(void);
    extern Class _ZNK8QPainter5xFormERK5QRect(void);
    extern Class _ZNK8QPainter5xFormERK8QPolygon(void);
    extern Class _ZNK8QPainter5xFormERK8QPolygonii(void);
    extern Class _ZNK8QPainter8xFormDevERK6QPoint(void);
    extern Class _ZNK8QPainter8xFormDevERK5QRect(void);
    extern Class _ZNK8QPainter8xFormDevERK8QPolygon(void);
    extern Class _ZNK8QPainter8xFormDevERK8QPolygonii(void);
    extern qreal _ZNK8QPainter12translationXEv(void);
    extern qreal _ZNK8QPainter12translationYEv(void);
#ifdef __cplusplus
}
#endif
#endif
