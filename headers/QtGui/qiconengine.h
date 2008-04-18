#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QICONENGINE_H_
#define _QTGUI_QICONENGINE_H_

class QIconEngine;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QIconEngine
{
private:
public:
     ~QIconEngine();
    QSize actualSize(QSize const&, QIcon::Mode, QIcon::State);
    QPixmap pixmap(QSize const&, QIcon::Mode, QIcon::State);
    void addPixmap(QPixmap const&, QIcon::Mode, QIcon::State);
    void addFile(QString const&, QSize const&, QIcon::Mode, QIcon::State);
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
