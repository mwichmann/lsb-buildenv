#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFRAME_H_
#define _QTGUI_QFRAME_H_

class QFrame;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QFrame : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QFrame(QWidget*, QFlags<Qt::WindowType>);
     ~QFrame();
    int frameStyle() const;
    void setFrameStyle(int);
    int frameWidth() const;
    QSize sizeHint() const;
    enum _ZN6QFrame5ShapeE frameShape() const;
    void setFrameShape(QFrame::Shape);
    enum _ZN6QFrame6ShadowE frameShadow() const;
    void setFrameShadow(QFrame::Shadow);
    int lineWidth() const;
    void setLineWidth(int);
    int midLineWidth() const;
    void setMidLineWidth(int);
    QRect frameRect() const;
    void setFrameRect(QRect const&);
     QFrame(QWidget*, char const*, QFlags<Qt::WindowType>);
protected:
    bool event(QEvent*);
    void paintEvent(QPaintEvent*);
    void changeEvent(QEvent*);
    void drawFrame(QPainter*);
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

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN6QFrame16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
