#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSHORTCUT_H_
#define _QTGUI_QSHORTCUT_H_

class QShortcut;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QShortcut : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QShortcut(QWidget*);
     QShortcut(QKeySequence const&, QWidget*, char const*, char const*, Qt::ShortcutContext);
     ~QShortcut();
    void setKey(QKeySequence const&);
    QKeySequence key() const;
    void setEnabled(bool);
    bool isEnabled() const;
    void setContext(Qt::ShortcutContext);
    enum _ZN2Qt15ShortcutContextE context();
    void setWhatsThis(QString const&);
    QString whatsThis() const;
    int id() const;
    void setAutoRepeat(bool);
    bool autoRepeat() const;
protected:
    void activated();
    void activatedAmbiguously();
    bool event(QEvent*);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN9QShortcut16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
