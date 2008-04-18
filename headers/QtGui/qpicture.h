#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPICTURE_H_
#define _QTGUI_QPICTURE_H_

class QPictureIO;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef void	picture_io_handler	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QPicture : public QPaintDevice
{
private:
public:
     QPicture(int);
     QPicture(QPicture const&);
     ~QPicture();
    bool isNull() const;
    int devType() const;
    uint size() const;
    const char * data() const;
    void setData(char const*, unsigned int);
    bool play(QPainter*);
    bool load(QIODevice*, char const*);
    bool load(QString const&, char const*);
    bool save(QIODevice*, char const*);
    bool save(QString const&, char const*);
    QRect boundingRect() const;
    void setBoundingRect(QRect const&);
    QPicture & operator=(QPicture const&);
    void detach();
    bool isDetached() const;
    const char * pictureFormat(QString const&);
    QList<QByteArray> inputFormats();
    QList<QByteArray> outputFormats();
    QStringList inputFormatList();
    QStringList outputFormatList();
    QPaintEngine * paintEngine() const;
     QPicture(QPicturePrivate&);
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
};

class QPictureIO
{
private:
public:
     QPictureIO();
     QPictureIO(QIODevice*, char const*);
     QPictureIO(QString const&, char const*);
     ~QPictureIO();
    const QPicture & picture() const;
    int status() const;
    const char * format() const;
    QIODevice * ioDevice() const;
    QString fileName() const;
    int quality() const;
    QString description() const;
    const char * parameters() const;
    float gamma() const;
    void setPicture(QPicture const&);
    void setStatus(int);
    void setFormat(char const*);
    void setIODevice(QIODevice*);
    void setFileName(QString const&);
    void setQuality(int);
    void setDescription(QString const&);
    void setParameters(char const*);
    void setGamma(float);
    bool read();
    bool write();
    QByteArray pictureFormat(QString const&);
    QByteArray pictureFormat(QIODevice*);
    QList<QByteArray> inputFormats();
    QList<QByteArray> outputFormats();
    void defineIOHandler(char const*, char const*, char const*, void (*)(QPictureIO*), void (*)(QPictureIO*));
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern QDataStream _ZlsR11QDataStreamRK8QPicture(QDataStream &, const QPicture &);
extern QDataStream _ZrsR11QDataStreamR8QPicture(QDataStream &, QPicture &);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
