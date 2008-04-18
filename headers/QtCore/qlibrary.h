#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QLIBRARY_H_
#define _QTCORE_QLIBRARY_H_

class QLibrary;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QLibrary : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QLibrary(QObject*);
     QLibrary(QString const&, QObject*);
     QLibrary(QString const&, int, QObject*);
     ~QLibrary();
    void * resolve(char const*);
    static void * resolve(QString const&, char const*);
    static void * resolve(QString const&, int, char const*);
    bool load();
    bool unload();
    bool isLoaded() const;
    static bool isLibrary(QString const&);
    void setFileName(QString const&);
    QString fileName() const;
    void setFileNameAndVersion(QString const&, int);
    void setLoadHints(QFlags<QLibrary::LoadHint>);
    QString errorString() const;
    QFlags<QLibrary::LoadHint> loadHints() const;
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN8QLibrary16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
