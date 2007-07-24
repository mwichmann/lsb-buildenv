#ifndef _QTGUI_QEVENT_H_
#define _QTGUI_QEVENT_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qdebug.h>
#include <QtCore/qcoreevent.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N12QTabletEvent12TabletDeviceE {
	NoDevice,
	Puck,
	Stylus,
	Airbrush,
	FourDMouse,
	XFreeEraser,
	RotationStylus
    };

    enum N12QTabletEvent11PointerTypeE {
	UnknownPointer,
	Pen,
	Cursor,
	Eraser
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N11QFocusEvent6ReasonE {
	Mouse,
	Tab,
	Backtab,
	ActiveWindow,
	Popup,
	Shortcut,
	MenuBar,
	Other
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N17QContextMenuEvent6ReasonE {
	Mouse,
	Keyboard,
	Other
    };

    Unknown Type:".Class.";

    enum N17QInputMethodEvent13AttributeTypeE {
	TextFormat,
	Cursor,
	Language,
	Ruby
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N10QDropEvent6ActionE {
	Copy,
	Link,
	Move,
	Private,
	UserAction
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern Class
	_ZN11QInputEventC2EN6QEvent4TypeE6QFlagsIN2Qt16KeyboardModifierEE
	(void);
    extern Class
	_ZN11QInputEventC1EN6QEvent4TypeE6QFlagsIN2Qt16KeyboardModifierEE
	(void);
    extern Class _ZN11QInputEventD2Ev(void);
    extern Class _ZN11QInputEventD1Ev(void);
    extern Class _ZN11QInputEventD0Ev(void);
    extern Class
	_ZN11QMouseEventC2EN6QEvent4TypeERK6QPointN2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE
	(void);
    extern Class
	_ZN11QMouseEventC1EN6QEvent4TypeERK6QPointN2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE
	(void);
    extern Class
	_ZN11QMouseEventC2EN6QEvent4TypeERK6QPointS4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE
	(void);
    extern Class
	_ZN11QMouseEventC1EN6QEvent4TypeERK6QPointS4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE
	(void);
    extern Class _ZN11QMouseEventD2Ev(void);
    extern Class _ZN11QMouseEventD1Ev(void);
    extern Class _ZN11QMouseEventD0Ev(void);
    extern Class _ZN11QMouseEventC2EN6QEvent4TypeERK6QPointii(void);
    extern Class _ZN11QMouseEventC1EN6QEvent4TypeERK6QPointii(void);
    extern Class _ZN11QMouseEventC2EN6QEvent4TypeERK6QPointS4_ii(void);
    extern Class _ZN11QMouseEventC1EN6QEvent4TypeERK6QPointS4_ii(void);
    extern Class _ZN11QHoverEventC2EN6QEvent4TypeERK6QPointS4_(void);
    extern Class _ZN11QHoverEventC1EN6QEvent4TypeERK6QPointS4_(void);
    extern Class _ZN11QHoverEventD2Ev(void);
    extern Class _ZN11QHoverEventD1Ev(void);
    extern Class _ZN11QHoverEventD0Ev(void);
    extern Class
	_ZN11QWheelEventC2ERK6QPointi6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE
	(void);
    extern Class
	_ZN11QWheelEventC1ERK6QPointi6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE
	(void);
    extern Class
	_ZN11QWheelEventC2ERK6QPointS2_i6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE
	(void);
    extern Class
	_ZN11QWheelEventC1ERK6QPointS2_i6QFlagsIN2Qt11MouseButtonEES3_INS4_16KeyboardModifierEENS4_11OrientationE
	(void);
    extern Class _ZN11QWheelEventD2Ev(void);
    extern Class _ZN11QWheelEventD1Ev(void);
    extern Class _ZN11QWheelEventD0Ev(void);
    extern Class _ZN11QWheelEventC2ERK6QPointiiN2Qt11OrientationE(void);
    extern Class _ZN11QWheelEventC1ERK6QPointiiN2Qt11OrientationE(void);
    extern Class _ZN11QWheelEventC2ERK6QPointS2_iiN2Qt11OrientationE(void);
    extern Class _ZN11QWheelEventC1ERK6QPointS2_iiN2Qt11OrientationE(void);
    extern Class
	_ZN12QTabletEventC2EN6QEvent4TypeERK6QPointS4_RK7QPointFiidiiddi6QFlagsIN2Qt16KeyboardModifierEEx
	(void);
    extern Class
	_ZN12QTabletEventC1EN6QEvent4TypeERK6QPointS4_RK7QPointFiidiiddi6QFlagsIN2Qt16KeyboardModifierEEx
	(void);
    extern Class _ZN12QTabletEventD2Ev(void);
    extern Class _ZN12QTabletEventD1Ev(void);
    extern Class _ZN12QTabletEventD0Ev(void);
    extern Class
	_ZN9QKeyEventC2EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEERK7QStringbt
	(void);
    extern Class
	_ZN9QKeyEventC1EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEERK7QStringbt
	(void);
    extern Class _ZN9QKeyEventD2Ev(void);
    extern Class _ZN9QKeyEventD1Ev(void);
    extern Class _ZN9QKeyEventD0Ev(void);
    extern N2Qt17KeyboardModifiersE _ZNK9QKeyEvent9modifiersEv(void);
    extern Class _ZN11QFocusEventC2EN6QEvent4TypeEN2Qt11FocusReasonE(void);
    extern Class _ZN11QFocusEventC1EN6QEvent4TypeEN2Qt11FocusReasonE(void);
    extern Class _ZN11QFocusEventD2Ev(void);
    extern Class _ZN11QFocusEventD1Ev(void);
    extern Class _ZN11QFocusEventD0Ev(void);
    extern enum N2Qt11FocusReasonE _ZN11QFocusEvent6reasonEv(void);
    extern Class _ZN11QPaintEventC2ERK7QRegion(void);
    extern Class _ZN11QPaintEventC1ERK7QRegion(void);
    extern Class _ZN11QPaintEventC2ERK5QRect(void);
    extern Class _ZN11QPaintEventC1ERK5QRect(void);
    extern Class _ZN11QPaintEventD2Ev(void);
    extern Class _ZN11QPaintEventD1Ev(void);
    extern Class _ZN11QPaintEventD0Ev(void);
    extern Class _ZN11QPaintEventC2ERK7QRegionRK5QRect(void);
    extern Class _ZN11QPaintEventC1ERK7QRegionRK5QRect(void);
    extern Class _ZN10QMoveEventC2ERK6QPointS2_(void);
    extern Class _ZN10QMoveEventC1ERK6QPointS2_(void);
    extern Class _ZN10QMoveEventD2Ev(void);
    extern Class _ZN10QMoveEventD1Ev(void);
    extern Class _ZN10QMoveEventD0Ev(void);
    extern Class _ZN12QResizeEventC2ERK5QSizeS2_(void);
    extern Class _ZN12QResizeEventC1ERK5QSizeS2_(void);
    extern Class _ZN12QResizeEventD2Ev(void);
    extern Class _ZN12QResizeEventD1Ev(void);
    extern Class _ZN12QResizeEventD0Ev(void);
    extern Class _ZN11QCloseEventC2Ev(void);
    extern Class _ZN11QCloseEventC1Ev(void);
    extern Class _ZN11QCloseEventD2Ev(void);
    extern Class _ZN11QCloseEventD1Ev(void);
    extern Class _ZN11QCloseEventD0Ev(void);
    extern Class _ZN14QIconDragEventC2Ev(void);
    extern Class _ZN14QIconDragEventC1Ev(void);
    extern Class _ZN14QIconDragEventD2Ev(void);
    extern Class _ZN14QIconDragEventD1Ev(void);
    extern Class _ZN14QIconDragEventD0Ev(void);
    extern Class _ZN10QShowEventC2Ev(void);
    extern Class _ZN10QShowEventC1Ev(void);
    extern Class _ZN10QShowEventD2Ev(void);
    extern Class _ZN10QShowEventD1Ev(void);
    extern Class _ZN10QShowEventD0Ev(void);
    extern Class _ZN10QHideEventC2Ev(void);
    extern Class _ZN10QHideEventC1Ev(void);
    extern Class _ZN10QHideEventD2Ev(void);
    extern Class _ZN10QHideEventD1Ev(void);
    extern Class _ZN10QHideEventD0Ev(void);
    extern Class _ZN17QContextMenuEventC2ENS_6ReasonERK6QPointS3_(void);
    extern Class _ZN17QContextMenuEventC1ENS_6ReasonERK6QPointS3_(void);
    extern Class _ZN17QContextMenuEventC2ENS_6ReasonERK6QPoint(void);
    extern Class _ZN17QContextMenuEventC1ENS_6ReasonERK6QPoint(void);
    extern Class _ZN17QContextMenuEventD2Ev(void);
    extern Class _ZN17QContextMenuEventD1Ev(void);
    extern Class _ZN17QContextMenuEventD0Ev(void);
    extern Class _ZN17QContextMenuEventC2ENS_6ReasonERK6QPointS3_i(void);
    extern Class _ZN17QContextMenuEventC1ENS_6ReasonERK6QPointS3_i(void);
    extern Class _ZN17QContextMenuEventC2ENS_6ReasonERK6QPointi(void);
    extern Class _ZN17QContextMenuEventC1ENS_6ReasonERK6QPointi(void);
    extern N2Qt11ButtonStateE _ZNK17QContextMenuEvent5stateEv(void);
    extern _ZN17QInputMethodEventD0Ev(void);
    extern _ZN17QInputMethodEventD1Ev(void);
    extern Class _ZN17QInputMethodEventC2Ev(void);
    extern Class _ZN17QInputMethodEventC1Ev(void);
    extern Class
	_ZN17QInputMethodEventC2ERK7QStringRK5QListINS_9AttributeEE(void);
    extern Class
	_ZN17QInputMethodEventC1ERK7QStringRK5QListINS_9AttributeEE(void);
    extern void _ZN17QInputMethodEvent15setCommitStringERK7QStringii(void);
    extern Class _ZN17QInputMethodEventC2ERKS_(void);
    extern Class _ZN17QInputMethodEventC1ERKS_(void);
    extern Class
	_ZN10QDropEventC2ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE
	(void);
    extern Class
	_ZN10QDropEventC1ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE
	(void);
    extern Class _ZN10QDropEventD2Ev(void);
    extern Class _ZN10QDropEventD1Ev(void);
    extern Class _ZN10QDropEventD0Ev(void);
    extern void _ZN10QDropEvent13setDropActionEN2Qt10DropActionE(void);
    extern _ZNK10QDropEvent6sourceEv(void);
    extern char _ZNK10QDropEvent6formatEi(void);
    extern Class _ZNK10QDropEvent11encodedDataEPKc(void);
    extern bool _ZNK10QDropEvent8providesEPKc(void);
    extern enum N10QDropEvent6ActionE _ZNK10QDropEvent6actionEv(void);
    extern Class
	_ZN14QDragMoveEventC2ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE
	(void);
    extern Class
	_ZN14QDragMoveEventC1ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE
	(void);
    extern Class _ZN14QDragMoveEventD2Ev(void);
    extern Class _ZN14QDragMoveEventD1Ev(void);
    extern Class _ZN14QDragMoveEventD0Ev(void);
    extern Class
	_ZN15QDragEnterEventC2ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEE
	(void);
    extern Class
	_ZN15QDragEnterEventC1ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEE
	(void);
    extern Class _ZN15QDragEnterEventD2Ev(void);
    extern Class _ZN15QDragEnterEventD1Ev(void);
    extern Class _ZN15QDragEnterEventD0Ev(void);
    extern Class _ZN18QDragResponseEventC2Eb(void);
    extern Class _ZN18QDragResponseEventC1Eb(void);
    extern Class _ZN18QDragResponseEventD2Ev(void);
    extern Class _ZN18QDragResponseEventD1Ev(void);
    extern Class _ZN18QDragResponseEventD0Ev(void);
    extern Class _ZN15QDragLeaveEventC2Ev(void);
    extern Class _ZN15QDragLeaveEventC1Ev(void);
    extern Class _ZN15QDragLeaveEventD2Ev(void);
    extern Class _ZN15QDragLeaveEventD1Ev(void);
    extern Class _ZN15QDragLeaveEventD0Ev(void);
    extern Class _ZN10QHelpEventC2EN6QEvent4TypeERK6QPointS4_(void);
    extern Class _ZN10QHelpEventC1EN6QEvent4TypeERK6QPointS4_(void);
    extern Class _ZN10QHelpEventD2Ev(void);
    extern Class _ZN10QHelpEventD1Ev(void);
    extern Class _ZN10QHelpEventD0Ev(void);
    extern Class _ZN15QStatusTipEventC2ERK7QString(void);
    extern Class _ZN15QStatusTipEventC1ERK7QString(void);
    extern Class _ZN15QStatusTipEventD2Ev(void);
    extern Class _ZN15QStatusTipEventD1Ev(void);
    extern Class _ZN15QStatusTipEventD0Ev(void);
    extern Class _ZN22QWhatsThisClickedEventC2ERK7QString(void);
    extern Class _ZN22QWhatsThisClickedEventC1ERK7QString(void);
    extern Class _ZN22QWhatsThisClickedEventD2Ev(void);
    extern Class _ZN22QWhatsThisClickedEventD1Ev(void);
    extern Class _ZN22QWhatsThisClickedEventD0Ev(void);
    extern Class _ZN12QActionEventC2EiP7QActionS1_(void);
    extern Class _ZN12QActionEventC1EiP7QActionS1_(void);
    extern Class _ZN12QActionEventD2Ev(void);
    extern Class _ZN12QActionEventD1Ev(void);
    extern Class _ZN12QActionEventD0Ev(void);
    extern Class _ZN14QFileOpenEventC2ERK7QString(void);
    extern Class _ZN14QFileOpenEventC1ERK7QString(void);
    extern Class _ZN14QFileOpenEventD2Ev(void);
    extern Class _ZN14QFileOpenEventD1Ev(void);
    extern Class _ZN14QFileOpenEventD0Ev(void);
    extern Class _ZN19QToolBarChangeEventC2Eb(void);
    extern Class _ZN19QToolBarChangeEventC1Eb(void);
    extern Class _ZN19QToolBarChangeEventD2Ev(void);
    extern Class _ZN19QToolBarChangeEventD1Ev(void);
    extern Class _ZN19QToolBarChangeEventD0Ev(void);
    extern Class _ZN14QShortcutEventC2ERK12QKeySequenceib(void);
    extern Class _ZN14QShortcutEventC1ERK12QKeySequenceib(void);
    extern Class _ZN14QShortcutEventD2Ev(void);
    extern Class _ZN14QShortcutEventD1Ev(void);
    extern Class _ZN14QShortcutEventD0Ev(void);
    extern Class _ZN15QClipboardEventC2EP13QEventPrivate(void);
    extern Class _ZN15QClipboardEventC1EP13QEventPrivate(void);
    extern Class _ZN15QClipboardEventD2Ev(void);
    extern Class _ZN15QClipboardEventD1Ev(void);
    extern Class _ZN15QClipboardEventD0Ev(void);
    extern Class
	_ZN23QWindowStateChangeEventC2E6QFlagsIN2Qt11WindowStateEE(void);
    extern Class
	_ZN23QWindowStateChangeEventC1E6QFlagsIN2Qt11WindowStateEE(void);
    extern Class
	_ZN23QWindowStateChangeEventC2E6QFlagsIN2Qt11WindowStateEEb(void);
    extern Class
	_ZN23QWindowStateChangeEventC1E6QFlagsIN2Qt11WindowStateEEb(void);
    extern Class _ZN23QWindowStateChangeEventD2Ev(void);
    extern Class _ZN23QWindowStateChangeEventD1Ev(void);
    extern Class _ZN23QWindowStateChangeEventD0Ev(void);
    extern bool _ZNK23QWindowStateChangeEvent10isOverrideEv(void);
    extern _ZN20QMenubarUpdatedEventD0Ev(void);
    extern _ZN20QMenubarUpdatedEventD1Ev(void);
    extern Class _ZN20QMenubarUpdatedEventC2EP8QMenuBar(void);
    extern Class _ZN20QMenubarUpdatedEventC1EP8QMenuBar(void);
    extern Class _Zls6QDebugPK6QEvent(void);
#ifdef __cplusplus
}
#endif
#endif
