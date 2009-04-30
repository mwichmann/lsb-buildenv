#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTEDIT_H_
#define _QTGUI_QTEXTEDIT_H_

class QFlags < QTextEdit::AutoFormattingFlag >;
// *INDENT-OFF*

typedef class QFlags<QTextEdit::AutoFormattingFlag>QTextEdit::AutoFormatting	
;

class QTextEdit;

enum _ZN9QTextEdit12LineWrapModeE	
{
NoWrap = 0,	
WidgetWidth = 1,	
FixedPixelWidth = 2,	
FixedColumnWidth = 3
}
;

enum _ZN9QTextEdit18AutoFormattingFlagE	
{
AutoAll = -1,	
AutoNone = 0,	
AutoBulletList = 1
}
;

class QFlags<QTextEdit::AutoFormattingFlag>;

enum _ZN9QTextEdit12CursorActionE	
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

enum _ZN9QTextEdit14KeyboardActionE	
{
ActionBackspace = 0,	
ActionDelete = 1,	
ActionReturn = 2,	
ActionKill = 3,	
ActionWordBackspace = 4,	
ActionWordDelete = 5
}
;


/* Function prototypes */

extern struct QMetaObject _ZN9QTextEdit16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
