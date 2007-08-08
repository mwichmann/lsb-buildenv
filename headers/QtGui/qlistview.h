#ifndef _QTGUI_QLISTVIEW_H_
#define _QTGUI_QLISTVIEW_H_

class QListView;
// *INDENT-OFF*



class QListView : public QAbstractItemView
{
private:
public:
};

enum Movement	
{
Static,	
Free,	
Snap
}
;

enum Flow	
{
LeftToRight,	
TopToBottom
}
;

enum ResizeMode	
{
Fixed,	
Adjust
}
;

enum LayoutMode	
{
SinglePass,	
Batched
}
;

enum ViewMode	
{
ListMode,	
IconMode
}
;


extern struct QMetaObject _ZN9QListView16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QListView10metaObjectEv(void);
extern void _ZN9QListView11qt_metacastEPKc(void);
extern int _ZN9QListView11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QListView _ZN9QListViewC2EP7QWidget(void);
extern QListView _ZN9QListViewC1EP7QWidget(void);
extern QListView _ZN9QListViewD2Ev(void);
extern QListView _ZN9QListViewD1Ev(void);
extern QListView _ZN9QListViewD0Ev(void);
extern void _ZN9QListView11setMovementENS_8MovementE(void);
extern enum N9QListView8MovementE _ZNK9QListView8movementEv(void);
extern void _ZN9QListView7setFlowENS_4FlowE(void);
extern enum N9QListView4FlowE _ZNK9QListView4flowEv(void);
extern void _ZN9QListView11setWrappingEb(void);
extern bool _ZNK9QListView10isWrappingEv(void);
extern void _ZN9QListView13setResizeModeENS_10ResizeModeE(void);
extern enum N9QListView10ResizeModeE _ZNK9QListView10resizeModeEv(void);
extern void _ZN9QListView13setLayoutModeENS_10LayoutModeE(void);
extern enum N9QListView10LayoutModeE _ZNK9QListView10layoutModeEv(void);
extern void _ZN9QListView10setSpacingEi(void);
extern int _ZNK9QListView7spacingEv(void);
extern void _ZN9QListView11setGridSizeERK5QSize(void);
extern QSize _ZNK9QListView8gridSizeEv(void);
extern void _ZN9QListView11setViewModeENS_8ViewModeE(void);
extern enum N9QListView8ViewModeE _ZNK9QListView8viewModeEv(void);
extern void _ZN9QListView18clearPropertyFlagsEv(void);
extern bool _ZNK9QListView11isRowHiddenEi(void);
extern void _ZN9QListView12setRowHiddenEib(void);
extern void _ZN9QListView14setModelColumnEi(void);
extern int _ZNK9QListView11modelColumnEv(void);
extern void _ZN9QListView19setUniformItemSizesEb(void);
extern bool _ZNK9QListView16uniformItemSizesEv(void);
extern QRect _ZNK9QListView10visualRectERK11QModelIndex(void);
extern void _ZN9QListView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void);
extern QModelIndex _ZNK9QListView7indexAtERK6QPoint(void);
extern void _ZN9QListView13doItemsLayoutEv(void);
extern void _ZN9QListView5resetEv(void);
extern void _ZN9QListView12setRootIndexERK11QModelIndex(void);
extern QListView _ZN9QListViewC2ER16QListViewPrivateP7QWidget(void);
extern QListView _ZN9QListViewC1ER16QListViewPrivateP7QWidget(void);
extern bool _ZN9QListView5eventEP6QEvent(void);
extern void _ZN9QListView16scrollContentsByEii(void);
extern void _ZN9QListView14resizeContentsEii(void);
extern QSize _ZNK9QListView12contentsSizeEv(void);
extern void _ZN9QListView11dataChangedERK11QModelIndexS2_(void);
extern void _ZN9QListView12rowsInsertedERK11QModelIndexii(void);
extern void _ZN9QListView20rowsAboutToBeRemovedERK11QModelIndexii(void);
extern void _ZN9QListView14mouseMoveEventEP11QMouseEvent(void);
extern void _ZN9QListView17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN9QListView10timerEventEP11QTimerEvent(void);
extern void _ZN9QListView11resizeEventEP12QResizeEvent(void);
extern void _ZN9QListView13dragMoveEventEP14QDragMoveEvent(void);
extern void _ZN9QListView14dragLeaveEventEP15QDragLeaveEvent(void);
extern void _ZN9QListView9dropEventEP10QDropEvent(void);
extern void _ZN9QListView9startDragE6QFlagsIN2Qt10DropActionEE(void);
extern void _ZN9QListView12internalDropEP10QDropEvent(void);
extern void _ZN9QListView12internalDragE6QFlagsIN2Qt10DropActionEE(void);
extern QStyleOptionViewItem _ZNK9QListView11viewOptionsEv(void);
extern void _ZN9QListView10paintEventEP11QPaintEvent(void);
extern int _ZNK9QListView16horizontalOffsetEv(void);
extern int _ZNK9QListView14verticalOffsetEv(void);
extern QModelIndex _ZN9QListView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void);
extern QRect _ZNK9QListView12rectForIndexERK11QModelIndex(void);
extern void _ZN9QListView19setPositionForIndexERK6QPointRK11QModelIndex(void);
extern void _ZN9QListView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void);
extern QRegion _ZNK9QListView24visualRegionForSelectionERK14QItemSelection(void);
extern QModelIndexList _ZNK9QListView15selectedIndexesEv(void);
extern void _ZN9QListView16updateGeometriesEv(void);
extern bool _ZNK9QListView13isIndexHiddenERK11QModelIndex(void);
// *INDENT-ON*
#endif
