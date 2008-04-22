#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QABSTRACTITEMDELEGATE_H_
#define _QTGUI_QABSTRACTITEMDELEGATE_H_

class QAbstractItemDelegate;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QAbstractItemDelegate : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractItemDelegate(QObject*);
     ~QAbstractItemDelegate();
    QWidget * createEditor(QWidget*, QStyleOptionViewItem const&, QModelIndex const&) const;
    void setEditorData(QWidget*, QModelIndex const&) const;
    void setModelData(QWidget*, QAbstractItemModel*, QModelIndex const&) const;
    void updateEditorGeometry(QWidget*, QStyleOptionViewItem const&, QModelIndex const&) const;
    bool editorEvent(QEvent*, QAbstractItemModel*, QStyleOptionViewItem const&, QModelIndex const&);
    QString elidedText(QFontMetrics const&, int, Qt::TextElideMode, QString const&);
     QAbstractItemDelegate(QObjectPrivate&, QObject*);
protected:
    void commitData(QWidget*);
    void closeEditor(QWidget*, QAbstractItemDelegate::EndEditHint);
};

enum EndEditHint	
{
NoHint = 0,	
EditNextItem = 1,	
EditPreviousItem = 2,	
SubmitModelCache = 3,	
RevertModelCache = 4
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN21QAbstractItemDelegate16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
