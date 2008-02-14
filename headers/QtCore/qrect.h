#ifndef _QTCORE_QRECT_H_
#define _QTCORE_QRECT_H_

class QRectF;
// *INDENT-OFF*

class QRect
{
private:
public:
    QRect normalized() const;
    void moveCenter(QPoint const&);
    QRect operator|(QRect const&) const;
    QRect operator&(QRect const&) const;
    bool contains(QPoint const&, bool) const;
    bool contains(QRect const&, bool) const;
    bool intersects(QRect const&) const;
};

class QRectF
{
private:
public:
    QRectF normalized() const;
    QRectF operator|(QRectF const&) const;
    QRectF operator&(QRectF const&) const;
    bool contains(QPointF const&) const;
    bool contains(QRectF const&) const;
    bool intersects(QRectF const&) const;
};


extern QDataStream _ZlsR11QDataStreamRK5QRect(QDataStream &, const QRect &);
extern QDataStream _ZrsR11QDataStreamR5QRect(QDataStream &, QRect &);
extern QDebug _Zls6QDebugRK5QRect(_Z6QDebug, const QRect &);
extern QDataStream _ZlsR11QDataStreamRK6QRectF(QDataStream &, const QRectF &);
extern QDataStream _ZrsR11QDataStreamR6QRectF(QDataStream &, QRectF &);
extern QDebug _Zls6QDebugRK6QRectF(_Z6QDebug, const QRectF &);
// *INDENT-ON*
#endif
