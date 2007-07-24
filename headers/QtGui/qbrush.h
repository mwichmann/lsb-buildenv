#ifndef _QTGUI_QBRUSH_H_
#define _QTGUI_QBRUSH_H_

#include <QtCore/qglobal.h>
#include <QtCore/qdatastream.h>
#include <QtCore/qdebug.h>
#include <QtCore/qpoint.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    struct QBrushData;

    Unknown Type:".Class.";

    enum N9QGradient4TypeE {
	LinearGradient,
	RadialGradient,
	ConicalGradient,
	NoGradient
    };

    enum N9QGradient6SpreadE {
	PadSpread,
	ReflectSpread,
	RepeatSpread
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern Class _ZN6QBrushC2Ev(void);
    extern Class _ZN6QBrushC1Ev(void);
    extern Class _ZN6QBrushC2EN2Qt10BrushStyleE(void);
    extern Class _ZN6QBrushC1EN2Qt10BrushStyleE(void);
    extern Class _ZN6QBrushC2ERK6QColorN2Qt10BrushStyleE(void);
    extern Class _ZN6QBrushC1ERK6QColorN2Qt10BrushStyleE(void);
    extern Class _ZN6QBrushC2EN2Qt11GlobalColorENS0_10BrushStyleE(void);
    extern Class _ZN6QBrushC1EN2Qt11GlobalColorENS0_10BrushStyleE(void);
    extern Class _ZN6QBrushC2ERK6QColorRK7QPixmap(void);
    extern Class _ZN6QBrushC1ERK6QColorRK7QPixmap(void);
    extern Class _ZN6QBrushC2EN2Qt11GlobalColorERK7QPixmap(void);
    extern Class _ZN6QBrushC1EN2Qt11GlobalColorERK7QPixmap(void);
    extern Class _ZN6QBrushC2ERK7QPixmap(void);
    extern Class _ZN6QBrushC1ERK7QPixmap(void);
    extern Class _ZN6QBrushC2ERKS_(void);
    extern Class _ZN6QBrushC1ERKS_(void);
    extern Class _ZN6QBrushC2ERK9QGradient(void);
    extern Class _ZN6QBrushC1ERK9QGradient(void);
    extern Class _ZN6QBrushD2Ev(void);
    extern Class _ZN6QBrushD1Ev(void);
    extern Class _ZN6QBrushaSERKS_(void);
    extern Class _ZNK6QBrushcv8QVariantEv(void);
    extern void _ZN6QBrush8setStyleEN2Qt10BrushStyleE(void);
    extern _ZNK6QBrush7textureEv(void);
    extern void _ZN6QBrush10setTextureERK7QPixmap(void);
    extern void _ZN6QBrush8setColorERK6QColor(void);
    extern _ZNK6QBrush8gradientEv(void);
    extern bool _ZNK6QBrush8isOpaqueEv(void);
    extern bool _ZNK6QBrusheqERKS_(void);
    extern _ZNK6QBrush6pixmapEv(void);
    extern Class _ZlsR11QDataStreamRK6QBrush(void);
    extern Class _ZrsR11QDataStreamR6QBrush(void);
    extern Class _Zls6QDebugRK6QBrush(void);
    extern Class _ZN9QGradientC2Ev(void);
    extern Class _ZN9QGradientC1Ev(void);
    extern void _ZN9QGradient10setColorAtEdRK6QColor(void);
    extern void _ZN9QGradient8setStopsERK7QVectorI5QPairId6QColorEE(void);
    extern _ZNK9QGradient5stopsEv(void);
    extern bool _ZN9QGradienteqERKS_(void);
    extern bool _ZNK9QGradienteqERKS_(void);
    extern Class _ZN15QLinearGradientC2ERK7QPointFS2_(void);
    extern Class _ZN15QLinearGradientC1ERK7QPointFS2_(void);
    extern Class _ZN15QLinearGradientC2Edddd(void);
    extern Class _ZN15QLinearGradientC1Edddd(void);
    extern Class _ZNK15QLinearGradient5startEv(void);
    extern Class _ZNK15QLinearGradient9finalStopEv(void);
    extern Class _ZN15QRadialGradientC2ERK7QPointFdS2_(void);
    extern Class _ZN15QRadialGradientC1ERK7QPointFdS2_(void);
    extern Class _ZN15QRadialGradientC2Eddddd(void);
    extern Class _ZN15QRadialGradientC1Eddddd(void);
    extern Class _ZNK15QRadialGradient6centerEv(void);
    extern Class _ZNK15QRadialGradient10focalPointEv(void);
    extern qreal _ZNK15QRadialGradient6radiusEv(void);
    extern Class _ZN16QConicalGradientC2ERK7QPointFd(void);
    extern Class _ZN16QConicalGradientC1ERK7QPointFd(void);
    extern Class _ZN16QConicalGradientC2Eddd(void);
    extern Class _ZN16QConicalGradientC1Eddd(void);
    extern Class _ZNK16QConicalGradient6centerEv(void);
    extern qreal _ZNK16QConicalGradient5angleEv(void);
#ifdef __cplusplus
}
#endif
#endif
