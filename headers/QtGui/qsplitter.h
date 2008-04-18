#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSPLITTER_H_
#define _QTGUI_QSPLITTER_H_

class QSplitter;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSplitter : public QFrame
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSplitter(QWidget*);
     QSplitter(Qt::Orientation, QWidget*);
     ~QSplitter();
    void addWidget(QWidget*);
    void insertWidget(int, QWidget*);
    void setOrientation(Qt::Orientation);
    enum _ZN2Qt11OrientationE orientation() const;
    void setChildrenCollapsible(bool);
    bool childrenCollapsible() const;
    void setCollapsible(int, bool);
    bool isCollapsible(int) const;
    void setOpaqueResize(bool);
    bool opaqueResize() const;
    void refresh();
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    QList<int> sizes() const;
    void setSizes(QList<int> const&);
    QByteArray saveState() const;
    bool restoreState(QByteArray const&);
    int handleWidth() const;
    void setHandleWidth(int);
    int indexOf(QWidget*) const;
    QWidget * widget(int) const;
    int count() const;
    void getRange(int, int*, int*) const;
     handle(int) const;
    void setStretchFactor(int, int);
     QSplitter(QWidget*, char const*);
     QSplitter(Qt::Orientation, QWidget*, char const*);
    void setResizeMode(QWidget*, QSplitter::ResizeMode);
protected:
    void splitterMoved(int, int);
     createHandle();
    void childEvent(QChildEvent*);
    bool event(QEvent*);
    void resizeEvent(QResizeEvent*);
    void changeEvent(QEvent*);
    void moveSplitter(int, int);
    void setRubberBand(int);
    int closestLegalPosition(int, int);
};

enum ResizeMode	
{
Stretch = 0,	
KeepSize = 1,	
FollowSizeHint = 2,	
Auto = 3
}
;

class QSplitterHandle : public QWidget
{
private:
public:
     ~QSplitterHandle();
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSplitterHandle(Qt::Orientation, QSplitter*);
    void setOrientation(Qt::Orientation);
    enum _ZN2Qt11OrientationE orientation() const;
    bool opaqueResize() const;
    QSplitter * splitter() const;
    QSize sizeHint() const;
protected:
    void paintEvent(QPaintEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    bool event(QEvent*);
    void moveSplitter(int);
    int closestLegalPosition(int);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN15QSplitterHandle16staticMetaObjectE ;
extern struct QMetaObject _ZN9QSplitter16staticMetaObjectE ;
extern QTextStream _ZlsR11QTextStreamRK9QSplitter(QTextStream &, const QSplitter &);
extern QTextStream _ZrsR11QTextStreamR9QSplitter(QTextStream &, QSplitter &);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
