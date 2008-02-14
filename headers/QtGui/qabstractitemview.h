#ifndef _QTGUI_QABSTRACTITEMVIEW_H_
#define _QTGUI_QABSTRACTITEMVIEW_H_

class QFlags < QAbstractItemView::EditTrigger >;
// *INDENT-OFF*

typedef class QFlags<QAbstractItemView::EditTrigger>
{
private:
public:
}EditTriggers	
;

class QAbstractItemView : public QAbstractScrollArea
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractItemView(QWidget*);
     ~QAbstractItemView();
    void setModel(QAbstractItemModel*);
    QAbstractItemModel * model() const;
    void setSelectionModel(QItemSelectionModel*);
    QItemSelectionModel * selectionModel() const;
    void setItemDelegate(QAbstractItemDelegate*);
    QAbstractItemDelegate * itemDelegate() const;
    void setSelectionMode(QAbstractItemView::SelectionMode);
    enum _ZN17QAbstractItemView13SelectionModeE selectionMode() const;
    void setSelectionBehavior(QAbstractItemView::SelectionBehavior);
    enum _ZN17QAbstractItemView17SelectionBehaviorE selectionBehavior() const;
    QModelIndex currentIndex() const;
    QModelIndex rootIndex() const;
    void setEditTriggers(QFlags<QAbstractItemView::EditTrigger>);
    QFlags<QAbstractItemView::EditTrigger> editTriggers() const;
    void setAutoScroll(bool);
    bool hasAutoScroll() const;
    void setTabKeyNavigation(bool);
    bool tabKeyNavigation() const;
    void setDropIndicatorShown(bool);
    bool showDropIndicator() const;
    void setDragEnabled(bool);
    bool dragEnabled() const;
    void setAlternatingRowColors(bool);
    bool alternatingRowColors() const;
    void setIconSize(QSize const&);
    QSize iconSize() const;
    void setTextElideMode(Qt::TextElideMode);
    enum _ZN2Qt13TextElideModeE textElideMode() const;
    void keyboardSearch(QString const&);
    QSize sizeHintForIndex(QModelIndex const&) const;
    int sizeHintForRow(int) const;
    int sizeHintForColumn(int) const;
    void openPersistentEditor(QModelIndex const&);
    void closePersistentEditor(QModelIndex const&);
    void setIndexWidget(QModelIndex const&, QWidget*);
    QWidget * indexWidget(QModelIndex const&) const;
    void reset();
    void setRootIndex(QModelIndex const&);
    void doItemsLayout();
    void selectAll();
    void edit(QModelIndex const&);
    void clearSelection();
    void setCurrentIndex(QModelIndex const&);
    void scrollToTop();
    void scrollToBottom();
     QAbstractItemView(QAbstractItemViewPrivate&, QWidget*);
    void setDragDropMode(QAbstractItemView::DragDropMode);
    void setItemDelegateForRow(int, QAbstractItemDelegate*);
    void setVerticalScrollMode(QAbstractItemView::ScrollMode);
    void setHorizontalScrollMode(QAbstractItemView::ScrollMode);
    void setDragDropOverwriteMode(bool);
    void setItemDelegateForColumn(int, QAbstractItemDelegate*);
    enum _ZN17QAbstractItemView12DragDropModeE dragDropMode() const;
    QAbstractItemDelegate * itemDelegate(QModelIndex const&) const;
    QVariant inputMethodQuery(Qt::InputMethodQuery) const;
    QAbstractItemDelegate * itemDelegateForRow(int) const;
    enum _ZN17QAbstractItemView10ScrollModeE verticalScrollMode() const;
    enum _ZN17QAbstractItemView10ScrollModeE horizontalScrollMode() const;
    bool dragDropOverwriteMode() const;
    QAbstractItemDelegate * itemDelegateForColumn(int) const;
