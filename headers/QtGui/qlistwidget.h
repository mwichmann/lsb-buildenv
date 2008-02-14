#ifndef _QTGUI_QLISTWIDGET_H_
#define _QTGUI_QLISTWIDGET_H_

class QListWidgetItem;
// *INDENT-OFF*

class QListWidgetItem
{
private:
public:
    void setBackgroundColor(QColor const&);
     QListWidgetItem(QListWidget*, int);
     QListWidgetItem(QString const&, QListWidget*, int);
     QListWidgetItem(QIcon const&, QString const&, QListWidget*, int);
     QListWidgetItem(QListWidgetItem const&);
     ~QListWidgetItem();
    QListWidgetItem * clone() const;
    QVariant data(int) const;
    void setData(int, QVariant const&);
    bool operator<(QListWidgetItem const&) const;
    void read(QDataStream&);
    void write(QDataStream&) const;
     operator=(QListWidgetItem const&);
    void setFlags(QFlags<Qt::ItemFlag>);
};

class QListWidget : public QListView
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QListWidget(QWidget*);
     ~QListWidget();
    QListWidgetItem * item(int) const;
    int row(QListWidgetItem const*) const;
    void insertItem(int, QListWidgetItem*);
    void insertItem(int, QString const&);
    void insertItems(int, QStringList const&);
    QListWidgetItem * takeItem(int);
    int count() const;
    QListWidgetItem * currentItem() const;
    void setCurrentItem(QListWidgetItem*);
    int currentRow() const;
    void setCurrentRow(int);
    QListWidgetItem * itemAt(QPoint const&) const;
    QRect visualItemRect(QListWidgetItem const*) const;
    void sortItems(Qt::SortOrder);
    void editItem(QListWidgetItem*);
    void openPersistentEditor(QListWidgetItem*);
    void closePersistentEditor(QListWidgetItem*);
    QWidget * itemWidget(QListWidgetItem*) const;
    void setItemWidget(QListWidgetItem*, QWidget*);
    bool isItemSelected(QListWidgetItem const*) const;
    void setItemSelected(QListWidgetItem const*, bool);
     selectedItems() const;
     findItems(QString const&, QFlags<Qt::MatchFlag>) const;
    bool isItemHidden(QListWidgetItem const*) const;
    void setItemHidden(QListWidgetItem const*, bool);
    void scrollToItem(QListWidgetItem const*, QAbstractItemView::ScrollHint);
    void clear();
    void setSortingEnabled(bool);
    void dropEvent(QDropEvent*);
    bool isSortingEnabled() const;
protected:
    void itemPressed(QListWidgetItem*);
    void itemClicked(QListWidgetItem*);
    void itemDoubleClicked(QListWidgetItem*);
    void itemActivated(QListWidgetItem*);
    void itemEntered(QListWidgetItem*);
    void itemChanged(QListWidgetItem*);
    void currentItemChanged(QListWidgetItem*, QListWidgetItem*);
    void currentTextChanged(QString const&);
    void currentRowChanged(int);
    void itemSelectionChanged();
    bool event(QEvent*);
    QStringList mimeTypes() const;
    QMimeData * mimeData(QList<QListWidgetItem*>) const;
    bool dropMimeData(int, QMimeData const*, Qt::DropAction);
     supportedDropActions() const;
     items(QMimeData const*) const;
    QModelIndex indexFromItem(QListWidgetItem*) const;
    QListWidgetItem * itemFromIndex(QModelIndex const&) const;
private:
    void setModel(QAbstractItemModel*);
};


extern QDataStream _ZlsR11QDataStreamRK15QListWidgetItem(QDataStream &, const QListWidgetItem &);
extern QDataStream _ZrsR11QDataStreamR15QListWidgetItem(QDataStream &, QListWidgetItem &);
extern struct QMetaObject _ZN11QListWidget16staticMetaObjectE ;
// *INDENT-ON*
#endif
