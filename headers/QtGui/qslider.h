#ifndef _QTGUI_QSLIDER_H_
#define _QTGUI_QSLIDER_H_

class QSlider;
// *INDENT-OFF*



class QSlider : public QAbstractSlider
{
private:
public:
};

enum TickPosition	
{
NoTicks,	
NoMarks,	
TicksAbove,	
TicksLeft,	
Above,	
Left,	
TicksBelow,	
TicksRight,	
Below,	
Right,	
TicksBothSides,	
Both
}
;


extern struct QMetaObject _ZN7QSlider16staticMetaObjectE ;
extern struct QMetaObject _ZNK7QSlider10metaObjectEv(void);
extern void _ZN7QSlider11qt_metacastEPKc(void);
extern int _ZN7QSlider11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QSlider _ZN7QSliderC2EP7QWidget(void);
extern QSlider _ZN7QSliderC1EP7QWidget(void);
extern QSlider _ZN7QSliderC2EN2Qt11OrientationEP7QWidget(void);
extern QSlider _ZN7QSliderC1EN2Qt11OrientationEP7QWidget(void);
extern QSlider _ZN7QSliderD2Ev(void);
extern QSlider _ZN7QSliderD1Ev(void);
extern QSlider _ZN7QSliderD0Ev(void);
extern QSize _ZNK7QSlider8sizeHintEv(void);
extern QSize _ZNK7QSlider15minimumSizeHintEv(void);
extern void _ZN7QSlider15setTickPositionENS_12TickPositionE(void);
extern enum N7QSlider12TickPositionE _ZNK7QSlider12tickPositionEv(void);
extern void _ZN7QSlider15setTickIntervalEi(void);
extern int _ZNK7QSlider12tickIntervalEv(void);
extern bool _ZN7QSlider5eventEP6QEvent(void);
extern void _ZN7QSlider10paintEventEP11QPaintEvent(void);
extern void _ZN7QSlider15mousePressEventEP11QMouseEvent(void);
extern void _ZN7QSlider17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN7QSlider14mouseMoveEventEP11QMouseEvent(void);
extern QSlider _ZN7QSliderC2EP7QWidgetPKc(void);
extern QSlider _ZN7QSliderC1EP7QWidgetPKc(void);
extern QSlider _ZN7QSliderC2EN2Qt11OrientationEP7QWidgetPKc(void);
extern QSlider _ZN7QSliderC1EN2Qt11OrientationEP7QWidgetPKc(void);
extern QSlider _ZN7QSliderC2EiiiiN2Qt11OrientationEP7QWidgetPKc(void);
extern QSlider _ZN7QSliderC1EiiiiN2Qt11OrientationEP7QWidgetPKc(void);
// *INDENT-ON*
#endif
