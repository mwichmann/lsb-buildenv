#ifndef _QTGUI_QPICTURE_H_
#define _QTGUI_QPICTURE_H_

class QPictureIO;
// *INDENT-OFF*




typedef void	picture_io_handler	
;

class QPicture : public QPaintDevice
{
private:
public:
};

class QPictureIO
{
private:
public:
};


extern QPicture _ZN8QPictureC2Ei(void);
extern QPicture _ZN8QPictureC1Ei(void);
extern QPicture _ZN8QPictureC2ERKS_(void);
extern QPicture _ZN8QPictureC1ERKS_(void);
extern QPicture _ZN8QPictureD2Ev(void);
extern QPicture _ZN8QPictureD1Ev(void);
extern QPicture _ZN8QPictureD0Ev(void);
extern bool _ZNK8QPicture6isNullEv(void);
extern int _ZNK8QPicture7devTypeEv(void);
extern uint _ZNK8QPicture4sizeEv(void);
extern char _ZNK8QPicture4dataEv(void);
extern void _ZN8QPicture7setDataEPKcj(void);
extern bool _ZN8QPicture4playEP8QPainter(void);
extern bool _ZN8QPicture4loadEP9QIODevicePKc(void);
extern bool _ZN8QPicture4loadERK7QStringPKc(void);
extern bool _ZN8QPicture4saveEP9QIODevicePKc(void);
extern bool _ZN8QPicture4saveERK7QStringPKc(void);
extern QRect _ZNK8QPicture12boundingRectEv(void);
extern void _ZN8QPicture15setBoundingRectERK5QRect(void);
extern QPicture _ZN8QPictureaSERKS_(void);
extern void _ZN8QPicture6detachEv(void);
extern bool _ZNK8QPicture10isDetachedEv(void);
extern char _ZN8QPicture13pictureFormatERK7QString(void);
extern QList<QByteArray> _ZN8QPicture12inputFormatsEv(void);
extern QList<QByteArray> _ZN8QPicture13outputFormatsEv(void);
extern QStringList _ZN8QPicture15inputFormatListEv(void);
extern QStringList _ZN8QPicture16outputFormatListEv(void);
extern  _ZNK8QPicture11paintEngineEv(void);
extern QPicture _ZN8QPictureC2ER15QPicturePrivate(void);
extern QPicture _ZN8QPictureC1ER15QPicturePrivate(void);
extern int _ZNK8QPicture6metricEN12QPaintDevice17PaintDeviceMetricE(void);
extern QPictureIO _ZN10QPictureIOC2Ev(void);
extern QPictureIO _ZN10QPictureIOC1Ev(void);
extern QPictureIO _ZN10QPictureIOC2EP9QIODevicePKc(void);
extern QPictureIO _ZN10QPictureIOC1EP9QIODevicePKc(void);
extern QPictureIO _ZN10QPictureIOC2ERK7QStringPKc(void);
extern QPictureIO _ZN10QPictureIOC1ERK7QStringPKc(void);
extern QPictureIO _ZN10QPictureIOD2Ev(void);
extern QPictureIO _ZN10QPictureIOD1Ev(void);
extern QPicture _ZNK10QPictureIO7pictureEv(void);
extern int _ZNK10QPictureIO6statusEv(void);
extern char _ZNK10QPictureIO6formatEv(void);
extern QIODevice _ZNK10QPictureIO8ioDeviceEv(void);
extern QString _ZNK10QPictureIO8fileNameEv(void);
extern int _ZNK10QPictureIO7qualityEv(void);
extern QString _ZNK10QPictureIO11descriptionEv(void);
extern char _ZNK10QPictureIO10parametersEv(void);
extern float _ZNK10QPictureIO5gammaEv(void);
extern void _ZN10QPictureIO10setPictureERK8QPicture(void);
extern void _ZN10QPictureIO9setStatusEi(void);
extern void _ZN10QPictureIO9setFormatEPKc(void);
extern void _ZN10QPictureIO11setIODeviceEP9QIODevice(void);
extern void _ZN10QPictureIO11setFileNameERK7QString(void);
extern void _ZN10QPictureIO10setQualityEi(void);
extern void _ZN10QPictureIO14setDescriptionERK7QString(void);
extern void _ZN10QPictureIO13setParametersEPKc(void);
extern void _ZN10QPictureIO8setGammaEf(void);
extern bool _ZN10QPictureIO4readEv(void);
extern bool _ZN10QPictureIO5writeEv(void);
extern QByteArray _ZN10QPictureIO13pictureFormatERK7QString(void);
extern QByteArray _ZN10QPictureIO13pictureFormatEP9QIODevice(void);
extern QList<QByteArray> _ZN10QPictureIO12inputFormatsEv(void);
extern QList<QByteArray> _ZN10QPictureIO13outputFormatsEv(void);
extern void _ZN10QPictureIO15defineIOHandlerEPKcS1_S1_PFvPS_ES4_(void);
extern QDataStream _ZlsR11QDataStreamRK8QPicture(void);
extern QDataStream _ZrsR11QDataStreamR8QPicture(void);
// *INDENT-ON*
#endif
