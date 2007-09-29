#ifndef _QTGUI_QABSTRACTITEMVIEW_H_
#define _QTGUI_QABSTRACTITEMVIEW_H_

class QFlags < QAbstractItemView::EditTrigger >;
// *INDENT-OFF*



typedef EditTriggers	
;

class QAbstractItemView : public QAbstractScrollArea
{
private:
public:
};

enum SelectionMode	
{
NoSelection = 0,	
SingleSelection = 1,	
MultiSelection = 2,	
ExtendedSelection = 3,	
ContiguousSelection = 4
}
;

enum SelectionBehavior	
{
SelectItems = 0,	
SelectRows = 1,	
SelectColumns = 2
}
;

enum ScrollHint	
{
EnsureVisible = 0,	
PositionAtTop = 1,	
PositionAtBottom = 2
}
;

enum EditTrigger	
{
NoEditTriggers = 0,	
CurrentChanged = 1,	
DoubleClicked = 2,	
SelectedClicked = 4,	
EditKeyPressed = 8,	
AnyKeyPressed = 16,	
AllEditTriggers = 31
}
;

class QFlags<QAbstractItemView::EditTrigger>
{
private:
public:
};

enum CursorAction	
{
MoveUp = 0,	
MoveDown = 1,	
MoveLeft = 2,	
MoveRight = 3,	
MoveHome = 4,	
MoveEnd = 5,	
MovePageUp = 6,	
MovePageDown = 7,	
MoveNext = 8,	
MovePrevious = 9
}
;

enum State	
{
NoState = 0,	
DraggingState = 1,	
DragSelectingState = 2,	
EditingState = 3,	
ExpandingState = 4,	
CollapsingState = 5
}
;

enum DropIndicatorPosition	
{
OnItem = 0,	
AboveItem = 1,	
BelowItem = 2,	
OnViewport = 3
}
;


