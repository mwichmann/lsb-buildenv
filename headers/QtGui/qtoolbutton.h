#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTOOLBUTTON_H_
#define _QTGUI_QTOOLBUTTON_H_

class QToolButton;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QToolButton : public QAbstractButton
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QToolButton(QWidget*);
     ~QToolButton();
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    enum _ZN2Qt15ToolButtonStyleE toolButtonStyle() const;
    enum _ZN2Qt9ArrowTypeE arrowType() const;
    void setArrowType(Qt::ArrowType);
    void setMenu(QMenu*);
    QMenu * menu() const;
    void setPopupMode(QToolButton::ToolButtonPopupMode);
    enum _ZN11QToolButton19ToolButtonPopupModeE popupMode() const;
    QAction * defaultAction() const;
    void setAutoRaise(bool);
    bool autoRaise() const;
    void showMenu();
    void setToolButtonStyle(Qt::ToolButtonStyle);
    void setDefaultAction(QAction*);
     QToolButton(QToolButtonPrivate&, QWidget*);
     QToolButton(QWidget*, char const*);
     QToolButton(Qt::ArrowType, QWidget*, char const*);
     QToolButton(QIcon const&, QString const&, QString const&, QObject*, char const*, QWidget*, char const*);
    void setOnIconSet(QIcon const&);
    void setOffIconSet(QIcon const&);
    void setIconSet(QIcon const&, bool);
    QIcon onIconSet() const;
    QIcon offIconSet() const;
    QIcon iconSet(bool) const;
    void setPopupDelay(int);
    int popupDelay() const;
protected:
    void triggered(QAction*);
    bool event(QEvent*);
    void mousePressEvent(QMouseEvent*);
    void paintEvent(QPaintEvent*);
    void actionEvent(QActionEvent*);
    void enterEvent(QEvent*);
    void leaveEvent(QEvent*);
    void timerEvent(QTimerEvent*);
    void changeEvent(QEvent*);
    void nextCheckState();
    void mouseReleaseEvent(QMouseEvent*);
    bool hitButton(QPoint const&) const;
};

enum ToolButtonPopupMode	
{
DelayedPopup = 0,	
MenuButtonPopup = 1,	
InstantPopup = 2
}
;

enum TextPosition	
{
BesideIcon = 0,	
Right = 0,	
BelowIcon = 1,	
Under = 1
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QToolButton16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
