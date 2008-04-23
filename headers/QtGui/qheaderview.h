#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QHEADERVIEW_H_
#define _QTGUI_QHEADERVIEW_H_

class QHeaderView;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QHeaderView : public QAbstractItemView
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QHeaderView(Qt::Orientation, QWidget*);
     ~QHeaderView();
    void setModel(QAbstractItemModel*);
    enum _ZN2Qt11OrientationE orientation() const;
    int offset() const;
    int length() const;
    QSize sizeHint() const;
    int sectionSizeHint(int) const;
    int visualIndexAt(int) const;
    int logicalIndexAt(int) const;
    int sectionSize(int) const;
    int sectionPosition(int) const;
    int sectionViewportPosition(int) const;
    void moveSection(int, int);
    void resizeSection(int, int);
    void resizeSections(QHeaderView::ResizeMode);
    bool isSectionHidden(int) const;
    void setSectionHidden(int, bool);
    int hiddenSectionCount() const;
    int count() const;
    int visualIndex(int) const;
    int logicalIndex(int) const;
    void setMovable(bool);
    bool isMovable() const;
    void setClickable(bool);
    bool isClickable() const;
    void setHighlightSections(bool);
    bool highlightSections() const;
    void setResizeMode(QHeaderView::ResizeMode);
    void setResizeMode(int, QHeaderView::ResizeMode);
    enum _ZN11QHeaderView10ResizeModeE resizeMode(int) const;
    int stretchSectionCount() const;
    void setSortIndicatorShown(bool);
    bool isSortIndicatorShown() const;
    void setSortIndicator(int, Qt::SortOrder);
    int sortIndicatorSection() const;
    enum _ZN2Qt9SortOrderE sortIndicatorOrder() const;
    bool stretchLastSection() const;
    void setStretchLastSection(bool);
    int defaultSectionSize() const;
    void setDefaultSectionSize(int);
     defaultAlignment() const;
    void setDefaultAlignment(QFlags<Qt::AlignmentFlag>);
    void doItemsLayout();
    bool sectionsMoved() const;
    bool sectionsHidden() const;
    void setOffset(int);
    void headerDataChanged(Qt::Orientation, int, int);
     QHeaderView(QHeaderViewPrivate&, Qt::Orientation, QWidget*);
    void swapSections(int, int);
    void setMinimumSectionSize(int);
    void setCascadingSectionResizes(bool);
    void setOffsetToSectionPosition(int);
    int minimumSectionSize() const;
    bool cascadingSectionResizes() const;
protected:
    void sectionMoved(int, int, int);
    void sectionResized(int, int, int);
    void sectionPressed(int);
    void sectionClicked(int);
    void sectionDoubleClicked(int);
    void sectionCountChanged(int, int);
    void sectionHandleDoubleClicked(int);
    void sectionAutoResize(int, QHeaderView::ResizeMode);
    void updateSection(int);
    void resizeSections();
    void sectionsInserted(QModelIndex const&, int, int);
    void sectionsAboutToBeRemoved(QModelIndex const&, int, int);
    void initialize();
    void initializeSections();
    void initializeSections(int, int);
    void currentChanged(QModelIndex const&, QModelIndex const&);
    bool event(QEvent*);
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseDoubleClickEvent(QMouseEvent*);
    bool viewportEvent(QEvent*);
    void paintSection(QPainter*, QRect const&, int) const;
    QSize sectionSizeFromContents(int) const;
    int horizontalOffset() const;
    int verticalOffset() const;
    void updateGeometries();
    void scrollContentsBy(int, int);
    void dataChanged(QModelIndex const&, QModelIndex const&);
    void rowsInserted(QModelIndex const&, int, int);
    QRect visualRect(QModelIndex const&) const;
    void scrollTo(QModelIndex const&, QAbstractItemView::ScrollHint);
    QModelIndex indexAt(QPoint const&) const;
    bool isIndexHidden(QModelIndex const&) const;
    QModelIndex moveCursor(QAbstractItemView::CursorAction, QFlags<Qt::KeyboardModifier>);
    void setSelection(QRect const&, QFlags<QItemSelectionModel::SelectionFlag>);
    QRegion visualRegionForSelection(QItemSelection const&) const;
    void geometriesChanged();
};

enum ResizeMode	
{
Interactive = 0,	
Stretch = 1,	
Custom = 2
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QHeaderView16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
