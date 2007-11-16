#ifndef _QTGUI_QIMAGEREADER_H_
#define _QTGUI_QIMAGEREADER_H_

class QImageReader;
// *INDENT-OFF*




class QImageReader
{
private:
public:
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


extern QImageReader _ZN12QImageReaderC2Ev(void);
extern QImageReader _ZN12QImageReaderC1Ev(void);
extern QImageReader _ZN12QImageReaderC2EP9QIODeviceRK10QByteArray(void);
extern QImageReader _ZN12QImageReaderC1EP9QIODeviceRK10QByteArray(void);
extern QImageReader _ZN12QImageReaderC2ERK7QStringRK10QByteArray(void);
extern QImageReader _ZN12QImageReaderC1ERK7QStringRK10QByteArray(void);
extern QImageReader _ZN12QImageReaderD2Ev(void);
extern QImageReader _ZN12QImageReaderD1Ev(void);
extern void _ZN12QImageReader9setFormatERK10QByteArray(void);
extern QByteArray _ZNK12QImageReader6formatEv(void);
extern void _ZN12QImageReader9setDeviceEP9QIODevice(void);
extern QIODevice _ZNK12QImageReader6deviceEv(void);
extern void _ZN12QImageReader11setFileNameERK7QString(void);
extern QString _ZNK12QImageReader8fileNameEv(void);
extern QSize _ZNK12QImageReader4sizeEv(void);
extern QStringList _ZNK12QImageReader8textKeysEv(void);
extern QString _ZNK12QImageReader4textERK7QString(void);
extern void _ZN12QImageReader11setClipRectERK5QRect(void);
extern QRect _ZNK12QImageReader8clipRectEv(void);
extern void _ZN12QImageReader13setScaledSizeERK5QSize(void);
extern QSize _ZNK12QImageReader10scaledSizeEv(void);
extern void _ZN12QImageReader17setScaledClipRectERK5QRect(void);
extern QRect _ZNK12QImageReader14scaledClipRectEv(void);
extern void _ZN12QImageReader18setBackgroundColorERK6QColor(void);
extern QColor _ZNK12QImageReader15backgroundColorEv(void);
extern bool _ZNK12QImageReader17supportsAnimationEv(void);
extern bool _ZNK12QImageReader7canReadEv(void);
extern QImage _ZN12QImageReader4readEv(void);
extern bool _ZN12QImageReader15jumpToNextImageEv(void);
extern bool _ZN12QImageReader11jumpToImageEi(void);
extern int _ZNK12QImageReader9loopCountEv(void);
extern int _ZNK12QImageReader10imageCountEv(void);
extern int _ZNK12QImageReader14nextImageDelayEv(void);
extern int _ZNK12QImageReader18currentImageNumberEv(void);
extern QRect _ZNK12QImageReader16currentImageRectEv(void);
extern enum N12QImageReader16ImageReaderErrorE _ZNK12QImageReader5errorEv(void);
extern QString _ZNK12QImageReader11errorStringEv(void);
extern QByteArray _ZN12QImageReader11imageFormatERK7QString(void);
extern QByteArray _ZN12QImageReader11imageFormatEP9QIODevice(void);
extern QList<QByteArray> _ZN12QImageReader21supportedImageFormatsEv(void);
// *INDENT-ON*
#endif
