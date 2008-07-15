#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QTRANSLATOR_H_
#define _QTCORE_QTRANSLATOR_H_

class QTranslator;
// *INDENT-OFF*

class QTranslator : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTranslator(QObject*);
     QTranslator(QObject*, char const*);
     ~QTranslator();
    QString translate(char const*, char const*, char const*) const;
    bool isEmpty() const;
    bool load(QString const&, QString const&, QString const&, QString const&);
    bool load(unsigned char const*, int);
    QString translate(char const*, char const*, char const*, int) const;
};


/* Function prototypes */

extern struct QMetaObject _ZN11QTranslator16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
