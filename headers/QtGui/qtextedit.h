#ifndef _QTGUI_QTEXTEDIT_H_
#define _QTGUI_QTEXTEDIT_H_

class QFlags < QTextEdit::AutoFormattingFlag >;
// *INDENT-OFF*




typedef AutoFormatting	
;

class QTextEdit : public QAbstractScrollArea
{
private:
public:
};

enum LineWrapMode	
{
NoWrap = 0,	
WidgetWidth = 1,	
FixedPixelWidth = 2,	
FixedColumnWidth = 3
}
;

enum AutoFormattingFlag	
{
AutoAll = -1,	
AutoNone = 0,	
AutoBulletList = 1
}
;

class QFlags<QTextEdit::AutoFormattingFlag>
{
private:
public:
};

enum CursorAction	
{
MoveBackward = 0,	
MoveForward = 1,	
MoveWordBackward = 2,	
MoveWordForward = 3,	
MoveUp = 4,	
MoveDown = 5,	
MoveLineStart = 6,	
MoveLineEnd = 7,	
MoveHome = 8,	
MoveEnd = 9,	
MovePageUp = 10,	
MovePgUp = 10,	
MovePageDown = 11,	
MovePgDown = 11
}
;

enum KeyboardAction	
{
ActionBackspace = 0,	
ActionDelete = 1,	
ActionReturn = 2,	
ActionKill = 3,	
ActionWordBackspace = 4,	
ActionWordDelete = 5
}
;


