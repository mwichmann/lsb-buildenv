#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QIMAGEIOHANDLER_H_
#define _QTGUI_QIMAGEIOHANDLER_H_

class QFlags < QImageIOPlugin::Capability >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QImageIOPlugin::Capability>
{
private:
public:
}Capabilities	
;

#endif /* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31
class QImageIOHandler
{
private:
public:
     QImageIOHandler();
     ~QImageIOHandler();
    void setDevice(QIODevice*);
    QIODevice * device() const;
    void setFormat(QByteArray const&);
    void setFormat(QByteArray const&) const;
    QByteArray format() const;
    QByteArray name() const;
    bool write(QImage const&);
    QVariant option(QImageIOHandler::ImageOption) const;
    void setOption(QImageIOHandler::ImageOption, QVariant const&);
    bool supportsOption(QImageIOHandler::ImageOption) const;
    bool jumpToNextImage();
    bool jumpToImage(int);
    int loopCount() const;
    int imageCount() const;
    int nextImageDelay() const;
    int currentImageNumber() const;
    QRect currentImageRect() const;
     QImageIOHandler(QImageIOHandlerPrivate&);
};

enum ImageOption	
{
Size = 0,	
ClipRect = 1,	
Description = 2,	
ScaledClipRect = 3,	
ScaledSize = 4,	
CompressionRatio = 5,	
Gamma = 6,	
Quality = 7,	
Name = 8,	
SubType = 9,	
IncrementalReading = 10,	
Endianness = 11,	
Animation = 12,	
BackgroundColor = 13
}
;

struct QImageIOHandlerFactoryInterface	;

class QImageIOPlugin : public QImageIOHandlerFactoryInterface, public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QImageIOPlugin(QObject*);
     ~QImageIOPlugin();
};

enum Capability	
{
CanRead = 1,	
CanWrite = 2,	
CanReadIncremental = 4
}
;

class QFlags<QImageIOPlugin::Capability>
{
private:
public:
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN14QImageIOPlugin16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
