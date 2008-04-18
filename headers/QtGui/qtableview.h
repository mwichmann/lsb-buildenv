#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTABLEVIEW_H_
#define _QTGUI_QTABLEVIEW_H_

class QTableView;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QTableView : public QAbstractItemView
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTableView(QWidget*);
     ~QTableView();
    void setModel(QAbstractItemModel*);
    void setRootIndex(QModelIndex const&);
    void setSelectionModel(QItemSelectionModel*);
    QHeaderView * horizontalHeader() const;
    QHeaderView * verticalHeader() const;
    void setHorizontalHeader(QHeaderView*);
    void setVerticalHeader(QHeaderView*);
    int rowViewportPosition(int) const;
    int rowAt(int) const;
    void setRowHeight(int, int);
    int rowHeight(int) const;
    int columnViewportPosition(int) const;
    int columnAt(int) const;
    void setColumnWidth(int, int);
    int columnWidth(int) const;
    bool isRowHidden(int) const;
    void setRowHidden(int, bool);
    bool isColumnHidden(int) const;
    void setColumnHidden(int, bool);
    bool showGrid() const;
    enum _ZN2Qt8PenStyleE gridStyle() const;
    void setGridStyle(Qt::PenStyle);
    QRect visualRect(QModelIndex const&) const;
    void scrollTo(QModelIndex const&, QAbstractItemView::ScrollHint);
    QModelIndex indexAt(QPoint const&) const;
    void selectRow(int);
    void selectColumn(int);
    void hideRow(int);
    void hideColumn(int);
    void showRow(int);
    void showColumn(int);
    void resizeRowToContents(int);
    void resizeRowsToContents();
    void resizeColumnToContents(int);
    void resizeColumnsToContents();
    void sortByColumn(int);
    void setShowGrid(bool);
     QTableView(QTableViewPrivate&, QWidget*);
    void sortByColumn(int, Qt::SortOrder);
    void setSortingEnabled(bool);
    void setSpan(int, int, int, int);
    int columnSpan(int, int) const;
    bool isSortingEnabled() const;
    int rowSpan(int, int) const;
protected:
    void rowMoved(int, int, int);
    void columnMoved(int, int, int);
    void rowResized(int, int, int);
    void columnResized(int, int, int);
    void rowCountChanged(int, int);
    void columnCountChanged(int, int);
    void scrollContentsBy(int, int);
    QStyleOptionViewItem viewOptions() const;
    void paintEvent(QPaintEvent*);
    void timerEvent(QTimerEvent*);
    int horizontalOffset() const;
    int verticalOffset() const;
    QModelIndex moveCursor(QAbstractItemView::CursorAction, QFlags<Qt::KeyboardModifier>);
    void setSelection(QRect const&, QFlags<QItemSelectionModel::SelectionFlag>);
    QRegion visualRegionForSelection(QItemSelection const&) const;
    QModelIndexList selectedIndexes() const;
    void updateGeometries();
    int sizeHintForRow(int) const;
    int sizeHintForColumn(int) const;
    void verticalScrollbarAction(int);
    void horizontalScrollbarAction(int);
    bool isIndexHidden(QModelIndex const&) const;
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN10QTableView16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
