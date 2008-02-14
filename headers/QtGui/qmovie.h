#ifndef _QTGUI_QMOVIE_H_
#define _QTGUI_QMOVIE_H_

class QMovie;
// *INDENT-OFF*

class QMovie : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QMovie(QObject*);
     QMovie(QIODevice*, QByteArray const&, QObject*);
     QMovie(QString const&, QByteArray const&, QObject*);
     ~QMovie();
    QList<QByteArray> supportedFormats();
    void setDevice(QIODevice*);
    QIODevice * device() const;
    void setFileName(QString const&);
    QString fileName() const;
    void setFormat(QByteArray const&);
    QByteArray format() const;
    void setBackgroundColor(QColor const&);
    QColor backgroundColor() const;
    enum _ZN6QMovie10MovieStateE state() const;
    QRect frameRect() const;
    QImage currentImage() const;
    QPixmap currentPixmap() const;
    bool isValid() const;
    bool jumpToFrame(int);
    int loopCount() const;
    int frameCount() const;
    int nextFrameDelay() const;
    int currentFrameNumber() const;
    int speed() const;
    QSize scaledSize();
    void setScaledSize(QSize const&);
    enum _ZN6QMovie9CacheModeE cacheMode();
    void setCacheMode(QMovie::CacheMode);
    void start();
    bool jumpToNextFrame();
    void setPaused(bool);
    void stop();
    void setSpeed(int);
    enum _ZN6QMovie9CacheModeE cacheMode() const;
protected:
    void started();
    void resized(QSize const&);
    void updated(QRect const&);
    void stateChanged(QMovie::MovieState);
    void error(QImageReader::ImageReaderError);
    void finished();
    void frameChanged(int);
};

enum MovieState	
{
NotRunning = 0,	
Paused = 1,	
Running = 2
}
;

enum CacheMode	
{
CacheNone = 0,	
CacheAll = 1
}
;


extern struct QMetaObject _ZN6QMovie16staticMetaObjectE ;
// *INDENT-ON*
#endif
