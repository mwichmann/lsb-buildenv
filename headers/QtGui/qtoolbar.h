#ifndef _QTGUI_QTOOLBAR_H_
#define _QTGUI_QTOOLBAR_H_

class QToolBar;
// *INDENT-OFF*

class QToolBar : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QToolBar(QString const&, QWidget*);
     QToolBar(QWidget*);
     ~QToolBar();
    void setMovable(bool);
    bool isMovable() const;
    void setAllowedAreas(QFlags<Qt::ToolBarArea>);
     allowedAreas() const;
    void setOrientation(Qt::Orientation);
    enum _ZN2Qt11OrientationE orientation() const;
    void clear();
    QAction * addAction(QString const&);
    QAction * addAction(QIcon const&, QString const&);
    QAction * addAction(QString const&, QObject const*, char const*);
    QAction * addAction(QIcon const&, QString const&, QObject const*, char const*);
    QAction * addSeparator();
    QAction * insertSeparator(QAction*);
    QAction * addWidget(QWidget*);
    QAction * insertWidget(QAction*, QWidget*);
    QRect actionGeometry(QAction*) const;
    QAction * actionAt(QPoint const&) const;
    QAction * toggleViewAction() const;
    QSize iconSize() const;
    enum _ZN2Qt15ToolButtonStyleE toolButtonStyle() const;
    void setIconSize(QSize const&);
    void setToolButtonStyle(Qt::ToolButtonStyle);
     QToolBar(QWidget*, char const*);
    QWidget * widgetForAction(QAction*) const;
protected:
    void actionTriggered(QAction*);
    void movableChanged(bool);
    void allowedAreasChanged(QFlags<Qt::ToolBarArea>);
    void orientationChanged(Qt::Orientation);
    void iconSizeChanged(QSize const&);
    void toolButtonStyleChanged(Qt::ToolButtonStyle);
    void actionEvent(QActionEvent*);
    void changeEvent(QEvent*);
    void childEvent(QChildEvent*);
    void paintEvent(QPaintEvent*);
    void resizeEvent(QResizeEvent*);
    bool event(QEvent*);
};


extern struct QMetaObject _ZN8QToolBar16staticMetaObjectE ;
// *INDENT-ON*
#endif
