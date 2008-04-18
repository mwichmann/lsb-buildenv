#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSCROLLAREA_H_
#define _QTGUI_QSCROLLAREA_H_

class QScrollArea;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QScrollArea : public QAbstractScrollArea
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QScrollArea(QWidget*);
     ~QScrollArea();
    QWidget * widget() const;
    void setWidget(QWidget*);
    QWidget * takeWidget();
    bool widgetResizable() const;
    void setWidgetResizable(bool);
    QSize sizeHint() const;
    bool focusNextPrevChild(bool);
    void ensureVisible(int, int, int, int);
     QScrollArea(QScrollAreaPrivate&, QWidget*);
    void setAlignment(QFlags<Qt::AlignmentFlag>);
    void ensureWidgetVisible(QWidget*, int, int);
     alignment() const;
protected:
    bool event(QEvent*);
    bool eventFilter(QObject*, QEvent*);
    void resizeEvent(QResizeEvent*);
    void scrollContentsBy(int, int);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QScrollArea16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
