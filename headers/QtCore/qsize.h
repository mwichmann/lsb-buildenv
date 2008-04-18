#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QSIZE_H_
#define _QTCORE_QSIZE_H_

class QSize;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern QDebug _Zls6QDebugRK5QSize(const QSize &);
extern QDebug _Zls6QDebugRK6QSizeF(_Z6QDebug, QSizeF & &);
extern QDataStream _ZlsR11QDataStreamRK5QSize(const QSize &);
extern QDataStream _ZlsR11QDataStreamRK6QSizeF(QDataStream &, QSizeF & &);
extern QDataStream _ZrsR11QDataStreamR5QSize(QSize &);
extern QDataStream _ZrsR11QDataStreamR6QSizeF(QDataStream &, QSizeF &);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
