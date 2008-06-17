#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QABSTRACTSLIDER_H_
#define _QTGUI_QABSTRACTSLIDER_H_

class QAbstractSlider;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QAbstractSlider : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractSlider(QWidget*);
     ~QAbstractSlider();
    enum _ZN2Qt11OrientationE orientation() const;
    void setMinimum(int);
    int minimum() const;
    void setMaximum(int);
    int maximum() const;
    void setRange(int, int);
    void setSingleStep(int);
    int singleStep() const;
    void setPageStep(int);
    int pageStep() const;
    void setTracking(bool);
    bool hasTracking() const;
    void setSliderDown(bool);
    bool isSliderDown() const;
    void setSliderPosition(int);
    int sliderPosition() const;
    void setInvertedAppearance(bool);
    bool invertedAppearance() const;
    void setInvertedControls(bool);
    bool invertedControls() const;
    int value() const;
    void triggerAction(QAbstractSlider::SliderAction);
    void setValue(int);
    void setOrientation(Qt::Orientation);
protected:
    void valueChanged(int);
    void sliderPressed();
    void sliderMoved(int);
    void sliderReleased();
    void rangeChanged(int, int);
    void actionTriggered(int);
    bool event(QEvent*);
    void setRepeatAction(QAbstractSlider::SliderAction, int, int);
    enum _ZN15QAbstractSlider12SliderActionE repeatAction() const;
    void sliderChange(QAbstractSlider::SliderChange);
    void keyPressEvent(QKeyEvent*);
    void timerEvent(QTimerEvent*);
    void wheelEvent(QWheelEvent*);
    void changeEvent(QEvent*);
};

enum SliderAction	
{
SliderNoAction = 0,	
SliderSingleStepAdd = 1,	
SliderSingleStepSub = 2,	
SliderPageStepAdd = 3,	
SliderPageStepSub = 4,	
SliderToMinimum = 5,	
SliderToMaximum = 6,	
SliderMove = 7
}
;

enum SliderChange	
{
SliderRangeChange = 0,	
SliderOrientationChange = 1,	
SliderStepsChange = 2,	
SliderValueChange = 3
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN15QAbstractSlider16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
