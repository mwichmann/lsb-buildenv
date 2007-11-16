#ifndef _QTGUI_QTEXTCURSOR_H_
#define _QTGUI_QTEXTCURSOR_H_

class QTextCursor;
// *INDENT-OFF*




class QTextCursor
{
private:
public:
};

enum MoveMode	
{
MoveAnchor = 0,	
KeepAnchor = 1
}
;

enum MoveOperation	
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

enum SelectionType	
{
WordUnderCursor = 0,	
LineUnderCursor = 1,	
BlockUnderCursor = 2
}
;


extern QTextCursor _ZN11QTextCursorC2Ev(void);
extern QTextCursor _ZN11QTextCursorC1Ev(void);
extern QTextCursor _ZN11QTextCursorC2EP13QTextDocument(void);
extern QTextCursor _ZN11QTextCursorC1EP13QTextDocument(void);
extern QTextCursor _ZN11QTextCursorC2EP20QTextDocumentPrivatei(void);
extern QTextCursor _ZN11QTextCursorC1EP20QTextDocumentPrivatei(void);
extern QTextCursor _ZN11QTextCursorC2EP10QTextFrame(void);
extern QTextCursor _ZN11QTextCursorC1EP10QTextFrame(void);
extern QTextCursor _ZN11QTextCursorC2ERK10QTextBlock(void);
extern QTextCursor _ZN11QTextCursorC1ERK10QTextBlock(void);
extern QTextCursor _ZN11QTextCursorC2EP18QTextCursorPrivate(void);
extern QTextCursor _ZN11QTextCursorC1EP18QTextCursorPrivate(void);
extern QTextCursor _ZN11QTextCursorC2ERKS_(void);
extern QTextCursor _ZN11QTextCursorC1ERKS_(void);
extern QTextCursor _ZN11QTextCursoraSERKS_(void);
extern QTextCursor _ZN11QTextCursorD2Ev(void);
extern QTextCursor _ZN11QTextCursorD1Ev(void);
extern bool _ZNK11QTextCursor6isNullEv(void);
extern void _ZN11QTextCursor11setPositionEiNS_8MoveModeE(void);
extern int _ZNK11QTextCursor8positionEv(void);
extern int _ZNK11QTextCursor6anchorEv(void);
extern void _ZN11QTextCursor10insertTextERK7QString(void);
extern void _ZN11QTextCursor10insertTextERK7QStringRK15QTextCharFormat(void);
extern bool _ZN11QTextCursor12movePositionENS_13MoveOperationENS_8MoveModeEi(void);
extern void _ZN11QTextCursor10deleteCharEv(void);
extern void _ZN11QTextCursor18deletePreviousCharEv(void);
extern void _ZN11QTextCursor6selectENS_13SelectionTypeE(void);
extern bool _ZNK11QTextCursor12hasSelectionEv(void);
extern bool _ZNK11QTextCursor19hasComplexSelectionEv(void);
extern void _ZN11QTextCursor18removeSelectedTextEv(void);
extern void _ZN11QTextCursor14clearSelectionEv(void);
extern int _ZNK11QTextCursor14selectionStartEv(void);
extern int _ZNK11QTextCursor12selectionEndEv(void);
extern QString _ZNK11QTextCursor12selectedTextEv(void);
extern QTextDocumentFragment _ZNK11QTextCursor9selectionEv(void);
extern void _ZNK11QTextCursor18selectedTableCellsEPiS0_S0_S0_(void);
extern QTextBlock _ZNK11QTextCursor5blockEv(void);
extern QTextCharFormat _ZNK11QTextCursor10charFormatEv(void);
extern void _ZN11QTextCursor13setCharFormatERK15QTextCharFormat(void);
extern void _ZN11QTextCursor15mergeCharFormatERK15QTextCharFormat(void);
extern QTextBlockFormat _ZNK11QTextCursor11blockFormatEv(void);
extern void _ZN11QTextCursor14setBlockFormatERK16QTextBlockFormat(void);
extern void _ZN11QTextCursor16mergeBlockFormatERK16QTextBlockFormat(void);
extern QTextCharFormat _ZNK11QTextCursor15blockCharFormatEv(void);
extern void _ZN11QTextCursor18setBlockCharFormatERK15QTextCharFormat(void);
extern void _ZN11QTextCursor20mergeBlockCharFormatERK15QTextCharFormat(void);
extern bool _ZNK11QTextCursor12atBlockStartEv(void);
extern bool _ZNK11QTextCursor10atBlockEndEv(void);
extern bool _ZNK11QTextCursor7atStartEv(void);
extern bool _ZNK11QTextCursor5atEndEv(void);
extern void _ZN11QTextCursor11insertBlockEv(void);
extern void _ZN11QTextCursor11insertBlockERK16QTextBlockFormat(void);
extern void _ZN11QTextCursor11insertBlockERK16QTextBlockFormatRK15QTextCharFormat(void);
extern QTextList _ZN11QTextCursor10insertListERK15QTextListFormat(void);
extern QTextList _ZN11QTextCursor10insertListEN15QTextListFormat5StyleE(void);
extern QTextList _ZN11QTextCursor10createListERK15QTextListFormat(void);
extern QTextList _ZN11QTextCursor10createListEN15QTextListFormat5StyleE(void);
extern QTextList _ZNK11QTextCursor11currentListEv(void);
extern QTextTable _ZN11QTextCursor11insertTableEiiRK16QTextTableFormat(void);
extern QTextTable _ZN11QTextCursor11insertTableEii(void);
extern QTextTable _ZNK11QTextCursor12currentTableEv(void);
extern QTextFrame _ZN11QTextCursor11insertFrameERK16QTextFrameFormat(void);
extern QTextFrame _ZNK11QTextCursor12currentFrameEv(void);
extern void _ZN11QTextCursor14insertFragmentERK21QTextDocumentFragment(void);
extern void _ZN11QTextCursor11insertImageERK16QTextImageFormat(void);
extern void _ZN11QTextCursor11insertImageERK7QString(void);
extern void _ZN11QTextCursor14beginEditBlockEv(void);
extern void _ZN11QTextCursor21joinPreviousEditBlockEv(void);
extern void _ZN11QTextCursor12endEditBlockEv(void);
extern bool _ZNK11QTextCursorneERKS_(void);
extern bool _ZNK11QTextCursorltERKS_(void);
extern bool _ZNK11QTextCursorleERKS_(void);
extern bool _ZNK11QTextCursoreqERKS_(void);
extern bool _ZNK11QTextCursorgeERKS_(void);
extern bool _ZNK11QTextCursorgtERKS_(void);
extern bool _ZNK11QTextCursor8isCopyOfERKS_(void);
// *INDENT-ON*
#endif
