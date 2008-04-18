#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QABSTRACTSCROLLAREA_H_
#define _QTGUI_QABSTRACTSCROLLAREA_H_

class QAbstractScrollArea;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QAbstractScrollArea : public QFrame
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractScrollArea(QWidget*);
     ~QAbstractScrollArea();
    enum _ZN2Qt15ScrollBarPolicyE verticalScrollBarPolicy() const;
    void setVerticalScrollBarPolicy(Qt::ScrollBarPolicy);
    QScrollBar * verticalScrollBar() const;
    enum _ZN2Qt15ScrollBarPolicyE horizontalScrollBarPolicy() const;
    void setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy);
    QScrollBar * horizontalScrollBar() const;
    QWidget * viewport() const;
    QSize maximumViewportSize() const;
    QSize minimumSizeHint() const;
    QSize sizeHint() const;
     QAbstractScrollArea(QAbstractScrollAreaPrivate&, QWidget*);
    void setViewport(QWidget*);
    void setCornerWidget(QWidget*);
    _Z11QWidgetList scrollBarWidgets(QFlags<Qt::AlignmentFlag>);
    void addScrollBarWidget(QWidget*, QFlags<Qt::AlignmentFlag>);
    void setVerticalScrollBar(QScrollBar*);
    void setHorizontalScrollBar(QScrollBar*);
    QWidget * cornerWidget() const;
protected:
    void setViewportMargins(int, int, int, int);
    bool event(QEvent*);
    bool viewportEvent(QEvent*);
    void resizeEvent(QResizeEvent*);
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseDoubleClickEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void wheelEvent(QWheelEvent*);
    void contextMenuEvent(QContextMenuEvent*);
    void dragEnterEvent(QDragEnterEvent*);
    void dragMoveEvent(QDragMoveEvent*);
    void dragLeaveEvent(QDragLeaveEvent*);
    void dropEvent(QDropEvent*);
    void keyPressEvent(QKeyEvent*);
    void scrollContentsBy(int, int);
    void setupViewport(QWidget*);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN19QAbstractScrollArea16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
