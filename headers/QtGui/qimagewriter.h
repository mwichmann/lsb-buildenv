#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QIMAGEWRITER_H_
#define _QTGUI_QIMAGEWRITER_H_

class QImageWriter;
// *INDENT-OFF*

class QImageWriter
{
private:
public:
     QImageWriter();
     QImageWriter(QIODevice*, QByteArray const&);
     QImageWriter(QString const&, QByteArray const&);
     ~QImageWriter();
    void setFormat(QByteArray const&);
    QByteArray format() const;
    void setDevice(QIODevice*);
    QIODevice * device() const;
    void setFileName(QString const&);
    QString fileName() const;
    void setQuality(int);
    int quality() const;
    void setGamma(float);
    float gamma() const;
    void setDescription(QString const&);
    QString description() const;
    void setText(QString const&, QString const&);
    bool canWrite() const;
    bool write(QImage const&);
    enum _ZN12QImageWriter16ImageWriterErrorE error() const;
    QString errorString() const;
    QList<QByteArray> supportedImageFormats();
    bool supportsOption(QImageIOHandler::ImageOption) const;
};

enum ImageWriterError	
{
UnknownError = 0,	
DeviceError = 1,	
UnsupportedFormatError = 2
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
