#ifndef _QTGUI_QTREEVIEW_H_
#define _QTGUI_QTREEVIEW_H_

class QTreeView;
// *INDENT-OFF*

class QTreeView : public QAbstractItemView
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTreeView(QWidget*);
     ~QTreeView();
    void setModel(QAbstractItemModel*);
    void setRootIndex(QModelIndex const&);
    void setSelectionModel(QItemSelectionModel*);
    QHeaderView * header() const;
    void setHeader(QHeaderView*);
    int indentation() const;
    void setIndentation(int);
    bool rootIsDecorated() const;
    void setRootIsDecorated(bool);
    bool uniformRowHeights() const;
    void setUniformRowHeights(bool);
    bool itemsExpandable() const;
    void setItemsExpandable(bool);
    int columnViewportPosition(int) const;
    int columnWidth(int) const;
    int columnAt(int) const;
    bool isColumnHidden(int) const;
    void setColumnHidden(int, bool);
    bool isRowHidden(int, QModelIndex const&) const;
    void setRowHidden(int, QModelIndex const&, bool);
    bool isExpanded(QModelIndex const&) const;
    void setExpanded(QModelIndex const&, bool);
    void keyboardSearch(QString const&);
    QRect visualRect(QModelIndex const&) const;
    void scrollTo(QModelIndex const&, QAbstractItemView::ScrollHint);
    QModelIndex indexAt(QPoint const&) const;
    QModelIndex indexAbove(QModelIndex const&) const;
    QModelIndex indexBelow(QModelIndex const&) const;
    void doItemsLayout();
    void reset();
    void dataChanged(QModelIndex const&, QModelIndex const&);
    void hideColumn(int);
    void showColumn(int);
    void expand(QModelIndex const&);
    void collapse(QModelIndex const&);
    void resizeColumnToContents(int);
    void sortByColumn(int);
    void selectAll();
     QTreeView(QTreeViewPrivate&, QWidget*);
    void collapseAll();
    void setAnimated(bool);
    void sortByColumn(int, Qt::SortOrder);
    void setColumnWidth(int, int);
    void setSortingEnabled(bool);
    void setAllColumnsShowFocus(bool);
    void expandAll();
    bool isAnimated() const;
    bool isSortingEnabled() const;
    bool allColumnsShowFocus() const;
protected:
    void expanded(QModelIndex const&);
    void collapsed(QModelIndex const&);
    void columnResized(int, int, int);
    void columnCountChanged(int, int);
    void columnMoved();
    void reexpand();
    void rowsRemoved(QModelIndex const&, int, int);
    void scrollContentsBy(int, int);
    void rowsInserted(QModelIndex const&, int, int);
    void rowsAboutToBeRemoved(QModelIndex const&, int, int);
    QModelIndex moveCursor(QAbstractItemView::CursorAction, QFlags<Qt::KeyboardModifier>);
    int horizontalOffset() const;
    int verticalOffset() const;
    void setSelection(QRect const&, QFlags<QItemSelectionModel::SelectionFlag>);
    QRegion visualRegionForSelection(QItemSelection const&) const;
    QModelIndexList selectedIndexes() const;
    void timerEvent(QTimerEvent*);
    void paintEvent(QPaintEvent*);
    void drawRow(QPainter*, QStyleOptionViewItem const&, QModelIndex const&) const;
    void drawBranches(QPainter*, QRect const&, QModelIndex const&) const;
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseDoubleClickEvent(QMouseEvent*);
    void updateGeometries();
    int sizeHintForColumn(int) const;
    int indexRowSizeHint(QModelIndex const&) const;
    void horizontalScrollbarAction(int);
    bool isIndexHidden(QModelIndex const&) const;
    void keyPressEvent(QKeyEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void drawTree(QPainter*, QRegion const&) const;
};


extern struct QMetaObject _ZN9QTreeView16staticMetaObjectE ;
// *INDENT-ON*
#endif
