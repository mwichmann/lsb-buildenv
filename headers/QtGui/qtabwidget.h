#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTABWIDGET_H_
#define _QTGUI_QTABWIDGET_H_

class QTabWidget;
// *INDENT-OFF*

class QTabWidget : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTabWidget(QWidget*);
     ~QTabWidget();
    int addTab(QWidget*, QString const&);
    int addTab(QWidget*, QIcon const&, QString const&);
    int insertTab(int, QWidget*, QString const&);
    int insertTab(int, QWidget*, QIcon const&, QString const&);
    void removeTab(int);
    bool isTabEnabled(int) const;
    void setTabEnabled(int, bool);
    QString tabText(int) const;
    void setTabText(int, QString const&);
    QIcon tabIcon(int) const;
    void setTabIcon(int, QIcon const&);
    void setTabToolTip(int, QString const&);
    QString tabToolTip(int) const;
    void setTabWhatsThis(int, QString const&);
    QString tabWhatsThis(int) const;
    int currentIndex() const;
    QWidget * currentWidget() const;
    QWidget * widget(int) const;
    int indexOf(QWidget*) const;
    int count() const;
    enum _ZN10QTabWidget11TabPositionE tabPosition() const;
    void setTabPosition(QTabWidget::TabPosition);
    enum _ZN10QTabWidget8TabShapeE tabShape() const;
    void setTabShape(QTabWidget::TabShape);
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    void setCornerWidget(QWidget*, Qt::Corner);
    QWidget * cornerWidget(Qt::Corner) const;
    void setCurrentIndex(int);
    void setCurrentWidget(QWidget*);
     QTabWidget(QWidget*, char const*, QFlags<Qt::WindowType>);
    void setIconSize(QSize const&);
    void setElideMode(Qt::TextElideMode);
    void setUsesScrollButtons(bool);
    bool usesScrollButtons() const;
    QSize iconSize() const;
    enum _ZN2Qt13TextElideModeE elideMode() const;
protected:
    void currentChanged(int);
    void tabInserted(int);
    void tabRemoved(int);
    void showEvent(QShowEvent*);
    void resizeEvent(QResizeEvent*);
    void keyPressEvent(QKeyEvent*);
    void paintEvent(QPaintEvent*);
    void setTabBar(QTabBar*);
    QTabBar * tabBar() const;
    void changeEvent(QEvent*);
    bool event(QEvent*);
    void currentChanged(QWidget*);
    void selected(QString const&);
};

enum TabPosition	
{
North = 0,	
Top = 0,	
South = 1,	
Bottom = 1,	
West = 2,	
East = 3
}
;

enum TabShape	
{
Rounded = 0,	
Triangular = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN10QTabWidget16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