extern struct QMetaObject _ZN9QTextEdit16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QTextEdit10metaObjectEv(void);
extern void _ZN9QTextEdit11qt_metacastEPKc(void);
extern int _ZN9QTextEdit11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTextEdit _ZN9QTextEditC2EP7QWidget(void);
extern QTextEdit _ZN9QTextEditC1EP7QWidget(void);
extern QTextEdit _ZN9QTextEditC2ERK7QStringP7QWidget(void);
extern QTextEdit _ZN9QTextEditC1ERK7QStringP7QWidget(void);
extern  _ZN9QTextEditD2Ev(void);
extern  _ZN9QTextEditD1Ev(void);
extern  _ZN9QTextEditD0Ev(void);
extern void _ZN9QTextEdit11setDocumentEP13QTextDocument(void);
extern QTextDocument _ZNK9QTextEdit8documentEv(void);
extern void _ZN9QTextEdit13setTextCursorERK11QTextCursor(void);
extern QTextCursor _ZNK9QTextEdit10textCursorEv(void);
extern bool _ZNK9QTextEdit10isReadOnlyEv(void);
extern void _ZN9QTextEdit11setReadOnlyEb(void);
extern qreal _ZNK9QTextEdit13fontPointSizeEv(void);
extern QString _ZNK9QTextEdit10fontFamilyEv(void);
extern int _ZNK9QTextEdit10fontWeightEv(void);
extern bool _ZNK9QTextEdit13fontUnderlineEv(void);
extern bool _ZNK9QTextEdit10fontItalicEv(void);
extern QColor _ZNK9QTextEdit9textColorEv(void);
extern QFont _ZNK9QTextEdit11currentFontEv(void);
extern N2Qt9AlignmentE _ZNK9QTextEdit9alignmentEv(void);
extern void _ZN9QTextEdit22mergeCurrentCharFormatERK15QTextCharFormat(void);
extern void _ZN9QTextEdit20setCurrentCharFormatERK15QTextCharFormat(void);
extern QTextCharFormat _ZNK9QTextEdit17currentCharFormatEv(void);
extern N9QTextEdit14AutoFormattingE _ZNK9QTextEdit14autoFormattingEv(void);
extern void _ZN9QTextEdit17setAutoFormattingE6QFlagsINS_18AutoFormattingFlagEE(void);
extern bool _ZNK9QTextEdit15tabChangesFocusEv(void);
extern void _ZN9QTextEdit18setTabChangesFocusEb(void);
extern enum N9QTextEdit12LineWrapModeE _ZNK9QTextEdit12lineWrapModeEv(void);
extern void _ZN9QTextEdit15setLineWrapModeENS_12LineWrapModeE(void);
extern int _ZNK9QTextEdit21lineWrapColumnOrWidthEv(void);
extern void _ZN9QTextEdit24setLineWrapColumnOrWidthEi(void);
extern enum N11QTextOption8WrapModeE _ZNK9QTextEdit12wordWrapModeEv(void);
extern void _ZN9QTextEdit15setWordWrapModeEN11QTextOption8WrapModeE(void);
extern bool _ZN9QTextEdit4findERK7QString6QFlagsIN13QTextDocument8FindFlagEE(void);
extern void _ZN9QTextEdit19ensureCursorVisibleEv(void);
extern QVariant _ZN9QTextEdit12loadResourceEiRK4QUrl(void);
extern QMenu _ZN9QTextEdit25createStandardContextMenuEv(void);
extern QTextCursor _ZNK9QTextEdit17cursorForPositionERK6QPoint(void);
extern QRect _ZNK9QTextEdit10cursorRectERK11QTextCursor(void);
extern QRect _ZNK9QTextEdit10cursorRectEv(void);
extern QString _ZNK9QTextEdit8anchorAtERK6QPoint(void);
extern bool _ZNK9QTextEdit13overwriteModeEv(void);
extern void _ZN9QTextEdit16setOverwriteModeEb(void);
extern int _ZNK9QTextEdit12tabStopWidthEv(void);
extern void _ZN9QTextEdit15setTabStopWidthEi(void);
extern bool _ZNK9QTextEdit14acceptRichTextEv(void);
extern void _ZN9QTextEdit17setAcceptRichTextEb(void);
extern void _ZN9QTextEdit16setFontPointSizeEd(void);
extern void _ZN9QTextEdit13setFontFamilyERK7QString(void);
extern void _ZN9QTextEdit13setFontWeightEi(void);
extern void _ZN9QTextEdit16setFontUnderlineEb(void);
extern void _ZN9QTextEdit13setFontItalicEb(void);
extern void _ZN9QTextEdit12setTextColorERK6QColor(void);
extern void _ZN9QTextEdit14setCurrentFontERK5QFont(void);
extern void _ZN9QTextEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void);
extern void _ZN9QTextEdit12setPlainTextERK7QString(void);
extern void _ZN9QTextEdit7setHtmlERK7QString(void);
extern void _ZN9QTextEdit3cutEv(void);
extern void _ZN9QTextEdit4copyEv(void);
extern void _ZN9QTextEdit5pasteEv(void);
extern void _ZN9QTextEdit5clearEv(void);
extern void _ZN9QTextEdit9selectAllEv(void);
extern void _ZN9QTextEdit15insertPlainTextERK7QString(void);
extern void _ZN9QTextEdit10insertHtmlERK7QString(void);
extern void _ZN9QTextEdit6appendERK7QString(void);
extern void _ZN9QTextEdit14scrollToAnchorERK7QString(void);
extern void _ZN9QTextEdit6zoomInEi(void);
extern void _ZN9QTextEdit7zoomOutEi(void);
extern void _ZN9QTextEdit11textChangedEv(void);
extern void _ZN9QTextEdit13undoAvailableEb(void);
extern void _ZN9QTextEdit13redoAvailableEb(void);
extern void _ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(void);
extern void _ZN9QTextEdit13copyAvailableEb(void);
extern void _ZN9QTextEdit16selectionChangedEv(void);
extern void _ZN9QTextEdit21cursorPositionChangedEv(void);
extern bool _ZN9QTextEdit5eventEP6QEvent(void);
extern void _ZN9QTextEdit10timerEventEP11QTimerEvent(void);
extern void _ZN9QTextEdit13keyPressEventEP9QKeyEvent(void);
extern void _ZN9QTextEdit11resizeEventEP12QResizeEvent(void);
extern void _ZN9QTextEdit10paintEventEP11QPaintEvent(void);
extern void _ZN9QTextEdit15mousePressEventEP11QMouseEvent(void);
extern void _ZN9QTextEdit14mouseMoveEventEP11QMouseEvent(void);
extern void _ZN9QTextEdit17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN9QTextEdit21mouseDoubleClickEventEP11QMouseEvent(void);
extern bool _ZN9QTextEdit18focusNextPrevChildEb(void);
extern void _ZN9QTextEdit16contextMenuEventEP17QContextMenuEvent(void);
extern void _ZN9QTextEdit14dragEnterEventEP15QDragEnterEvent(void);
extern void _ZN9QTextEdit14dragLeaveEventEP15QDragLeaveEvent(void);
extern void _ZN9QTextEdit13dragMoveEventEP14QDragMoveEvent(void);
extern void _ZN9QTextEdit9dropEventEP10QDropEvent(void);
extern void _ZN9QTextEdit12focusInEventEP11QFocusEvent(void);
extern void _ZN9QTextEdit13focusOutEventEP11QFocusEvent(void);
extern void _ZN9QTextEdit9showEventEP10QShowEvent(void);
extern void _ZN9QTextEdit11changeEventEP6QEvent(void);
extern void _ZN9QTextEdit10wheelEventEP11QWheelEvent(void);
extern QMimeData _ZNK9QTextEdit27createMimeDataFromSelectionEv(void);
extern bool _ZNK9QTextEdit21canInsertFromMimeDataEPK9QMimeData(void);
extern void _ZN9QTextEdit18insertFromMimeDataEPK9QMimeData(void);
extern void _ZN9QTextEdit16inputMethodEventEP17QInputMethodEvent(void);
extern QVariant _ZNK9QTextEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void);
extern QTextEdit _ZN9QTextEditC2ER16QTextEditPrivateP7QWidget(void);
extern QTextEdit _ZN9QTextEditC1ER16QTextEditPrivateP7QWidget(void);
extern void _ZN9QTextEdit16scrollContentsByEii(void);
extern void _ZN9QTextEdit18currentFontChangedERK5QFont(void);
extern void _ZN9QTextEdit19currentColorChangedERK6QColor(void);
extern QTextEdit _ZN9QTextEditC2EP7QWidgetPKc(void);
extern QTextEdit _ZN9QTextEditC1EP7QWidgetPKc(void);
extern void _ZN9QTextEdit10moveCursorENS_12CursorActionEN11QTextCursor8MoveModeE(void);
extern void _ZN9QTextEdit16doKeyboardActionENS_14KeyboardActionE(void);
extern void _ZN9QTextEdit7setTextERK7QString(void);
extern QString _ZNK9QTextEdit4textEv(void);
extern void _ZN9QTextEdit13setTextFormatEN2Qt10TextFormatE(void);
extern enum N2Qt10TextFormatE _ZNK9QTextEdit10textFormatEv(void);
// *INDENT-ON*
#endif
