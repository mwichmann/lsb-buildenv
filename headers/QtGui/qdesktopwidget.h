#ifndef _QTGUI_QDESKTOPWIDGET_H_
#define _QTGUI_QDESKTOPWIDGET_H_

class QDesktopWidget;
// *INDENT-OFF*

class QDesktopWidget : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QDesktopWidget();
     ~QDesktopWidget();
    bool isVirtualDesktop() const;
    int numScreens() const;
    int primaryScreen() const;
    int screenNumber(QWidget const*) const;
    int screenNumber(QPoint const&) const;
    QWidget * screen(int);
    const QRect screenGeometry(int) const;
    const QRect availableGeometry(int) const;
protected:
    void resized(int);
    void workAreaResized(int);
    void resizeEvent(QResizeEvent*);
};


extern struct QMetaObject _ZN14QDesktopWidget16staticMetaObjectE ;
// *INDENT-ON*
#endif
