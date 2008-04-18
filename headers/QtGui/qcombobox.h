#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCOMBOBOX_H_
#define _QTGUI_QCOMBOBOX_H_

class QComboBox;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef enum InsertPolicy	
{
NoInsert = 0,	
NoInsertion = 0,	
InsertAtTop = 1,	
AtTop = 1,	
InsertAtCurrent = 2,	
AtCurrent = 2,	
InsertAtBottom = 3,	
AtBottom = 3,	
InsertAfterCurrent = 4,	
AfterCurrent = 4,	
InsertBeforeCurrent = 5,	
BeforeCurrent = 5
}
Policy	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QComboBox : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QComboBox(QWidget*);
     ~QComboBox();
    int maxVisibleItems() const;
    void setMaxVisibleItems(int);
    int count() const;
    void setMaxCount(int);
    int maxCount() const;
    bool autoCompletion() const;
    void setAutoCompletion(bool);
    enum _ZN2Qt15CaseSensitivityE autoCompletionCaseSensitivity() const;
    void setAutoCompletionCaseSensitivity(Qt::CaseSensitivity);
    bool duplicatesEnabled() const;
    void setDuplicatesEnabled(bool);
    void setFrame(bool);
    bool hasFrame() const;
    int findData(QVariant const&, int, QFlags<Qt::MatchFlag>) const;
    enum _ZN9QComboBox12InsertPolicyE insertPolicy() const;
    void setInsertPolicy(QComboBox::InsertPolicy);
    enum _ZN9QComboBox16SizeAdjustPolicyE sizeAdjustPolicy() const;
    void setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy);
    int minimumContentsLength() const;
    void setMinimumContentsLength(int);
    QSize iconSize() const;
    void setIconSize(QSize const&);
    bool isEditable() const;
    void setEditable(bool);
    void setLineEdit(QLineEdit*);
    QLineEdit * lineEdit() const;
    void setValidator(QValidator const*);
    const QValidator * validator() const;
    QAbstractItemDelegate * itemDelegate() const;
    void setItemDelegate(QAbstractItemDelegate*);
    QAbstractItemModel * model() const;
    void setModel(QAbstractItemModel*);
    QModelIndex rootModelIndex() const;
    void setRootModelIndex(QModelIndex const&);
    int modelColumn() const;
    void setModelColumn(int);
    int currentIndex() const;
    QString currentText() const;
    QString itemText(int) const;
    QIcon itemIcon(int) const;
    QVariant itemData(int, int) const;
    void insertItem(int, QIcon const&, QString const&, QVariant const&);
    void insertItems(int, QStringList const&);
    void removeItem(int);
    void setItemText(int, QString const&);
    void setItemIcon(int, QIcon const&);
    void setItemData(int, QVariant const&, int);
    QAbstractItemView * view() const;
    void setView(QAbstractItemView*);
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    void showPopup();
    void hidePopup();
    bool event(QEvent*);
    void clear();
    void clearEditText();
    void setEditText(QString const&);
    void setCurrentIndex(int);
     QComboBox(QWidget*, char const*);
     QComboBox(bool, QWidget*, char const*);
     QComboBox(QComboBoxPrivate&, QWidget*);
    void setCompleter(QCompleter*);
    QCompleter * completer() const;
protected:
    void editTextChanged(QString const&);
    void activated(int);
    void activated(QString const&);
    void highlighted(int);
    void highlighted(QString const&);
    void currentIndexChanged(int);
    void currentIndexChanged(QString const&);
    void focusInEvent(QFocusEvent*);
    void focusOutEvent(QFocusEvent*);
    void changeEvent(QEvent*);
    void resizeEvent(QResizeEvent*);
    void paintEvent(QPaintEvent*);
    void showEvent(QShowEvent*);
    void hideEvent(QHideEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void keyPressEvent(QKeyEvent*);
    void keyReleaseEvent(QKeyEvent*);
    void wheelEvent(QWheelEvent*);
    void contextMenuEvent(QContextMenuEvent*);
    void inputMethodEvent(QInputMethodEvent*);
    QVariant inputMethodQuery(Qt::InputMethodQuery) const;
    void textChanged(QString const&);
};

enum InsertPolicy	
{
NoInsert = 0,	
NoInsertion = 0,	
InsertAtTop = 1,	
AtTop = 1,	
InsertAtCurrent = 2,	
AtCurrent = 2,	
InsertAtBottom = 3,	
AtBottom = 3,	
InsertAfterCurrent = 4,	
AfterCurrent = 4,	
InsertBeforeCurrent = 5,	
BeforeCurrent = 5
}
;

enum SizeAdjustPolicy	
{
AdjustToContents = 0,	
AdjustToContentsOnFirstShow = 1,	
AdjustToMinimumContentsLength = 2
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN9QComboBox16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
