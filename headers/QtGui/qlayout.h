#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QLAYOUT_H_
#define _QTGUI_QLAYOUT_H_

class QLayout;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QLayoutIterator
{
private:
public:
};

class QLayout : public QLayoutItem, public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QLayout(QWidget*);
     QLayout();
     ~QLayout();
    int margin() const;
    int spacing() const;
    void setMargin(int);
    void setSpacing(int);
    bool setAlignment(QWidget*, QFlags<Qt::AlignmentFlag>);
    bool setAlignment(QLayout*, QFlags<Qt::AlignmentFlag>);
    void setSizeConstraint(QLayout::SizeConstraint);
    enum _ZN7QLayout14SizeConstraintE sizeConstraint() const;
    void setMenuBar(QWidget*);
    QWidget * menuBar() const;
    QWidget * parentWidget() const;
    void invalidate();
    QRect geometry() const;
    bool activate();
    void update();
    void addWidget(QWidget*);
    void removeWidget(QWidget*);
    void removeItem(QLayoutItem*);
     expandingDirections() const;
    QSize minimumSize() const;
    QSize maximumSize() const;
    int indexOf(QWidget*) const;
    bool isEmpty() const;
    int totalHeightForWidth(int) const;
    QSize totalMinimumSize() const;
    QSize totalMaximumSize() const;
    QSize totalSizeHint() const;
    QLayout * layout();
    void setEnabled(bool);
    bool isEnabled() const;
    void freeze(int, int);
    bool isTopLevel() const;
    QSize closestAcceptableSize(QWidget const*, QSize const&);
     QLayout(QWidget*, int, int, char const*);
     QLayout(QLayout*, int, char const*);
     QLayout(int, char const*);
    void setAutoAdd(bool);
    bool autoAdd() const;
    void setGeometry(QRect const&);
protected:
    void widgetEvent(QEvent*);
    void childEvent(QChildEvent*);
    void addChildLayout(QLayout*);
    void addChildWidget(QWidget*);
    void deleteAllItems();
    QRect alignmentRect(QRect const&) const;
};

enum SizeConstraint	
{
SetDefaultConstraint = 0,	
Auto = 0,	
SetNoConstraint = 1,	
FreeResize = 1,	
SetMinimumSize = 2,	
Minimum = 2,	
SetFixedSize = 3,	
Fixed = 3,	
SetMaximumSize = 4,	
SetMinAndMaxSize = 5
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN7QLayout16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
