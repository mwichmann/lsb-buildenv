#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QLISTVIEW_H_
#define _QTGUI_QLISTVIEW_H_

class QListView;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QListView : public QAbstractItemView
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QListView(QWidget*);
     ~QListView();
    void setMovement(QListView::Movement);
    enum _ZN9QListView8MovementE movement() const;
    void setFlow(QListView::Flow);
    enum _ZN9QListView4FlowE flow() const;
    void setWrapping(bool);
    bool isWrapping() const;
    void setResizeMode(QListView::ResizeMode);
    enum _ZN9QListView10ResizeModeE resizeMode() const;
    void setLayoutMode(QListView::LayoutMode);
    enum _ZN9QListView10LayoutModeE layoutMode() const;
    void setSpacing(int);
    int spacing() const;
    void setGridSize(QSize const&);
    QSize gridSize() const;
    void setViewMode(QListView::ViewMode);
    enum _ZN9QListView8ViewModeE viewMode() const;
    void clearPropertyFlags();
    bool isRowHidden(int) const;
    void setRowHidden(int, bool);
    void setModelColumn(int);
    int modelColumn() const;
    void setUniformItemSizes(bool);
    bool uniformItemSizes() const;
    QRect visualRect(QModelIndex const&) const;
    void scrollTo(QModelIndex const&, QAbstractItemView::ScrollHint);
    QModelIndex indexAt(QPoint const&) const;
    void doItemsLayout();
    void reset();
    void setRootIndex(QModelIndex const&);
     QListView(QListViewPrivate&, QWidget*);
    void setWordWrap(bool);
    void setBatchSize(int);
    bool wordWrap() const;
    int batchSize() const;
protected:
    bool event(QEvent*);
    void scrollContentsBy(int, int);
    void resizeContents(int, int);
    QSize contentsSize() const;
    void dataChanged(QModelIndex const&, QModelIndex const&);
    void rowsInserted(QModelIndex const&, int, int);
    void rowsAboutToBeRemoved(QModelIndex const&, int, int);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void timerEvent(QTimerEvent*);
    void resizeEvent(QResizeEvent*);
    void dragMoveEvent(QDragMoveEvent*);
    void dragLeaveEvent(QDragLeaveEvent*);
    void dropEvent(QDropEvent*);
    void startDrag(QFlags<Qt::DropAction>);
    void internalDrop(QDropEvent*);
    void internalDrag(QFlags<Qt::DropAction>);
    QStyleOptionViewItem viewOptions() const;
    void paintEvent(QPaintEvent*);
    int horizontalOffset() const;
    int verticalOffset() const;
    QModelIndex moveCursor(QAbstractItemView::CursorAction, QFlags<Qt::KeyboardModifier>);
    QRect rectForIndex(QModelIndex const&) const;
    void setPositionForIndex(QPoint const&, QModelIndex const&);
    void setSelection(QRect const&, QFlags<QItemSelectionModel::SelectionFlag>);
    QRegion visualRegionForSelection(QItemSelection const&) const;
    QModelIndexList selectedIndexes() const;
    void updateGeometries();
    bool isIndexHidden(QModelIndex const&) const;
    void indexesMoved(QList<QModelIndex> const&);
};

enum Movement	
{
Static = 0,	
Free = 1,	
Snap = 2
}
;

enum Flow	
{
LeftToRight = 0,	
TopToBottom = 1
}
;

enum ResizeMode	
{
Fixed = 0,	
Adjust = 1
}
;

enum LayoutMode	
{
SinglePass = 0,	
Batched = 1
}
;

enum ViewMode	
{
ListMode = 0,	
IconMode = 1
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN9QListView16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
