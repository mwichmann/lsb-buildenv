#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QLISTVIEW_H_
#define _QTGUI_QLISTVIEW_H_

class QListView;
// *INDENT-OFF*

class QListView;

enum QListView::Movement	
{
Static = 0,	
Free = 1,	
Snap = 2
}
;

enum QListView::Flow	
{
LeftToRight = 0,	
TopToBottom = 1
}
;

enum QListView::ResizeMode	
{
Fixed = 0,	
Adjust = 1
}
;

enum QListView::LayoutMode	
{
SinglePass = 0,	
Batched = 1
}
;

enum QListView::ViewMode	
{
ListMode = 0,	
IconMode = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN9QListView16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
