#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QTEMPORARYFILE_H_
#define _QTCORE_QTEMPORARYFILE_H_

class QTemporaryFile;
// *INDENT-OFF*

class QTemporaryFile : public QFile
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTemporaryFile();
     QTemporaryFile(QString const&);
     QTemporaryFile(QObject*);
     QTemporaryFile(QString const&, QObject*);
     ~QTemporaryFile();
    bool autoRemove() const;
    void setAutoRemove(bool);
    QString fileName() const;
    QString fileTemplate() const;
    void setFileTemplate(QString const&);
    static  createLocalFile(QFile&);
     fileEngine() const;
protected:
    bool open(QFlags<QIODevice::OpenModeFlag>);
};


/* Function prototypes */

extern struct QMetaObject _ZN14QTemporaryFile16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
