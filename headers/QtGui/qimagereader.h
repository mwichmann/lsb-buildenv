#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QIMAGEREADER_H_
#define _QTGUI_QIMAGEREADER_H_

class QImageReader;
// *INDENT-OFF*

class QImageReader
{
private:
public:
     QImageReader();
     QImageReader(QIODevice*, QByteArray const&);
     QImageReader(QString const&, QByteArray const&);
     ~QImageReader();
    void setFormat(QByteArray const&);
    QByteArray format() const;
    void setDevice(QIODevice*);
    QIODevice * device() const;
    void setFileName(QString const&);
    QString fileName() const;
    QSize size() const;
    QStringList textKeys() const;
    QString text(QString const&) const;
    void setClipRect(QRect const&);
    QRect clipRect() const;
    void setScaledSize(QSize const&);
    QSize scaledSize() const;
    void setScaledClipRect(QRect const&);
    QRect scaledClipRect() const;
    void setBackgroundColor(QColor const&);
    QColor backgroundColor() const;
    bool supportsAnimation() const;
    bool canRead() const;
    QImage read();
    bool jumpToNextImage();
    bool jumpToImage(int);
    int loopCount() const;
    int imageCount() const;
    int nextImageDelay() const;
    int currentImageNumber() const;
    QRect currentImageRect() const;
    enum _ZN12QImageReader16ImageReaderErrorE error() const;
    QString errorString() const;
    QByteArray imageFormat(QString const&);
    QByteArray imageFormat(QIODevice*);
    QList<QByteArray> supportedImageFormats();
    void setQuality(int);
    bool read(QImage*);
    bool supportsOption(QImageIOHandler::ImageOption) const;
    int quality() const;
};

enum ImageReaderError	
{
UnknownError = 0,	
FileNotFoundError = 1,	
DeviceError = 2,	
UnsupportedFormatError = 3,	
InvalidDataError = 4
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
