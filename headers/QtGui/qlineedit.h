#ifndef _QTGUI_QLINEEDIT_H_
#define _QTGUI_QLINEEDIT_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qvariant.h>
#include <QtCore/qsize.h>
#include <QtGui/qwidget.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N9QLineEdit8EchoModeE {
	Normal,
	NoEcho,
	Password
    };


    extern struct QMetaObject _ZN9QLineEdit16staticMetaObjectE;
    extern struct QMetaObject _ZNK9QLineEdit10metaObjectEv(void);
    extern void _ZN9QLineEdit11qt_metacastEPKc(void);
    extern int _ZN9QLineEdit11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN9QLineEditC2EP7QWidget(void);
    extern Class _ZN9QLineEditC1EP7QWidget(void);
    extern Class _ZN9QLineEditC2ERK7QStringP7QWidget(void);
    extern Class _ZN9QLineEditC1ERK7QStringP7QWidget(void);
    extern Class _ZN9QLineEditC2EP7QWidgetPKc(void);
    extern Class _ZN9QLineEditC1EP7QWidgetPKc(void);
    extern Class _ZN9QLineEditC2ERK7QStringP7QWidgetPKc(void);
    extern Class _ZN9QLineEditC1ERK7QStringP7QWidgetPKc(void);
    extern Class _ZN9QLineEditC2ERK7QStringS2_P7QWidgetPKc(void);
    extern Class _ZN9QLineEditC1ERK7QStringS2_P7QWidgetPKc(void);
    extern Class _ZN9QLineEditD2Ev(void);
    extern Class _ZN9QLineEditD1Ev(void);
    extern Class _ZN9QLineEditD0Ev(void);
    extern Class _ZNK9QLineEdit4textEv(void);
    extern Class _ZNK9QLineEdit11displayTextEv(void);
    extern int _ZNK9QLineEdit9maxLengthEv(void);
    extern void _ZN9QLineEdit12setMaxLengthEi(void);
    extern void _ZN9QLineEdit8setFrameEb(void);
    extern bool _ZNK9QLineEdit8hasFrameEv(void);
    extern enum N9QLineEdit8EchoModeE _ZNK9QLineEdit8echoModeEv(void);
    extern void _ZN9QLineEdit11setEchoModeENS_8EchoModeE(void);
    extern bool _ZNK9QLineEdit10isReadOnlyEv(void);
    extern void _ZN9QLineEdit11setReadOnlyEb(void);
    extern void _ZN9QLineEdit12setValidatorEPK10QValidator(void);
    extern _ZNK9QLineEdit9validatorEv(void);
    extern Class _ZNK9QLineEdit8sizeHintEv(void);
    extern Class _ZNK9QLineEdit15minimumSizeHintEv(void);
    extern int _ZNK9QLineEdit14cursorPositionEv(void);
    extern void _ZN9QLineEdit17setCursorPositionEi(void);
    extern int _ZN9QLineEdit16cursorPositionAtERK6QPoint(void);
    extern void
	_ZN9QLineEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void);
    extern N2Qt9AlignmentE _ZNK9QLineEdit9alignmentEv(void);
    extern void _ZN9QLineEdit13cursorForwardEbi(void);
    extern void _ZN9QLineEdit14cursorBackwardEbi(void);
    extern void _ZN9QLineEdit17cursorWordForwardEb(void);
    extern void _ZN9QLineEdit18cursorWordBackwardEb(void);
    extern void _ZN9QLineEdit9backspaceEv(void);
    extern void _ZN9QLineEdit3delEv(void);
    extern void _ZN9QLineEdit4homeEb(void);
    extern void _ZN9QLineEdit3endEb(void);
    extern bool _ZNK9QLineEdit10isModifiedEv(void);
    extern void _ZN9QLineEdit11setModifiedEb(void);
    extern void _ZN9QLineEdit12setSelectionEii(void);
    extern bool _ZNK9QLineEdit15hasSelectedTextEv(void);
    extern Class _ZNK9QLineEdit12selectedTextEv(void);
    extern int _ZNK9QLineEdit14selectionStartEv(void);
    extern bool _ZNK9QLineEdit15isUndoAvailableEv(void);
    extern bool _ZNK9QLineEdit15isRedoAvailableEv(void);
    extern void _ZN9QLineEdit14setDragEnabledEb(void);
    extern bool _ZNK9QLineEdit11dragEnabledEv(void);
    extern Class _ZNK9QLineEdit9inputMaskEv(void);
    extern void _ZN9QLineEdit12setInputMaskERK7QString(void);
    extern bool _ZNK9QLineEdit18hasAcceptableInputEv(void);
    extern void _ZN9QLineEdit7setTextERK7QString(void);
    extern void _ZN9QLineEdit5clearEv(void);
    extern void _ZN9QLineEdit9selectAllEv(void);
    extern void _ZN9QLineEdit4undoEv(void);
    extern void _ZN9QLineEdit4redoEv(void);
    extern void _ZN9QLineEdit3cutEv(void);
    extern void _ZNK9QLineEdit4copyEv(void);
    extern void _ZN9QLineEdit5pasteEv(void);
    extern void _ZN9QLineEdit8deselectEv(void);
    extern void _ZN9QLineEdit6insertERK7QString(void);
    extern _ZN9QLineEdit25createStandardContextMenuEv(void);
    extern void _ZN9QLineEdit11textChangedERK7QString(void);
    extern void _ZN9QLineEdit10textEditedERK7QString(void);
    extern void _ZN9QLineEdit21cursorPositionChangedEii(void);
    extern void _ZN9QLineEdit13returnPressedEv(void);
    extern void _ZN9QLineEdit15editingFinishedEv(void);
    extern void _ZN9QLineEdit16selectionChangedEv(void);
    extern void _ZN9QLineEdit15mousePressEventEP11QMouseEvent(void);
    extern void _ZN9QLineEdit14mouseMoveEventEP11QMouseEvent(void);
    extern void _ZN9QLineEdit17mouseReleaseEventEP11QMouseEvent(void);
    extern void _ZN9QLineEdit21mouseDoubleClickEventEP11QMouseEvent(void);
    extern void _ZN9QLineEdit13keyPressEventEP9QKeyEvent(void);
    extern void _ZN9QLineEdit12focusInEventEP11QFocusEvent(void);
    extern void _ZN9QLineEdit13focusOutEventEP11QFocusEvent(void);
    extern void _ZN9QLineEdit10paintEventEP11QPaintEvent(void);
    extern void _ZN9QLineEdit14dragEnterEventEP15QDragEnterEvent(void);
    extern void _ZN9QLineEdit13dragMoveEventEP14QDragMoveEvent(void);
    extern void _ZN9QLineEdit14dragLeaveEventEP15QDragLeaveEvent(void);
    extern void _ZN9QLineEdit9dropEventEP10QDropEvent(void);
    extern void _ZN9QLineEdit11changeEventEP6QEvent(void);
    extern void _ZN9QLineEdit16contextMenuEventEP17QContextMenuEvent(void);
    extern void _ZN9QLineEdit16inputMethodEventEP17QInputMethodEvent(void);
    extern Class
	_ZNK9QLineEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void);
    extern bool _ZN9QLineEdit5eventEP6QEvent(void);
    extern bool _ZN9QLineEdit14validateAndSetERK7QStringiii(void);
    extern bool _ZNK9QLineEdit6editedEv(void);
    extern void _ZN9QLineEdit9setEditedEb(void);
    extern int _ZNK9QLineEdit11characterAtEiP5QChar(void);
    extern bool _ZN9QLineEdit12getSelectionEPiS0_(void);
    extern void _ZN9QLineEdit9lostFocusEv(void);
#ifdef __cplusplus
}
#endif
#endif
