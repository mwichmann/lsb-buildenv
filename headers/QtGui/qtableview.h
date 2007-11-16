#ifndef _QTGUI_QTABLEVIEW_H_
#define _QTGUI_QTABLEVIEW_H_

class QTableView;
// *INDENT-OFF*




class QTableView : public QAbstractItemView
{
private:
public:
};


extern struct QMetaObject _ZN10QTableView16staticMetaObjectE ;
extern struct QMetaObject _ZNK10QTableView10metaObjectEv(void);
extern void _ZN10QTableView11qt_metacastEPKc(void);
extern int _ZN10QTableView11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTableView _ZN10QTableViewC2EP7QWidget(void);
extern QTableView _ZN10QTableViewC1EP7QWidget(void);
extern QTableView _ZN10QTableViewD2Ev(void);
extern QTableView _ZN10QTableViewD1Ev(void);
extern QTableView _ZN10QTableViewD0Ev(void);
extern void _ZN10QTableView8setModelEP18QAbstractItemModel(void);
extern void _ZN10QTableView12setRootIndexERK11QModelIndex(void);
extern void _ZN10QTableView17setSelectionModelEP19QItemSelectionModel(void);
extern  _ZNK10QTableView16horizontalHeaderEv(void);
extern  _ZNK10QTableView14verticalHeaderEv(void);
extern void _ZN10QTableView19setHorizontalHeaderEP11QHeaderView(void);
extern void _ZN10QTableView17setVerticalHeaderEP11QHeaderView(void);
extern int _ZNK10QTableView19rowViewportPositionEi(void);
extern int _ZNK10QTableView5rowAtEi(void);
extern void _ZN10QTableView12setRowHeightEii(void);
extern int _ZNK10QTableView9rowHeightEi(void);
extern int _ZNK10QTableView22columnViewportPositionEi(void);
extern int _ZNK10QTableView8columnAtEi(void);
extern void _ZN10QTableView14setColumnWidthEii(void);
extern int _ZNK10QTableView11columnWidthEi(void);
extern bool _ZNK10QTableView11isRowHiddenEi(void);
extern void _ZN10QTableView12setRowHiddenEib(void);
extern bool _ZNK10QTableView14isColumnHiddenEi(void);
extern void _ZN10QTableView15setColumnHiddenEib(void);
extern bool _ZNK10QTableView8showGridEv(void);
extern enum N2Qt8PenStyleE _ZNK10QTableView9gridStyleEv(void);
extern void _ZN10QTableView12setGridStyleEN2Qt8PenStyleE(void);
extern QRect _ZNK10QTableView10visualRectERK11QModelIndex(void);
extern void _ZN10QTableView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void);
extern QModelIndex _ZNK10QTableView7indexAtERK6QPoint(void);
extern void _ZN10QTableView9selectRowEi(void);
extern void _ZN10QTableView12selectColumnEi(void);
extern void _ZN10QTableView7hideRowEi(void);
extern void _ZN10QTableView10hideColumnEi(void);
extern void _ZN10QTableView7showRowEi(void);
extern void _ZN10QTableView10showColumnEi(void);
extern void _ZN10QTableView19resizeRowToContentsEi(void);
extern void _ZN10QTableView20resizeRowsToContentsEv(void);
extern void _ZN10QTableView22resizeColumnToContentsEi(void);
extern void _ZN10QTableView23resizeColumnsToContentsEv(void);
extern void _ZN10QTableView12sortByColumnEi(void);
extern void _ZN10QTableView11setShowGridEb(void);
extern void _ZN10QTableView8rowMovedEiii(void);
extern void _ZN10QTableView11columnMovedEiii(void);
extern void _ZN10QTableView10rowResizedEiii(void);
extern void _ZN10QTableView13columnResizedEiii(void);
extern void _ZN10QTableView15rowCountChangedEii(void);
extern void _ZN10QTableView18columnCountChangedEii(void);
extern QTableView _ZN10QTableViewC2ER17QTableViewPrivateP7QWidget(void);
extern QTableView _ZN10QTableViewC1ER17QTableViewPrivateP7QWidget(void);
extern void _ZN10QTableView16scrollContentsByEii(void);
extern QStyleOptionViewItem _ZNK10QTableView11viewOptionsEv(void);
extern void _ZN10QTableView10paintEventEP11QPaintEvent(void);
extern void _ZN10QTableView10timerEventEP11QTimerEvent(void);
extern int _ZNK10QTableView16horizontalOffsetEv(void);
extern int _ZNK10QTableView14verticalOffsetEv(void);
extern QModelIndex _ZN10QTableView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void);
extern void _ZN10QTableView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void);
extern QRegion _ZNK10QTableView24visualRegionForSelectionERK14QItemSelection(void);
extern QModelIndexList _ZNK10QTableView15selectedIndexesEv(void);
extern void _ZN10QTableView16updateGeometriesEv(void);
extern int _ZNK10QTableView14sizeHintForRowEi(void);
extern int _ZNK10QTableView17sizeHintForColumnEi(void);
extern void _ZN10QTableView23verticalScrollbarActionEi(void);
extern void _ZN10QTableView25horizontalScrollbarActionEi(void);
extern bool _ZNK10QTableView13isIndexHiddenERK11QModelIndex(void);
// *INDENT-ON*
#endif
