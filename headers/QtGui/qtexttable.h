#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTTABLE_H_
#define _QTGUI_QTEXTTABLE_H_

class QTextTable;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QTextTableCell
{
private:
public:
    QTextCharFormat format() const;
    int row() const;
    int column() const;
    int rowSpan() const;
    int columnSpan() const;
    QTextCursor firstCursorPosition() const;
    QTextCursor lastCursorPosition() const;
    int firstPosition() const;
    int lastPosition() const;
    QTextFrame::iterator begin() const;
    QTextFrame::iterator end() const;
    void setFormat(QTextCharFormat const&);
};

class QTextTable : public QTextFrame
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTextTable(QTextDocument*);
     ~QTextTable();
    void resize(int, int);
    void insertRows(int, int);
    void insertColumns(int, int);
    void removeRows(int, int);
    void removeColumns(int, int);
    void mergeCells(int, int, int, int);
    void mergeCells(QTextCursor const&);
    void splitCell(int, int, int, int);
    int rows() const;
    int columns() const;
    QTextTableCell cellAt(int, int) const;
    QTextTableCell cellAt(int) const;
    QTextTableCell cellAt(QTextCursor const&) const;
    QTextCursor rowStart(QTextCursor const&) const;
    QTextCursor rowEnd(QTextCursor const&) const;
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN10QTextTable16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
