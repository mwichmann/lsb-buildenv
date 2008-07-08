#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QMENUBAR_H_
#define _QTGUI_QMENUBAR_H_

class QMenuBar;
// *INDENT-OFF*

class QMenuBar : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QMenuBar(QWidget*);
     ~QMenuBar();
    QAction * addAction(QString const&);
    QAction * addAction(QString const&, QObject const*, char const*);
    QAction * addMenu(QMenu*);
    QMenu * addMenu(QString const&);
    QMenu * addMenu(QIcon const&, QString const&);
    QAction * addSeparator();
    QAction * insertMenu(QAction*, QMenu*);
    void clear();
    QAction * activeAction() const;
    void setActiveAction(QAction*);
    void setDefaultUp(bool);
    bool isDefaultUp() const;
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    int heightForWidth(int) const;
    QRect actionGeometry(QAction*) const;
    QAction * actionAt(QPoint const&) const;
    void setCornerWidget(QWidget*, Qt::Corner);
    QWidget * cornerWidget(Qt::Corner) const;
     QMenuBar(QWidget*, char const*);
    int insertSeparator(int);
    bool setItemParameter(int, int);
    int itemParameter(int) const;
    int frameWidth() const;
    void setAutoGeometry(bool);
    bool autoGeometry() const;
    QAction * insertSeparator(QAction*);
protected:
    void triggered(QAction*);
    void hovered(QAction*);
    void changeEvent(QEvent*);
    void keyPressEvent(QKeyEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void leaveEvent(QEvent*);
    void paintEvent(QPaintEvent*);
    void resizeEvent(QResizeEvent*);
    void actionEvent(QActionEvent*);
    void focusOutEvent(QFocusEvent*);
    void focusInEvent(QFocusEvent*);
    bool eventFilter(QObject*, QEvent*);
    bool event(QEvent*);
    void activated(int);
    void highlighted(int);
};

enum Separator	
{
Never = 0,	
InWindowsStyle = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN8QMenuBar16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
