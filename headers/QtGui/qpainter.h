#ifndef _QTGUI_QPAINTER_H_
#define _QTGUI_QPAINTER_H_

class QFlags < QPainter::RenderHint >;
// *INDENT-OFF*



typedef RenderHints	
;

class QPainter
{
private:
public:
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


extern QPainter _ZN8QPainterC2Ev(void);
extern QPainter _ZN8QPainterC1Ev(void);
extern QPainter _ZN8QPainterC2EP12QPaintDevice(void);
extern QPainter _ZN8QPainterC1EP12QPaintDevice(void);
extern QPainter _ZN8QPainterD2Ev(void);
extern QPainter _ZN8QPainterD1Ev(void);
extern QPaintDevice _ZNK8QPainter6deviceEv(void);
extern bool _ZN8QPainter5beginEP12QPaintDevice(void);
extern bool _ZN8QPainter3endEv(void);
extern bool _ZNK8QPainter8isActiveEv(void);
extern void _ZN8QPainter8initFromEPK7QWidget(void);
extern void _ZN8QPainter18setCompositionModeENS_15CompositionModeE(void);
extern enum N8QPainter15CompositionModeE _ZNK8QPainter15compositionModeEv(void);
extern QFont _ZNK8QPainter4fontEv(void);
extern void _ZN8QPainter7setFontERK5QFont(void);
extern QFontMetrics _ZNK8QPainter11fontMetricsEv(void);
extern QFontInfo _ZNK8QPainter8fontInfoEv(void);
extern void _ZN8QPainter6setPenERK6QColor(void);
extern void _ZN8QPainter6setPenERK4QPen(void);
extern void _ZN8QPainter6setPenEN2Qt8PenStyleE(void);
extern QPen _ZNK8QPainter3penEv(void);
extern void _ZN8QPainter8setBrushERK6QBrush(void);
extern void _ZN8QPainter8setBrushEN2Qt10BrushStyleE(void);
extern QBrush _ZNK8QPainter5brushEv(void);
extern void _ZN8QPainter17setBackgroundModeEN2Qt6BGModeE(void);
extern enum N2Qt6BGModeE _ZNK8QPainter14backgroundModeEv(void);
extern QPoint _ZNK8QPainter11brushOriginEv(void);
extern void _ZN8QPainter14setBrushOriginERK7QPointF(void);
extern void _ZN8QPainter13setBackgroundERK6QBrush(void);
extern QBrush _ZNK8QPainter10backgroundEv(void);
extern QRegion _ZNK8QPainter10clipRegionEv(void);
extern  _ZNK8QPainter8clipPathEv(void);
extern void _ZN8QPainter11setClipRectERK6QRectFN2Qt13ClipOperationE(void);
extern void _ZN8QPainter13setClipRegionERK7QRegionN2Qt13ClipOperationE(void);
extern void _ZN8QPainter11setClipPathERK12QPainterPathN2Qt13ClipOperationE(void);
extern void _ZN8QPainter11setClippingEb(void);
extern bool _ZNK8QPainter11hasClippingEv(void);
extern void _ZN8QPainter4saveEv(void);
extern void _ZN8QPainter7restoreEv(void);
extern void _ZN8QPainter9setMatrixERK7QMatrixb(void);
extern QMatrix _ZNK8QPainter6matrixEv(void);
extern QMatrix _ZNK8QPainter12deviceMatrixEv(void);
extern void _ZN8QPainter11resetMatrixEv(void);
extern void _ZN8QPainter16setMatrixEnabledEb(void);
extern bool _ZNK8QPainter13matrixEnabledEv(void);
extern void _ZN8QPainter5scaleEdd(void);
extern void _ZN8QPainter5shearEdd(void);
extern void _ZN8QPainter6rotateEd(void);
extern void _ZN8QPainter9translateERK7QPointF(void);
extern QRect _ZNK8QPainter6windowEv(void);
extern void _ZN8QPainter9setWindowERK5QRect(void);
extern QRect _ZNK8QPainter8viewportEv(void);
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
extern void _ZN8QPainter15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF(void);
extern void _ZN8QPainter11drawPictureERK7QPointFRK8QPicture(void);
extern void _ZN8QPainter10drawPixmapERK6QRectFRK7QPixmapS2_(void);
extern void _ZN8QPainter9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern void _ZN8QPainter18setLayoutDirectionEN2Qt15LayoutDirectionE(void);
extern enum N2Qt15LayoutDirectionE _ZNK8QPainter15layoutDirectionEv(void);
extern void _ZN8QPainter8drawTextERK7QPointFRK7QString(void);
extern void _ZN8QPainter8drawTextERK6QRectFiRK7QStringPS0_(void);
extern void _ZN8QPainter8drawTextERK5QRectiRK7QStringPS0_(void);
extern void _ZN8QPainter8drawTextERK6QRectFRK7QStringRK11QTextOption(void);
extern QRectF _ZN8QPainter12boundingRectERK6QRectFiRK7QString(void);
extern QRect _ZN8QPainter12boundingRectERK5QRectiRK7QString(void);
extern QRectF _ZN8QPainter12boundingRectERK6QRectFRK7QStringRK11QTextOption(void);
extern void _ZN8QPainter12drawTextItemERK7QPointFRK9QTextItem(void);
extern void _ZN8QPainter8fillRectERK6QRectFRK6QBrush(void);
extern void _ZN8QPainter8fillRectERK5QRectRK6QBrush(void);
extern void _ZN8QPainter9eraseRectERK6QRectF(void);
extern void _ZN8QPainter13setRenderHintENS_10RenderHintEb(void);
extern N8QPainter11RenderHintsE _ZNK8QPainter11renderHintsEv(void);
extern  _ZNK8QPainter11paintEngineEv(void);
extern void _ZN8QPainter13setRedirectedEPK12QPaintDevicePS0_RK6QPoint(void);
extern QPaintDevice _ZN8QPainter10redirectedEPK12QPaintDeviceP6QPoint(void);
extern void _ZN8QPainter17restoreRedirectedEPK12QPaintDevice(void);
extern void _ZN8QPainter15drawCubicBezierERK8QPolygoni(void);
extern void _ZN8QPainter16drawLineSegmentsERK8QPolygonii(void);
extern void _ZNK8QPainter3mapEiiPiS0_(void);
extern QPoint _ZNK8QPainter5xFormERK6QPoint(void);
extern QRect _ZNK8QPainter5xFormERK5QRect(void);
extern QPolygon _ZNK8QPainter5xFormERK8QPolygon(void);
extern QPolygon _ZNK8QPainter5xFormERK8QPolygonii(void);
extern QPoint _ZNK8QPainter8xFormDevERK6QPoint(void);
extern QRect _ZNK8QPainter8xFormDevERK5QRect(void);
extern QPolygon _ZNK8QPainter8xFormDevERK8QPolygon(void);
extern QPolygon _ZNK8QPainter8xFormDevERK8QPolygonii(void);
extern qreal _ZNK8QPainter12translationXEv(void);
extern qreal _ZNK8QPainter12translationYEv(void);
// *INDENT-ON*
#endif
