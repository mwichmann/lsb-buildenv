#ifndef _QTCORE_QSIZE_H_
#define _QTCORE_QSIZE_H_

class QSize;
// *INDENT-OFF*

class QSize
{
private:
public:
    void transpose();
    void scale(QSize const&, Qt::AspectRatioMode);
};

class QSizeF
{
private:
public:
    void transpose();
    void scale(QSizeF const&, Qt::AspectRatioMode);
};


extern QDataStream _ZlsR11QDataStreamRK5QSize(QDataStream &, const QSize &);
extern QDataStream _ZrsR11QDataStreamR5QSize(QDataStream &, QSize &);
extern QDebug _Zls6QDebugRK5QSize(_Z6QDebug, const QSize &);
extern QDataStream _ZlsR11QDataStreamRK6QSizeF(QDataStream &, QSizeF & &);
extern QDataStream _ZrsR11QDataStreamR6QSizeF(QDataStream &, QSizeF &);
extern QDebug _Zls6QDebugRK6QSizeF(_Z6QDebug, QSizeF & &);
// *INDENT-ON*
#endif
