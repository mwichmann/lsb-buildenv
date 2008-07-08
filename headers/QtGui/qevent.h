#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QEVENT_H_
#define _QTGUI_QEVENT_H_

class QShowEvent;
// *INDENT-OFF*

class QInputEvent : public QEvent
{
private:
public:
     QInputEvent(QEvent::Type, QFlags<Qt::KeyboardModifier>);
     ~QInputEvent();
};

class QMouseEvent : public QInputEvent
{
private:
public:
     QMouseEvent(QEvent::Type, QPoint const&, Qt::MouseButton, QFlags<Qt::MouseButton>, QFlags<Qt::KeyboardModifier>);
     QMouseEvent(QEvent::Type, QPoint const&, QPoint const&, Qt::MouseButton, QFlags<Qt::MouseButton>, QFlags<Qt::KeyboardModifier>);
     ~QMouseEvent();
     QMouseEvent(QEvent::Type, QPoint const&, int, int);
     QMouseEvent(QEvent::Type, QPoint const&, QPoint const&, int, int);
};

class QHoverEvent : public QEvent
{
private:
public:
     QHoverEvent(QEvent::Type, QPoint const&, QPoint const&);
     ~QHoverEvent();
};

class QWheelEvent : public QInputEvent
{
private:
public:
     QWheelEvent(QPoint const&, int, QFlags<Qt::MouseButton>, QFlags<Qt::KeyboardModifier>, Qt::Orientation);
     QWheelEvent(QPoint const&, QPoint const&, int, QFlags<Qt::MouseButton>, QFlags<Qt::KeyboardModifier>, Qt::Orientation);
     ~QWheelEvent();
     QWheelEvent(QPoint const&, int, int, Qt::Orientation);
     QWheelEvent(QPoint const&, QPoint const&, int, int, Qt::Orientation);
};

class QTabletEvent : public QInputEvent
{
private:
public:
     QTabletEvent(QEvent::Type, QPoint const&, QPoint const&, QPointF const&, int, int, double, int, int, double, double, int, QFlags<Qt::KeyboardModifier>, long long);
     ~QTabletEvent();
};

enum TabletDevice	
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

enum PointerType	
{
UnknownPointer = 0,	
Pen = 1,	
Cursor = 2,	
Eraser = 3
}
;

class QKeyEvent : public QInputEvent
{
private:
public:
     QKeyEvent(QEvent::Type, int, QFlags<Qt::KeyboardModifier>, QString const&, bool, unsigned short);
     ~QKeyEvent();
     modifiers() const;
    QKeyEvent * createExtendedKeyEvent(QEvent::Type, int, QFlags<Qt::KeyboardModifier>, unsigned int, unsigned int, unsigned int, QString const&, bool, unsigned short);
    quint32 nativeScanCode() const;
    quint32 nativeModifiers() const;
    quint32 nativeVirtualKey() const;
    bool matches(QKeySequence::StandardKey) const;
};

class QFocusEvent : public QEvent
{
private:
public:
     QFocusEvent(QEvent::Type, Qt::FocusReason);
     ~QFocusEvent();
    enum _ZN2Qt11FocusReasonE reason();
    enum _ZN2Qt11FocusReasonE reason() const;
};

enum Reason	
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

class QPaintEvent : public QEvent
{
private:
public:
     QPaintEvent(QRegion const&);
     QPaintEvent(QRect const&);
     ~QPaintEvent();
     QPaintEvent(QRegion const&, QRect const&);
};

class QMoveEvent : public QEvent
{
private:
public:
     QMoveEvent(QPoint const&, QPoint const&);
     ~QMoveEvent();
};

class QResizeEvent : public QEvent
{
private:
public:
     QResizeEvent(QSize const&, QSize const&);
     ~QResizeEvent();
};

class QCloseEvent : public QEvent
{
private:
public:
     QCloseEvent();
     ~QCloseEvent();
};

class QIconDragEvent : public QEvent
{
private:
public:
     QIconDragEvent();
     ~QIconDragEvent();
};

class QShowEvent : public QEvent
{
private:
public:
     QShowEvent();
     ~QShowEvent();
};

class QHideEvent : public QEvent
{
private:
public:
     QHideEvent();
     ~QHideEvent();
};

