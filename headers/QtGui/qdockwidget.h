#ifndef _QTGUI_QDOCKWIDGET_H_
#define _QTGUI_QDOCKWIDGET_H_

class QDockWidget;
// *INDENT-OFF*

typedef class QFlags<QDockWidget::DockWidgetFeature>
{
private:
public:
}DockWidgetFeatures	
;

class QDockWidget : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QDockWidget(QString const&, QWidget*, QFlags<Qt::WindowType>);
     QDockWidget(QWidget*, QFlags<Qt::WindowType>);
     ~QDockWidget();
    QWidget * widget() const;
    void setWidget(QWidget*);
    void setFeatures(QFlags<QDockWidget::DockWidgetFeature>);
    QFlags<QDockWidget::DockWidgetFeature> features() const;
    void setFloating(bool);
    void setAllowedAreas(QFlags<Qt::DockWidgetArea>);
     allowedAreas() const;
    QAction * toggleViewAction() const;
protected:
    void featuresChanged(QFlags<QDockWidget::DockWidgetFeature>);
    void topLevelChanged(bool);
    void allowedAreasChanged(QFlags<Qt::DockWidgetArea>);
    void changeEvent(QEvent*);
    void closeEvent(QCloseEvent*);
    void paintEvent(QPaintEvent*);
    bool event(QEvent*);
};

enum DockWidgetFeature	
{
NoDockWidgetFeatures = 0,	
DockWidgetClosable = 1,	
DockWidgetMovable = 2,	
DockWidgetFloatable = 4,	
DockWidgetFeatureMask = 7,	
AllDockWidgetFeatures = 7,	
Reserved = 255
}
;

class QFlags<QDockWidget::DockWidgetFeature>
{
private:
public:
};


extern struct QMetaObject _ZN11QDockWidget16staticMetaObjectE ;
// *INDENT-ON*
#endif
