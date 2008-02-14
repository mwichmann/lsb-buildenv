#ifndef _QTGUI_QBOXLAYOUT_H_
#define _QTGUI_QBOXLAYOUT_H_

class QBoxLayout;
// *INDENT-OFF*

class QBoxLayout : public QLayout
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QBoxLayout(QBoxLayout::Direction, QWidget*);
     QBoxLayout(QWidget*, QBoxLayout::Direction, int, int, char const*);
     QBoxLayout(QLayout*, QBoxLayout::Direction, int, char const*);
     QBoxLayout(QBoxLayout::Direction, int, char const*);
     ~QBoxLayout();
    enum _ZN10QBoxLayout9DirectionE direction() const;
    void setDirection(QBoxLayout::Direction);
    void addSpacing(int);
    void addStretch(int);
    void addWidget(QWidget*, int, QFlags<Qt::AlignmentFlag>);
    void addLayout(QLayout*, int);
    void addStrut(int);
    void addItem(QLayoutItem*);
    void insertSpacing(int, int);
    void insertStretch(int, int);
    void insertWidget(int, QWidget*, int, QFlags<Qt::AlignmentFlag>);
    void insertLayout(int, QLayout*, int);
    bool setStretchFactor(QWidget*, int);
    bool setStretchFactor(QLayout*, int);
    QSize sizeHint() const;
    QSize minimumSize() const;
    QSize maximumSize() const;
    bool hasHeightForWidth() const;
    int heightForWidth(int) const;
    int minimumHeightForWidth(int) const;
     expandingDirections() const;
    void invalidate();
    QLayoutItem * itemAt(int) const;
    QLayoutItem * takeAt(int);
    int count() const;
    void setGeometry(QRect const&);
protected:
    void insertItem(int, QLayoutItem*);
};

enum Direction	
{
LeftToRight = 0,	
RightToLeft = 1,	
TopToBottom = 2,	
Down = 2,	
BottomToTop = 3,	
Up = 3
}
;

class QHBoxLayout : public QBoxLayout
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QHBoxLayout();
     QHBoxLayout(QWidget*);
     ~QHBoxLayout();
     QHBoxLayout(QWidget*, int, int, char const*);
     QHBoxLayout(QLayout*, int, char const*);
     QHBoxLayout(int, char const*);
};

class QVBoxLayout : public QBoxLayout
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QVBoxLayout();
     QVBoxLayout(QWidget*);
     ~QVBoxLayout();
     QVBoxLayout(QWidget*, int, int, char const*);
     QVBoxLayout(QLayout*, int, char const*);
     QVBoxLayout(int, char const*);
};


extern struct QMetaObject _ZN10QBoxLayout16staticMetaObjectE ;
extern struct QMetaObject _ZN11QHBoxLayout16staticMetaObjectE ;
extern struct QMetaObject _ZN11QVBoxLayout16staticMetaObjectE ;
// *INDENT-ON*
#endif
