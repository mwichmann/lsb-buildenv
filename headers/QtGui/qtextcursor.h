#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTCURSOR_H_
#define _QTGUI_QTEXTCURSOR_H_

class QTextCursor;
// *INDENT-OFF*

class QTextCursor;

enum QTextCursor::MoveMode	
{
MoveAnchor = 0,	
KeepAnchor = 1
}
;

enum QTextCursor::MoveOperation	
{
NoMove = 0,	
Start = 1,	
Up = 2,	
StartOfLine = 3,	
StartOfBlock = 4,	
StartOfWord = 5,	
PreviousBlock = 6,	
PreviousCharacter = 7,	
PreviousWord = 8,	
Left = 9,	
WordLeft = 10,	
End = 11,	
Down = 12,	
EndOfLine = 13,	
EndOfWord = 14,	
EndOfBlock = 15,	
NextBlock = 16,	
NextCharacter = 17,	
NextWord = 18,	
Right = 19,	
WordRight = 20
}
;

enum QTextCursor::SelectionType	
{
WordUnderCursor = 0,	
LineUnderCursor = 1,	
BlockUnderCursor = 2
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
