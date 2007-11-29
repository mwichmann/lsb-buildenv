#ifndef _QTGUI_QPAINTERPATH_H_
#define _QTGUI_QPAINTERPATH_H_

class QPainterPathStroker;
// *INDENT-OFF*




class QPainterPath
{
private:
public:
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
};


extern QPainterPath _ZN12QPainterPathC2Ev(void);
extern QPainterPath _ZN12QPainterPathC1Ev(void);
extern QPainterPath _ZN12QPainterPathC2ERK7QPointF(void);
extern QPainterPath _ZN12QPainterPathC1ERK7QPointF(void);
extern QPainterPath _ZN12QPainterPathC2ERKS_(void);
extern QPainterPath _ZN12QPainterPathC1ERKS_(void);
extern QPainterPath _ZN12QPainterPathaSERKS_(void);
extern  _ZN12QPainterPathD2Ev(void);
extern  _ZN12QPainterPathD1Ev(void);
extern void _ZN12QPainterPath12closeSubpathEv(void);
extern void _ZN12QPainterPath6moveToERK7QPointF(void);
extern void _ZN12QPainterPath6lineToERK7QPointF(void);
extern void _ZN12QPainterPath5arcToERK6QRectFdd(void);
extern void _ZN12QPainterPath7cubicToERK7QPointFS2_S2_(void);
extern void _ZN12QPainterPath6quadToERK7QPointFS2_(void);
extern QPointF _ZNK12QPainterPath15currentPositionEv(void);
extern void _ZN12QPainterPath7addRectERK6QRectF(void);
extern void _ZN12QPainterPath10addEllipseERK6QRectF(void);
extern void _ZN12QPainterPath10addPolygonERK9QPolygonF(void);
extern void _ZN12QPainterPath7addTextERK7QPointFRK5QFontRK7QString(void);
extern void _ZN12QPainterPath7addPathERKS_(void);
extern void _ZN12QPainterPath9addRegionERK7QRegion(void);
extern void _ZN12QPainterPath11connectPathERKS_(void);
extern bool _ZNK12QPainterPath8containsERK7QPointF(void);
extern bool _ZNK12QPainterPath8containsERK6QRectF(void);
extern bool _ZNK12QPainterPath10intersectsERK6QRectF(void);
extern QRectF _ZNK12QPainterPath12boundingRectEv(void);
extern QRectF _ZNK12QPainterPath16controlPointRectEv(void);
extern enum N2Qt8FillRuleE _ZNK12QPainterPath8fillRuleEv(void);
extern void _ZN12QPainterPath11setFillRuleEN2Qt8FillRuleE(void);
extern QPainterPath _ZNK12QPainterPath10toReversedEv(void);
extern  _ZNK12QPainterPath17toSubpathPolygonsERK7QMatrix(void);
extern  _ZNK12QPainterPath14toFillPolygonsERK7QMatrix(void);
extern QPolygonF _ZNK12QPainterPath13toFillPolygonERK7QMatrix(void);
extern bool _ZNK12QPainterPatheqERKS_(void);
extern bool _ZNK12QPainterPathneERKS_(void);
extern QDataStream _ZlsR11QDataStreamRK12QPainterPath(void);
extern QDataStream _ZrsR11QDataStreamR12QPainterPath(void);
extern QPainterPathStroker _ZN19QPainterPathStrokerC2Ev(void);
extern QPainterPathStroker _ZN19QPainterPathStrokerC1Ev(void);
extern  _ZN19QPainterPathStrokerD2Ev(void);
extern  _ZN19QPainterPathStrokerD1Ev(void);
extern void _ZN19QPainterPathStroker8setWidthEd(void);
extern qreal _ZNK19QPainterPathStroker5widthEv(void);
extern void _ZN19QPainterPathStroker11setCapStyleEN2Qt11PenCapStyleE(void);
extern enum N2Qt11PenCapStyleE _ZNK19QPainterPathStroker8capStyleEv(void);
extern void _ZN19QPainterPathStroker12setJoinStyleEN2Qt12PenJoinStyleE(void);
extern enum N2Qt12PenJoinStyleE _ZNK19QPainterPathStroker9joinStyleEv(void);
extern void _ZN19QPainterPathStroker13setMiterLimitEd(void);
extern qreal _ZNK19QPainterPathStroker10miterLimitEv(void);
extern void _ZN19QPainterPathStroker17setCurveThresholdEd(void);
extern qreal _ZNK19QPainterPathStroker14curveThresholdEv(void);
extern void _ZN19QPainterPathStroker14setDashPatternEN2Qt8PenStyleE(void);
extern void _ZN19QPainterPathStroker14setDashPatternERK7QVectorIdE(void);
extern  _ZNK19QPainterPathStroker11dashPatternEv(void);
extern QPainterPath _ZNK19QPainterPathStroker12createStrokeERK12QPainterPath(void);
// *INDENT-ON*
#endif