protected:
    void dataChanged(QModelIndex const&, QModelIndex const&);
    void rowsInserted(QModelIndex const&, int, int);
    void rowsAboutToBeRemoved(QModelIndex const&, int, int);
    void selectionChanged(QItemSelection const&, QItemSelection const&);
    void currentChanged(QModelIndex const&, QModelIndex const&);
    void updateEditorData();
    void updateEditorGeometries();
    void updateGeometries();
    void verticalScrollbarAction(int);
    void horizontalScrollbarAction(int);
    void verticalScrollbarValueChanged(int);
    void horizontalScrollbarValueChanged(int);
    void closeEditor(QWidget*, QAbstractItemDelegate::EndEditHint);
    void commitData(QWidget*);
    void editorDestroyed(QObject*);
    void pressed(QModelIndex const&);
    void clicked(QModelIndex const&);
    void doubleClicked(QModelIndex const&);
    void activated(QModelIndex const&);
    void entered(QModelIndex const&);
    void viewportEntered();
    void setHorizontalStepsPerItem(int);
    int horizontalStepsPerItem() const;
    void setVerticalStepsPerItem(int);
    int verticalStepsPerItem() const;
    QModelIndexList selectedIndexes() const;
    bool edit(QModelIndex const&, QAbstractItemView::EditTrigger, QEvent*);
    QFlags<QItemSelectionModel::SelectionFlag> selectionCommand(QModelIndex const&, QEvent const*) const;
    void startDrag(QFlags<Qt::DropAction>);
    QStyleOptionViewItem viewOptions() const;
    enum _ZN17QAbstractItemView5StateE state() const;
    void setState(QAbstractItemView::State);
    void scheduleDelayedItemsLayout();
    void executeDelayedItemsLayout();
    void setDirtyRegion(QRegion const&);
    void scrollDirtyRegion(int, int);
    QPoint dirtyRegionOffset() const;
    void startAutoScroll();
    void stopAutoScroll();
    void doAutoScroll();
    bool event(QEvent*);
    bool viewportEvent(QEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseDoubleClickEvent(QMouseEvent*);
    void dragEnterEvent(QDragEnterEvent*);
    void dragMoveEvent(QDragMoveEvent*);
    void dragLeaveEvent(QDragLeaveEvent*);
    void dropEvent(QDropEvent*);
    void focusInEvent(QFocusEvent*);
    void focusOutEvent(QFocusEvent*);
    void keyPressEvent(QKeyEvent*);
    void resizeEvent(QResizeEvent*);
    void timerEvent(QTimerEvent*);
    enum _ZN17QAbstractItemView21DropIndicatorPositionE dropIndicatorPosition() const;
    void inputMethodEvent(QInputMethodEvent*);
    bool focusNextPrevChild(bool);
};

enum SelectionMode	
{
NoSelection = 0,	
SingleSelection = 1,	
MultiSelection = 2,	
ExtendedSelection = 3,	
ContiguousSelection = 4
}
;

enum SelectionBehavior	
{
SelectItems = 0,	
SelectRows = 1,	
SelectColumns = 2
}
;

enum ScrollHint	
{
EnsureVisible = 0,	
PositionAtTop = 1,	
PositionAtBottom = 2
}
;

enum EditTrigger	
{
NoEditTriggers = 0,	
CurrentChanged = 1,	
DoubleClicked = 2,	
SelectedClicked = 4,	
EditKeyPressed = 8,	
AnyKeyPressed = 16,	
AllEditTriggers = 31
}
;

class QFlags<QAbstractItemView::EditTrigger>
{
private:
public:
};

enum CursorAction	
{
MoveUp = 0,	
MoveDown = 1,	
MoveLeft = 2,	
MoveRight = 3,	
MoveHome = 4,	
MoveEnd = 5,	
MovePageUp = 6,	
MovePageDown = 7,	
MoveNext = 8,	
MovePrevious = 9
}
;

enum State	
{
NoState = 0,	
DraggingState = 1,	
DragSelectingState = 2,	
EditingState = 3,	
ExpandingState = 4,	
CollapsingState = 5
}
;

enum DropIndicatorPosition	
{
OnItem = 0,	
AboveItem = 1,	
BelowItem = 2,	
OnViewport = 3
}
;


extern struct QMetaObject _ZN17QAbstractItemView16staticMetaObjectE ;
// *INDENT-ON*
#endif
