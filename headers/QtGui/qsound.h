#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSOUND_H_
#define _QTGUI_QSOUND_H_

class QSound;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSound : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
    bool isAvailable();
    void play(QString const&);
     QSound(QString const&, QObject*);
     ~QSound();
    int loops() const;
    int loopsRemaining() const;
    void setLoops(int);
    QString fileName() const;
    bool isFinished() const;
    void play();
    void stop();
     QSound(QString const&, QObject*, char const*);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN6QSound16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
