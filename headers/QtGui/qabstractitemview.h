#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QABSTRACTITEMVIEW_H_
#define _QTGUI_QABSTRACTITEMVIEW_H_

class QFlags < QAbstractItemView::EditTrigger >;
// *INDENT-OFF*

typedef class QFlags<QAbstractItemView::EditTrigger>QAbstractItemView::EditTriggers	
;

class QAbstractItemView;

enum QAbstractItemView::SelectionMode	
{
NoSelection = 0,	
SingleSelection = 1,	
MultiSelection = 2,	
ExtendedSelection = 3,	
ContiguousSelection = 4
}
;

enum QAbstractItemView::SelectionBehavior	
{
SelectItems = 0,	
SelectRows = 1,	
SelectColumns = 2
}
;

enum QAbstractItemView::ScrollHint	
{
EnsureVisible = 0,	
PositionAtTop = 1,	
PositionAtBottom = 2
}
;

enum QAbstractItemView::EditTrigger	
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

class QFlags<QAbstractItemView::EditTrigger>;

enum QAbstractItemView::CursorAction	
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

enum QAbstractItemView::State	
{
NoState = 0,	
DraggingState = 1,	
DragSelectingState = 2,	
EditingState = 3,	
ExpandingState = 4,	
CollapsingState = 5
}
;

enum QAbstractItemView::DropIndicatorPosition	
{
OnItem = 0,	
AboveItem = 1,	
BelowItem = 2,	
OnViewport = 3
}
;


/* Function prototypes */

extern struct QMetaObject _ZN17QAbstractItemView16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
