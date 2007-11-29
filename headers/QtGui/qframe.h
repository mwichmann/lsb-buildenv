#ifndef _QTGUI_QFRAME_H_
#define _QTGUI_QFRAME_H_

class QFrame;
// *INDENT-OFF*




class QFrame : public QWidget
{
private:
public:
};

enum Shape	
{
NoFrame = 0,	
Box = 1,	
Panel = 2,	
WinPanel = 3,	
HLine = 4,	
VLine = 5,	
StyledPanel = 6,	
PopupPanel = 6,	
MenuBarPanel = 6,	
ToolBarPanel = 6,	
LineEditPanel = 6,	
TabWidgetPanel = 6,	
GroupBoxPanel = 6
}
;

enum Shadow	
{
Plain = 16,	
Raised = 32,	
Sunken = 48
}
;


extern struct QMetaObject _ZN6QFrame16staticMetaObjectE ;
extern struct QMetaObject _ZNK6QFrame10metaObjectEv(void);
extern void _ZN6QFrame11qt_metacastEPKc(void);
extern int _ZN6QFrame11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QFrame _ZN6QFrameC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
extern QFrame _ZN6QFrameC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
extern  _ZN6QFrameD2Ev(void);
extern  _ZN6QFrameD1Ev(void);
extern  _ZN6QFrameD0Ev(void);
extern int _ZNK6QFrame10frameStyleEv(void);
extern void _ZN6QFrame13setFrameStyleEi(void);
extern int _ZNK6QFrame10frameWidthEv(void);
extern QSize _ZNK6QFrame8sizeHintEv(void);
extern enum N6QFrame5ShapeE _ZNK6QFrame10frameShapeEv(void);
extern void _ZN6QFrame13setFrameShapeENS_5ShapeE(void);
extern enum N6QFrame6ShadowE _ZNK6QFrame11frameShadowEv(void);
extern void _ZN6QFrame14setFrameShadowENS_6ShadowE(void);
extern int _ZNK6QFrame9lineWidthEv(void);
extern void _ZN6QFrame12setLineWidthEi(void);
extern int _ZNK6QFrame12midLineWidthEv(void);
extern void _ZN6QFrame15setMidLineWidthEi(void);
extern QRect _ZNK6QFrame9frameRectEv(void);
extern void _ZN6QFrame12setFrameRectERK5QRect(void);
extern bool _ZN6QFrame5eventEP6QEvent(void);
extern void _ZN6QFrame10paintEventEP11QPaintEvent(void);
extern void _ZN6QFrame11changeEventEP6QEvent(void);
extern void _ZN6QFrame9drawFrameEP8QPainter(void);
extern QFrame _ZN6QFrameC2EP7QWidgetPKc6QFlagsIN2Qt10WindowTypeEE(void);
extern QFrame _ZN6QFrameC1EP7QWidgetPKc6QFlagsIN2Qt10WindowTypeEE(void);
extern QFrame _ZN6QFrameC2ER13QFramePrivateP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
extern QFrame _ZN6QFrameC1ER13QFramePrivateP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
// *INDENT-ON*
#endif
