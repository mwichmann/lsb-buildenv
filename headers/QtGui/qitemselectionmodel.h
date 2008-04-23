#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QITEMSELECTIONMODEL_H_
#define _QTGUI_QITEMSELECTIONMODEL_H_

class QItemSelectionRange;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QItemSelectionModel::SelectionFlag>
{
private:
public:
}SelectionFlags	
;

#endif /* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31
class QItemSelectionRange
{
private:
public:
    bool intersects(QItemSelectionRange const&) const;
    QItemSelectionRange intersect(QItemSelectionRange const&) const;
    QModelIndexList indexes() const;
};

class QItemSelectionModel : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QItemSelectionModel(QAbstractItemModel*);
     QItemSelectionModel(QAbstractItemModel*, QObject*);
     ~QItemSelectionModel();
    QModelIndex currentIndex() const;
    bool isSelected(QModelIndex const&) const;
    bool isRowSelected(int, QModelIndex const&) const;
    bool isColumnSelected(int, QModelIndex const&) const;
    bool rowIntersectsSelection(int, QModelIndex const&) const;
    bool columnIntersectsSelection(int, QModelIndex const&) const;
    QModelIndexList selectedIndexes() const;
    const QItemSelection selection() const;
    const QAbstractItemModel * model() const;
    void setCurrentIndex(QModelIndex const&, QFlags<QItemSelectionModel::SelectionFlag>);
    void select(QModelIndex const&, QFlags<QItemSelectionModel::SelectionFlag>);
    void select(QItemSelection const&, QFlags<QItemSelectionModel::SelectionFlag>);
    void clear();
    void reset();
     QItemSelectionModel(QItemSelectionModelPrivate&, QAbstractItemModel*);
    void clearSelection();
    bool hasSelection() const;
    QModelIndexList selectedRows(int) const;
    QModelIndexList selectedColumns(int) const;
protected:
    void selectionChanged(QItemSelection const&, QItemSelection const&);
    void currentChanged(QModelIndex const&, QModelIndex const&);
    void currentRowChanged(QModelIndex const&, QModelIndex const&);
    void currentColumnChanged(QModelIndex const&, QModelIndex const&);
    void emitSelectionChanged(QItemSelection const&, QItemSelection const&);
};

enum SelectionFlag	
{
NoUpdate = 0,	
Clear = 1,	
Select = 2,	
ClearAndSelect = 3,	
Deselect = 4,	
Toggle = 8,	
Current = 16,	
SelectCurrent = 18,	
ToggleCurrent = 24,	
Rows = 32,	
Columns = 64
}
;

class QFlags<QItemSelectionModel::SelectionFlag>
{
private:
public:
};

class QItemSelection
{
private:
public:
     QItemSelection(QModelIndex const&, QModelIndex const&);
    void select(QModelIndex const&, QModelIndex const&);
    bool contains(QModelIndex const&) const;
    QModelIndexList indexes() const;
    void merge(QItemSelection const&, QFlags<QItemSelectionModel::SelectionFlag>);
    void split(QItemSelectionRange const&, QItemSelectionRange const&, QItemSelection*);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN19QItemSelectionModel16staticMetaObjectE ;
extern QDebug _Zls6QDebugRK19QItemSelectionRange(_Z6QDebug, const QItemSelectionRange &);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
