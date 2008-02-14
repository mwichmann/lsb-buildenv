#ifndef _QTGUI_QCURSOR_H_
#define _QTGUI_QCURSOR_H_

class QCursor;
// *INDENT-OFF*

typedef enum CursorShape	QCursorShape	
;

class QCursor
{
private:
public:
     QCursor();
     QCursor(Qt::CursorShape);
     QCursor(QBitmap const&, QBitmap const&, int, int);
     QCursor(QPixmap const&, int, int);
     QCursor(QCursor const&);
     ~QCursor();
    QCursor & operator=(QCursor const&);
    QVariant operator QVariant() const;
    enum _ZN2Qt11CursorShapeE shape() const;
    void setShape(Qt::CursorShape);
    const QBitmap * bitmap() const;
    const QBitmap * mask() const;
    QPixmap pixmap() const;
    QPoint hotSpot() const;
    QPoint pos();
    void setPos(int, int);
     handle() const;
     QCursor(unsigned long);
    int x11Screen();
};


extern QDataStream _ZlsR11QDataStreamRK7QCursor(QDataStream &, const QCursor &);
extern QDataStream _ZrsR11QDataStreamR7QCursor(QDataStream &, QCursor &);
// *INDENT-ON*
#endif
