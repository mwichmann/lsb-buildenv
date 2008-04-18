#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QINPUTCONTEXTFACTORY_H_
#define _QTGUI_QINPUTCONTEXTFACTORY_H_

class QInputContextFactory;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QInputContextFactory
{
private:
public:
    QStringList keys();
    QInputContext * create(QString const&, QObject*);
    QStringList languages(QString const&);
    QString displayName(QString const&);
    QString description(QString const&);
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
