#ifndef _QTGUI_QTREEWIDGET_H_
#define _QTGUI_QTREEWIDGET_H_

class QTreeWidget;
// *INDENT-OFF*

class QTreeWidgetItem
{
private:
public:
     QTreeWidgetItem(int);
     QTreeWidgetItem(QStringList const&, int);
     QTreeWidgetItem(QTreeWidget*, int);
     QTreeWidgetItem(QTreeWidget*, QStringList const&, int);
     QTreeWidgetItem(QTreeWidget*, QTreeWidgetItem*, int);
     QTreeWidgetItem(QTreeWidgetItem*, int);
     QTreeWidgetItem(QTreeWidgetItem*, QStringList const&, int);
     QTreeWidgetItem(QTreeWidgetItem*, QTreeWidgetItem*, int);
     QTreeWidgetItem(QTreeWidgetItem const&);
     ~QTreeWidgetItem();
    QTreeWidgetItem * clone() const;
    QVariant data(int, int) const;
    void setData(int, int, QVariant const&);
    bool operator<(QTreeWidgetItem const&) const;
    void read(QDataStream&);
    void write(QDataStream&) const;
     operator=(QTreeWidgetItem const&);
    void addChild(QTreeWidgetItem*);
    void insertChild(int, QTreeWidgetItem*);
    QTreeWidgetItem * takeChild(int);
    void addChildren(QList<QTreeWidgetItem*> const&);
    void insertChildren(int, QList<QTreeWidgetItem*> const&);
     takeChildren();
private:
    void itemChanged();
};

class QTreeWidget : public QTreeView
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTreeWidget(QWidget*);
     ~QTreeWidget();
    int columnCount() const;
    void setColumnCount(int);
    QTreeWidgetItem * topLevelItem(int) const;
    int topLevelItemCount() const;
    void insertTopLevelItem(int, QTreeWidgetItem*);
    void addTopLevelItem(QTreeWidgetItem*);
    QTreeWidgetItem * takeTopLevelItem(int);
    int indexOfTopLevelItem(QTreeWidgetItem*);
    void insertTopLevelItems(int, QList<QTreeWidgetItem*> const&);
    void addTopLevelItems(QList<QTreeWidgetItem*> const&);
    QTreeWidgetItem * headerItem() const;
    void setHeaderItem(QTreeWidgetItem*);
    void setHeaderLabels(QStringList const&);
    QTreeWidgetItem * currentItem() const;
    int currentColumn() const;
    void setCurrentItem(QTreeWidgetItem*);
    void setCurrentItem(QTreeWidgetItem*, int);
    QTreeWidgetItem * itemAt(QPoint const&) const;
    QRect visualItemRect(QTreeWidgetItem const*) const;
    int sortColumn() const;
    void sortItems(int, Qt::SortOrder);
    void setSortingEnabled(bool);
    bool isSortingEnabled() const;
    void editItem(QTreeWidgetItem*, int);
    void openPersistentEditor(QTreeWidgetItem*, int);
    void closePersistentEditor(QTreeWidgetItem*, int);
    QWidget * itemWidget(QTreeWidgetItem*, int) const;
    void setItemWidget(QTreeWidgetItem*, int, QWidget*);
    bool isItemSelected(QTreeWidgetItem const*) const;
    void setItemSelected(QTreeWidgetItem const*, bool);
     selectedItems() const;
     findItems(QString const&, QFlags<Qt::MatchFlag>, int) const;
    bool isItemHidden(QTreeWidgetItem const*) const;
    void setItemHidden(QTreeWidgetItem const*, bool);
    bool isItemExpanded(QTreeWidgetItem const*) const;
    void setItemExpanded(QTreeWidgetItem const*, bool);
    void scrollToItem(QTreeWidgetItem const*, QAbstractItemView::ScrollHint);
    void expandItem(QTreeWidgetItem const*);
    void collapseItem(QTreeWidgetItem const*);
    void clear();
    QTreeWidgetItem * invisibleRootItem() const;
    int indexOfTopLevelItem(QTreeWidgetItem*) const;
protected:
    void itemPressed(QTreeWidgetItem*, int);
    void itemClicked(QTreeWidgetItem*, int);
    void itemDoubleClicked(QTreeWidgetItem*, int);
    void itemActivated(QTreeWidgetItem*, int);
    void itemEntered(QTreeWidgetItem*, int);
    void itemChanged(QTreeWidgetItem*, int);
    void itemExpanded(QTreeWidgetItem*);
    void itemCollapsed(QTreeWidgetItem*);
    void currentItemChanged(QTreeWidgetItem*, QTreeWidgetItem*);
    void itemSelectionChanged();
    bool event(QEvent*);
    QStringList mimeTypes() const;
    QMimeData * mimeData(QList<QTreeWidgetItem*>) const;
    bool dropMimeData(QTreeWidgetItem*, int, QMimeData const*, Qt::DropAction);
     supportedDropActions() const;
     items(QMimeData const*) const;
    QModelIndex indexFromItem(QTreeWidgetItem*, int) const;
    QTreeWidgetItem * itemFromIndex(QModelIndex const&) const;
    void dropEvent(QDropEvent*);
private:
    void setModel(QAbstractItemModel*);
};


extern QDataStream _ZlsR11QDataStreamRK15QTreeWidgetItem(QDataStream &, const QTreeWidgetItem &);
extern QDataStream _ZrsR11QDataStreamR15QTreeWidgetItem(QDataStream &, QTreeWidgetItem &);
extern struct QMetaObject _ZN11QTreeWidget16staticMetaObjectE ;
// *INDENT-ON*
#endif
