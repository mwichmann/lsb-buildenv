#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTEDIT_H_
#define _QTGUI_QTEXTEDIT_H_

class QFlags < QTextEdit::AutoFormattingFlag >;
// *INDENT-OFF*

typedef class QFlags<QTextEdit::AutoFormattingFlag>QTextEdit::AutoFormatting	
;

class QTextEdit;

enum QTextEdit::LineWrapMode	
{
NoWrap = 0,	
WidgetWidth = 1,	
FixedPixelWidth = 2,	
FixedColumnWidth = 3
}
;

enum QTextEdit::AutoFormattingFlag	
{
AutoAll = -1,	
AutoNone = 0,	
AutoBulletList = 1
}
;

class QFlags<QTextEdit::AutoFormattingFlag>;

enum QTextEdit::CursorAction	
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

enum QTextEdit::KeyboardAction	
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
