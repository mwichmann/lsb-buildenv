#ifndef _QTGUI_QMOVIE_H_
#define _QTGUI_QMOVIE_H_

class QMovie;
// *INDENT-OFF*



class QMovie : public QObject
{
private:
public:
};

enum MovieState	
{
NotRunning,	
Paused,	
Running
}
;

enum CacheMode	
{
CacheNone,	
CacheAll
}
;


extern struct QMetaObject _ZN6QMovie16staticMetaObjectE ;
extern struct QMetaObject _ZNK6QMovie10metaObjectEv(void);
extern void _ZN6QMovie11qt_metacastEPKc(void);
extern int _ZN6QMovie11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QMovie _ZN6QMovieC2EP7QObject(void);
extern QMovie _ZN6QMovieC1EP7QObject(void);
extern QMovie _ZN6QMovieC2EP9QIODeviceRK10QByteArrayP7QObject(void);
extern QMovie _ZN6QMovieC1EP9QIODeviceRK10QByteArrayP7QObject(void);
extern QMovie _ZN6QMovieC2ERK7QStringRK10QByteArrayP7QObject(void);
extern QMovie _ZN6QMovieC1ERK7QStringRK10QByteArrayP7QObject(void);
extern QMovie _ZN6QMovieD2Ev(void);
extern QMovie _ZN6QMovieD1Ev(void);
extern QMovie _ZN6QMovieD0Ev(void);
extern QList<QByteArray> _ZN6QMovie16supportedFormatsEv(void);
extern void _ZN6QMovie9setDeviceEP9QIODevice(void);
extern QIODevice _ZNK6QMovie6deviceEv(void);
extern void _ZN6QMovie11setFileNameERK7QString(void);
extern QString _ZNK6QMovie8fileNameEv(void);
extern void _ZN6QMovie9setFormatERK10QByteArray(void);
extern QByteArray _ZNK6QMovie6formatEv(void);
extern void _ZN6QMovie18setBackgroundColorERK6QColor(void);
extern QColor _ZNK6QMovie15backgroundColorEv(void);
extern enum N6QMovie10MovieStateE _ZNK6QMovie5stateEv(void);
extern QRect _ZNK6QMovie9frameRectEv(void);
extern QImage _ZNK6QMovie12currentImageEv(void);
extern QPixmap _ZNK6QMovie13currentPixmapEv(void);
extern bool _ZNK6QMovie7isValidEv(void);
extern bool _ZN6QMovie11jumpToFrameEi(void);
extern int _ZNK6QMovie9loopCountEv(void);
extern int _ZNK6QMovie10frameCountEv(void);
extern int _ZNK6QMovie14nextFrameDelayEv(void);
extern int _ZNK6QMovie18currentFrameNumberEv(void);
extern int _ZNK6QMovie5speedEv(void);
extern QSize _ZN6QMovie10scaledSizeEv(void);
extern void _ZN6QMovie13setScaledSizeERK5QSize(void);
extern enum N6QMovie9CacheModeE _ZN6QMovie9cacheModeEv(void);
extern void _ZN6QMovie12setCacheModeENS_9CacheModeE(void);
extern void _ZN6QMovie7startedEv(void);
extern void _ZN6QMovie7resizedERK5QSize(void);
extern void _ZN6QMovie7updatedERK5QRect(void);
extern void _ZN6QMovie12stateChangedENS_10MovieStateE(void);
extern void _ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(void);
extern void _ZN6QMovie8finishedEv(void);
extern void _ZN6QMovie12frameChangedEi(void);
extern void _ZN6QMovie5startEv(void);
extern bool _ZN6QMovie15jumpToNextFrameEv(void);
extern void _ZN6QMovie9setPausedEb(void);
extern void _ZN6QMovie4stopEv(void);
extern void _ZN6QMovie8setSpeedEi(void);
// *INDENT-ON*
#endif
