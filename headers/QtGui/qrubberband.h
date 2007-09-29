#ifndef _QTGUI_QRUBBERBAND_H_
#define _QTGUI_QRUBBERBAND_H_

class QRubberBand;
// *INDENT-OFF*



class QRubberBand : public QWidget
{
private:
public:
};

enum Shape	
{
Line = 0,	
Rectangle = 1
}
;


extern struct QMetaObject _ZN11QRubberBand16staticMetaObjectE ;
extern struct QMetaObject _ZNK11QRubberBand10metaObjectEv(void);
extern void _ZN11QRubberBand11qt_metacastEPKc(void);
extern int _ZN11QRubberBand11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QRubberBand _ZN11QRubberBandC2ENS_5ShapeEP7QWidget(void);
extern QRubberBand _ZN11QRubberBandC1ENS_5ShapeEP7QWidget(void);
extern QRubberBand _ZN11QRubberBandD2Ev(void);
extern QRubberBand _ZN11QRubberBandD1Ev(void);
extern QRubberBand _ZN11QRubberBandD0Ev(void);
extern enum N11QRubberBand5ShapeE _ZNK11QRubberBand5shapeEv(void);
extern void _ZN11QRubberBand11setGeometryERK5QRect(void);
extern bool _ZN11QRubberBand5eventEP6QEvent(void);
extern void _ZN11QRubberBand10paintEventEP11QPaintEvent(void);
extern void _ZN11QRubberBand11changeEventEP6QEvent(void);
extern void _ZN11QRubberBand9showEventEP10QShowEvent(void);
extern void _ZN11QRubberBand11resizeEventEP12QResizeEvent(void);
extern void _ZN11QRubberBand9moveEventEP10QMoveEvent(void);
// *INDENT-ON*
#endif
