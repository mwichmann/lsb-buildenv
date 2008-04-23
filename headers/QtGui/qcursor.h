#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCURSOR_H_
#define _QTGUI_QCURSOR_H_

class QCursor;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef enum CursorShape	QCursorShape	
;

#endif /* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31
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

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern QDataStream _ZlsR11QDataStreamRK7QCursor(QDataStream &, const QCursor &);
extern QDataStream _ZrsR11QDataStreamR7QCursor(QDataStream &, QCursor &);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