extern struct QMetaObject _ZN17QAbstractItemView16staticMetaObjectE ;
extern struct QMetaObject _ZNK17QAbstractItemView10metaObjectEv(void);
extern void _ZN17QAbstractItemView11qt_metacastEPKc(void);
extern int _ZN17QAbstractItemView11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QAbstractItemView _ZN17QAbstractItemViewC2EP7QWidget(void);
extern QAbstractItemView _ZN17QAbstractItemViewC1EP7QWidget(void);
extern QAbstractItemView _ZN17QAbstractItemViewD2Ev(void);
extern QAbstractItemView _ZN17QAbstractItemViewD1Ev(void);
extern QAbstractItemView _ZN17QAbstractItemViewD0Ev(void);
extern void _ZN17QAbstractItemView8setModelEP18QAbstractItemModel(void);
extern QAbstractItemModel _ZNK17QAbstractItemView5modelEv(void);
extern void _ZN17QAbstractItemView17setSelectionModelEP19QItemSelectionModel(void);
extern QItemSelectionModel _ZNK17QAbstractItemView14selectionModelEv(void);
extern void _ZN17QAbstractItemView15setItemDelegateEP21QAbstractItemDelegate(void);
extern QAbstractItemDelegate _ZNK17QAbstractItemView12itemDelegateEv(void);
extern void _ZN17QAbstractItemView16setSelectionModeENS_13SelectionModeE(void);
extern enum N17QAbstractItemView13SelectionModeE _ZNK17QAbstractItemView13selectionModeEv(void);
extern void _ZN17QAbstractItemView20setSelectionBehaviorENS_17SelectionBehaviorE(void);
extern enum N17QAbstractItemView17SelectionBehaviorE _ZNK17QAbstractItemView17selectionBehaviorEv(void);
extern QModelIndex _ZNK17QAbstractItemView12currentIndexEv(void);
extern QModelIndex _ZNK17QAbstractItemView9rootIndexEv(void);
extern void _ZN17QAbstractItemView15setEditTriggersE6QFlagsINS_11EditTriggerEE(void);
extern N17QAbstractItemView12EditTriggersE _ZNK17QAbstractItemView12editTriggersEv(void);
extern void _ZN17QAbstractItemView13setAutoScrollEb(void);
extern bool _ZNK17QAbstractItemView13hasAutoScrollEv(void);
extern void _ZN17QAbstractItemView19setTabKeyNavigationEb(void);
extern bool _ZNK17QAbstractItemView16tabKeyNavigationEv(void);
extern void _ZN17QAbstractItemView21setDropIndicatorShownEb(void);
extern bool _ZNK17QAbstractItemView17showDropIndicatorEv(void);
extern void _ZN17QAbstractItemView14setDragEnabledEb(void);
extern bool _ZNK17QAbstractItemView11dragEnabledEv(void);
extern void _ZN17QAbstractItemView23setAlternatingRowColorsEb(void);
extern bool _ZNK17QAbstractItemView20alternatingRowColorsEv(void);
extern void _ZN17QAbstractItemView11setIconSizeERK5QSize(void);
extern QSize _ZNK17QAbstractItemView8iconSizeEv(void);
extern void _ZN17QAbstractItemView16setTextElideModeEN2Qt13TextElideModeE(void);
extern enum N2Qt13TextElideModeE _ZNK17QAbstractItemView13textElideModeEv(void);
extern void _ZN17QAbstractItemView14keyboardSearchERK7QString(void);
extern QSize _ZNK17QAbstractItemView16sizeHintForIndexERK11QModelIndex(void);
extern int _ZNK17QAbstractItemView14sizeHintForRowEi(void);
extern int _ZNK17QAbstractItemView17sizeHintForColumnEi(void);
extern void _ZN17QAbstractItemView20openPersistentEditorERK11QModelIndex(void);
extern void _ZN17QAbstractItemView21closePersistentEditorERK11QModelIndex(void);
extern void _ZN17QAbstractItemView14setIndexWidgetERK11QModelIndexP7QWidget(void);
extern QWidget _ZNK17QAbstractItemView11indexWidgetERK11QModelIndex(void);
extern void _ZN17QAbstractItemView5resetEv(void);
extern void _ZN17QAbstractItemView12setRootIndexERK11QModelIndex(void);
extern void _ZN17QAbstractItemView13doItemsLayoutEv(void);
extern void _ZN17QAbstractItemView9selectAllEv(void);
extern void _ZN17QAbstractItemView4editERK11QModelIndex(void);
extern void _ZN17QAbstractItemView14clearSelectionEv(void);
extern void _ZN17QAbstractItemView15setCurrentIndexERK11QModelIndex(void);
extern void _ZN17QAbstractItemView11scrollToTopEv(void);
extern void _ZN17QAbstractItemView14scrollToBottomEv(void);
extern void _ZN17QAbstractItemView11dataChangedERK11QModelIndexS2_(void);
extern void _ZN17QAbstractItemView12rowsInsertedERK11QModelIndexii(void);
extern void _ZN17QAbstractItemView20rowsAboutToBeRemovedERK11QModelIndexii(void);
extern void _ZN17QAbstractItemView16selectionChangedERK14QItemSelectionS2_(void);
extern void _ZN17QAbstractItemView14currentChangedERK11QModelIndexS2_(void);
extern void _ZN17QAbstractItemView16updateEditorDataEv(void);
extern void _ZN17QAbstractItemView22updateEditorGeometriesEv(void);
extern void _ZN17QAbstractItemView16updateGeometriesEv(void);
extern void _ZN17QAbstractItemView23verticalScrollbarActionEi(void);
extern void _ZN17QAbstractItemView25horizontalScrollbarActionEi(void);
extern void _ZN17QAbstractItemView29verticalScrollbarValueChangedEi(void);
extern void _ZN17QAbstractItemView31horizontalScrollbarValueChangedEi(void);
extern void _ZN17QAbstractItemView11closeEditorEP7QWidgetN21QAbstractItemDelegate11EndEditHintE(void);
extern void _ZN17QAbstractItemView10commitDataEP7QWidget(void);
extern void _ZN17QAbstractItemView15editorDestroyedEP7QObject(void);
extern void _ZN17QAbstractItemView7pressedERK11QModelIndex(void);
extern void _ZN17QAbstractItemView7clickedERK11QModelIndex(void);
extern void _ZN17QAbstractItemView13doubleClickedERK11QModelIndex(void);
extern void _ZN17QAbstractItemView9activatedERK11QModelIndex(void);
extern void _ZN17QAbstractItemView7enteredERK11QModelIndex(void);
extern void _ZN17QAbstractItemView15viewportEnteredEv(void);
extern QAbstractItemView _ZN17QAbstractItemViewC2ER24QAbstractItemViewPrivateP7QWidget(void);
extern QAbstractItemView _ZN17QAbstractItemViewC1ER24QAbstractItemViewPrivateP7QWidget(void);
extern void _ZN17QAbstractItemView25setHorizontalStepsPerItemEi(void);
extern int _ZNK17QAbstractItemView22horizontalStepsPerItemEv(void);
extern void _ZN17QAbstractItemView23setVerticalStepsPerItemEi(void);
extern int _ZNK17QAbstractItemView20verticalStepsPerItemEv(void);
extern QModelIndexList _ZNK17QAbstractItemView15selectedIndexesEv(void);
extern bool _ZN17QAbstractItemView4editERK11QModelIndexNS_11EditTriggerEP6QEvent(void);
extern N19QItemSelectionModel14SelectionFlagsE _ZNK17QAbstractItemView16selectionCommandERK11QModelIndexPK6QEvent(void);
extern void _ZN17QAbstractItemView9startDragE6QFlagsIN2Qt10DropActionEE(void);
extern QStyleOptionViewItem _ZNK17QAbstractItemView11viewOptionsEv(void);
extern enum N17QAbstractItemView5StateE _ZNK17QAbstractItemView5stateEv(void);
extern void _ZN17QAbstractItemView8setStateENS_5StateE(void);
extern void _ZN17QAbstractItemView26scheduleDelayedItemsLayoutEv(void);
extern void _ZN17QAbstractItemView25executeDelayedItemsLayoutEv(void);
extern void _ZN17QAbstractItemView14setDirtyRegionERK7QRegion(void);
extern void _ZN17QAbstractItemView17scrollDirtyRegionEii(void);
extern QPoint _ZNK17QAbstractItemView17dirtyRegionOffsetEv(void);
extern void _ZN17QAbstractItemView15startAutoScrollEv(void);
extern void _ZN17QAbstractItemView14stopAutoScrollEv(void);
extern void _ZN17QAbstractItemView12doAutoScrollEv(void);
extern bool _ZN17QAbstractItemView5eventEP6QEvent(void);
extern bool _ZN17QAbstractItemView13viewportEventEP6QEvent(void);
extern void _ZN17QAbstractItemView15mousePressEventEP11QMouseEvent(void);
extern void _ZN17QAbstractItemView14mouseMoveEventEP11QMouseEvent(void);
extern void _ZN17QAbstractItemView17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN17QAbstractItemView21mouseDoubleClickEventEP11QMouseEvent(void);
extern void _ZN17QAbstractItemView14dragEnterEventEP15QDragEnterEvent(void);
extern void _ZN17QAbstractItemView13dragMoveEventEP14QDragMoveEvent(void);
extern void _ZN17QAbstractItemView14dragLeaveEventEP15QDragLeaveEvent(void);
extern void _ZN17QAbstractItemView9dropEventEP10QDropEvent(void);
extern void _ZN17QAbstractItemView12focusInEventEP11QFocusEvent(void);
extern void _ZN17QAbstractItemView13focusOutEventEP11QFocusEvent(void);
extern void _ZN17QAbstractItemView13keyPressEventEP9QKeyEvent(void);
extern void _ZN17QAbstractItemView11resizeEventEP12QResizeEvent(void);
extern void _ZN17QAbstractItemView10timerEventEP11QTimerEvent(void);
extern enum N17QAbstractItemView21DropIndicatorPositionE _ZNK17QAbstractItemView21dropIndicatorPositionEv(void);
// *INDENT-ON*
#endif
