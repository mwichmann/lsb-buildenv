#ifndef _QTGUI_QTEXTTABLE_H_
#define _QTGUI_QTEXTTABLE_H_

class QTextTable;
// *INDENT-OFF*



class QTextTableCell
{
private:
public:
};

class QTextTable : public QTextFrame
{
private:
public:
};


extern QTextCharFormat _ZNK14QTextTableCell6formatEv(void);
extern int _ZNK14QTextTableCell3rowEv(void);
extern int _ZNK14QTextTableCell6columnEv(void);
extern int _ZNK14QTextTableCell7rowSpanEv(void);
extern int _ZNK14QTextTableCell10columnSpanEv(void);
extern  _ZNK14QTextTableCell19firstCursorPositionEv(void);
extern  _ZNK14QTextTableCell18lastCursorPositionEv(void);
extern int _ZNK14QTextTableCell13firstPositionEv(void);
extern int _ZNK14QTextTableCell12lastPositionEv(void);
extern QTextFrame::iterator _ZNK14QTextTableCell5beginEv(void);
extern QTextFrame::iterator _ZNK14QTextTableCell3endEv(void);
extern struct QMetaObject _ZN10QTextTable16staticMetaObjectE ;
extern struct QMetaObject _ZNK10QTextTable10metaObjectEv(void);
extern void _ZN10QTextTable11qt_metacastEPKc(void);
extern int _ZN10QTextTable11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTextTable _ZN10QTextTableC2EP13QTextDocument(void);
extern QTextTable _ZN10QTextTableC1EP13QTextDocument(void);
extern QTextTable _ZN10QTextTableD2Ev(void);
extern QTextTable _ZN10QTextTableD1Ev(void);
extern QTextTable _ZN10QTextTableD0Ev(void);
extern void _ZN10QTextTable6resizeEii(void);
extern void _ZN10QTextTable10insertRowsEii(void);
extern void _ZN10QTextTable13insertColumnsEii(void);
extern void _ZN10QTextTable10removeRowsEii(void);
extern void _ZN10QTextTable13removeColumnsEii(void);
extern void _ZN10QTextTable10mergeCellsEiiii(void);
extern void _ZN10QTextTable10mergeCellsERK11QTextCursor(void);
extern void _ZN10QTextTable9splitCellEiiii(void);
extern int _ZNK10QTextTable4rowsEv(void);
extern int _ZNK10QTextTable7columnsEv(void);
extern QTextTableCell _ZNK10QTextTable6cellAtEii(void);
extern QTextTableCell _ZNK10QTextTable6cellAtEi(void);
extern QTextTableCell _ZNK10QTextTable6cellAtERK11QTextCursor(void);
extern  _ZNK10QTextTable8rowStartERK11QTextCursor(void);
extern  _ZNK10QTextTable6rowEndERK11QTextCursor(void);
// *INDENT-ON*
#endif