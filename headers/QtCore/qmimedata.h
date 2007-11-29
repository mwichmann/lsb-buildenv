#ifndef _QTCORE_QMIMEDATA_H_
#define _QTCORE_QMIMEDATA_H_

class QMimeData;
// *INDENT-OFF*




class QMimeData : public QObject
{
private:
public:
};


extern struct QMetaObject _ZN9QMimeData16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QMimeData10metaObjectEv(void);
extern void _ZN9QMimeData11qt_metacastEPKc(void);
extern int _ZN9QMimeData11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QMimeData _ZN9QMimeDataC2Ev(void);
extern QMimeData _ZN9QMimeDataC1Ev(void);
extern  _ZN9QMimeDataD2Ev(void);
extern  _ZN9QMimeDataD1Ev(void);
extern  _ZN9QMimeDataD0Ev(void);
extern QList<QUrl> _ZNK9QMimeData4urlsEv(void);
extern void _ZN9QMimeData7setUrlsERK5QListI4QUrlE(void);
extern bool _ZNK9QMimeData7hasUrlsEv(void);
extern QString _ZNK9QMimeData4textEv(void);
extern void _ZN9QMimeData7setTextERK7QString(void);
extern bool _ZNK9QMimeData7hasTextEv(void);
extern QString _ZNK9QMimeData4htmlEv(void);
extern void _ZN9QMimeData7setHtmlERK7QString(void);
extern bool _ZNK9QMimeData7hasHtmlEv(void);
extern QVariant _ZNK9QMimeData9imageDataEv(void);
extern void _ZN9QMimeData12setImageDataERK8QVariant(void);
extern bool _ZNK9QMimeData8hasImageEv(void);
extern QVariant _ZNK9QMimeData9colorDataEv(void);
extern void _ZN9QMimeData12setColorDataERK8QVariant(void);
extern bool _ZNK9QMimeData8hasColorEv(void);
extern QByteArray _ZNK9QMimeData4dataERK7QString(void);
extern void _ZN9QMimeData7setDataERK7QStringRK10QByteArray(void);
extern bool _ZNK9QMimeData9hasFormatERK7QString(void);
extern QStringList _ZNK9QMimeData7formatsEv(void);
extern void _ZN9QMimeData5clearEv(void);
extern QVariant _ZNK9QMimeData12retrieveDataERK7QStringN8QVariant4TypeE(void);
// *INDENT-ON*
#endif
