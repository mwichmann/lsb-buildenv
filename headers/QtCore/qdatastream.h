#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QDATASTREAM_H_
#define _QTCORE_QDATASTREAM_H_

class QDataStream;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QDataStream
{
private:
public:
     QDataStream();
     QDataStream(QIODevice*);
     QDataStream(QByteArray*, int);
     QDataStream(QByteArray*, QFlags<QIODevice::OpenModeFlag>);
     QDataStream(QByteArray const&);
     ~QDataStream();
    void setDevice(QIODevice*);
    void unsetDevice();
    bool atEnd() const;
    enum _ZN11QDataStream6StatusE status() const;
    void setStatus(QDataStream::Status);
    void resetStatus();
    void setByteOrder(QDataStream::ByteOrder);
    QDataStream & operator>>(signed char&);
    QDataStream & operator>>(short&);
    QDataStream & operator>>(int&);
    QDataStream & operator>>(long long&);
    QDataStream & operator>>(bool&);
    QDataStream & operator>>(float&);
    QDataStream & operator>>(double&);
    QDataStream & operator>>(char*&);
    QDataStream & operator<<(signed char);
    QDataStream & operator<<(short);
    QDataStream & operator<<(int);
    QDataStream & operator<<(long long);
    QDataStream & operator<<(bool);
    QDataStream & operator<<(float);
    QDataStream & operator<<(double);
    QDataStream & operator<<(char const*);
    QDataStream & readBytes(char*&, unsigned int&);
    int readRawData(char*, int);
    QDataStream & writeBytes(char const*, unsigned int);
    int writeRawData(char const*, int);
    int skipRawData(int);
};

enum Version	
{
Qt_1_0 = 1,	
Qt_2_0 = 2,	
Qt_2_1 = 3,	
Qt_3_0 = 4,	
Qt_3_1 = 5,	
Qt_3_3 = 6,	
Qt_4_0 = 7,	
Qt_4_1 = 7
}
;

enum ByteOrder	
{
BigEndian = 0,	
LittleEndian = 1
}
;

enum Status	
{
Ok = 0,	
ReadPastEnd = 1,	
ReadCorruptData = 2
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 32
extern  _ZlsR11QDataStreamRK11QSizePolicy(QDataStream &, const QSizePolicy &);
extern  _ZlsR11QDataStreamRK13QStandardItem(QDataStream &);
extern  _ZlsR11QDataStreamRK5QIcon(QDataStream &);
extern  _ZrsR11QDataStreamR11QSizePolicy(QDataStream &, QSizePolicy &);
extern  _ZrsR11QDataStreamR13QStandardItem(QDataStream &);
extern  _ZrsR11QDataStreamR5QIcon(QDataStream &);
#endif /* __LSB_VERSION__ >= 3.2 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
