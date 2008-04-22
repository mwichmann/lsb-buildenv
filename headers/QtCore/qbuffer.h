#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QBUFFER_H_
#define _QTCORE_QBUFFER_H_

class QBuffer;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QBuffer : public QIODevice
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QBuffer(QObject*);
     QBuffer(QByteArray*, QObject*);
     ~QBuffer();
    QByteArray & buffer();
    QByteArray & & buffer() const;
    void setBuffer(QByteArray*);
    void setData(QByteArray const&);
    QByteArray & & data() const;
    bool open(QFlags<QIODevice::OpenModeFlag>);
    void close();
    qint64 size() const;
    qint64 pos() const;
    bool seek(long long);
    bool atEnd() const;
    bool canReadLine() const;
protected:
    qint64 readData(char*, long long);
    qint64 writeData(char const*, long long);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN7QBuffer16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
