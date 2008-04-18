#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QITEMDELEGATE_H_
#define _QTGUI_QITEMDELEGATE_H_

class QItemDelegate;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QItemDelegate : public QAbstractItemDelegate
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QItemDelegate(QObject*);
     ~QItemDelegate();
    void paint(QPainter*, QStyleOptionViewItem const&, QModelIndex const&) const;
    QSize sizeHint(QStyleOptionViewItem const&, QModelIndex const&) const;
    QWidget * createEditor(QWidget*, QStyleOptionViewItem const&, QModelIndex const&) const;
    void setEditorData(QWidget*, QModelIndex const&) const;
    void setModelData(QWidget*, QAbstractItemModel*, QModelIndex const&) const;
    void updateEditorGeometry(QWidget*, QStyleOptionViewItem const&, QModelIndex const&) const;
    QItemEditorFactory * itemEditorFactory() const;
    void setItemEditorFactory(QItemEditorFactory*);
    void setClipping(bool);
    bool hasClipping() const;
protected:
    void drawDisplay(QPainter*, QStyleOptionViewItem const&, QRect const&, QString const&) const;
    void drawDecoration(QPainter*, QStyleOptionViewItem const&, QRect const&, QPixmap const&) const;
    void drawFocus(QPainter*, QStyleOptionViewItem const&, QRect const&) const;
    void drawCheck(QPainter*, QStyleOptionViewItem const&, QRect const&, Qt::CheckState) const;
    void doLayout(QStyleOptionViewItem const&, QRect*, QRect*, QRect*, bool) const;
    QPixmap decoration(QStyleOptionViewItem const&, QVariant const&) const;
    QPixmap * selected(QPixmap const&, QPalette const&, bool) const;
    QRect check(QStyleOptionViewItem const&, QRect const&, QVariant const&) const;
    bool eventFilter(QObject*, QEvent*);
    bool editorEvent(QEvent*, QAbstractItemModel*, QStyleOptionViewItem const&, QModelIndex const&);
    QStyleOptionViewItem setOptions(QModelIndex const&, QStyleOptionViewItem const&) const;
    QRect textRectangle(QPainter*, QRect const&, QFont const&, QString const&) const;
    void drawBackground(QPainter*, QStyleOptionViewItem const&, QModelIndex const&) const;
    QRect rect(QStyleOptionViewItem const&, QModelIndex const&, int) const;
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN13QItemDelegate16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
