#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QWORKSPACE_H_
#define _QTGUI_QWORKSPACE_H_

class QWorkspace;
// *INDENT-OFF*

class QWorkspace : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QWorkspace(QWidget*);
     ~QWorkspace();
    QWidget * activeWindow() const;
    _Z11QWidgetList windowList(QWorkspace::WindowOrder) const;
    QWidget * addWindow(QWidget*, QFlags<Qt::WindowType>);
    QSize sizeHint() const;
    bool scrollBarsEnabled() const;
    void setScrollBarsEnabled(bool);
     QWorkspace(QWidget*, char const*);
    void setPaletteBackgroundColor(QColor const&);
    void setPaletteBackgroundPixmap(QPixmap const&);
    void setBackground(QBrush const&);
    QBrush background() const;
    void setActiveWindow(QWidget*);
    void cascade();
    void tile();
    void arrangeIcons();
    void closeActiveWindow();
    void closeAllWindows();
    void activateNextWindow();
    void activatePreviousWindow();
protected:
    void windowActivated(QWidget*);
    bool event(QEvent*);
    void paintEvent(QPaintEvent*);
    void changeEvent(QEvent*);
    void childEvent(QChildEvent*);
    void resizeEvent(QResizeEvent*);
    bool eventFilter(QObject*, QEvent*);
    void showEvent(QShowEvent*);
    void hideEvent(QHideEvent*);
    void wheelEvent(QWheelEvent*);
};

enum WindowOrder	
{
CreationOrder = 0,	
StackingOrder = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN10QWorkspace16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
