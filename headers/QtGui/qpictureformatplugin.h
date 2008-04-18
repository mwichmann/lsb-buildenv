#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPICTUREFORMATPLUGIN_H_
#define _QTGUI_QPICTUREFORMATPLUGIN_H_

class QPictureFormatPlugin;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
struct QPictureFormatInterface	;

class QPictureFormatPlugin : public QObject, public QPictureFormatInterface
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QPictureFormatPlugin(QObject*);
     ~QPictureFormatPlugin();
    bool loadPicture(QString const&, QString const&, QPicture*);
    bool savePicture(QString const&, QString const&, QPicture const&);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN20QPictureFormatPlugin16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
