#ifndef _QTGUI_QICONENGINE_H_
#define _QTGUI_QICONENGINE_H_

class QIconEngine;
// *INDENT-OFF*

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

// *INDENT-ON*
#endif
