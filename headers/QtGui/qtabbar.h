#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTABBAR_H_
#define _QTGUI_QTABBAR_H_

class QTabBar;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QTabBar : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTabBar(QWidget*);
     ~QTabBar();
    enum _ZN7QTabBar5ShapeE shape() const;
    void setShape(QTabBar::Shape);
    int addTab(QString const&);
    int addTab(QIcon const&, QString const&);
    int insertTab(int, QString const&);
    int insertTab(int, QIcon const&, QString const&);
    void removeTab(int);
    bool isTabEnabled(int) const;
    void setTabEnabled(int, bool);
    QString tabText(int) const;
    void setTabText(int, QString const&);
    QColor tabTextColor(int) const;
    void setTabTextColor(int, QColor const&);
    QIcon tabIcon(int) const;
    void setTabIcon(int, QIcon const&);
    void setTabToolTip(int, QString const&);
    QString tabToolTip(int) const;
    void setTabWhatsThis(int, QString const&);
    QString tabWhatsThis(int) const;
    void setTabData(int, QVariant const&);
    QVariant tabData(int) const;
    QRect tabRect(int) const;
    int currentIndex() const;
    int count() const;
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    void setDrawBase(bool);
    bool drawBase() const;
    QSize iconSize() const;
    void setIconSize(QSize const&);
    void setCurrentIndex(int);
    void setElideMode(Qt::TextElideMode);
    void setUsesScrollButtons(bool);
    bool usesScrollButtons() const;
    enum _ZN2Qt13TextElideModeE elideMode() const;
protected:
    void currentChanged(int);
    QSize tabSizeHint(int) const;
    void tabInserted(int);
    void tabRemoved(int);
    void tabLayoutChange();
    bool event(QEvent*);
    void resizeEvent(QResizeEvent*);
    void showEvent(QShowEvent*);
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void keyPressEvent(QKeyEvent*);
    void changeEvent(QEvent*);
    void selected(int);
};

enum Shape	
{
RoundedNorth = 0,	
RoundedAbove = 0,	
RoundedSouth = 1,	
RoundedBelow = 1,	
RoundedWest = 2,	
RoundedEast = 3,	
TriangularNorth = 4,	
TriangularAbove = 4,	
TriangularSouth = 5,	
TriangularBelow = 5,	
TriangularWest = 6,	
TriangularEast = 7
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN7QTabBar16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
