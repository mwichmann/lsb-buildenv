#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QGRIDLAYOUT_H_
#define _QTGUI_QGRIDLAYOUT_H_

class QGridLayout;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QGridLayout : public QLayout
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QGridLayout(QWidget*);
     QGridLayout();
     QGridLayout(QWidget*, int, int, int, int, char const*);
     QGridLayout(int, int, int, char const*);
     QGridLayout(QLayout*, int, int, int, char const*);
     ~QGridLayout();
    QSize sizeHint() const;
    QSize minimumSize() const;
    QSize maximumSize() const;
    void setRowStretch(int, int);
    void setColumnStretch(int, int);
    int rowStretch(int) const;
    int columnStretch(int) const;
    void setRowMinimumHeight(int, int);
    void setColumnMinimumWidth(int, int);
    int rowMinimumHeight(int) const;
    int columnMinimumWidth(int) const;
    int columnCount() const;
    int rowCount() const;
    QRect cellRect(int, int) const;
    bool hasHeightForWidth() const;
    int heightForWidth(int) const;
    int minimumHeightForWidth(int) const;
     expandingDirections() const;
    void invalidate();
    void addWidget(QWidget*, int, int, QFlags<Qt::AlignmentFlag>);
    void addWidget(QWidget*, int, int, int, int, QFlags<Qt::AlignmentFlag>);
    void addLayout(QLayout*, int, int, QFlags<Qt::AlignmentFlag>);
    void addLayout(QLayout*, int, int, int, int, QFlags<Qt::AlignmentFlag>);
    void setOriginCorner(Qt::Corner);
    enum _ZN2Qt6CornerE originCorner() const;
    QLayoutItem * itemAt(int) const;
    QLayoutItem * takeAt(int);
    int count() const;
    void setGeometry(QRect const&);
    void addItem(QLayoutItem*, int, int, int, int, QFlags<Qt::AlignmentFlag>);
    void setDefaultPositioning(int, Qt::Orientation);
    void getItemPosition(int, int*, int*, int*, int*);
    void expand(int, int);
protected:
    bool findWidget(QWidget*, int*, int*);
    void addItem(QLayoutItem*);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QGridLayout16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
