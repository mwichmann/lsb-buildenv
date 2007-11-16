#ifndef _QTGUI_QBRUSH_H_
#define _QTGUI_QBRUSH_H_

class QConicalGradient;
// *INDENT-OFF*




class QBrush
{
private:
public:
};

struct QBrushData	;

class QGradient
{
private:
public:
};

enum Type	
{
LinearGradient = 0,	
RadialGradient = 1,	
ConicalGradient = 2,	
NoGradient = 3
}
;

enum Spread	
{
PadSpread = 0,	
ReflectSpread = 1,	
RepeatSpread = 2
}
;

class QLinearGradient :  
{
private:
public:
};

class QRadialGradient :  
{
private:
public:
};

class QConicalGradient :  
{
private:
public:
};


extern QBrush _ZN6QBrushC2Ev(void);
extern QBrush _ZN6QBrushC1Ev(void);
extern QBrush _ZN6QBrushC2EN2Qt10BrushStyleE(void);
extern QBrush _ZN6QBrushC1EN2Qt10BrushStyleE(void);
extern QBrush _ZN6QBrushC2ERK6QColorN2Qt10BrushStyleE(void);
extern QBrush _ZN6QBrushC1ERK6QColorN2Qt10BrushStyleE(void);
extern QBrush _ZN6QBrushC2EN2Qt11GlobalColorENS0_10BrushStyleE(void);
extern QBrush _ZN6QBrushC1EN2Qt11GlobalColorENS0_10BrushStyleE(void);
extern QBrush _ZN6QBrushC2ERK6QColorRK7QPixmap(void);
extern QBrush _ZN6QBrushC1ERK6QColorRK7QPixmap(void);
extern QBrush _ZN6QBrushC2EN2Qt11GlobalColorERK7QPixmap(void);
extern QBrush _ZN6QBrushC1EN2Qt11GlobalColorERK7QPixmap(void);
extern QBrush _ZN6QBrushC2ERK7QPixmap(void);
extern QBrush _ZN6QBrushC1ERK7QPixmap(void);
extern QBrush _ZN6QBrushC2ERKS_(void);
extern QBrush _ZN6QBrushC1ERKS_(void);
extern QBrush _ZN6QBrushC2ERK9QGradient(void);
extern QBrush _ZN6QBrushC1ERK9QGradient(void);
extern QBrush _ZN6QBrushD2Ev(void);
extern QBrush _ZN6QBrushD1Ev(void);
extern QBrush _ZN6QBrushaSERKS_(void);
extern QBrush _ZNK6QBrushcv8QVariantEv(void);
extern void _ZN6QBrush8setStyleEN2Qt10BrushStyleE(void);
extern  _ZNK6QBrush7textureEv(void);
extern void _ZN6QBrush10setTextureERK7QPixmap(void);
extern void _ZN6QBrush8setColorERK6QColor(void);
extern  _ZNK6QBrush8gradientEv(void);
extern bool _ZNK6QBrush8isOpaqueEv(void);
extern bool _ZNK6QBrusheqERKS_(void);
extern  _ZNK6QBrush6pixmapEv(void);
extern QDataStream _ZlsR11QDataStreamRK6QBrush(void);
extern QDataStream _ZrsR11QDataStreamR6QBrush(void);
extern QDebug _Zls6QDebugRK6QBrush(void);
extern QGradient _ZN9QGradientC2Ev(void);
extern QGradient _ZN9QGradientC1Ev(void);
extern void _ZN9QGradient10setColorAtEdRK6QColor(void);
extern void _ZN9QGradient8setStopsERK7QVectorI5QPairId6QColorEE(void);
extern  _ZNK9QGradient5stopsEv(void);
extern bool _ZN9QGradienteqERKS_(void);
extern bool _ZNK9QGradienteqERKS_(void);
extern QLinearGradient _ZN15QLinearGradientC2ERK7QPointFS2_(void);
extern QLinearGradient _ZN15QLinearGradientC1ERK7QPointFS2_(void);
extern QLinearGradient _ZN15QLinearGradientC2Edddd(void);
extern QLinearGradient _ZN15QLinearGradientC1Edddd(void);
extern QPointF _ZNK15QLinearGradient5startEv(void);
extern QPointF _ZNK15QLinearGradient9finalStopEv(void);
extern QRadialGradient _ZN15QRadialGradientC2ERK7QPointFdS2_(void);
extern QRadialGradient _ZN15QRadialGradientC1ERK7QPointFdS2_(void);
extern QRadialGradient _ZN15QRadialGradientC2Eddddd(void);
extern QRadialGradient _ZN15QRadialGradientC1Eddddd(void);
extern QPointF _ZNK15QRadialGradient6centerEv(void);
extern QPointF _ZNK15QRadialGradient10focalPointEv(void);
extern qreal _ZNK15QRadialGradient6radiusEv(void);
extern QConicalGradient _ZN16QConicalGradientC2ERK7QPointFd(void);
extern QConicalGradient _ZN16QConicalGradientC1ERK7QPointFd(void);
extern QConicalGradient _ZN16QConicalGradientC2Eddd(void);
extern QConicalGradient _ZN16QConicalGradientC1Eddd(void);
extern QPointF _ZNK16QConicalGradient6centerEv(void);
extern qreal _ZNK16QConicalGradient5angleEv(void);
// *INDENT-ON*
#endif