class QContextMenuEvent : public QInputEvent
{
private:
public:
     QContextMenuEvent(QContextMenuEvent::Reason, QPoint const&, QPoint const&);
     QContextMenuEvent(QContextMenuEvent::Reason, QPoint const&);
     ~QContextMenuEvent();
     QContextMenuEvent(QContextMenuEvent::Reason, QPoint const&, QPoint const&, int);
     QContextMenuEvent(QContextMenuEvent::Reason, QPoint const&, int);
     state() const;
};

enum Reason	
{
Mouse = 0,	
Keyboard = 1,	
Other = 2
}
;

class QInputMethodEvent : public QEvent
{
private:
public:
     ~QInputMethodEvent();
     QInputMethodEvent();
     QInputMethodEvent(QString const&, QList<QInputMethodEvent::Attribute> const&);
    void setCommitString(QString const&, int, int);
     QInputMethodEvent(QInputMethodEvent const&);
};

enum AttributeType	
{
TextFormat = 0,	
Cursor = 1,	
Language = 2,	
Ruby = 3
}
;

class QInputMethodEvent::Attribute
{
private:
public:
};

class QDropEvent : public QEvent, public QMimeSource
{
private:
public:
     QDropEvent(QPoint const&, QFlags<Qt::DropAction>, QMimeData const*, QFlags<Qt::MouseButton>, QFlags<Qt::KeyboardModifier>, QEvent::Type);
     ~QDropEvent();
    void setDropAction(Qt::DropAction);
    QWidget * source() const;
    const char * format(int) const;
    QByteArray encodedData(char const*) const;
    bool provides(char const*) const;
    enum _ZN10QDropEvent6ActionE action() const;
};

enum Action	
{
Copy = 0,	
Link = 1,	
Move = 2,	
Private = 3,	
UserAction = 3
}
;

class QDragMoveEvent : public QDropEvent
{
private:
public:
     QDragMoveEvent(QPoint const&, QFlags<Qt::DropAction>, QMimeData const*, QFlags<Qt::MouseButton>, QFlags<Qt::KeyboardModifier>, QEvent::Type);
     ~QDragMoveEvent();
};

class QDragEnterEvent : public QDragMoveEvent
{
private:
public:
     QDragEnterEvent(QPoint const&, QFlags<Qt::DropAction>, QMimeData const*, QFlags<Qt::MouseButton>, QFlags<Qt::KeyboardModifier>);
     ~QDragEnterEvent();
};

class QDragResponseEvent : public QEvent
{
private:
public:
     QDragResponseEvent(bool);
     ~QDragResponseEvent();
};

class QDragLeaveEvent : public QEvent
{
private:
public:
     QDragLeaveEvent();
     ~QDragLeaveEvent();
};

class QHelpEvent : public QEvent
{
private:
public:
     QHelpEvent(QEvent::Type, QPoint const&, QPoint const&);
     ~QHelpEvent();
};

class QStatusTipEvent : public QEvent
{
private:
public:
     QStatusTipEvent(QString const&);
     ~QStatusTipEvent();
};

class QWhatsThisClickedEvent : public QEvent
{
private:
public:
     QWhatsThisClickedEvent(QString const&);
     ~QWhatsThisClickedEvent();
};

class QActionEvent : public QEvent
{
private:
public:
     QActionEvent(int, QAction*, QAction*);
     ~QActionEvent();
};

class QFileOpenEvent : public QEvent
{
private:
public:
     QFileOpenEvent(QString const&);
     ~QFileOpenEvent();
};

class QToolBarChangeEvent : public QEvent
{
private:
public:
     QToolBarChangeEvent(bool);
     ~QToolBarChangeEvent();
};

class QShortcutEvent : public QEvent
{
private:
public:
     QShortcutEvent(QKeySequence const&, int, bool);
     ~QShortcutEvent();
};

class QClipboardEvent : public QEvent
{
private:
public:
     ~QClipboardEvent();
};

class QWindowStateChangeEvent : public QEvent
{
private:
public:
     QWindowStateChangeEvent(QFlags<Qt::WindowState>);
     QWindowStateChangeEvent(QFlags<Qt::WindowState>, bool);
     ~QWindowStateChangeEvent();
    bool isOverride() const;
};

class QMenubarUpdatedEvent : public QEvent
{
private:
public:
     ~QMenubarUpdatedEvent();
     QMenubarUpdatedEvent(QMenuBar*);
};


/* Function prototypes */

extern QDebug _Zls6QDebugPK6QEvent(_Z6QDebug, const QEvent *);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
