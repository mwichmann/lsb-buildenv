#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QEVENT_H_
#define _QTGUI_QEVENT_H_

class QShowEvent;
// *INDENT-OFF*

class QInputEvent;

class QMouseEvent;

class QHoverEvent;

class QWheelEvent;

class QTabletEvent;

enum QTabletEvent::TabletDevice	
{
NoDevice = 0,	
Puck = 1,	
Stylus = 2,	
Airbrush = 3,	
FourDMouse = 4,	
XFreeEraser = 5,	
RotationStylus = 6
}
;

enum QTabletEvent::PointerType	
{
UnknownPointer = 0,	
Pen = 1,	
Cursor = 2,	
Eraser = 3
}
;

class QKeyEvent;

class QFocusEvent;

enum QFocusEvent::Reason	
{
Mouse = 0,	
Tab = 1,	
Backtab = 2,	
ActiveWindow = 3,	
Popup = 4,	
Shortcut = 5,	
MenuBar = 6,	
Other = 7
}
;

class QPaintEvent;

class QMoveEvent;

class QResizeEvent;

class QCloseEvent;

class QIconDragEvent;

class QShowEvent;

class QHideEvent;

class QContextMenuEvent;

enum QContextMenuEvent::Reason	
{
Mouse = 0,	
Keyboard = 1,	
Other = 2
}
;

class QInputMethodEvent;

enum QInputMethodEvent::AttributeType	
{
TextFormat = 0,	
Cursor = 1,	
Language = 2,	
Ruby = 3
}
;

class QInputMethodEvent::Attribute;

class QDropEvent;

enum QDropEvent::Action	
{
Copy = 0,	
Link = 1,	
Move = 2,	
Private = 3,	
UserAction = 3
}
;

class QDragMoveEvent;

class QDragEnterEvent;

class QDragResponseEvent;

class QDragLeaveEvent;

class QHelpEvent;

class QStatusTipEvent;

class QWhatsThisClickedEvent;

class QActionEvent;

class QFileOpenEvent;

class QToolBarChangeEvent;

class QShortcutEvent;

class QClipboardEvent;

class QWindowStateChangeEvent;

class QMenubarUpdatedEvent;


/* Function prototypes */

extern QDebug operator<<(QDebug, QEvent const*)(_Z6QDebug, const QEvent *);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
