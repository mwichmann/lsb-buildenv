#ifndef _QTGUI_QHEADERVIEW_H_
#define _QTGUI_QHEADERVIEW_H_

class QHeaderView;
// *INDENT-OFF*



class QHeaderView : public QAbstractItemView
{
private:
public:
};

enum ResizeMode	
{
Interactive,	
Stretch,	
Custom
}
;


extern struct QMetaObject _ZN11QHeaderView16staticMetaObjectE ;
extern struct QMetaObject _ZNK11QHeaderView10metaObjectEv(void);
extern void _ZN11QHeaderView11qt_metacastEPKc(void);
extern int _ZN11QHeaderView11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QHeaderView _ZN11QHeaderViewC2EN2Qt11OrientationEP7QWidget(void);
extern QHeaderView _ZN11QHeaderViewC1EN2Qt11OrientationEP7QWidget(void);
extern QHeaderView _ZN11QHeaderViewD2Ev(void);
extern QHeaderView _ZN11QHeaderViewD1Ev(void);
extern QHeaderView _ZN11QHeaderViewD0Ev(void);
extern void _ZN11QHeaderView8setModelEP18QAbstractItemModel(void);
extern enum N2Qt11OrientationE _ZNK11QHeaderView11orientationEv(void);
extern int _ZNK11QHeaderView6offsetEv(void);
extern int _ZNK11QHeaderView6lengthEv(void);
extern QSize _ZNK11QHeaderView8sizeHintEv(void);
extern int _ZNK11QHeaderView15sectionSizeHintEi(void);
extern int _ZNK11QHeaderView13visualIndexAtEi(void);
extern int _ZNK11QHeaderView14logicalIndexAtEi(void);
extern int _ZNK11QHeaderView11sectionSizeEi(void);
extern int _ZNK11QHeaderView15sectionPositionEi(void);
extern int _ZNK11QHeaderView23sectionViewportPositionEi(void);
extern void _ZN11QHeaderView11moveSectionEii(void);
extern void _ZN11QHeaderView13resizeSectionEii(void);
extern void _ZN11QHeaderView14resizeSectionsENS_10ResizeModeE(void);
extern bool _ZNK11QHeaderView15isSectionHiddenEi(void);
extern void _ZN11QHeaderView16setSectionHiddenEib(void);
extern int _ZNK11QHeaderView18hiddenSectionCountEv(void);
extern int _ZNK11QHeaderView5countEv(void);
extern int _ZNK11QHeaderView11visualIndexEi(void);
extern int _ZNK11QHeaderView12logicalIndexEi(void);
extern void _ZN11QHeaderView10setMovableEb(void);
extern bool _ZNK11QHeaderView9isMovableEv(void);
extern void _ZN11QHeaderView12setClickableEb(void);
extern bool _ZNK11QHeaderView11isClickableEv(void);
extern void _ZN11QHeaderView20setHighlightSectionsEb(void);
extern bool _ZNK11QHeaderView17highlightSectionsEv(void);
extern void _ZN11QHeaderView13setResizeModeENS_10ResizeModeE(void);
extern void _ZN11QHeaderView13setResizeModeEiNS_10ResizeModeE(void);
extern enum N11QHeaderView10ResizeModeE _ZNK11QHeaderView10resizeModeEi(void);
extern int _ZNK11QHeaderView19stretchSectionCountEv(void);
extern void _ZN11QHeaderView21setSortIndicatorShownEb(void);
extern bool _ZNK11QHeaderView20isSortIndicatorShownEv(void);
extern void _ZN11QHeaderView16setSortIndicatorEiN2Qt9SortOrderE(void);
extern int _ZNK11QHeaderView20sortIndicatorSectionEv(void);
extern enum N2Qt9SortOrderE _ZNK11QHeaderView18sortIndicatorOrderEv(void);
extern bool _ZNK11QHeaderView18stretchLastSectionEv(void);
extern void _ZN11QHeaderView21setStretchLastSectionEb(void);
extern int _ZNK11QHeaderView18defaultSectionSizeEv(void);
extern void _ZN11QHeaderView21setDefaultSectionSizeEi(void);
extern N2Qt9AlignmentE _ZNK11QHeaderView16defaultAlignmentEv(void);
extern void _ZN11QHeaderView19setDefaultAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void);
extern void _ZN11QHeaderView13doItemsLayoutEv(void);
extern bool _ZNK11QHeaderView13sectionsMovedEv(void);
extern bool _ZNK11QHeaderView14sectionsHiddenEv(void);
extern void _ZN11QHeaderView9setOffsetEi(void);
extern void _ZN11QHeaderView17headerDataChangedEN2Qt11OrientationEii(void);
extern void _ZN11QHeaderView12sectionMovedEiii(void);
extern void _ZN11QHeaderView14sectionResizedEiii(void);
extern void _ZN11QHeaderView14sectionPressedEi(void);
extern void _ZN11QHeaderView14sectionClickedEi(void);
extern void _ZN11QHeaderView20sectionDoubleClickedEi(void);
extern void _ZN11QHeaderView19sectionCountChangedEii(void);
extern void _ZN11QHeaderView26sectionHandleDoubleClickedEi(void);
extern void _ZN11QHeaderView17sectionAutoResizeEiNS_10ResizeModeE(void);
extern void _ZN11QHeaderView13updateSectionEi(void);
extern void _ZN11QHeaderView14resizeSectionsEv(void);
extern void _ZN11QHeaderView16sectionsInsertedERK11QModelIndexii(void);
extern void _ZN11QHeaderView24sectionsAboutToBeRemovedERK11QModelIndexii(void);
extern QHeaderView _ZN11QHeaderViewC2ER18QHeaderViewPrivateN2Qt11OrientationEP7QWidget(void);
extern QHeaderView _ZN11QHeaderViewC1ER18QHeaderViewPrivateN2Qt11OrientationEP7QWidget(void);
extern void _ZN11QHeaderView10initializeEv(void);
extern void _ZN11QHeaderView18initializeSectionsEv(void);
extern void _ZN11QHeaderView18initializeSectionsEii(void);
extern void _ZN11QHeaderView14currentChangedERK11QModelIndexS2_(void);
extern bool _ZN11QHeaderView5eventEP6QEvent(void);
extern void _ZN11QHeaderView10paintEventEP11QPaintEvent(void);
extern void _ZN11QHeaderView15mousePressEventEP11QMouseEvent(void);
extern void _ZN11QHeaderView14mouseMoveEventEP11QMouseEvent(void);
extern void _ZN11QHeaderView17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN11QHeaderView21mouseDoubleClickEventEP11QMouseEvent(void);
extern bool _ZN11QHeaderView13viewportEventEP6QEvent(void);
extern void _ZNK11QHeaderView12paintSectionEP8QPainterRK5QRecti(void);
extern QSize _ZNK11QHeaderView23sectionSizeFromContentsEi(void);
extern int _ZNK11QHeaderView16horizontalOffsetEv(void);
extern int _ZNK11QHeaderView14verticalOffsetEv(void);
extern void _ZN11QHeaderView16updateGeometriesEv(void);
extern void _ZN11QHeaderView16scrollContentsByEii(void);
extern void _ZN11QHeaderView11dataChangedERK11QModelIndexS2_(void);
extern void _ZN11QHeaderView12rowsInsertedERK11QModelIndexii(void);
extern QRect _ZNK11QHeaderView10visualRectERK11QModelIndex(void);
extern void _ZN11QHeaderView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void);
extern QModelIndex _ZNK11QHeaderView7indexAtERK6QPoint(void);
extern bool _ZNK11QHeaderView13isIndexHiddenERK11QModelIndex(void);
extern QModelIndex _ZN11QHeaderView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void);
extern void _ZN11QHeaderView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void);
extern QRegion _ZNK11QHeaderView24visualRegionForSelectionERK14QItemSelection(void);
// *INDENT-ON*
#endif
