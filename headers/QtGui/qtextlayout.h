#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTLAYOUT_H_
#define _QTGUI_QTEXTLAYOUT_H_

class QTextLine;
// *INDENT-OFF*

class QTextInlineObject;

class QTextLayout;

struct QTextLayout::FormatRange	;

enum QTextLayout::CursorMode	
{
SkipCharacters = 0,	
SkipWords = 1
}
;

class QTextLine;

enum QTextLine::Edge	
{
Leading = 0,	
Trailing = 1
}
;

enum QTextLine::CursorPosition	
{
CursorBetweenCharacters = 0,	
CursorOnCharacter = 1
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
