#ifndef _QTGUI_QTABLEWIDGET_H_
#define _QTGUI_QTABLEWIDGET_H_

class QTableWidgetItem;
// *INDENT-OFF*

class QTableWidgetSelectionRange
{
private:
public:
     QTableWidgetSelectionRange();
     QTableWidgetSelectionRange(int, int, int, int);
     QTableWidgetSelectionRange(QTableWidgetSelectionRange const&);
     ~QTableWidgetSelectionRange();
};

class QTableWidgetItem
{
private:
public:
     QTableWidgetItem(int);
     QTableWidgetItem(QString const&, int);
     QTableWidgetItem(QTableWidgetItem const&);
     ~QTableWidgetItem();
    QTableWidgetItem * clone() const;
    QVariant data(int) const;
    void setData(int, QVariant const&);
    bool operator<(QTableWidgetItem const&) const;
    void read(QDataStream&);
    void write(QDataStream&) const;
     operator=(QTableWidgetItem const&);
     QTableWidgetItem(QIcon const&, QString const&, int);
    void setFlags(QFlags<Qt::ItemFlag>);
};

class QTableWidget : public QTableView
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTableWidget(QWidget*);
     QTableWidget(int, int, QWidget*);
     ~QTableWidget();
    void setRowCount(int);
    int rowCount() const;
    void setColumnCount(int);
    int columnCount() const;
    int row(QTableWidgetItem const*) const;
    int column(QTableWidgetItem const*) const;
    QTableWidgetItem * item(int, int) const;
    void setItem(int, int, QTableWidgetItem*);
    QTableWidgetItem * takeItem(int, int);
    QTableWidgetItem * verticalHeaderItem(int) const;
    void setVerticalHeaderItem(int, QTableWidgetItem*);
    QTableWidgetItem * takeVerticalHeaderItem(int);
    QTableWidgetItem * horizontalHeaderItem(int) const;
    void setHorizontalHeaderItem(int, QTableWidgetItem*);
    QTableWidgetItem * takeHorizontalHeaderItem(int);
    void setVerticalHeaderLabels(QStringList const&);
    void setHorizontalHeaderLabels(QStringList const&);
    int currentRow() const;
    int currentColumn() const;
    QTableWidgetItem * currentItem() const;
    void setCurrentItem(QTableWidgetItem*);
    void setCurrentCell(int, int);
    void sortItems(int, Qt::SortOrder);
    void setSortingEnabled(bool);
    bool isSortingEnabled() const;
    void editItem(QTableWidgetItem*);
    void openPersistentEditor(QTableWidgetItem*);
    void closePersistentEditor(QTableWidgetItem*);
    QWidget * cellWidget(int, int) const;
    void setCellWidget(int, int, QWidget*);
    bool isItemSelected(QTableWidgetItem const*) const;
    void setItemSelected(QTableWidgetItem const*, bool);
    void setRangeSelected(QTableWidgetSelectionRange const&, bool);
    QList<QTableWidgetSelectionRange> selectedRanges() const;
     selectedItems();
     findItems(QString const&, QFlags<Qt::MatchFlag>) const;
    int visualRow(int) const;
    int visualColumn(int) const;
    QTableWidgetItem * itemAt(QPoint const&) const;
    QRect visualItemRect(QTableWidgetItem const*) const;
    const QTableWidgetItem * itemPrototype() const;
    void setItemPrototype(QTableWidgetItem const*);
    void scrollToItem(QTableWidgetItem const*, QAbstractItemView::ScrollHint);
    void insertRow(int);
    void insertColumn(int);
    void removeRow(int);
    void removeColumn(int);
    void clear();
    void clearContents();
protected:
    void itemPressed(QTableWidgetItem*);
    void itemClicked(QTableWidgetItem*);
    void itemDoubleClicked(QTableWidgetItem*);
    void itemActivated(QTableWidgetItem*);
    void itemEntered(QTableWidgetItem*);
    void itemChanged(QTableWidgetItem*);
    void currentItemChanged(QTableWidgetItem*, QTableWidgetItem*);
    void itemSelectionChanged();
    void cellPressed(int, int);
    void cellClicked(int, int);
    void cellDoubleClicked(int, int);
    void cellActivated(int, int);
    void cellEntered(int, int);
    void cellChanged(int, int);
    void currentCellChanged(int, int, int, int);
    bool event(QEvent*);
    QStringList mimeTypes() const;
    QMimeData * mimeData(QList<QTableWidgetItem*>) const;
    bool dropMimeData(int, int, QMimeData const*, Qt::DropAction);
     supportedDropActions() const;
     items(QMimeData const*) const;
    QModelIndex indexFromItem(QTableWidgetItem*) const;
    QTableWidgetItem * itemFromIndex(QModelIndex const&) const;
    void dropEvent(QDropEvent*);
private:
    void setModel(QAbstractItemModel*);
};


extern QDataStream _ZrsR11QDataStreamR16QTableWidgetItem(QDataStream &, QTableWidgetItem &);
extern QDataStream _ZlsR11QDataStreamRK16QTableWidgetItem(QDataStream &, const QTableWidgetItem &);
extern struct QMetaObject _ZN12QTableWidget16staticMetaObjectE ;
// *INDENT-ON*
#endif
