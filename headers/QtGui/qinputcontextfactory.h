#ifndef _QTGUI_QINPUTCONTEXTFACTORY_H_
#define _QTGUI_QINPUTCONTEXTFACTORY_H_

class QInputContextFactory;
// *INDENT-OFF*

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

// *INDENT-ON*
#endif
