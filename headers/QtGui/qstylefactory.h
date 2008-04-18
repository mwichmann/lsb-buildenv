#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSTYLEFACTORY_H_
#define _QTGUI_QSTYLEFACTORY_H_

class QStyleFactory;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QStyleFactory
{
private:
public:
    QStringList keys();
    QStyle * create(QString const&);
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
