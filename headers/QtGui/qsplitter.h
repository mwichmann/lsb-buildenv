#ifndef _QTGUI_QSPLITTER_H_
#define _QTGUI_QSPLITTER_H_

class QSplitter;
// *INDENT-OFF*




class QSplitter : public QFrame
{
private:
public:
};

enum ResizeMode	
{
Stretch = 0,	
KeepSize = 1,	
FollowSizeHint = 2,	
Auto = 3
}
;

class QSplitterHandle : public QWidget
{
private:
public:
};


extern struct QMetaObject _ZN9QSplitter16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QSplitter10metaObjectEv(void);
extern void _ZN9QSplitter11qt_metacastEPKc(void);
extern int _ZN9QSplitter11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QSplitter _ZN9QSplitterC2EP7QWidget(void);
extern QSplitter _ZN9QSplitterC1EP7QWidget(void);
extern QSplitter _ZN9QSplitterC2EN2Qt11OrientationEP7QWidget(void);
extern QSplitter _ZN9QSplitterC1EN2Qt11OrientationEP7QWidget(void);
extern  _ZN9QSplitterD2Ev(void);
extern  _ZN9QSplitterD1Ev(void);
extern  _ZN9QSplitterD0Ev(void);
extern void _ZN9QSplitter9addWidgetEP7QWidget(void);
extern void _ZN9QSplitter12insertWidgetEiP7QWidget(void);
extern void _ZN9QSplitter14setOrientationEN2Qt11OrientationE(void);
extern enum N2Qt11OrientationE _ZNK9QSplitter11orientationEv(void);
extern void _ZN9QSplitter22setChildrenCollapsibleEb(void);
extern bool _ZNK9QSplitter19childrenCollapsibleEv(void);
extern void _ZN9QSplitter14setCollapsibleEib(void);
extern bool _ZNK9QSplitter13isCollapsibleEi(void);
extern void _ZN9QSplitter15setOpaqueResizeEb(void);
extern bool _ZNK9QSplitter12opaqueResizeEv(void);
extern void _ZN9QSplitter7refreshEv(void);
extern QSize _ZNK9QSplitter8sizeHintEv(void);
extern QSize _ZNK9QSplitter15minimumSizeHintEv(void);
extern QList<int> _ZNK9QSplitter5sizesEv(void);
extern void _ZN9QSplitter8setSizesERK5QListIiE(void);
extern QByteArray _ZNK9QSplitter9saveStateEv(void);
extern bool _ZN9QSplitter12restoreStateERK10QByteArray(void);
extern int _ZNK9QSplitter11handleWidthEv(void);
extern void _ZN9QSplitter14setHandleWidthEi(void);
extern int _ZNK9QSplitter7indexOfEP7QWidget(void);
extern QWidget _ZNK9QSplitter6widgetEi(void);
extern int _ZNK9QSplitter5countEv(void);
extern void _ZNK9QSplitter8getRangeEiPiS0_(void);
extern  _ZNK9QSplitter6handleEi(void);
extern void _ZN9QSplitter16setStretchFactorEii(void);
extern void _ZN9QSplitter13splitterMovedEii(void);
extern  _ZN9QSplitter12createHandleEv(void);
extern void _ZN9QSplitter10childEventEP11QChildEvent(void);
extern bool _ZN9QSplitter5eventEP6QEvent(void);
extern void _ZN9QSplitter11resizeEventEP12QResizeEvent(void);
extern void _ZN9QSplitter11changeEventEP6QEvent(void);
extern void _ZN9QSplitter12moveSplitterEii(void);
extern void _ZN9QSplitter13setRubberBandEi(void);
extern int _ZN9QSplitter20closestLegalPositionEii(void);
extern QSplitter _ZN9QSplitterC2EP7QWidgetPKc(void);
extern QSplitter _ZN9QSplitterC1EP7QWidgetPKc(void);
extern QSplitter _ZN9QSplitterC2EN2Qt11OrientationEP7QWidgetPKc(void);
extern QSplitter _ZN9QSplitterC1EN2Qt11OrientationEP7QWidgetPKc(void);
extern void _ZN9QSplitter13setResizeModeEP7QWidgetNS_10ResizeModeE(void);
extern QTextStream _ZlsR11QTextStreamRK9QSplitter(void);
extern QTextStream _ZrsR11QTextStreamR9QSplitter(void);
extern  _ZN15QSplitterHandleD0Ev(void);
extern  _ZN15QSplitterHandleD1Ev(void);
extern struct QMetaObject _ZN15QSplitterHandle16staticMetaObjectE ;
extern struct QMetaObject _ZNK15QSplitterHandle10metaObjectEv(void);
extern void _ZN15QSplitterHandle11qt_metacastEPKc(void);
extern int _ZN15QSplitterHandle11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QSplitterHandle _ZN15QSplitterHandleC2EN2Qt11OrientationEP9QSplitter(void);
extern QSplitterHandle _ZN15QSplitterHandleC1EN2Qt11OrientationEP9QSplitter(void);
extern void _ZN15QSplitterHandle14setOrientationEN2Qt11OrientationE(void);
extern enum N2Qt11OrientationE _ZNK15QSplitterHandle11orientationEv(void);
extern bool _ZNK15QSplitterHandle12opaqueResizeEv(void);
extern QSplitter _ZNK15QSplitterHandle8splitterEv(void);
extern QSize _ZNK15QSplitterHandle8sizeHintEv(void);
extern void _ZN15QSplitterHandle10paintEventEP11QPaintEvent(void);
extern void _ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent(void);
extern void _ZN15QSplitterHandle15mousePressEventEP11QMouseEvent(void);
extern void _ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent(void);
extern bool _ZN15QSplitterHandle5eventEP6QEvent(void);
extern void _ZN15QSplitterHandle12moveSplitterEi(void);
extern int _ZN15QSplitterHandle20closestLegalPositionEi(void);
// *INDENT-ON*
#endif
