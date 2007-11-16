#ifndef _QTGUI_QPROGRESSBAR_H_
#define _QTGUI_QPROGRESSBAR_H_

class QProgressBar;
// *INDENT-OFF*




class QProgressBar : public QWidget
{
private:
public:
};

enum Direction	
{
TopToBottom = 0,	
BottomToTop = 1
}
;


extern  _ZN12QProgressBarD0Ev(void);
extern  _ZN12QProgressBarD1Ev(void);
extern struct QMetaObject _ZN12QProgressBar16staticMetaObjectE ;
extern struct QMetaObject _ZNK12QProgressBar10metaObjectEv(void);
extern void _ZN12QProgressBar11qt_metacastEPKc(void);
extern int _ZN12QProgressBar11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QProgressBar _ZN12QProgressBarC2EP7QWidget(void);
extern QProgressBar _ZN12QProgressBarC1EP7QWidget(void);
extern int _ZNK12QProgressBar7minimumEv(void);
extern int _ZNK12QProgressBar7maximumEv(void);
extern void _ZN12QProgressBar8setRangeEii(void);
extern int _ZNK12QProgressBar5valueEv(void);
extern QString _ZNK12QProgressBar4textEv(void);
extern void _ZN12QProgressBar14setTextVisibleEb(void);
extern bool _ZNK12QProgressBar13isTextVisibleEv(void);
extern N2Qt9AlignmentE _ZNK12QProgressBar9alignmentEv(void);
extern void _ZN12QProgressBar12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void);
extern QSize _ZNK12QProgressBar8sizeHintEv(void);
extern QSize _ZNK12QProgressBar15minimumSizeHintEv(void);
extern enum N2Qt11OrientationE _ZNK12QProgressBar11orientationEv(void);
extern void _ZN12QProgressBar21setInvertedAppearanceEb(void);
extern bool _ZN12QProgressBar18invertedAppearanceEv(void);
extern void _ZN12QProgressBar16setTextDirectionENS_9DirectionE(void);
extern enum N12QProgressBar9DirectionE _ZN12QProgressBar13textDirectionEv(void);
extern void _ZN12QProgressBar5resetEv(void);
extern void _ZN12QProgressBar10setMinimumEi(void);
extern void _ZN12QProgressBar10setMaximumEi(void);
extern void _ZN12QProgressBar8setValueEi(void);
extern void _ZN12QProgressBar14setOrientationEN2Qt11OrientationE(void);
extern void _ZN12QProgressBar12valueChangedEi(void);
extern bool _ZN12QProgressBar5eventEP6QEvent(void);
extern void _ZN12QProgressBar10paintEventEP11QPaintEvent(void);
// *INDENT-ON*
#endif
