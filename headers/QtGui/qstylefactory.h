#ifndef _QTGUI_QSTYLEFACTORY_H_
#define _QTGUI_QSTYLEFACTORY_H_

class QStyleFactory;
// *INDENT-OFF*

class QStyleFactory
{
private:
public:
    QStringList keys();
    QStyle * create(QString const&);
};

// *INDENT-ON*
#endif
