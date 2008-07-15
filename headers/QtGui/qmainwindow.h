#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QMAINWINDOW_H_
#define _QTGUI_QMAINWINDOW_H_

class QMainWindow;
// *INDENT-OFF*

class QMainWindow : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QMainWindow(QWidget*, QFlags<Qt::WindowType>);
     ~QMainWindow();
    QSize iconSize() const;
    void setIconSize(QSize const&);
    enum _ZN2Qt15ToolButtonStyleE toolButtonStyle() const;
    void setToolButtonStyle(Qt::ToolButtonStyle);
    QMenuBar * menuBar() const;
    void setMenuBar(QMenuBar*);
    QStatusBar * statusBar() const;
    void setStatusBar(QStatusBar*);
    QWidget * centralWidget() const;
    void setCentralWidget(QWidget*);
    void setCorner(Qt::Corner, Qt::DockWidgetArea);
    enum _ZN2Qt14DockWidgetAreaE corner(Qt::Corner) const;
    void addToolBarBreak(Qt::ToolBarArea);
    void insertToolBarBreak(QToolBar*);
    void addToolBar(Qt::ToolBarArea, QToolBar*);
    void addToolBar(QToolBar*);
    QToolBar * addToolBar(QString const&);
    void insertToolBar(QToolBar*, QToolBar*);
    void removeToolBar(QToolBar*);
    enum _ZN2Qt11ToolBarAreaE toolBarArea(QToolBar*) const;
    void addDockWidget(Qt::DockWidgetArea, QDockWidget*);
    void addDockWidget(Qt::DockWidgetArea, QDockWidget*, Qt::Orientation);
    void splitDockWidget(QDockWidget*, QDockWidget*, Qt::Orientation);
    void removeDockWidget(QDockWidget*);
    enum _ZN2Qt14DockWidgetAreaE dockWidgetArea(QDockWidget*) const;
    QByteArray saveState(int) const;
    bool restoreState(QByteArray const&, int);
    QMenu * createPopupMenu();
     QMainWindow(QWidget*, char const*, QFlags<Qt::WindowType>);
    void setAnimated(bool);
    void setMenuWidget(QWidget*);
    void tabifyDockWidget(QDockWidget*, QDockWidget*);
    void setDockNestingEnabled(bool);
    bool isAnimated() const;
    QWidget * menuWidget() const;
    bool isSeparator(QPoint const&) const;
    bool isDockNestingEnabled() const;
protected:
    void iconSizeChanged(QSize const&);
    void toolButtonStyleChanged(Qt::ToolButtonStyle);
    void contextMenuEvent(QContextMenuEvent*);
    bool event(QEvent*);
};


/* Function prototypes */

extern struct QMetaObject _ZN11QMainWindow16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
