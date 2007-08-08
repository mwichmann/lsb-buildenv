#ifndef _QTGUI_QTREEVIEW_H_
#define _QTGUI_QTREEVIEW_H_

class QTreeView;
// *INDENT-OFF*



class QTreeView : public QAbstractItemView
{
private:
public:
};


extern struct QMetaObject _ZN9QTreeView16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QTreeView10metaObjectEv(void);
extern void _ZN9QTreeView11qt_metacastEPKc(void);
extern int _ZN9QTreeView11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTreeView _ZN9QTreeViewC2EP7QWidget(void);
extern QTreeView _ZN9QTreeViewC1EP7QWidget(void);
extern QTreeView _ZN9QTreeViewD2Ev(void);
extern QTreeView _ZN9QTreeViewD1Ev(void);
extern QTreeView _ZN9QTreeViewD0Ev(void);
extern void _ZN9QTreeView8setModelEP18QAbstractItemModel(void);
extern void _ZN9QTreeView12setRootIndexERK11QModelIndex(void);
extern void _ZN9QTreeView17setSelectionModelEP19QItemSelectionModel(void);
extern  _ZNK9QTreeView6headerEv(void);
extern void _ZN9QTreeView9setHeaderEP11QHeaderView(void);
extern int _ZNK9QTreeView11indentationEv(void);
extern void _ZN9QTreeView14setIndentationEi(void);
extern bool _ZNK9QTreeView15rootIsDecoratedEv(void);
extern void _ZN9QTreeView18setRootIsDecoratedEb(void);
extern bool _ZNK9QTreeView17uniformRowHeightsEv(void);
extern void _ZN9QTreeView20setUniformRowHeightsEb(void);
extern bool _ZNK9QTreeView15itemsExpandableEv(void);
extern void _ZN9QTreeView18setItemsExpandableEb(void);
extern int _ZNK9QTreeView22columnViewportPositionEi(void);
extern int _ZNK9QTreeView11columnWidthEi(void);
extern int _ZNK9QTreeView8columnAtEi(void);
extern bool _ZNK9QTreeView14isColumnHiddenEi(void);
extern void _ZN9QTreeView15setColumnHiddenEib(void);
extern bool _ZNK9QTreeView11isRowHiddenEiRK11QModelIndex(void);
extern void _ZN9QTreeView12setRowHiddenEiRK11QModelIndexb(void);
extern bool _ZNK9QTreeView10isExpandedERK11QModelIndex(void);
extern void _ZN9QTreeView11setExpandedERK11QModelIndexb(void);
extern void _ZN9QTreeView14keyboardSearchERK7QString(void);
extern QRect _ZNK9QTreeView10visualRectERK11QModelIndex(void);
extern void _ZN9QTreeView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void);
extern QModelIndex _ZNK9QTreeView7indexAtERK6QPoint(void);
extern QModelIndex _ZNK9QTreeView10indexAboveERK11QModelIndex(void);
extern QModelIndex _ZNK9QTreeView10indexBelowERK11QModelIndex(void);
extern void _ZN9QTreeView13doItemsLayoutEv(void);
extern void _ZN9QTreeView5resetEv(void);
extern void _ZN9QTreeView8expandedERK11QModelIndex(void);
extern void _ZN9QTreeView9collapsedERK11QModelIndex(void);
extern void _ZN9QTreeView11dataChangedERK11QModelIndexS2_(void);
extern void _ZN9QTreeView10hideColumnEi(void);
extern void _ZN9QTreeView10showColumnEi(void);
extern void _ZN9QTreeView6expandERK11QModelIndex(void);
extern void _ZN9QTreeView8collapseERK11QModelIndex(void);
extern void _ZN9QTreeView22resizeColumnToContentsEi(void);
extern void _ZN9QTreeView12sortByColumnEi(void);
extern void _ZN9QTreeView9selectAllEv(void);
extern void _ZN9QTreeView13columnResizedEiii(void);
extern void _ZN9QTreeView18columnCountChangedEii(void);
extern void _ZN9QTreeView11columnMovedEv(void);
extern void _ZN9QTreeView8reexpandEv(void);
extern void _ZN9QTreeView11rowsRemovedERK11QModelIndexii(void);
extern QTreeView _ZN9QTreeViewC2ER16QTreeViewPrivateP7QWidget(void);
extern QTreeView _ZN9QTreeViewC1ER16QTreeViewPrivateP7QWidget(void);
extern void _ZN9QTreeView16scrollContentsByEii(void);
extern void _ZN9QTreeView12rowsInsertedERK11QModelIndexii(void);
extern void _ZN9QTreeView20rowsAboutToBeRemovedERK11QModelIndexii(void);
extern QModelIndex _ZN9QTreeView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void);
extern int _ZNK9QTreeView16horizontalOffsetEv(void);
extern int _ZNK9QTreeView14verticalOffsetEv(void);
extern void _ZN9QTreeView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void);
extern QRegion _ZNK9QTreeView24visualRegionForSelectionERK14QItemSelection(void);
extern QModelIndexList _ZNK9QTreeView15selectedIndexesEv(void);
extern void _ZN9QTreeView10timerEventEP11QTimerEvent(void);
extern void _ZN9QTreeView10paintEventEP11QPaintEvent(void);
extern void _ZNK9QTreeView7drawRowEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void);
extern void _ZNK9QTreeView12drawBranchesEP8QPainterRK5QRectRK11QModelIndex(void);
extern void _ZN9QTreeView15mousePressEventEP11QMouseEvent(void);
extern void _ZN9QTreeView17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN9QTreeView21mouseDoubleClickEventEP11QMouseEvent(void);
extern void _ZN9QTreeView16updateGeometriesEv(void);
extern int _ZNK9QTreeView17sizeHintForColumnEi(void);
extern int _ZNK9QTreeView16indexRowSizeHintERK11QModelIndex(void);
extern void _ZN9QTreeView25horizontalScrollbarActionEi(void);
extern bool _ZNK9QTreeView13isIndexHiddenERK11QModelIndex(void);
// *INDENT-ON*
#endif
